// Fill out your copyright notice in the Description page of Project Settings.


#include "AI_HANDS.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/Engine.h"
#include "AI_HANDS_Controller.h"
#include "EngineUtils.h"

// Sets default values
AAI_HANDS::AAI_HANDS()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 100.0f, 0.0f);
	IsMoving = false;

}

// Called when the game starts or when spawned
void AAI_HANDS::BeginPlay()
{
	Super::BeginPlay();
	//NextWaypoint->ActiveWaypoint = false;
	for (TActorIterator<AWaypoint> Actor(GetWorld()); Actor; ++Actor)
	{
		WaypointArray.Add(Cast<AWaypoint>(*Actor));
		
	}
	//UE_LOG(LogTemp, Warning, TEXT("Waypoints: %d"), WaypointArray.Num());
	NextWaypoint = RandomiseWP();
	CurrentWaypoint = RandomiseWP();
	MoveToWayPoint();
}

// Called every frame
void AAI_HANDS::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
	
}

AWaypoint* AAI_HANDS::RandomiseWP()
{
	int index = FMath::RandRange(0, WaypointArray.Num() - 1);
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("Rand Value: %f"), index));
	}
	return (WaypointArray[index]);
}

void AAI_HANDS::MoveToWayPoint()
{
	AAI_HANDS_Controller* HandsController = Cast<AAI_HANDS_Controller>(GetController());
	if (HandsController)
	{
		if (CurrentWaypoint != nullptr)
		{
			if (NextWaypoint != nullptr)
			{
				IsMoving = true;
				HandsController->MoveToActor(NextWaypoint, 5.0f);
				UE_LOG(LogTemp, Warning, TEXT("Working"));
			}
			else
			{
				IsMoving = false;
			}

		}

	}
}

