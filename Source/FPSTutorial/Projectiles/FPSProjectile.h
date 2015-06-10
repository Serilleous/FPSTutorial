// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "FPSProjectile.generated.h"

UCLASS()
class FPSTUTORIAL_API AFPSProjectile : public AActor
{

	GENERATED_BODY()
	

public:

	AFPSProjectile(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(VisibleDefaultsOnly, Category=Projectile)
	USphereComponent* CollisionComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Movement)
	UProjectileMovementComponent* ProjectileMovement;

	void InitVelocity(const FVector& ShootDirection);

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
	
};
