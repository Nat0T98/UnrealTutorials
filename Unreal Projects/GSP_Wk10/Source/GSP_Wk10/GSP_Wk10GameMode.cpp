// Copyright Epic Games, Inc. All Rights Reserved.

#include "GSP_Wk10GameMode.h"
#include "GSP_Wk10Character.h"
#include "UObject/ConstructorHelpers.h"

AGSP_Wk10GameMode::AGSP_Wk10GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
