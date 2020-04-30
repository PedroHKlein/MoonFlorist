// Fill out your copyright notice in the Description page of Project Settings.


#include "MyChecklist.h"

// Sets default values
AMyChecklist::AMyChecklist()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyChecklist::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyChecklist::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

