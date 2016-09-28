// Fill out your copyright notice in the Description page of Project Settings.

#include "Hex.h"
#include "Item.h"


// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Make root scene component as the root
	root = RootComponent;

	sprite = CreateDefaultSubobject<UBillboardComponent>(TEXT("Sprite"));

	// You need to put this in the constructor
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualRepresentation"));

}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItem::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

