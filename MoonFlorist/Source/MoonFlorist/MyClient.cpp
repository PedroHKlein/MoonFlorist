// Fill out your copyright notice in the Description page of Project Settings.


#include "MyClient.h"

// Sets default values
AMyClient::AMyClient()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

AMyClient::~AMyClient()
{

}

// Called when the game starts or when spawned
void AMyClient::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyClient::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyClient::Init(int _iNature)
{

}

void AMyClient::NewOrder(int _iOrder)
{
	if (CurrentOrder == NULL)
	{
		CurrentOrder = NewObject<UMyClientOrder>();
		CurrentOrder->init(iName, FMath::RandRange(1, 3));
	}
	else
	{

		LastOrder = CurrentOrder;

		CurrentOrder = NewObject<UMyClientOrder>();
		CurrentOrder->init(iName, FMath::RandRange(1, 3));

	}
}

void AMyClient::SetGreetings(int _iNature)
{


}

UMyClientOrder* AMyClient::GetCurrentOrder()
{
	return CurrentOrder;
}


UMyClientOrder* AMyClient::GetPreviousOrder()
{
	return LastOrder;
}

