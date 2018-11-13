// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 *
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()

	virtual void BeginPlay() override;

	ATank* GetControlledTank() const;

	ATank* GetPlayerTank() const;
	
	virtual void Tick(float DeltaTime) override;

	// Start the tank moving the barrel so that a show would hit where the crosshair intersects the world
	void AimTowardsCrosshair();
};