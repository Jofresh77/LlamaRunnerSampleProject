// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "GameFramework/PlayerController.h"
#include "TP_ThirdPersonController.generated.h"

/**
 * 
 */
UCLASS()
class LLAMARUNNER_5__5_API ATP_ThirdPersonController : public APlayerController, public IGenericTeamAgentInterface
{
	GENERATED_BODY()
	
	ATP_ThirdPersonController(const FObjectInitializer& ObjectInitializer);

public:
	virtual void SetGenericTeamId(const FGenericTeamId& NewTeamId) override;
	virtual FGenericTeamId GetGenericTeamId() const override { return TeamId; }

private:
	FGenericTeamId TeamId;
};
