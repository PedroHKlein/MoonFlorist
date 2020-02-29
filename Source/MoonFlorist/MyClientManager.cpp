// Fill out your copyright notice in the Description page of Project Settings.


#include "MyClientManager.h"

// Sets default values
AMyClientManager::AMyClientManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyClientManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyClientManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//Client manager init function
void AMyClientManager::init()
{
	//Create list of clients and randomise their traits
	for (int i = 0; i < 100; i++)
	{
		AMyClient* temp = GetWorld()->SpawnActor<AMyClient>(AMyClient::StaticClass());
		temp->Init(i + 1, FMath::RandRange(1, 5));
		Clients.Push(temp);
	}
}

TArray<AMyClient*> AMyClientManager::GetClients()
{
	return Clients;
}