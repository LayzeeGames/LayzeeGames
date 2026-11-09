// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "FNIPlayerSlotData.h"
#include "FNIPlayerManagementSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class FRIENDSNOTINCLUDED_API UFNIPlayerManagementSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:

	// Maximum number of local players
	static constexpr int32 MaxPlayers = 4;

	// Call whn Subsystem is created
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	// Stores info for all player slots
	UPROPERTY(BlueprintReadOnly, Category = "Player Management")
	TArray<FNIPlayerSlotData> PlayerSlots;

	// Returns info about specific player slot
	UFUNCTION(BlueprintPure, Category = "Player Management")
	bool GetPlayerSlotData(int32 PlayerSlot, FNIPlayerSlotData& OutData) const;

	// Check if player slot is occupied
	UFUNCTION(BlueprintPure, Category = "Player Management")
	bool IsPlayerSlotConnected(int32 PlayerSlot) const;

	// Checks for any available player slots
	UFUNCTION(BlueprintPure, Category = "Player Management")
	bool HasFreePlayerSlot() const;

	// Creates Unreal Local Player and registers to available slot
	UFUNCTION(BlueprintCallable, Category = "Player Management")
	ULocalPlayer* CreateAndRegisterLocalPlayer(int32 ControllerID);

	// Registers a Unreal Local Player
	int32 RegisterLocalPlayer(ULocalPlayer* InLocalPlayer);

	// Removes a Local Player
	bool UnregisterLocalPlayer(ULocalPlayer* InLocalPlayer);

	// Finds slot for Local Player
	int32 GetPlayerSlotForLocalPlayer(const ULocalPlayer* InLocalPlayer) const;
};
