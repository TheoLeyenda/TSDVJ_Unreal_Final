// Fill out your copyright notice in the Description page of Project Settings.


#include "Brick.h"

#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Ball.h"
#include "Engine/World.h"

// Sets default values
ABrick::ABrick()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SM_Brick = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Brick"));

	SM_Brick->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	Box_Collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));

	Box_Collision->SetBoxExtent(FVector(26.0f, 12.0f, 13.0f));

	RootComponent = Box_Collision;

	Box_Collision->OnComponentBeginOverlap.AddDynamic(this, &ABrick::OnOverlapBegin);


}

// Called when the game starts or when spawned
void ABrick::BeginPlay()
{
	Super::BeginPlay();
	//UE_LOG(LogTemp, Warning, TEXT("ME CREE"));
	
}

void ABrick::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndexType, bool bFromeSweep, const FHitResult & SweepResult)
{
	if (OtherActor->ActorHasTag("Ball")) 
	{
		//UE_LOG(LogTemp, Warning, TEXT("Colisionaste WACHIN"));
		ABall* MyBall = Cast<ABall>(OtherActor);
		
		FVector BallVelocity = MyBall->GetVelocity();
		if (bModifareVelocityEnable)
		{
			BallVelocity = BallVelocity * (SpeedModifareOnBounce - 1.0f);
			MyBall->GetBall()->SetPhysicsLinearVelocity(BallVelocity, true);
		}


		

		float timerDestroyThisBrick = 0.1f;

		FTimerHandle UnsedHandle;
		GetWorldTimerManager().SetTimer(UnsedHandle, this, &ABrick::DestroyBrick, timerDestroyThisBrick, false);
	}
}

void ABrick::DestroyBrick()
{
	this->Destroy();
}

// Called every frame
void ABrick::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Box_Collision->OnComponentBeginOverlap.AddDynamic(this, &ABrick::OnComponentBeginOverlap);

}

