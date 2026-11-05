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

	//Stores the board space IDs that each player is currently standing on. Index 0 = Player 1, Index 1 = Player 2, etc. -1 means players board position hasnt been set yet
	UPROPERTY(BlueprintReadOnly, Category = "Board Progress")
	TArray<int32> PlayerBoardSpaceIDs;

	//Saves the board space the player is currently standing on, returns false if player slot or board space ID is invalid
	UFUNCTION(BlueprintCallable, Category = "Board Progress")
	bool SetPlayerBoardSpace(int32 PlayerSlot, int32 BoardSpaceID);

	//Saves current turn information before changing level, this allows us to continue the same match after a minigame
	UFUNCTION(BlueprintCallable, Category = "Turn Progress")
	bool SaveTurnState(const TArray<int32>& TurnOrder, int32 TurnIndex, int32 CurrentPlayerSlot, int32 RoundNumber);

	//Stores the order of players turns, {1, 0} means player 2 goes first then player 1, {0, 1} means player 1 goes first then player 2, etc
	UPROPERTY(BlueprintReadOnly, Category = "Turn Progress")
	TArray<int32> SavedTurnOrder;

	//Stores which position in the turn order that is currently taking their turn, -1 means no turn position has been saved yet
	UPROPERTY(BlueprintReadOnly, Category = "Turn Progress")
	int32 SavedTurnIndex = -1;

	//Stores the player slot of the current player taking their turn, -1 means no turn position has been saved yet
	UPROPERTY(BlueprintReadOnly, Category = "Turn Progress")
	int32 SavedCurrentPlayerSlot = -1;

	//Stores the current round during the game
	UPROPERTY(BlueprintReadOnly, Category = "Turn Progress")
	int32 SavedRoundNumber = -1;

	//True when we have saved a valid turn state, also tells us that opening rolls have been completed
	UPROPERTY(BlueprintReadOnly, Category = "Turn Progress")
	bool bHasSavedTurnState = false;

};
