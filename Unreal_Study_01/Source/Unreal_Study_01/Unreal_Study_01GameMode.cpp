// Copyright Epic Games, Inc. All Rights Reserved.

#include "Unreal_Study_01GameMode.h"
#include "Unreal_Study_01Character.h"
#include "UObject/ConstructorHelpers.h"

AUnreal_Study_01GameMode::AUnreal_Study_01GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
