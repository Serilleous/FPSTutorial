// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSTutorial.h"
#include "FPSCharacter.h"

AFPSCharacter::AFPSCharacter(const FObjectInitializer& OBjectInitialzer)
{
	PrimaryActorTick.bCanEverTick = true;
}

void AFPSCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("vroom vroom Character"));
	}

}

void AFPSCharacter::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);
	InputComponent->BindAxis("MoveForward", this, &AFPSCharacter::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &AFPSCharacter::MoveRight);
}

void AFPSCharacter::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is forward
		FRotator Rotation = Controller->GetControlRotation();
		// Limit pitch when walking or falling
		if (GetCharacterMovement()->IsMovingOnGround() || GetCharacterMovement()->IsFalling())
		{
			Rotation.Pitch = 0.0f;
		}
		// add movement in that direction
		const FVector Direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AFPSCharacter::MoveRight(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FVector Direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}

// Called every frame
void AFPSCharacter::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}


