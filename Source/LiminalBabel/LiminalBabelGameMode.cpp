// Copyright Epic Games, Inc. All Rights Reserved.

#include "LiminalBabelGameMode.h"
#include "LiminalBabelCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALiminalBabelGameMode::ALiminalBabelGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
