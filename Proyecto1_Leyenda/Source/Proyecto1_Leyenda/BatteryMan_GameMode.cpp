// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryMan_GameMode.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h" // incluyo la clase del Forward Declaration para que el .cpp lo conozca.


ABatteryMan_GameMode::ABatteryMan_GameMode()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ABatteryMan_GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void ABatteryMan_GameMode::BeginPlay()
{
	Super::BeginPlay();
	GenerateRecharge();
	//Corrutina cada cierto tiempo llama a la funcion
	FTimerHandle UnsedHandle;
	GetWorldTimerManager().SetTimer(UnsedHandle, this, &ABatteryMan_GameMode::GenerateRecharge, FMath::RandRange(minTimeGenerator, maxTimeGenerator), true);
}

void ABatteryMan_GameMode::GenerateRecharge()
{
	float x = FMath::RandRange(minCoord_X, maxCoord_X);
	float y = FMath::RandRange(minCoord_Y, maxCoord_Y);

	FVector spawnPosition = FVector(x, y, coord_Z);
	FRotator spawnRotation = FRotator(0.0f, 0.0f, 0.0f);

	//Asi se hace un Tranform.
	//FTransform spawnTransform(spawnRotation, spawnPosition, FVector::OneVector);
	//------------------------------------
	instanceRechargeBatteryManClass = GetWorld()->SpawnActor(RechargeBatteryMan, &spawnPosition, &spawnRotation);
	
}
