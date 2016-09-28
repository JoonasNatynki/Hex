// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Item.generated.h"

UCLASS()
class HEX_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UPROPERTY()
		USceneComponent * root;

	// BILLBOARD SPRITE
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sprites")
		UBillboardComponent * sprite;
	// The actual model goes as a child to this
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite)
		UStaticMeshComponent * mesh;
	// Is the item picked up and in hand or inventory?
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = " Items")
		bool IsPickedUp;
	
};
