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

private:

	UMyClientOrder* Order;

	TArray<UMyFlower*> Row1;
	TArray<UMyFlower*> Row2;
	TArray<UMyFlower*> Row3;
	int iScore;
	int iMoney = 70;
};
