// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Paddle.generated.h"

class UFloatingPawnMovement;

UCLASS()
class PROYECTO2_LEYENDA_API APaddle : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APaddle();

	//Suavisado de movimiento
	UPROPERTY(EditAnywhere)
		float smoothedOutMovement = 2.0f;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UStaticMeshComponent* SM_Padle;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UFloatingPawnMovement* FloatingMovement;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void MoveHorizontal(float axusValue);
};
