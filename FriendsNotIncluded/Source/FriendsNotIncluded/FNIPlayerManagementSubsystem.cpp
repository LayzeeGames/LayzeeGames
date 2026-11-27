// Fill out your copyright notice in the Description page of Project Settings.


#include "FNIPlayerManagementSubsystem.h"
#include "Engine/GameInstance.h"
#include "Engine/LocalPlayer.h"
#include "GameFramework/PlayerController.h"

void UFNIPlayerManagementSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);

    // Create four player slots
    PlayerSlots.SetNum(MaxPlayers);

    // Assign each slot its player ID
    for (int32 i = 0; i < MaxPlayers; i++)
    {
        PlayerSlots[i].PlayerSlot = i;
    }
}

bool UFNIPlayerManagementSubsystem::GetPlayerSlotData(
    int32 PlayerSlot,
    FNIPlayerSlotData& OutData) const
{
    if (!PlayerSlots.IsValidIndex(PlayerSlot))
    {
        return false;
    }

    OutData = PlayerSlots[PlayerSlot];

    return true;
}

bool UFNIPlayerManagementSubsystem::IsPlayerSlotConnected(int32 PlayerSlot) const
{
    if (!PlayerSlots.IsValidIndex(PlayerSlot))
    {
        return false;
    }

    return PlayerSlots[PlayerSlot].bIsConnected;
}

bool UFNIPlayerManagementSubsystem::HasFreePlayerSlot() const
{
    for (const FNIPlayerSlotData& Slot : PlayerSlots)
    {
        if (!Slot.bIsConnected && !IsValid(Slot.LocalPlayer))
        {
            return true;
        }
    }

    return false;
}

int32 UFNIPlayerManagementSubsystem::RegisterLocalPlayer(ULocalPlayer* InLocalPlayer)
{
    // Reject invalid Local Player
    if (!IsValid(InLocalPlayer))
    {
        return INDEX_NONE;
    }

    // Prevent double registering of same Local Player
    const int32 ExistingSlot = GetPlayerSlotForLocalPlayer(InLocalPlayer);

    if (ExistingSlot != INDEX_NONE)
    {
        FNIPlayerSlotData& Slot = PlayerSlots[ExistingSlot];

        //The player was prepared but hasn't joined yet
        if (!Slot.bIsConnected)
        {
            Slot.bIsConnected = true;
            Slot.bIsReady = false;
            Slot.SelectedCharacterID = NAME_None;

            UE_LOG(LogTemp, Log,
                TEXT("Prepared local player joined | Slot: %d"),
                ExistingSlot);

            OnPlayerSlotsChanged.Broadcast();
        }
        else
        {
            UE_LOG(LogTemp, Warning,
                TEXT("Player already registered | Local player: %s | Address: %p | Slot: %d"),
                *GetNameSafe(InLocalPlayer),
                InLocalPlayer,
                ExistingSlot);
        }

        return ExistingSlot;
    }

    // Find first available unreserved slot
    for (FNIPlayerSlotData& Slot : PlayerSlots)
    {
        if (!Slot.bIsConnected && !IsValid(Slot.LocalPlayer))
        {
            Slot.LocalPlayer = InLocalPlayer;
            Slot.bIsConnected = true;
            Slot.bIsReady = false;
            Slot.SelectedCharacterID = NAME_None;

            UE_LOG(LogTemp, Log,
                TEXT("New local player registered | Slot: %d"),
                Slot.PlayerSlot);

            OnPlayerSlotsChanged.Broadcast();

            return Slot.PlayerSlot;
        }
    }

    // No slots available
    UE_LOG(LogTemp, Warning, 
        TEXT("Player Registration Failed | No free slots"));

    return INDEX_NONE;
}

bool UFNIPlayerManagementSubsystem::UnregisterLocalPlayer(ULocalPlayer* InLocalPlayer)
{
    const int32 PlayerSlot = GetPlayerSlotForLocalPlayer(InLocalPlayer);

    if (PlayerSlot == INDEX_NONE)
    {
        return false;
    }

    FNIPlayerSlotData& Slot = PlayerSlots[PlayerSlot];

    Slot.LocalPlayer = nullptr;
    Slot.bIsConnected = false;
    Slot.bIsReady = false;
    Slot.SelectedCharacterID = NAME_None;

    OnPlayerSlotsChanged.Broadcast();

    return true;
}

int32 UFNIPlayerManagementSubsystem::GetPlayerSlotForLocalPlayer(const ULocalPlayer* InLocalPlayer) const
{
    if (!IsValid(InLocalPlayer))
    {
        return INDEX_NONE;
    }

    for (const FNIPlayerSlotData& Slot : PlayerSlots)
    {
        if (Slot.LocalPlayer == InLocalPlayer)
        {
            return Slot.PlayerSlot;
        }
    }

    return INDEX_NONE;
}

