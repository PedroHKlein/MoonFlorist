// Fill out your copyright notice in the Description page of Project Settings.


#include "Waypoint.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "Components/PrimitiveComponent.h"
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
	
	

}

// Called when the game starts or when spawned
void AWaypoint::BeginPlay()
{
	Super::BeginPlay();
	WaypointTrigger->OnComponentBeginOverlap.AddDynamic(this, &AWaypoint::OnOverlapBegin);

}

// Called every frame
void AWaypoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWaypoint::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Other Actor is the actor that triggered the event. Check that is not ourself.  
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		AAI_HANDS* Hands = Cast<AAI_HANDS>(OtherActor);
		if (Hands)
		{
			UE_LOG(LogTemp, Warning, TEXT("GotHands"));
			Hands->CurrentWaypoint = Hands->NextWaypoint;
			if (Hands->NextWaypoint == Hands->CurrentWaypoint)
			{

				Hands->NextWaypoint = Hands->RandomiseWP();
				while (Hands->NextWaypoint == Hands->CurrentWaypoint)
				{

					Hands->NextWaypoint = Hands->RandomiseWP();


				}
			}
			Hands->MoveToWayPoint();


		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Not got"));
		}
	}

	
}


