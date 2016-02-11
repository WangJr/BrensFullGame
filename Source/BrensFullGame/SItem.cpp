// Fill out your copyright notice in the Description page of Project Settings.

#include "BrensFullGame.h"
#include "SItem.h"


ASItem::ASItem()
{
	// Create the static mesh component
	SItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Item Mesh"));
	RootComponent =SItemMesh;
}

void ASItem::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ASItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

