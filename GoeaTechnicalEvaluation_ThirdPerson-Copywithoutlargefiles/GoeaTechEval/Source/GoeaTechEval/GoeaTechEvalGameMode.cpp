// Copyright Epic Games, Inc. All Rights Reserved.

#include "GoeaTechEvalGameMode.h"
#include "GoeaTechEvalCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGoeaTechEvalGameMode::AGoeaTechEvalGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
