// Copyright Epic Games, Inc. All Rights Reserved.

#include "DonkeyKong1GameMode.h"
#include "DonkeyKong1Character.h"
#include "UObject/ConstructorHelpers.h"

ADonkeyKong1GameMode::ADonkeyKong1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
