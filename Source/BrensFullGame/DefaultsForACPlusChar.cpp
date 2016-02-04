// Fill out your copyright notice in the Description page of Project Settings.

#include "BrensFullGame.h"
#include "DefaultsForACPlusChar.h"


// Sets default values
ADefaultsForACPlusChar::ADefaultsForACPlusChar()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADefaultsForACPlusChar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADefaultsForACPlusChar::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void ADefaultsForACPlusChar::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

