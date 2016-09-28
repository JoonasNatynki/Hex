// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "HexPlayerCharacter.generated.h"

UCLASS()
class HEX_API AHexPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AHexPlayerCharacter();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	// CUSTOM EVENT THAT IS CALLABLE AND EDITABLE IN THE EDITOR
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "PickupSystem")
		void PickupNotify(AActor * item);
	
};
