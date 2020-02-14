// Fill out your copyright notice in the Description page of Project Settings.


#include "Storage.h"
#include "Engine/Engine.h"


// Sets default values
AStorage::AStorage()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Red Flower------------
	AItem* Red = NewObject<AItem>();

	 Red->CreateItem(EItemType::IT_Flower, "RedFlower", "/Game/User_Interface/Market/Textures/icon_redflower.icon_redflower", 10, 15);
	
	AddItem(Red);
	//----------------------

}

// Called when the game starts or when spawned
void AStorage::BeginPlay()
{
	Super::BeginPlay();

	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::FromInt(Storage.Num()));
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
	int ItemToRemove = Storage.Find(_Item);

	if (ItemToRemove != INDEX_NONE)
	{
		Storage.Remove(_Item);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Item doesn't exist in Storage"));
	}
}

// Called every frame
void AStorage::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

