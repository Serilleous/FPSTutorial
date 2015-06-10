// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/HUD.h"
#include "FPSHUD.generated.h"

/**
 * 
 */
UCLASS()
class FPSTUTORIAL_API AFPSHUD : public AHUD
{
	GENERATED_BODY()

	AFPSHUD(const FObjectInitializer& ObjectInitializer);
	
	UTexture2D* CrosshairTex;

	virtual void DrawHUD() override;
	
};
