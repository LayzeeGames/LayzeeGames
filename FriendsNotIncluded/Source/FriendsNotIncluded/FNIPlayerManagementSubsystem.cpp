// Fill out your copyright notice in the Description page of Project Settings.


#include "FNIPlayerManagementSubsystem.h"

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
        if (!Slot.bIsConnected)
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
        return ExistingSlot;
    }

    // Find first available slot
    for (FNIPlayerSlotData& Slot : PlayerSlots)
    {
        if (!Slot.bIsConnected)
        {
            Slot.LocalPlayer = InLocalPlayer;
            Slot.bIsConnected = true;
            Slot.bIsReady = false;
            Slot.SelectedCharacterID = NAME_None;

            return Slot.PlayerSlot;
        }
    }

    // No slots available
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