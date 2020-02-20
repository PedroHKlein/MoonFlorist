// Fill out your copyright notice in the Description page of Project Settings.


#include "AI_HANDS.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/Engine.h"
#include "EngineUtils.h"

// Sets default values
AAI_HANDS::AAI_HANDS()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 100.0f, 0.0f);
	NextWaypoint->ActiveWaypoint = false;

}

// Called when the game starts or when spawned
void AAI_HANDS::BeginPlay()
{
	Super::BeginPlay();
	for (TActorIterator<AWaypoint> Actor(GetWorld()); Actor; ++Actor)
	{
		WaypointArray.Add(Cast<AWaypoint>(*Actor));
		
	}
	UE_LOG(LogTemp, Warning, TEXT("Waypoints: %d"), WaypointArray.Num());
	
}

// Called every frame
void AAI_HANDS::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CurrentWaypoint != nullptr )
	{
		if (!NextWaypoint->ActiveWaypoint && CurrentWaypoint->ActiveWaypoint)
		{
			int index = FMath::RandRange(0, WaypointArray.Num() - 1);
			if (WaypointArray[index] != CurrentWaypoint)
			{
				
				NextWaypoint = WaypointArray[index];
				NextWaypoint->ActiveWaypoint = true;
				CurrentWaypoint->ActiveWaypoint = false;
				UE_LOG(LogTemp, Warning, TEXT("Randoming"));
			}
			else
			{
				index = FMath::RandRange(0, WaypointArray.Num() - 1);
			}
			
		
		}
	}
	
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

