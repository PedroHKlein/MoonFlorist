// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MoonFloristGameMode.h"
#include "MoonFloristHUD.h"
#include "MoonFloristCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMoonFloristGameMode::AMoonFloristGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = AMoonFloristCharacter::StaticClass();

	// use our custom HUD class
	HUDClass = AMoonFloristHUD::StaticClass();
}
