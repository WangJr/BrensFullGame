// Fill out your copyright notice in the Description page of Project Settings.

#include "BrensFullGame.h"
#include "DItem.h"

ADItem::ADItem()
{
	// Create the static mesh component
	DItemMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Item Mesh"));
	RootComponent = DItemMesh;
}

void ADItem::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ADItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

