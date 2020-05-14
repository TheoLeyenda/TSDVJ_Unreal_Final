// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Proyecto1_LeyendaGameMode.h"
#include "Proyecto1_LeyendaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProyecto1_LeyendaGameMode::AProyecto1_LeyendaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
