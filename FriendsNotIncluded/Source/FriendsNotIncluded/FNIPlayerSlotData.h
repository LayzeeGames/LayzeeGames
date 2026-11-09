
#pragma once

#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "FNIPlayerSlotData.generated.h"

USTRUCT(BlueprintType)
struct FRIENDSNOTINCLUDED_API FNIPlayerSlotData
{
    GENERATED_BODY()

public:

    // Player slot: 0 = Player 1, 3 = Player 4
    UPROPERTY(BlueprintReadOnly, Category = "Player")
    int32 PlayerSlot = -1;

    // Check player is currently participating
    UPROPERTY(BlueprintReadOnly, Category = "Player")
    bool bIsConnected = false;

    // Check player has confirmed their selection
    UPROPERTY(BlueprintReadOnly, Category = "Player")
    bool bIsReady = false;

    // ID of the selected character
    UPROPERTY(BlueprintReadOnly, Category = "Player")
    FName SelectedCharacterID = NAME_None;

    // Unreal Local Player assigned to a slot
    UPROPERTY(BlueprintReadOnly, Category = "Player")
    TObjectPtr<ULocalPlayer> LocalPlayer = nullptr;

};