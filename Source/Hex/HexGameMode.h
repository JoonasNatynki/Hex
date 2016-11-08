// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameMode.h"
#include "HexGameMode.generated.h"

/**
 * 
 */
/*
UENUM(BlueprintType)
enum class ERoundState
{
	EOn,
	EEnded,
	EWaitingForNewRound,
	ENewRoundFreeze
};
*/

UCLASS()
class HEX_API AHexGameMode : public AGameMode
{
	GENERATED_BODY()
public:

	/*
	UFUNCTION(BlueprintPure, Category = "Round")
		ERoundState GetRoundState() const;
	UFUNCTION(BlueprintCallable, Category = "Round")
		void SetRoundState(ERoundState newState);
	
	
	ERoundState RoundState;
	*/
	
};
