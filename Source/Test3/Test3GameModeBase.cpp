// Copyright Epic Games, Inc. All Rights Reserved.


#include "Test3GameModeBase.h"
#include "MyPlayerController.h"

ATest3GameModeBase::ATest3GameModeBase() {
	PlayerControllerClass = AMyPlayerController::StaticClass();
}