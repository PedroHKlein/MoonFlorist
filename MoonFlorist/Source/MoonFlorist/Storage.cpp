// Fill out your copyright notice in the Description page of Project Settings.


#include "Storage.h"
#include "Engine/Engine.h"


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
	int index = StorageArray.Find(_Item);
	//Checks if the item is already in storage
	if (index == INDEX_NONE || !_Item->Stackable)
	{
		StorageArray.Add(_Item);
		UE_LOG(LogTemp, Warning, TEXT("added"));
	}
	
}

void AStorage::RemoveItem(AItem* _Item)
{
	int ItemToRemove = StorageArray.Find(_Item);

	if (ItemToRemove != INDEX_NONE)
	{
		StorageArray.Remove(_Item);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Item doesn't exist in Storage"));
	}
}

void AStorage::IncreaseStacks(int _Amount, AItem* _Item)
{
	if (_Item->Stackable)
	{
		int temp = _Item->GetStacks();
		_Item->SetStacks(temp + _Amount);
		AddItem(_Item);
	}
	else
	{
		AddItem(_Item);
	}


}

// Called every frame
void AStorage::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

