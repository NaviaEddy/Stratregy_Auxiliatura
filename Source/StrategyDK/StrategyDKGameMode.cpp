// Copyright Epic Games, Inc. All Rights Reserved.

#include "StrategyDKGameMode.h"
#include "StrategyDKCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStrategyDKGameMode::AStrategyDKGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
