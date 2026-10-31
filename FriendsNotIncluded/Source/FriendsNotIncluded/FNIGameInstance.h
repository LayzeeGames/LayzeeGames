// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "FNIGameInstance.generated.h"


//Event that that will tell the blueprints when sopmeone has completed their Philosopher's Stone, int32 is the player slot of the winning player
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPhilosophersStoneCompleted, int32, WinnerSlot);


/**
 * 
 */
UCLASS()
class FRIENDSNOTINCLUDED_API UFNIGameInstance : public UGameInstance
{
	GENERATED_BODY()



public:

	// Stores how many Philosopher's Stone fragments each player owns, TArray<int32> works kinda like List<int>
	UPROPERTY(BlueprintReadOnly, Category = "Player Progress")
	TArray<int32> PlayerFragments;

	//Number of fragments needed for player to win game( Win = full philosophers stome), 5 for testing will change later after game testing
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player Progress")
	int32 FragmentsRequiredToWin = 5;

	//called when our GameInstance first starts, for setting up players starting fragment,  think of init like awake in C# :)
	virtual void Init() override;

	//Awards one fragment to player in the given slot, returns false if player is invalid or has enough fragments
	UFUNCTION(BlueprintCallable, Category = "Player Progress")
    bool AwardFragment(int32 PlayerSlot);

	//Is true when player completes their philosopher's stone if not true game is still going, used to trigger end game 
	UPROPERTY(BlueprintReadOnly, Category = "Player Progress")
	bool bGameOver = false;

	//Stores the player slot of the winning player, -1 if no player has won yet
	UPROPERTY(BlueprintReadOnly, Category = "Player Progress")
	int32 WinningPlayerSlot = -1;

	//bluepritns can listen to this event when a player wins
	UPROPERTY(BlueprintAssignable, Category = "Player Progress")
	FOnPhilosophersStoneCompleted OnPhilosophersStoneCompleted;
	
};
