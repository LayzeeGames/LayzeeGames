// Fill out your copyright notice in the Description page of Project Settings.



#include "FNIGameInstance.h"

void UFNIGameInstance::Init()
{
    // Run the normal GameInstance setup first
    Super::Init();

    // Create 4 player slots and give every player 0 fragments
    PlayerFragments.Init(0, 4);

	// Create 4 player slots for their board positions. -1 means that we havent recorded their current space yet
	PlayerBoardSpaceIDs.Init(-1, 4); 

    // A new game has started, so nobody has won yet
    bGameOver = false;
    WinningPlayerSlot = -1;
}

bool UFNIGameInstance::AwardFragment(int32 PlayerSlot)
{
    // Stop awarding fragments if someone has already won the game
    if (bGameOver)
    {
        return false;
    }

    // Check that the player slot exists in our array
    if (!PlayerFragments.IsValidIndex(PlayerSlot))
    {
        return false;
    }

    // Don't give the player more fragments than they need to win
    if (PlayerFragments[PlayerSlot] >= FragmentsRequiredToWin)
    {
        return false;
    }

    // Give the selected player one Philosopher's Stone fragment
    PlayerFragments[PlayerSlot]++;

    // Check if the player has collected enough fragments to win
    if (PlayerFragments[PlayerSlot] >= FragmentsRequiredToWin)
    {
        // The player has completed their Philosopher's Stone
        bGameOver = true;
        WinningPlayerSlot = PlayerSlot;

		// tell any listening blueprints that a player has completed their Philosopher's Stone, send winning player slot with the event
		OnPhilosophersStoneCompleted.Broadcast(PlayerSlot);
    }

    // Fragment awarded successfully
    return true;
}


bool UFNIGameInstance::SetPlayerBoardSpace(int32 PlayerSlot, int32 BoardSpaceID)
{
    // Check that the player slot exists in our array
    if (!PlayerBoardSpaceIDs.IsValidIndex(PlayerSlot))
    {
        return false;
    }

    // Baord space IDs start at 1, so reject any invalid board space IDs
    if (BoardSpaceID < 1)
    {
        return false;
    }

    // Save the players current board space ID
    PlayerBoardSpaceIDs[PlayerSlot] = BoardSpaceID;

    //The players position was successfully saved
    return true;
}
