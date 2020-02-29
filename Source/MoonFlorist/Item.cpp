// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);
	Name = "Item Name";
	Price = 0;
	CanBeSold = true;
	Stacks = 1;
	Stackable = true;
}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	
}

AItem* AItem::CreateItem( EItemType _ItemType, FString _Name,FString _IconPath, int _Stacks, int _Price, bool _Stackable, bool _InStorage)
{ 
	if (this != nullptr)
	{
		this->Icon = LoadObject<UTexture2D>(NULL, *_IconPath, NULL, LOAD_None, NULL);
		this->ItemType = _ItemType;
		this->Name.ToString(_Name);
		this->Stacks = _Stacks;
		this->Price = _Price;
		this->Stackable = _Stackable;
		this->InStorage = _InStorage;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Nullptr when creating item"));
		return nullptr;
	}

	return this;
}

void AItem::SetItemType(EItemType _ItemType)
{
	ItemType = _ItemType;
}

void AItem::SetName(FName _Name)
{
	Name = _Name;
}

void AItem::SetPrice(int _Amount)
{
	Price = _Amount;
}

void AItem::SetStacks(int _Amount)
{
	Stacks = _Amount;
}

void AItem::SetIcon(UTexture2D* _Icon)
{
	Icon = _Icon;
}

void AItem::SetMesh(UStaticMesh* _Mesh)
{
	Mesh->SetStaticMesh(_Mesh);
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

