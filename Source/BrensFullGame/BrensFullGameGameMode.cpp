// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "BrensFullGame.h"
#include "BrensFullGameGameMode.h"
#include "BrensFullGameCharacter.h"

ABrensFullGameGameMode::ABrensFullGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Assets/Characters/BP_BPlayer"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
