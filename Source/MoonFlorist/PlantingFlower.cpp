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
	SetRootComponent(Root);
	FlowerSKMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Flower SKMesh"));
	FlowerSKMesh->SetupAttachment(Root);

	PlantingRange = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Flower Capsule"));
	PlantingRange->SetupAttachment(Root);
	PlantingRange->InitCapsuleSize(30.0f, 30.0f);
	
}

// Called when the game starts or when spawned
void APlantingFlower::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlantingFlower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

