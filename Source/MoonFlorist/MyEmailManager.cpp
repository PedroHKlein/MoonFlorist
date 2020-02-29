// Fill out your copyright notice in the Description page of Project Settings.


#include "MyEmailManager.h"

// Sets default values
AMyEmailManager::AMyEmailManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyEmailManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyEmailManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

TArray<AMyEmail*> AMyEmailManager::GetOrders()
{
	return Orders;
}

TArray<AMyEmail*> AMyEmailManager::GetFeedback()
{
	return Feedback;
}

TArray<AMyEmail*> AMyEmailManager::GetSpam()
{
	return Spam;
}

void AMyEmailManager::AddToOrders(AMyEmail* _email)
{
	Orders.Push(_email);
}

void AMyEmailManager::AddToFeedback(AMyEmail* _email)
{
	Feedback.Push(_email);
}

void AMyEmailManager::AddToSpam(AMyEmail* _email)
{
	Spam.Push(_email);
}

