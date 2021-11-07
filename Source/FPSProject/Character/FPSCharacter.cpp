// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSCharacter.h"

// Sets default values
AFPSCharacter::AFPSCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	this->AbilitySystem = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystem");
}

// Called when the game starts or when spawned
void AFPSCharacter::BeginPlay()
{
	Super::BeginPlay();

	check(GEngine != nullptr);

	FText MsgText = NSLOCTEXT("Debug", "BeginPlayDebugMsg", "We are using FPSCharacter.");

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, MsgText.ToString());
}

// Called every frame
void AFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AFPSCharacter::SetupPlayerInputComponent(UInputComponent *PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AFPSCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFPSCharacter::MoveRight);
}

// MoveRight
void AFPSCharacter::MoveRight(float Val)
{
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(Direction, Val);
}

// MoveForward
void AFPSCharacter::MoveForward(float Val)
{
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, Val);
}
