// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Paddle_PlayerController.generated.h"

//class FActorSpawnParameters;

class ABall;

UCLASS()
class PROYECTO2_LEYENDA_API APaddle_PlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	APaddle_PlayerController();

	
		
protected:
	virtual void BeginPlay() override;

	void MoveHorizontal(float axisValue);

	UFUNCTION()
	virtual void SetupInputComponent() override;

	//ball reference

	void Launch();

	UPROPERTY(EditAnywhere)
		TSubclassOf<ABall> BallObj;

	ABall* MyBall;

	FVector SpawnLocation = FVector(0.0f, 0.0f, 40.0f);
	FRotator SpawnRotator = FRotator(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;
	
public:

	void SpawnNewBall();

};
