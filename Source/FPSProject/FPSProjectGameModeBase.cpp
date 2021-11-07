// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSProjectGameModeBase.h"

AFPSProjectGameModeBase::AFPSProjectGameModeBase()
{
    this->GameStartText = TEXT("Hello World, this is FPSGameModeBase!");
}
void AFPSProjectGameModeBase::StartPlay()
{
    Super::StartPlay();

    GEngine->AddOnScreenDebugMessage(1, 5.0f, FColor::Red, GameStartText);
}
