// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBouquet.h"

MyBouquet::MyBouquet()
{

}

MyBouquet::~MyBouquet()
{
	
}

void MyBouquet::SetCurrOrder(MyClientOrder* _Order)
{
	if (_Order != NULL)
	{
		Order = _Order;
	}
}

MyClientOrder* MyBouquet::GetCurrOrder()
{
	return Order;
}

void MyBouquet::AddToRow(int _iRow, MyFlower* _Flower)
{
	switch (_iRow)
	{
	case 1:
		Row1.Add(_Flower);
		break;
	case 2:
		Row2.Add(_Flower);
		break;
	case 3:
		Row3.Add(_Flower);
		break;
	default:
		break;
	}
}

void MyBouquet::RemoveFromRow(int _iRow, MyFlower* _Flower)
{

}

void MyBouquet::BaseColourCheck(int _iCol)
{
	static int iTemp;
	for (int j = 0; j < Row1.Num(); j++)
	{
		iTemp = iTemp + Row1[j]->GetColourScore(_iCol);
	}
	if (iTemp >= 2)
	{
		iScore = iScore + iTemp;
	}
	iTemp = 0;
	for (int j = 0; j < Row2.Num(); j++)
	{
		iTemp = iTemp + Row2[j]->GetColourScore(_iCol);
	}
	if (iTemp >= 2)
	{
		iScore = iScore + iTemp;
	}
	iTemp = 0;
	for (int j = 0; j < Row3.Num(); j++)
	{
		iTemp = iTemp + Row3[j]->GetColourScore(_iCol);
	}
	if (iTemp >= 2)
	{
		iScore = iScore + iTemp;
	}
	iTemp = 0;
}

void MyBouquet::ComColourCheck(int _iCol)
{
	static int iTemp;
	for (int j = 0; j < Row1.Num(); j++)
	{
		iTemp = iTemp + Row1[j]->GetColourScore(_iCol);
	}
	if (iTemp >= 2 && Row1[0]->GetFlowerID() != Row1[1]->GetFlowerID())
	{
		iScore = iScore + iTemp;
	}
	iTemp = 0;
	for (int j = 0; j < Row2.Num(); j++)
	{
		iTemp = iTemp + Row2[j]->GetColourScore(_iCol);
	}
	if (iTemp >= 2 && (Row2[0]->GetFlowerID() != Row2[1]->GetFlowerID() || Row2[0]->GetFlowerID() != Row2[2]->GetFlowerID() || Row2[1]->GetFlowerID() != Row2[2]->GetFlowerID()))
	{
		iScore = iScore + iTemp;
	}
	iTemp = 0;
	for (int j = 0; j < Row3.Num(); j++)
	{
		iTemp = iTemp + Row3[j]->GetColourScore(_iCol);
	}
	if (iTemp >= 2 && Row3[0]->GetFlowerID() != Row3[1]->GetFlowerID())
	{
		iScore = iScore + iTemp;
	}
	iTemp = 0;
}

void MyBouquet::GradeBouquet()
{
	TArray<MyGoal*> Temp = GetCurrOrder()->GetGoals();

	for (int i = 0; i < Temp.Num(); i++)
	{
		switch (Temp[i]->GetColourID())
		{
		case RED:
			BaseColourCheck(RED);
			break;
		case BLUE:
			BaseColourCheck(BLUE);
			break;
		case YELLOW:
			BaseColourCheck(YELLOW);
			break;
		case PURPLE:
			ComColourCheck(PURPLE);
			break;
		case GREEN:
			ComColourCheck(GREEN);
			break;
		case ORANGE:
			ComColourCheck(GREEN);
			break;
		default:
			break;
		}
	}

	iMoney = iMoney + (iScore * 10);
	iScore = 0;
}

TArray<MyFlower*> MyBouquet::GetRow(int _iRow)
{
	switch (_iRow)
	{
	case 1:
		return Row1;
	case 2:
		return Row2;
	case 3:
		return Row3;
	default:
		return Row1;
		break;
	}
}

int MyBouquet::GetWorth()
{
	return iMoney;
}
