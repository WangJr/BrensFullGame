// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Item.generated.h"

UCLASS()
class BRENSFULLGAME_API AItem : public AActor
{
	GENERATED_BODY() 
	
public:	
	// Sets default values for this actor's properties
	AItem();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UFUNCTION(BlueprintPure, Category = "Item")
	bool IsActive();

	UFUNCTION(BlueprintCallable, Category = "Item")
	void SetActive(bool NewItemState);

	
protected:

	/* True when item can be used, falsed when it is deactivated */
	bool bIsActive;

	// 8-bit variable to control the item type
	//For now: 0 - Regular Item, 1 - Melee Weapon, 2 - Rifle, more to come.
	UPROPERTY(EditAnywhere, Category = "New", BlueprintReadOnly)
	uint8 ItemType;

private:
	
	
};
