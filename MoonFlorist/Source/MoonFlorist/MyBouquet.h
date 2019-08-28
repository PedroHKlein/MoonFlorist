// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyClientOrder.h"
#include "MyFlower.h"

/**
 * 
 */
class MOONFLORIST_API MyBouquet
{
public:
	MyBouquet();
	~MyBouquet();

	void SetCurrOrder(MyClientOrder* _Order);
	MyClientOrder* GetCurrOrder();
	void AddToRow(int _iRow, MyFlower* _Flower);
	void RemoveFromRow(int _iRow, MyFlower* _Flower);
	void BaseColourCheck(int _iCol);
	void ComColourCheck(int _iCol);
	void GradeBouquet();
	TArray<MyFlower*> GetRow(int _iRow);
	int GetWorth();

private:

	MyClientOrder* Order;

	TArray<MyFlower*> Row1;
	TArray<MyFlower*> Row2;
	TArray<MyFlower*> Row3;
	int iScore;
	int iMoney = 70;
};
