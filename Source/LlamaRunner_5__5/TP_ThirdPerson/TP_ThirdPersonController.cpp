// Fill out your copyright notice in the Description page of Project Settings.


#include "TP_ThirdPersonController.h"

ATP_ThirdPersonController::ATP_ThirdPersonController(const FObjectInitializer& ObjectInitializer)
	: Super((ObjectInitializer))
{
	ATP_ThirdPersonController::SetGenericTeamId(FGenericTeamId(2));
}

void ATP_ThirdPersonController::SetGenericTeamId(const FGenericTeamId& NewTeamId)
{
	if (NewTeamId != TeamId)
	{
		TeamId = NewTeamId;
	}
}
