// Fill out your copyright notice in the Description page of Project Settings.


#include "AI_HANDS.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AAI_HANDS::AAI_HANDS()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f);

}

// Called when the game starts or when spawned
void AAI_HANDS::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAI_HANDS::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

