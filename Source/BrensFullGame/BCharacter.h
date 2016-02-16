// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "BCharacter.generated.h"

UCLASS(config=Game)
class BRENSFULLGAME_API ABCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABCharacter();

	UPROPERTY(EditAnywhere, Category = "Held Item", BlueprintReadWrite)
	bool IsItemHeld;
	
	//Held Item type
	UPROPERTY(EditAnywhere, Category = "Held Item", BlueprintReadWrite)
	uint8 ItemType;

	UPROPERTY(EditAnywhere, Category = "Held Item", BlueprintReadWrite)
	uint8 Ammo;

	// Refrence to Item_BP Character is currently holding
	UPROPERTY(EditAnywhere, Category = "Held Item", BlueprintReadWrite)
	class AItem* HeldItem;

	UPROPERTY(EditAnywhere, Category = "Held Item", BlueprintReadWrite)
	uint8 ClipCap;

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float BaseTurnRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TestCat)
	float TestValue;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float BaseLookUpRate;

	UFUNCTION(BlueprintCallable, Category = "Item")
	void SetValues(AItem* Item, uint8 TypeOfItem, bool IsHoldingItem);

protected:

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/**
	* Called via input to turn at a given rate.
	* @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	*/
	void TurnAtRate(float Rate);

	/**
	* Called via input to turn look up/down at a given rate.
	* @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	*/
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);
	
protected:
	// APawn interface
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface

};
