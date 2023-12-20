// Copyright Epic Games, Inc. All Rights Reserved.

#include "TechDemo4_ShooterGameMode.h"
#include "TechDemo4_ShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATechDemo4_ShooterGameMode::ATechDemo4_ShooterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
