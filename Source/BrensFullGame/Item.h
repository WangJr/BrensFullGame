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

	/* Accessor function for the pickup mesh */
	FORCEINLINE class UStaticMeshComponent* GetMesh() const { return ItemMesh; }

	UFUNCTION(BlueprintPure, Category = "Item")
	bool IsActive();

	UFUNCTION(BlueprintCallable, Category = "Item")
	void SetActive(bool NewItemState);

protected:

	/* True when item can be used, falsed when it is deactivated */
	bool bIsActive;

private:
	/* Mesh to represent item in level */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Item", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* ItemMesh;
	
};
