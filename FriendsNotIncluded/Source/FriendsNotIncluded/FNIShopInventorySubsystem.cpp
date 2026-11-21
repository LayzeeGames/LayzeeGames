// Fill out your copyright notice in the Description page of Project Settings.


#include "FNIShopInventorySubsystem.h"


bool UFNIShopInventorySubsystem::HasInventorySpace(int32 PlayerSlot) const
{
	//player slots are between 0 to 3, if slot is invalid dont allow an item to be added
    if (PlayerSlot < 0 || PlayerSlot >= 4)
    {
        return false;
    }

	// Look for the players inventory inside our TMap, find returns nullptr if the player doesnt have an entry yet
    const FFNIPlayerShopInventory* Inventory = PlayerInventories.Find(PlayerSlot);

    // If no inventory exists the player hasnt purchased anything therefore their inventory is empty
    if (Inventory == nullptr)
    {
        return true;
    }

    //Num() tells us how many items are in the array, if there are less than 2 then the player can purchase another item
    return Inventory->Items.Num() < 2;
}


bool UFNIShopInventorySubsystem::AddItem(int32 PlayerSlot, EFNIShopItem NewItem)
{
    //Dont allow an empty item to be addde to an inventory, none represents an empty slot not a shop item
    if (NewItem == EFNIShopItem::None)
    {
        return false;
    }

	//Check weather this player has room for another item, HasInventorySpace also checks whether the player slot is valid
    if (!HasInventorySpace(PlayerSlot))
    {
        return false;
    }

	//FindOrAdd looks for the players inventory in our TMap, if one doesnt exist yet it creates an empty inventory for them
    FFNIPlayerShopInventory& Inventory = PlayerInventories.FindOrAdd(PlayerSlot);

    //Add the purchased item to the player's inventory array
    Inventory.Items.Add(NewItem);

    //Return true to confirm that the item was added successfully
    return true;
}


bool UFNIShopInventorySubsystem::RemoveItem(int32 PlayerSlot, EFNIShopItem ItemToRemove)
{

    //Make sure that the player slot is valid we dont want to access an invalid player
    if (PlayerSlot < 0 || PlayerSlot >= 4)
    {
        return false;
    }

    // None represents an empty slot, not a real shop item
    if (ItemToRemove == EFNIShopItem::None)
    {
        return false;
    }

    // Find the inventory belonging to this player, Find returns nullptr if the player has no inventory yet
    FFNIPlayerShopInventory* Inventory = PlayerInventories.Find(PlayerSlot);

    // If the player has no inventory, theres nothing to remove
    if (Inventory == nullptr)
    {
        return false;
    }

    // RemoveSingle removes one matching item, it returns how many items were removed
    int32 RemovedCount = Inventory->Items.RemoveSingle(ItemToRemove);

    // Return true if an item was removed successfully
    return RemovedCount > 0;
}

TArray<EFNIShopItem> UFNIShopInventorySubsystem::GetPlayerInventory(int32 PlayerSlot) const
{

    //Make sure we are checking valid player slot, support for 4 players
    if (PlayerSlot < 0 || PlayerSlot >= 4)
    {
        // Return an empty array if the player slot is invalid
        return TArray<EFNIShopItem>();
    }

    // Find the inventory belonging to this player, Find returns nullptr if the players doesnt have an inventory yet
    const FFNIPlayerShopInventory* Inventory = PlayerInventories.Find(PlayerSlot);

    // If no inventory exists, the player hasnt purchased anything yet
    if (Inventory == nullptr)
    {
        // Return an empty array instead of trying to access missing data
        return TArray<EFNIShopItem>();
    }

	//Return a copy of the items this player currently owns, this allows Blueprints to read the inventory without changing it
    return Inventory->Items;
}





