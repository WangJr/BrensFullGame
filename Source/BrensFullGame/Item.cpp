// Fill out your copyright notice in the Description page of Project Settings.

#include "BrensFullGame.h"
#include "Item.h"


// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	bIsActive = true;

	ItemType = 0;

	ItemSize = 3;

	bIsInCombatMode = false;

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

// Return active state
bool AItem::IsActive()
{
	return bIsActive;
}

// Set new active state
void AItem::SetActive(bool NewItemState)
{
	bIsActive = NewItemState;
}
