// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BCharacter.h"
#include "BPlayer.generated.h"

/**
 * 
 */
UCLASS()
class BRENSFULLGAME_API ABPlayer : public ABCharacter
{
	GENERATED_BODY()
	
	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;
	
	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
	
public:

	ABPlayer();

protected:
	
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
};
