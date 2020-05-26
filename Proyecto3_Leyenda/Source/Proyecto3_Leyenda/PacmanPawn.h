// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PacmanPawn.generated.h"

UCLASS()
class PROYECTO3_LEYENDA_API APacmanPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APacmanPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadOnly)
		bool bFrozen = true;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void SetDirection(const FVector Direction);
	bool IsbFrozen() { return bFrozen; }

	UFUNCTION(BlueprintCallable)
		void SetbFrozen(bool Value) { bFrozen = Value; }

	UFUNCTION()
		void OnOverlapBegin(AActor* PlayerActor, AActor* OtherActor);

};
