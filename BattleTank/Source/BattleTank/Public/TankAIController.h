#pragma once

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

protected:
	UPROPERTY(EditAnywhere, Category = "Setup")
	float AcceptanceRadius = 3000;

private:
	virtual void BeginPlay() override;

	virtual void SetPawn(APawn* InPawn) override;

	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnPossessedTankDeath();
};