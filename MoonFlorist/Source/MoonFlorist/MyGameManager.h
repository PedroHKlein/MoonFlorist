// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyClientOrder.h"
#include "MyBouquet.h"
#include "MySeed.h"
#include "GameFramework/Actor.h"
#include "MyGameManager.generated.h"

UCLASS()
class MOONFLORIST_API AMyGameManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyGameManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void NewClient();
	void NewBouquet();
	void Test(float delta);
	void BuySeed(int _iID);
	void AddMoney(int _iMoolah);

private:
	MyClientOrder* CurrentClient;
	MyBouquet* CurrentBouquet;
	float fTimeToWait = 6.0f;
	float fCurrTime = 6.0f;
	int iMoney = 70;

	TArray<MySeed*> Seeds;
};