ULocalPlayer* UFNIPlayerManagementSubsystem::CreateAndRegisterLocalPlayer(int32 ControllerId)
{
    // Check another slot is available
    if (!HasFreePlayerSlot())
    {
        UE_LOG(LogTemp, Warning, TEXT("No free player slots available!"));
        return nullptr;
    }

    // Get Existing GameInstance
    UGameInstance* GameInstance = GetGameInstance();

    if (!IsValid(GameInstance))
    {
        return nullptr;
    }

    // Create new Unreal Local Player
    FString ErrorMessage;

    ULocalPlayer* NewLocalPlayer = GameInstance->CreateLocalPlayer(ControllerId, ErrorMessage, true);

    // Check player created successfully
    if (!IsValid(NewLocalPlayer))
    {
        UE_LOG(LogTemp, Warning, TEXT("Failed to create Local Player: %s"), *ErrorMessage);

        return nullptr;
    }

    APlayerController* NewPlayerController = NewLocalPlayer->GetPlayerController(GetWorld());

    UE_LOG(LogTemp, Warning,
        TEXT("NEW PLAYER DIAGNOSTIC | Controller ID: %d | LocalPlayer: %s | LocalPlayer Address: %p | PlayerController: %s | PlayerController Address: %p"),
        ControllerId,
        *GetNameSafe(NewLocalPlayer),
        NewLocalPlayer,
        *GetNameSafe(NewPlayerController),
        NewPlayerController
    );

    if (IsValid(NewPlayerController))
    {
        UE_LOG(LogTemp, Warning,
            TEXT("PLAYER CONTROLLER ASSOCIATION | Matches LocalPlayer: %s"),
            NewPlayerController->GetLocalPlayer() == NewLocalPlayer ? TEXT("YES") : TEXT("NO")
        );
    }

    // Register new Local Player in Subsystem
    const int32 PlayerSlot = RegisterLocalPlayer(NewLocalPlayer);

    if (PlayerSlot == INDEX_NONE)
    {
        // Remove new Local player if registration failed
        GameInstance->RemoveLocalPlayer(NewLocalPlayer);
        return nullptr;
    }

    UE_LOG(LogTemp, Log, TEXT("Player successfully joined slot!"));

    return NewLocalPlayer;
}

void UFNIPlayerManagementSubsystem::PrepareLocalPlayersForCharacterSelect()
{
    UGameInstance* GameInstanceRef = GetGameInstance();

    if (!IsValid(GameInstanceRef))
    {
        UE_LOG(LogTemp, Error,
            TEXT("PrepareLocalPlayers: GameInstance is invalid"));
        return;
    }

    //Prepare local players for controller IDs 0-3
    for (int32 ControllerID = 0; ControllerID < MaxPlayers; ControllerID++)
    {
        ULocalPlayer* LocalPlayer = GameInstanceRef->FindLocalPlayerFromControllerId(ControllerID);

        //Player 1 should already exist when the gam starts
        if (!LocalPlayer && ControllerID == 0)
        {
            LocalPlayer = GameInstanceRef->GetFirstGamePlayer();
        }

        //Create additional local players if they don't exist
        if (!LocalPlayer && ControllerID > 0)
        {
            FString ErrorMessage;

            LocalPlayer = GameInstanceRef->CreateLocalPlayer(
                ControllerID,
                ErrorMessage,
                true
            );

            if (!IsValid(LocalPlayer))
            {
                UE_LOG(LogTemp, Error,
                    TEXT("Failed to prepare local player for controller %d: %s"),
                    ControllerID,
                    *ErrorMessage);

                continue;
            }
        }

        if (!IsValid(LocalPlayer))
        {
            UE_LOG(LogTemp, Error,
                TEXT("No local player found for controller %d"),
                ControllerID);

            continue;
        }

        //Don't assign same local player twice
        const int32 ExistingSlot = GetPlayerSlotForLocalPlayer(LocalPlayer);

        if (ExistingSlot != INDEX_NONE)
        {
            UE_LOG(LogTemp, Log,
                TEXT("Controller %d already has a  reserved player slot %d"),
                ControllerID,
                ExistingSlot);

            continue;
        }

        if (!PlayerSlots.IsValidIndex(ControllerID))
        {
            continue;
        }

        FNIPlayerSlotData& Slot = PlayerSlots[ControllerID];

        //Don't overwrite slot belonging to another local player
        if (IsValid(Slot.LocalPlayer) && Slot.LocalPlayer != LocalPlayer)
        {
            UE_LOG(LogTemp, Error,
                TEXT("Cannot reserve player slot %d: slot is already assigned"),
                ControllerID);

            continue;
        }

        Slot.LocalPlayer = LocalPlayer;

        if (ControllerID == 0)
        {
            //Player 1 is already active in the main menu
            RegisterLocalPlayer(LocalPlayer);
        }
        else
        {
            //Reserve the slot but don't mark as joined yet
            Slot.bIsConnected = false;
            Slot.bIsReady = false;
            Slot.SelectedCharacterID = NAME_None;

            UE_LOG(LogTemp, Log,
                TEXT("Prepared local player for controller %d in slot %d"),
                ControllerID,
                ControllerID);
        }
    }

    OnPlayerSlotsChanged.Broadcast();
}