// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Item.h"
#include "Weapon_Item.generated.h"

/**
 * 
 */
UCLASS()
class HEX_API AWeapon_Item : public AItem
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Weapon functions")
			void FireWeapon();
	
};
