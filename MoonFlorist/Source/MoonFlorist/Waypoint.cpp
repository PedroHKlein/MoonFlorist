// Fill out your copyright notice in the Description page of Project Settings.


#include "Waypoint.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "AI_HANDS.h"


// Sets default values
AWaypoint::AWaypoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>("Root Component");
	SetRootComponent(Root);

	WaypointTrigger = CreateDefaultSubobject<UBoxComponent>("Waypoint");
	WaypointTrigger->SetupAttachment(Root);
	WaypointTrigger->OnComponentBeginOverlap.AddDynamic(this, &AWaypoint::OnBeginOverlap);
	WaypointTrigger->OnComponentEndOverlap.AddDynamic(this, &AWaypoint::OnOverlapEnd);
	

}

// Called when the game starts or when spawned
void AWaypoint::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWaypoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWaypoint::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
	if (OtherActor != nullptr)
	{
		AAI_HANDS* HANDS;
		HANDS = Cast<AAI_HANDS>(OtherActor);
		HANDS->CurrentWaypoint = this;
		HANDS->CurrentWaypoint->ActiveWaypoint = true;
		HANDS->NextWaypoint->ActiveWaypoint = false;
		UE_LOG(LogTemp, Warning, TEXT("Reached Waypoint"));
	}
	
}

void AWaypoint::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	//AAI_HANDS* HANDS;
	//HANDS = Cast<AAI_HANDS>(OtherActor);
	//HANDS->CurrentWaypoint->ActiveWaypoint = false;
	//HANDS->NextWaypoint->ActiveWaypoint = true;
}



