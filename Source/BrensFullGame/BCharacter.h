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

	// Variable Controlling Current health
	UPROPERTY(EditAnywhere, Category = "Main", BlueprintReadWrite)
	float CurrentHealth;

	// Variable Controlling Max health
	UPROPERTY(EditAnywhere, Category = "Main", BlueprintReadWrite)
	float MaxtHealth;

	// Variable Controlling Current Stamina
	UPROPERTY(EditAnywhere, Category = "Main", BlueprintReadWrite)
	float CurrentStamina;

	// Variable Controlling Max Stamina
	UPROPERTY(EditAnywhere, Category = "Main", BlueprintReadWrite)
	float MaxStamina;

	// Bool controlling whether Item is held or not
	UPROPERTY(EditAnywhere, Category = "Main", BlueprintReadWrite)
	bool TD;

	// Bool controlling whether Item is held or not
	UPROPERTY(EditAnywhere, Category = "Held Item", BlueprintReadWrite)
	bool IsItemHeld;
	
	//Held Item type
	UPROPERTY(EditAnywhere, Category = "Held Item", BlueprintReadWrite)
	uint8 ItemType;

	// Refrence to Item_BP Character is currently holding
	UPROPERTY(EditAnywhere, Category = "Held Item", BlueprintReadWrite)
	class AItem* HeldItem;

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float BaseLookUpRate;

	UPROPERTY(EditAnywhere, Category = "Damage", BlueprintReadWrite)
	float DamageBase;

	UPROPERTY(EditAnywhere, Category = "Damage", BlueprintReadWrite)
	uint8 AgentType;

	UPROPERTY(EditAnywhere, Category = "Damage", BlueprintReadWrite)
	float DamageDuration;
	
	UPROPERTY(EditAnywhere, Category = "Damage", BlueprintReadWrite)
	class AItem* AgentOfDamage;

	// Returns Current Health to be Used in HUD
	// UFUNCTION(BlueprintCallable, Category = "Health")
	// float GetCurrentHealth();

	// Function to get all the basic info for a Picked Up item
	UFUNCTION(BlueprintCallable, Category = "Item")
	void SetValues(AItem* Item, uint8 TypeOfItem, bool IsHoldingItem);

	UFUNCTION(BlueprintCallable, Category = "Damage")
	void SetPlayerDamage(float BaseDamage, uint8 DamageType, float Duration, AItem* Hitter);

	//UFUNCTION(Category = "Damage")
	//void SetDamageValues(AItem* Instigator, uint8 DamageType, uint8 BaseDamage, float Duration);

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
