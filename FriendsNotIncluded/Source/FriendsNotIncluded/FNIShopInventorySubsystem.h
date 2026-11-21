// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "FNIShopInventorySubsystem.generated.h"



UENUM(BlueprintType) enum class EFNIShopItem : uint8 //The different items that the players can purchase from the shop. BlueprintType allows us to use this enum in our Blueprints, so our C++ inventory can communicate with the shop UI
{
    // Represents an empty inventory slot
    None UMETA(DisplayName = "None"),

    // Helps the player move further around the board
    SpeedPotion UMETA(DisplayName = "Speed Potion"),

    // Protects the player from a negative coin tile
    LuckyShield UMETA(DisplayName = "Lucky Shield"),

    // Allows the player to steal coins from another player
    StickyFingers UMETA(DisplayName = "Sticky Fingers"),

    // Swaps the player's board position with another player
    ChaosMirror UMETA(DisplayName = "Chaos Mirror"),

    // Reduces another player's next dice roll
    CursedDice UMETA(DisplayName = "Cursed Dice"),

    // Doubles the next positive coin tile reward
    CoinMagnet UMETA(DisplayName = "Coin Magnet")
};

USTRUCT(BlueprintType) struct FFNIPlayerShopInventory //stores the shop items that a single player owns, each player has their own inventory up to 2 items
{
    GENERATED_BODY()

    // Stores the items currently owned by this player. the array starts empty because players begin with no items 
    UPROPERTY(BlueprintReadOnly, Category = "Shop Inventory") 
    TArray<EFNIShopItem> Items; 
};



UCLASS()
class FRIENDSNOTINCLUDED_API UFNIShopInventorySubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:

	//stores a sepearate shop inventory for every player, in32 is player slot number (0,1, 2, 3) and FFNIPlayerShopInventory is the items that player owns
    UPROPERTY(BlueprintReadOnly, Category = "Shop Inventory") 
    TMap<int32, FFNIPlayerShopInventory> PlayerInventories;

    //checks to make sure that the player has room for another shop item, echa player can only carry max 2, return true if the is space, false if inventory is full
    UFUNCTION(BlueprintPure, Category = "Shop Inventory")
    bool HasInventorySpace(int32 PlayerSlot) const;

    //Adds a shop item to the specific splyers inventory, PlayerSlot identifies what player to give the item to, NewItem is new item they are recieving, returns true if awarded succesfully, returns false if inventory is full or input is invalid
    UFUNCTION(BlueprintCallable, Category = "Shop Inventory")
    bool AddItem(int32 PlayerSlot, EFNIShopItem NewItem);

	//Removes one copy of an item from a players inventory, PlayerSlot identifies which player owns the item, ItemToRemove identifies the item they want to use, returns true if item was found and removede,returns false if the player doesnt own that item
    UFUNCTION(BlueprintCallable, Category = "Shop Inventory")
    bool RemoveItem(int32 PlayerSlot, EFNIShopItem ItemToRemove);

    //Gets all shop items owned by a specific player, PlayerSlot tells us which player inventory to look at, returns empty array if player has no items or if player slot is invalid
    UFUNCTION(BlueprintPure, Category = "Shop Inventory")
    TArray<EFNIShopItem> GetPlayerInventory(int32 PlayerSlot) const;

};

