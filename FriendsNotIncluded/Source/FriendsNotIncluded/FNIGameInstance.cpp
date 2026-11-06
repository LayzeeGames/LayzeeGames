// Fill out your copyright notice in the Description page of Project Settings.



#include "FNIGameInstance.h"

void UFNIGameInstance::Init()
{
    // Run the normal GameInstance setup first
    Super::Init();

    // Create 4 player slots and give every player 0 fragments
    PlayerFragments.Init(0, 4);


    // Create 4 player slots and give everyone 0 coins at the start of the game
    PlayerCoins.Init(0, 4);

	// Create 4 player slots for their board positions. -1 means that we havent recorded their current space yet
	PlayerBoardSpaceIDs.Init(-1, 4); 

    // A new game has started, so nobody has won yet
    bGameOver = false;
    WinningPlayerSlot = -1;

    //Clear any saved turn order
	SavedTurnOrder.Empty();

	//No player turns have been saved yet
	SavedTurnIndex = -1;
	SavedCurrentPlayerSlot = -1;

    //The board hasnt started first round yet
	SavedRoundNumber = -1;

	//Opening dice and turn information hasnt been saved yet
	bHasSavedTurnState = false;
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


bool UFNIGameInstance::SaveTurnState(const TArray<int32>& TurnOrder, int32 TurnIndex, int32 CurrentPlayerSlot, int32 RoundNumber)
{
    // Support for 2 to 4 players
    if (TurnOrder.Num() < 2 || TurnOrder.Num() > 4)
    {
        return false;
    }

    // Make sure the turn index exists in the turn order
    if (!TurnOrder.IsValidIndex(TurnIndex))
    {
        return false;
    }

    // Make sure the current player exists
    if (!PlayerFragments.IsValidIndex(CurrentPlayerSlot))
    {
        return false;
    }

    // The current player should match their position in the turn order
    if (TurnOrder[TurnIndex] != CurrentPlayerSlot)
    {
        return false;
    }

    //Reject an invalid round number
    if (RoundNumber < 0)
    {
        return false;
    }

    // Check that the turn order contains valid, unique player slots
    TArray<int32> CheckedPlayers;

    for (int32 PlayerSlot : TurnOrder)
    {
        if (!PlayerFragments.IsValidIndex(PlayerSlot) ||
            CheckedPlayers.Contains(PlayerSlot))
        {
            return false;
        }

        CheckedPlayers.Add(PlayerSlot);
    }

    // All checks passed, so save the current match information
    SavedTurnOrder = TurnOrder;
    SavedTurnIndex = TurnIndex;
    SavedCurrentPlayerSlot = CurrentPlayerSlot;
    SavedRoundNumber = RoundNumber;

    //Tell the game that a saved turn state is available
    bHasSavedTurnState = true;

    return true;
}


bool UFNIGameInstance::AddCoins(int32 PlayerSlot, int32 Amount)
{
    // Check that the player slot exists in our array
    if (!PlayerCoins.IsValidIndex(PlayerSlot))
    {
        return false;
    }

    // Only allow positive amounts of coins to be added
    if (Amount <= 0)
    {
        return false;
    }

    // Add the coins to the selected players balance
    PlayerCoins[PlayerSlot] += Amount;

    // Coins were successfully added
    return true;
}


bool UFNIGameInstance::TrySpendCoins(int32 PlayerSlot, int32 Amount)
{
    // Check that the player slot exists in our array
    if (!PlayerCoins.IsValidIndex(PlayerSlot))
    {
        return false;
    }

    // Only allow positive amounts to be spent
    if (Amount <= 0)
    {
        return false;
    }

    // Check if the player has enough coins to afford the purchase
    if (PlayerCoins[PlayerSlot] < Amount)
    {
        return false;
    }

    // Take the coins away from the selected player's balance
    PlayerCoins[PlayerSlot] -= Amount;

    // The player successfully spent their coins
    return true;
}


bool UFNIGameInstance::RemoveCoins(int32 PlayerSlot, int32 Amount)
{
    // Check that the player slot exists in our array
    if (!PlayerCoins.IsValidIndex(PlayerSlot))
    {
        return false;
    }

    // Only allow positive amounts to be removed
    if (Amount <= 0)
    {
        return false;
    }

    // Remove coins without letting the balance drop below 0
    PlayerCoins[PlayerSlot] = FMath::Max(0, PlayerCoins[PlayerSlot] - Amount);

    // Coins were successfully processed
    return true;
}

