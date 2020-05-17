// Fill out your copyright notice in the Description page of Project Settings.

#include "PlantingFlower.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Animation/AnimInstance.h"

DEFINE_LOG_CATEGORY_STATIC(LogFlower, Warning, All);

// Sets default values
APlantingFlower::APlantingFlower()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	FlowerSKMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Flower SKMesh"));
	FlowerSKMesh->SetupAttachment(Root);

	PlantingRange = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Flower Capsule"));
	PlantingRange->InitCapsuleSize(30.0f, 30.0f);
	PlantingRange->SetRelativeLocation(FVector(0.f, 0.f, 20.0f));
	PlantingRange->SetupAttachment(Root);

	

	FlowerName = " ";
}

// Called when the game starts or when spawned
void APlantingFlower::BeginPlay()
{
	Super::BeginPlay();
	Setup();
	if (FlowerName == " ")
	{
		UE_LOG(LogFlower, Warning, TEXT("Planting Flower: No Name of Flower"));
	}
}

void APlantingFlower::Setup()
{
	ReadyToBloom = false;
	ReadyToCollect = false;
	Watered = false;
	Growing = true;
	ReadyForVFX = false;
	PlayRate = 0;
}

// Called every frame
void APlantingFlower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

