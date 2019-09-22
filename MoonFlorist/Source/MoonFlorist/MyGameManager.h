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


private:
	UMyClientOrder* CurrentClient;
	UMyBouquet* CurrentBouquet;
	float fTimeToWait = 6.0f;
	float fCurrTime = 6.0f;
	int iMoney = 70;

	TArray<UMySeed*> Seeds;

};
