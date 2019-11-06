// Fill out your copyright notice in the Description page of Project Settings.


#include "ManualPlanting.h"

// Sets default values
AManualPlanting::AManualPlanting()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AManualPlanting::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AManualPlanting::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

