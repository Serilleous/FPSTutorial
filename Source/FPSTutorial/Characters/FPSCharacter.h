// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "FPSCharacter.generated.h"

UCLASS()
class FPSTUTORIAL_API AFPSCharacter : public ACharacter
{
	GENERATED_BODY()

	AFPSCharacter(const FObjectInitializer& OBjectInitialzer);

	UFUNCTION()
	void MoveForward(float Value);

	UFUNCTION()
	void MoveRight(float Value);

protected:

	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

public:
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;
	
};