// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameManager.h"
#include "Engine/Engine.h"

// Sets default values
AMyGameManager::AMyGameManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyGameManager::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMyGameManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Test(DeltaTime);
}

void AMyGameManager::NewClient()
{
	if (CurrentClient == NULL)
	{
		CurrentClient = new MyClientOrder(FMath::RandRange(1, 100), FMath::RandRange(1, 3));
	}
	else
	{
		delete CurrentClient;
		CurrentClient = new MyClientOrder(FMath::RandRange(1, 100), FMath::RandRange(1, 3));
	}

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Hi! My name is %s"), *FString(CurrentClient->GetName())), false);

	for (int i = 0; i < CurrentClient->GetGoals().Num(); i++)
	{
		if (i == 0)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("I would like to order a boquet that feels %s"), *FString(CurrentClient->GetGoals()[i]->GetGoal())), false);
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("and %s"), *FString(CurrentClient->GetGoals()[i]->GetGoal())), false);
		}
	}
}

void AMyGameManager::Test(float delta)
{
	fCurrTime = fCurrTime + delta;

	if (fCurrTime >= fTimeToWait)
	{
		NewClient();
		fCurrTime = 0.0f;
	}
}
