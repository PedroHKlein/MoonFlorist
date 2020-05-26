// Fill out your copyright notice in the Description page of Project Settings.

#include "PlantingFlower.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Animation/AnimInstance.h"
#include "Engine/Engine.h"
#include "Particles/ParticleSystemComponent.h"

DEFINE_LOG_CATEGORY_STATIC(LogFlower, Warning, All);

// Sets default values
APlantingFlower::APlantingFlower()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;


	PlantingRange = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Flower Capsule"));
	PlantingRange->InitCapsuleSize(30.0f, 30.0f);
	PlantingRange->SetRelativeLocation(FVector(0.f, 0.f, 20.0f));

	PlantingRange->SetupAttachment(Root);
	

	FlowerSKMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Flower SKMesh"));
	FlowerSKMesh->SetupAttachment(Root);

	FlowerName = " ";
	
	VFXFlower = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Flower Particle"));
	VFXFlower->SetupAttachment(FlowerSKMesh);
	
	VFXFlower->bHiddenInGame = true;
}

void APlantingFlower::Bloom()
{
	if (!Growing)
	{
		ReadyToBloom = true;
	}
	else
	{
		ReadyToBloom = false;
	}
	
}

FVector APlantingFlower::GetSocketLocation()
{
	return FlowerSKMesh->GetSocketLocation("FP_Socket");
}

// Called when the game starts or when spawned
void APlantingFlower::BeginPlay()
{
	Super::BeginPlay();
}

void APlantingFlower::Setup()
{
	ReadyToBloom = false;
	ReadyToCollect = false;
	Watered = true;
	Growing = true;
	PlayRate = 1.0f;
	AnimationRate = 1.0f;
	Fidget = false;
}

// Called every frame
void APlantingFlower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

