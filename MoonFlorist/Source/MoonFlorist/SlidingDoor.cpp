// Fill out your copyright notice in the Description page of Project Settings.


#include "SlidingDoor.h"
#include "Engine/StaticMesh.h"
#include "Engine/Engine.h"
#include "Components/ArrowComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/BoxComponent.h"

// Sets default values
ASlidingDoor::ASlidingDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DoorFrame = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorFrame"));
	DoorFrame->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Game/Meshes/Modular_Pieces/Obj_Doorway.Obj_Doorway")).Object);
	DoorFrame->SetupAttachment(RootComponent);

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger Box"));
	TriggerBox->SetCollisionProfileName(TEXT("Trigger"));
	TriggerBox->SetupAttachment(DoorFrame);
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ASlidingDoor::OnOverlapBegin);
	TriggerBox->OnComponentEndOverlap.AddDynamic(this, &ASlidingDoor::OnOverlapEnd);
	
	LeftDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftDoor"));
	LeftDoor->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Game/Meshes/Modular_Pieces/Obj_Doors_Left.Obj_Doors_Left")).Object);
	LeftDoor->SetupAttachment(DoorFrame);

	RightDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightDoor"));
	RightDoor->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Game/Meshes/Modular_Pieces/Obj_Doors_Right.Obj_Doors_Right")).Object);
	RightDoor->SetupAttachment(DoorFrame);

	FVector LeftDoorLoc = LeftDoor->RelativeLocation;
	FVector RightDoorLoc = RightDoor->RelativeLocation;
}

// Called when the game starts or when spawned
void ASlidingDoor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASlidingDoor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(0, 2.0f, FColor::Purple, TEXT("Actor Begin Overlap"));
		}
		Open = true;
	}
}

void ASlidingDoor::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(0, 2.0f, FColor::Purple, TEXT("Actor End Overlap"));
		}
		Open = false;
	}
	
}

// Called every frame
void ASlidingDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector LeftDoorLoc = LeftDoor->RelativeLocation;
	FVector RightDoorLoc = RightDoor->RelativeLocation;
	if (Open)
	{
		LeftDoor->SetRelativeLocation(FMath::VInterpTo(LeftDoorLoc, FVector(-115.0f, 0.0f, 0.0f), DeltaTime, 2.0f));
		RightDoor->SetRelativeLocation(FMath::VInterpTo(RightDoorLoc, FVector(50.0f, 0.0f, 0.0f), DeltaTime, 2.0f));
	}
	else 
	{
		LeftDoor->SetRelativeLocation(FMath::VInterpTo(LeftDoorLoc, FVector(0.0f, 0.0f, 0.0f), DeltaTime, 2.0f));
		RightDoor->SetRelativeLocation(FMath::VInterpTo(RightDoorLoc, FVector(0.0f, 0.0f, 0.0f), DeltaTime, 2.0f));
	}
}

