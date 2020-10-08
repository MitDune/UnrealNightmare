// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealNightmareGameMode.h"
#include "UnrealNightmareCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealNightmareGameMode::AUnrealNightmareGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
