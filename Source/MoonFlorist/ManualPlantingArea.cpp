// Fill out your copyright notice in the Description page of Project Settings.


#include "ManualPlantingArea.h"
#include "Engine/StaticMesh.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"

// Sets default values
AManualPlantingArea::AManualPlantingArea()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlantingArea = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	PlantingArea->SetupAttachment(RootComponent);
	PlantingArea->SetRelativeLocation(FVector(0.f, 0.f, 0.f));

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(RootComponent);


}

// Called when the game starts or when spawned
void AManualPlantingArea::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AManualPlantingArea::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

