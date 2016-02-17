// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/GameMode.h"
#include "BrensFullGameGameMode.generated.h"

UCLASS(minimalapi)
class ABrensFullGameGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	ABrensFullGameGameMode();

	virtual void BeginPlay() override;

protected:

	/* Widget Class to use for our HUD Screen */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "HUD", Meta = (BlueprintProtected = "true"))
	TSubclassOf<class UUserWidget> HUDWidgetClass;

	/* The instance of the HUD */
	UPROPERTY()
	class UUserWidget* CurrentWidget;

};



