// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "BatteryMan_GameMode.generated.h"

/**
 * 
 */
UCLASS()
class PROYECTO1_LEYENDA_API ABatteryMan_GameMode : public AGameMode
{
	GENERATED_BODY()
public:
	ABatteryMan_GameMode();
	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<APawn> RechargeBatteryMan;

	//Forward Declaration
	UPROPERTY()
	class AActor *instanceRechargeBatteryManClass;
	//UPROPERTY(EditAnywhere)
	float coord_Z = 500.0f;

	UPROPERTY(EditAnywhere)
		float maxCoord_X;

	UPROPERTY(EditAnywhere)
		float minCoord_X;

	UPROPERTY(EditAnywhere)
		float maxCoord_Y;

	UPROPERTY(EditAnywhere)
		float minCoord_Y;

	UPROPERTY(EditAnywhere)
		float minTimeGenerator;

	UPROPERTY(EditAnywhere)
		float maxTimeGenerator;

	void GenerateRecharge();
};
