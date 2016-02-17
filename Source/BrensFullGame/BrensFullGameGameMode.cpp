// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "BrensFullGame.h"
#include "BrensFullGameGameMode.h"
#include "BrensFullGameCharacter.h"
#include "Blueprint/UserWidget.h"

ABrensFullGameGameMode::ABrensFullGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Assets/Characters/BP_BPlayer"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ABrensFullGameGameMode::BeginPlay()
{
	Super::BeginPlay();
	 
	if (HUDWidgetClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), HUDWidgetClass);
		if (CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
		}
	}

}
