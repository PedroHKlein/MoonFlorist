// Fill out your copyright notice in the Description page of Project Settings.


#include "SlidingDoor.h"
#include "Engine/StaticMesh.h"
#include "Engine/Engine.h"
#include "Components/ArrowComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/BoxComponent.h"
#include "Components/AudioComponent.h"
#include "Sound/SoundCue.h"

// Sets default values
ASlidingDoor::ASlidingDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DoorFrame = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorFrame"));
	DoorFrame->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Game/Meshes/Props/SM_Doorway.SM_Doorway")).Object);
	DoorFrame->SetupAttachment(RootComponent);

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger Box"));
	TriggerBox->SetCollisionProfileName(TEXT("Trigger"));
	TriggerBox->SetupAttachment(DoorFrame);
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ASlidingDoor::OnOverlapBegin);
	TriggerBox->OnComponentEndOverlap.AddDynamic(this, &ASlidingDoor::OnOverlapEnd);
	
	LeftDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftDoor"));
	LeftDoor->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Game/Meshes/Props/SM_Door_L.SM_Door_L")).Object);
	LeftDoor->SetupAttachment(DoorFrame);

	RightDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightDoor"));
	RightDoor->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Game/Meshes/Props/SM_Door_R.SM_Door_R")).Object);
	RightDoor->SetupAttachment(DoorFrame);

	LeftPoint = CreateDefaultSubobject<USceneComponent>("Left End Lerp Location");
	LeftPoint->SetupAttachment(DoorFrame);
	RightPoint = CreateDefaultSubobject<USceneComponent>("Right End Lerp Location");
	RightPoint->SetupAttachment(DoorFrame);
	FVector LeftDoorLoc = LeftDoor->RelativeLocation;
	FVector RightDoorLoc = RightDoor->RelativeLocation;
	
	//Sound
	OpenCue = ConstructorHelpers::FObjectFinder<USoundCue>(TEXT("'/Game/Sound/S_DoorOpen_Cue.S_DoorOpen_Cue'")).Object;

	OpenSound = CreateDefaultSubobject<UAudioComponent>("Open Door AudioComp");
	OpenSound->bAutoActivate = false;
	OpenSound->SetupAttachment(RootComponent);

	CloseCue = ConstructorHelpers::FObjectFinder<USoundCue>(TEXT("'/Game/Sound/S_DoorClose_Cue.S_DoorClose_Cue'")).Object;

	CloseSound = CreateDefaultSubobject<UAudioComponent>("Close Door AudioComp");
	CloseSound->bAutoActivate = false;
	CloseSound->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ASlidingDoor::BeginPlay()
{
	Super::BeginPlay();
	if (Speed == 0.0f)
	{
		Speed = 0.03f;
		UE_LOG(LogTemp, Warning, TEXT("Speed Not Set in Editor - Sliding Door"));
	}
}

void ASlidingDoor::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	if (OpenCue->IsValidLowLevelFast())
	{
		OpenSound->SetSound(OpenCue);
	}

	if (CloseCue->IsValidLowLevelFast())
	{
		CloseSound->SetSound(CloseCue);
	}
}

void ASlidingDoor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(0, 2.0f, FColor::Purple, TEXT("Actor Begin Overlap"));
		}

		if (bLocked)
		{

		}
		else
		{
			Open = true;
			OpenSound->Play();
		}
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
		CloseSound->Play();
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
	
		LeftDoor->SetRelativeLocation(FMath::Lerp(LeftDoorLoc, LeftPoint->RelativeLocation,  DeltaTime * Speed));
		RightDoor->SetRelativeLocation(FMath::Lerp(RightDoorLoc, RightPoint->RelativeLocation, DeltaTime * Speed));
		
	}
	else 
	{
		
		LeftDoor->SetRelativeLocation(FMath::Lerp(LeftDoorLoc, FVector(0.0f, 0.0f, 0.0f), DeltaTime * Speed));
		RightDoor->SetRelativeLocation(FMath::Lerp(RightDoorLoc, FVector(0.0f, 0.0f, 0.0f), DeltaTime * Speed));
		
	}
}

