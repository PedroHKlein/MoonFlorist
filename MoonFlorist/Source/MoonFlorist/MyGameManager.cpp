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

void AMyGameManager::NewBouquet()
{
	if (CurrentBouquet == NULL)
	{
		CurrentBouquet = new MyBouquet();
	}
	else
	{
		delete CurrentBouquet;
		CurrentBouquet = new MyBouquet();
	}

	CurrentBouquet->SetCurrOrder(CurrentClient);

	for (int i = 0; i < 7; i++)
	{
		if (i < 2)
		{
			CurrentBouquet->AddToRow(1, new MyFlower(FMath::RandRange(1, 3)));
		}
		if (i > 1 && i < 5)
		{
			CurrentBouquet->AddToRow(2, new MyFlower(FMath::RandRange(1, 3)));
		}
		if (i > 4)
		{
			CurrentBouquet->AddToRow(3, new MyFlower(FMath::RandRange(1, 3)));
		}
	}

	for (int i = 0; i < CurrentBouquet->GetRow(1).Num(); i++)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Row1:  %s"), *FString(CurrentBouquet->GetRow(1)[i]->GetFlowerName())), false);
	}

	for (int i = 0; i < CurrentBouquet->GetRow(2).Num(); i++)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Row2:  %s"), *FString(CurrentBouquet->GetRow(2)[i]->GetFlowerName())), false);
	}

	for (int i = 0; i < CurrentBouquet->GetRow(3).Num(); i++)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Row3:  %s"), *FString(CurrentBouquet->GetRow(3)[i]->GetFlowerName())), false);
	}

	CurrentBouquet->GradeBouquet();

	FString Debug = FString::FromInt(CurrentBouquet->GetWorth());
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Worth:  %s"), *FString(Debug)), false);

	AddMoney(CurrentBouquet->GetWorth());
	FString Debug1 = FString::FromInt(iMoney);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("My moolah:  %s"), *FString(Debug1)), false);

}

void AMyGameManager::Test(float delta)
{
	fCurrTime = fCurrTime + delta;

	if (fCurrTime >= fTimeToWait)
	{
		NewClient();
		NewBouquet();
		fCurrTime = 0.0f;
	}
}

void AMyGameManager::BuySeed(int _iID)
{
	if (_iID == SWHITE && iMoney >= 350)
	{
		Seeds.Add(new MySeed(_iID));
		iMoney = iMoney - 50;
	}
	else if (_iID == SWHITE && iMoney <= 350)
	{

	}
	else
	{
		Seeds.Add(new MySeed(_iID));
		iMoney = iMoney - 10;
	}
}

void AMyGameManager::AddMoney(int _iMoolah)
{
	iMoney = iMoney + _iMoolah;
}
