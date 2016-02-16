// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Item.h"
#include "DItem.generated.h"

/**
 * 
 */
UCLASS()
class BRENSFULLGAME_API ADItem : public AItem
{
	GENERATED_BODY()

	ADItem();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

	/* Accessor function for the pickup mesh */
	FORCEINLINE class UCapsuleComponent* GetCollision() const { return DItemCollision; }

	/* Mesh to represent item in level */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Item", meta = (AllowPrivateAccess = "true"))
	class UCapsuleComponent* DItemCollision;
	
};
