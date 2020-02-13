// Fill out your copyright notice in the Description page of Project Settings.


#include "Storage.h"

// Sets default values
AStorage::AStorage()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStorage::BeginPlay()
{
	Super::BeginPlay();
	
}

void AStorage::AddItem(AItem* _Item)
{
	int index = Storage.Find(_Item);
	//Checks if the item is already in storage
	if (index != INDEX_NONE)
	{
		//Found it
		Storage[index]->Stacks += _Item->Stacks;

	}
	else if (index == INDEX_NONE)
	{
		Storage.Add(_Item);
	}
}

void AStorage::RemoveItem(AItem* _Item)
{
}

// Called every frame
void AStorage::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

