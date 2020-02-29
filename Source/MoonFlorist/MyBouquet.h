// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyClientOrder.h"
#include "MyFlower.h"
#include "UObject/NoExportTypes.h"
#include "MyBouquet.generated.h"

/**
 * 
 */
UCLASS()
class MOONFLORIST_API UMyBouquet : public UObject
{
	GENERATED_BODY()
public:
	UMyBouquet();
	~UMyBouquet();

	UFUNCTION(BlueprintCallable)
	void SetCurrOrder(UMyClientOrder* _Order);
	UFUNCTION(BlueprintCallable)
	UMyClientOrder* GetCurrOrder();
	UFUNCTION(BlueprintCallable)
	void AddToRow(int _iRow, UMyFlower* _Flower);
	UFUNCTION(BlueprintCallable)
	void RemoveFromRow(int _iRow, UMyFlower* _Flower);
	UFUNCTION(BlueprintCallable)
	void BaseColourCheck(int _iCol);
	UFUNCTION(BlueprintCallable)
	void ComColourCheck(int _iCol);
	UFUNCTION(BlueprintCallable)
	void GradeBouquet();
	UFUNCTION(BlueprintCallable)
	TArray<UMyFlower*> GetRow(int _iRow);
	UFUNCTION(BlueprintCallable)
	int GetWorth();
	UFUNCTION(BlueprintCallable)
	void ClearBouquet();
	UFUNCTION(BlueprintCallable)
	UMyFlower* SpawnFlower(int _iType);
	UFUNCTION(BlueprintCallable)
	bool CheckFull();
	UFUNCTION(BlueprintCallable)
	void GradeBouquetWithoutMoney();



private:
	UPROPERTY()
	UMyClientOrder* Order;
	UPROPERTY()
	TArray<UMyFlower*> Row1;
	UPROPERTY()
	TArray<UMyFlower*> Row2;
	UPROPERTY()
	TArray<UMyFlower*> Row3;
	UPROPERTY()
	int iScore;
	UPROPERTY()
	int iMoney = 70;
	UPROPERTY()
	TArray<UMyGoal*> GoalSuccess;
	UPROPERTY()
	TArray<UMyGoal*> GoalFailure;

};
