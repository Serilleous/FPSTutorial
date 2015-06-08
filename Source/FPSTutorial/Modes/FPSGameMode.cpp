// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSTutorial.h"
#include "FPSGameMode.h"
#include "Characters/FPSCharacter.h"

AFPSGameMode::AFPSGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	DefaultPawnClass = AFPSCharacter::StaticClass();
}

void AFPSGameMode::StartPlay()
{
	Super::StartPlay();

	StartMatch();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("HELLO WORLD"));
	}
}
