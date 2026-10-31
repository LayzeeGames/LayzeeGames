// Fill out your copyright notice in the Description page of Project Settings.



#include "FNIGameInstance.h"

void UFNIGameInstance::Init()
{
    // Run the normal GameInstance setup first
    Super::Init();

    // Create 4 player slots and give every player 0 fragments
    PlayerFragments.Init(0, 4);

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
