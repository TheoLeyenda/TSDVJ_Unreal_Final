// Fill out your copyright notice in the Description page of Project Settings.


#include "Paddle_PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"
#include "Engine/World.h"
#include "Paddle.h"
#include "Ball.h"

APaddle_PlayerController::APaddle_PlayerController(){}


void APaddle_PlayerController::BeginPlay()
{
	TArray<AActor*> CameraActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), CameraActors);
	
	FViewTargetTransitionParams Params;
	SetViewTarget(CameraActors[0], Params);

	//SpawnInfo = CreateDefaultSubobject<FActorSpawnParameters>(TEXT("SpawnInfo"));
	TArray<AActor*> Paddles;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APaddle::StaticClass(), Paddles);
	MyPaddle = Cast<APaddle>(Paddles[0]);

	SpawnNewBall();
}
void APaddle_PlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	EnableInput(this);

	InputComponent->BindAxis("MoveHorizontal", this, &APaddle_PlayerController::MoveHorizontal);
	InputComponent->BindAction("Launch", IE_Pressed, this, &APaddle_PlayerController::Launch);
	
}
void APaddle_PlayerController::MoveHorizontal(float axisValue)
{
	//la palabra reservada "auto" es un detector automatico del tipo que debe ser la variable declarada al lado de esta
	//palabra reservada, en este caso la palabra reservada "auto" sera remplazada por el tipo "APaddle" ya que ese es el
	//tipo de variable que le estoy asignando a "myPawn"
	auto myPawn = Cast<APaddle>(GetPawn());

	if (myPawn)
	{
		myPawn->MoveHorizontal(axisValue);
	}
}

void APaddle_PlayerController::Launch()
{
	MyBall->Launch();
}

void APaddle_PlayerController::SpawnNewBall()
{
	if(!MyBall)
	{
		MyBall = nullptr;
	}
	if(BallObj)
	{
		MyBall = GetWorld()->SpawnActor<ABall>(BallObj, SpawnLocation, SpawnRotator, SpawnInfo);
		if (bResetPositionPlayer && MyPaddle) 
		{
			FVector localPositionPaddle = FVector(0.0f,0.0f,20.0f);
			MyPaddle->SetActorLocation(localPositionPaddle);
		}
	}
}
