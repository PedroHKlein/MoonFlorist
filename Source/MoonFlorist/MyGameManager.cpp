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
	init();
	ConstructCapsule = false;
	HandsCanDeliver = false;
}

// Called every frame
void AMyGameManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Test(DeltaTime);
	ProcessMoney();
}

void AMyGameManager::NewClient()
{
	AMyEmail* temp;
	if (CurrClient == NULL)
	{
		CurrClient = ClientList->GetClients()[FMath::RandRange(0, 99)];
		CurrClient->SetFullDescription();
		CurrClient->ToggleServeable();
		temp = GetWorld()->SpawnActor<AMyEmail>(AMyEmail::StaticClass());
		temp->Orderinit(CurrClient);
		EmailLists->AddToOrders(temp);
	}
	else
	{
		CurrClient = ClientList->GetClients()[FMath::RandRange(0, 99)];
		CurrClient->SetFullDescription();
		CurrClient->ToggleServeable();
		temp = GetWorld()->SpawnActor<AMyEmail>(AMyEmail::StaticClass());
		temp->Orderinit(CurrClient);
		EmailLists->AddToOrders(temp);
	}

	if (CurrentClient == NULL)
	{
		CurrentClient = CurrClient->GetCurrentOrder();
	}
	else
	{
		CurrentClient = CurrClient->GetCurrentOrder();
	}

	//TEST
	
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(*FString(CurrentClient->GetFullDescription()), false));

	
}

void AMyGameManager::NewBouquet()
{
	if (CurrentBouquet == NULL)
	{
		CurrentBouquet = NewObject<UMyBouquet>();
	}
	else
	{
		CurrentBouquet = NewObject<UMyBouquet>();
	}

	CurrentBouquet->SetCurrOrder(CurrClient->GetCurrentOrder());

	//TEST
	/*
	for (int i = 0; i < 7; i++)
	{
		if (i < 2)
		{
			UMyFlower* temp = NewObject<UMyFlower>();
			temp->init(FMath::RandRange(1, 3));
			CurrentBouquet->AddToRow(1, temp);
		}
		if (i > 1 && i < 5)
		{
			UMyFlower* temp = NewObject<UMyFlower>();
			temp->init(FMath::RandRange(1, 3));
			CurrentBouquet->AddToRow(2, temp);
		}
		if (i > 4)
		{
			UMyFlower* temp = NewObject<UMyFlower>();
			temp->init(FMath::RandRange(1, 3));
			CurrentBouquet->AddToRow(3, temp);
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
	*/
	/*
	CurrentBouquet->GradeBouquet();

	FString Debug = FString::FromInt(CurrentBouquet->GetWorth());
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Worth:  %s"), *FString(Debug)), false);

	AddMoney(CurrentBouquet->GetWorth());
	FString Debug1 = FString::FromInt(iMoney);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("My moolah:  %s"), *FString(Debug1)), false);
	*/
}

void AMyGameManager::Test(float delta)
{
	fCurrTime = fCurrTime + delta;

	if (fCurrTime >= fTimeToWait)
	{
		CompleteOrder();
		fCurrTime = 0.0f;
	}
}

void AMyGameManager::BuySeed(int _iID)
{
	if (_iID == SWHITE && iMoney >= 350)
	{
		UMySeed* temp = NewObject<UMySeed>();
		temp->init(_iID);
		Seeds.Add(temp);
		iMoney = iMoney - 50;
	}
	else if (_iID == SWHITE && iMoney <= 350)
	{

	}
	else
	{
		UMySeed* temp = NewObject<UMySeed>();
		temp->init(_iID);
		Seeds.Add(temp);
		iMoney = iMoney - 10;
	}
}

void AMyGameManager::AddMoney(int _iMoolah)
{
	iTempMoney = iTempMoney + _iMoolah;
}

UMyClientOrder* AMyGameManager::GetOrder()
{
	return CurrentClient;
}

UMyBouquet* AMyGameManager::GetBouquet()
{
	return CurrentBouquet;
}

int AMyGameManager::GetMoney()
{
	return iMoney;
}

void AMyGameManager::SetMoney(int _iMoolah)
{
	iMoney = _iMoolah;
}

void AMyGameManager::CompleteOrder()
{
	if (CurrentBouquet->CheckFull())
	{
		CurrentBouquet->GradeBouquet();
		//AddMoney(CurrentBouquet->GetWorth());
		setLastBouquetWorth();
		AMyEmail* temp = GetWorld()->SpawnActor<AMyEmail>(AMyEmail::StaticClass());
		temp->Feedbackinit(CurrClient, CurrentBouquet->GetSuccess(), CurrentBouquet->GetFailure(), (CurrentBouquet->GetWorth() - 70) / 10, CurrentBouquet->GetWorth());
		EmailLists->AddToFeedback(temp);
		CurrClient->UpdateClientDescriptions();
		CurrClient->ToggleServeable();
		NewClient();
		NewBouquet();
	}
}

AMyGoalManager* AMyGameManager::GetGoalList()
{
	return GoalLists;
}

void AMyGameManager::init()
{
	Instance = this;
	GoalLists = GetWorld()->SpawnActor<AMyGoalManager>(AMyGoalManager::StaticClass());
	GoalLists->init();
	ClientList = GetWorld()->SpawnActor<AMyClientManager>(AMyClientManager::StaticClass());
	ClientList->init();
	EmailLists = GetWorld()->SpawnActor<AMyEmailManager>(AMyEmailManager::StaticClass());
	for (int i = 0; i < 3; i++)
	{
		NewClient();
	}
	NewBouquet();
}

AMyGameManager* AMyGameManager::GetInstance()
{
	return Instance;
}

void AMyGameManager::setLastBouquetWorth()
{
	iLastBoquetWorth = CurrentBouquet->GetWorth();
}

int AMyGameManager::getLastBouquetWorth()
{
	return iLastBoquetWorth;
}

AMyClient* AMyGameManager::GetCurrClient()
{
	return CurrClient;
}

AMyEmailManager* AMyGameManager::GetEmailManager()
{
	return EmailLists;
}

void AMyGameManager::ProcessMoney()
{
	if (iTempMoney > 0)
	{
		iTempMoney--;
		iMoney++;
	}
}

int AMyGameManager::GetTempMoney()
{
	return iTempMoney;
}

FString AMyGameManager::MoneyString()
{
	if (iTempMoney > 0)
	{
		return "$" + FString::FromInt(iTempMoney) + " + $" + FString::FromInt(iMoney);
	}
	else
	{
		return "$" + FString::FromInt(iMoney);
	}
}