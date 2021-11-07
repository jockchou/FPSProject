// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSProjectGameModeBase.h"

AFPSProjectGameModeBase::AFPSProjectGameModeBase()
{
    FText MsgText = NSLOCTEXT("Debug", "FPSProjectGameModeBase", "Hello World, FPSProjectGameModeBase!");

    this->GameStartText = MsgText.ToString();
}
void AFPSProjectGameModeBase::StartPlay()
{
    Super::StartPlay();

    GEngine->AddOnScreenDebugMessage(1, 5.0f, FColor::Red, GameStartText);
}
