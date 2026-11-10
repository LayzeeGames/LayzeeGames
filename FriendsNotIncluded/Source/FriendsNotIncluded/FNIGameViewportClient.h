// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "FNIGameViewportClient.generated.h"

/**
 * 
 */
UCLASS()
class FRIENDSNOTINCLUDED_API UFNIGameViewportClient : public UGameViewportClient
{
	GENERATED_BODY()

public:

	// Detects incoming inputs
	virtual bool InputKey(const FInputKeyEventArgs& EventArgs) override;
		
};
