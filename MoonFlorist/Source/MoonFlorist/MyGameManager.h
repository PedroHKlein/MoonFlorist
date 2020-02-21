// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyGoalManager.h"
#include "MyClientManager.h"
#include "MyClientOrder.h"
#include "MyBouquet.h"
#include "MySeed.h"
#include "MyEmailManager.h"
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
	UFUNCTION(BlueprintCallable)
	AMyGameManager* GetInstance();


	UFUNCTION(BlueprintCallable)
	void init();
	UFUNCTION(BlueprintCallable)
	void NewClient();
	UFUNCTION(BlueprintCallable)
	void NewBouquet();
	UFUNCTION(BlueprintCallable)
	void Test(float delta);
	UFUNCTION(BlueprintCallable)
	void BuySeed(int _iID);
	UFUNCTION(BlueprintCallable)
	void AddMoney(int _iMoolah);
	UFUNCTION(BlueprintCallable)
	UMyClientOrder* GetOrder();
	UFUNCTION(BlueprintCallable)
	UMyBouquet* GetBouquet();
	UFUNCTION(BlueprintCallable)
	int GetMoney();
	UFUNCTION(BlueprintCallable)
	void SetMoney(int _iMoolah);
	UFUNCTION(BlueprintCallable)
	void CompleteOrder();
	UFUNCTION(BlueprintCallable)
	AMyGoalManager* GetGoalList();
	UFUNCTION(BlueprintCallable)
	void setLastBouquetWorth();
	UFUNCTION(BlueprintCallable)
	int getLastBouquetWorth();
	UFUNCTION(BlueprintCallable)
	AMyClient* GetCurrClient();

private:
	UPROPERTY()
	AMyGoalManager* GoalLists;
	UPROPERTY()
	AMyClientManager* ClientList;
	UPROPERTY()
	AMyClient* CurrClient;
	UPROPERTY()
	UMyClientOrder* CurrentClient;
	UPROPERTY()
	UMyBouquet* CurrentBouquet;
	UPROPERTY()
	float fTimeToWait = 6.0f;
	UPROPERTY()
	float fCurrTime = 6.0f;
	UPROPERTY()
	int iMoney = 70;
	UPROPERTY()
	AMyGameManager* Instance;
	UPROPERTY()
	TArray<UMySeed*> Seeds;
	UPROPERTY()
	int iLastBoquetWorth;
	UPROPERTY()
	AMyEmailManager* EmailLists;
};
