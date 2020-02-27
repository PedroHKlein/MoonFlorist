// Fill out your copyright notice in the Description page of Project Settings.


#include "SlidingWindow.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
#include "Engine/Engine.h"
#include "Components/BoxComponent.h"
#include "Components/AudioComponent.h"
#include "Sound/SoundCue.h"

// Sets default values
ASlidingWindow::ASlidingWindow()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
	Root->SetupAttachment(RootComponent);

	Window = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Window Cover"));
	Window->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Game/Meshes/Modular_Pieces/Obj_Bed_Window_Shield.Obj_Bed_Window_Shield")).Object);
	Window->SetupAttachment(Root);

	Switch = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Switch"));
	Switch->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Game/Geometry/Meshes/1M_Cube.1M_Cube")).Object);
	Switch->SetupAttachment(Root);

	//Lerp points
	StartLerpLoc = CreateDefaultSubobject<USceneComponent>(TEXT("Start Location"));
	StartLerpLoc->SetupAttachment(Root);
	EndLerpLoc = CreateDefaultSubobject<USceneComponent>(TEXT("EndLocation"));
	EndLerpLoc->SetupAttachment(Root);
	//Audio



	
	
}

// Called when the game starts or when spawned
void ASlidingWindow::BeginPlay()
{
	Super::BeginPlay(); 
	
	StartLerpLoc->SetRelativeLocation(Window->RelativeLocation);

}

// Called every frame
void ASlidingWindow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (Open)
	{
		Window->SetRelativeLocation(FMath::VInterpTo(Window->RelativeLocation, EndLerpLoc->RelativeLocation, DeltaTime, 1.0f));
		
	}
	else
	{
		Window->SetRelativeLocation(FMath::VInterpTo(Window->RelativeLocation, StartLerpLoc->RelativeLocation, DeltaTime, 1.0f));
		
	}

}
