// Fill out your copyright notice in the Description page of Project Settings.


#include "BouquetCapsule.h"



ABouquetCapsule::ABouquetCapsule()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Initalising Generic Capsule
	SetItemType(EItemType::IT_CapsuleBouquet);
	SetName("Capsule");
	SetStacks(1);
	Stackable = false;
	SetPrice(70);
	CanBeSold = false;
	Mesh->SetRelativeLocation(FVector(0.f, 0.f, -75.f));
}



void ABouquetCapsule::StoreBouquetInCap(UMyBouquet* _Bouquet)
{
	StoredBouquet = _Bouquet;
}

void ABouquetCapsule::BeginPlay()
{
}
