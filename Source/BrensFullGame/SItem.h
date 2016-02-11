// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Item.h"
#include "SItem.generated.h"

/**
 * 
 */
UCLASS()
class BRENSFULLGAME_API ASItem : public AItem
{
	GENERATED_BODY()
	
	ASItem();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

	/* Accessor function for the pickup mesh */
	FORCEINLINE class UStaticMeshComponent* GetMesh() const { return SItemMesh; }

	/* Mesh to represent item in level */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Item", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* SItemMesh;
	
	
};
