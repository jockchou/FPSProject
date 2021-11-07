// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSPlayerController.h"

void AFPSPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();
    EnableInput(this);

    InputComponent->BindAxis("Forward", this, nullptr);
}