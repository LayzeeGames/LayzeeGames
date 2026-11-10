// Fill out your copyright notice in the Description page of Project Settings.


#include "FNIGameViewportClient.h"
#include "Engine/GameInstance.h"
#include "Engine/LocalPlayer.h"
#include "FNIPlayerManagementSubsystem.h"

bool UFNIGameViewportClient::InputKey(const FInputKeyEventArgs& EventArgs)
{
	// Only detect gamepad button presses
	if (EventArgs.IsGamepad() && EventArgs.Key == EKeys::Gamepad_FaceButton_Bottom && EventArgs.Event == IE_Pressed)
	{
		UE_LOG(
			LogTemp,
			Log,
			TEXT("PLAYER JOIN | Key: %s | Controller ID: %d"),
			*EventArgs.Key.GetFName().ToString(),
			EventArgs.ControllerId
		);

		UGameInstance* GameInstanceRef = GetGameInstance();

		if (!IsValid(GameInstanceRef))
		{
			return Super::InputKey(EventArgs);
		}

		// Get player management subsystem
		UFNIPlayerManagementSubsystem* PlayerSubsystem = GameInstanceRef->GetSubsystem<UFNIPlayerManagementSubsystem>();

		if (!IsValid(PlayerSubsystem))
		{
			// Allow Unreal to process the input normally
			return Super::InputKey(EventArgs);
		}

		// Check if controller has a local player
		ULocalPlayer* LocalPlayer = nullptr;

		if (EventArgs.InputDevice.IsValid())
		{
			LocalPlayer = GameInstanceRef->FindLocalPlayerFromDeviceId(EventArgs.InputDevice);
		}

		// Fall back to Legacy Controller ID
		if (!LocalPlayer && EventArgs.ControllerId != INDEX_NONE)
		{
			LocalPlayer = GameInstanceRef->FindLocalPlayerFromControllerId(EventArgs.ControllerId);
		}

		// Check if player has already joined
		if (LocalPlayer)
		{
			const int32 ExistingSlot = PlayerSubsystem->GetPlayerSlotForLocalPlayer(LocalPlayer);

			if (ExistingSlot != INDEX_NONE)
			{
				UE_LOG(
					LogTemp,
					Log,
					TEXT("Controller already joined player slot %d"),
					ExistingSlot
				);

				return Super::InputKey(EventArgs);
			}

			// Register the existing local player
			const int32 PlayerSlot = PlayerSubsystem->RegisterLocalPlayer(LocalPlayer);

			if (PlayerSlot == INDEX_NONE)
			{
				UE_LOG(
					LogTemp,
					Warning,
					TEXT("Failed to register existing local player")
				);

				return Super::InputKey(EventArgs);
			}

			UE_LOG(
				LogTemp,
				Log,
				TEXT("Existing local player joined slot %d"),
				PlayerSlot
			);

			if (PlayerSlot != INDEX_NONE)
			{
				UE_LOG(LogTemp, Warning,
					TEXT("Join Successful | LocalPlayer: %s | Address: %p | Slot: %d"),
					*GetNameSafe(LocalPlayer),
					LocalPlayer,
					PlayerSlot
				);
			}
			else
			{
				UE_LOG(LogTemp, Error,
					TEXT("Join Failed | LocalPlayer: %s"),
					*GetNameSafe(LocalPlayer)
				);
			}

		}
		else
		{
			// Create new local player if one doesn't exist
			ULocalPlayer* NewLocalPlayer = PlayerSubsystem->CreateAndRegisterLocalPlayer(EventArgs.ControllerId);

			if (!IsValid(NewLocalPlayer))
			{
				UE_LOG(
					LogTemp,
					Warning,
					TEXT("Failed to create local player for controller %d"),
					EventArgs.ControllerId
				);
			}
			else
			{
				const int32 PlayerSlot = PlayerSubsystem->GetPlayerSlotForLocalPlayer(NewLocalPlayer);

				UE_LOG(
					LogTemp,
					Log,
					TEXT("New Controller joined player slot %d"),
					PlayerSlot
				);
			}

		}

	}

	return Super::InputKey(EventArgs);
}