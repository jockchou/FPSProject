// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FPSProjectGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FPSPROJECT_API AFPSProjectGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AFPSProjectGameModeBase();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameModelBaseConfig")
	FString GameStartText;

	virtual void StartPlay() override;
};
