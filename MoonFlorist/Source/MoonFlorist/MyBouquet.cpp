// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBouquet.h"
#include "Engine/Engine.h"

UMyBouquet::UMyBouquet()
{

}

UMyBouquet::~UMyBouquet()
{

}

void UMyBouquet::SetCurrOrder(UMyClientOrder* _Order)
{
	if (_Order != NULL)
	{
		Order = _Order;
	}
}

UMyClientOrder* UMyBouquet::GetCurrOrder()
{
	return Order;
}

void UMyBouquet::AddToRow(int _iRow, UMyFlower* _Flower)
{
	switch (_iRow)
	{
	case 1:
		if (Row1.Num() < 2)
		{
			Row1.Add(_Flower);
		}
		break;
	case 2:
		if (Row2.Num() < 3)
		{
			Row2.Add(_Flower);
		}
		break;
	case 3:
		if (Row3.Num() < 2)
		{
			Row3.Add(_Flower);
		}
		break;
	default:
		break;
	}
}

void UMyBouquet::RemoveFromRow(int _iRow, UMyFlower* _Flower)
{

}

void UMyBouquet::BaseColourCheck(int _iCol)
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

void UMyBouquet::ComColourCheck(int _iCol)
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

void UMyBouquet::GradeBouquet()
{
	TArray<UMyGoal*> Temp = GetCurrOrder()->GetGoals();

	for (int i = 0; i < Temp.Num(); i++)
	{
		int temp;

		switch (Temp[i]->GetColourID())
		{
		case RED:
			temp = iScore;
			BaseColourCheck(RED);
			if (iScore > temp)
			{
				Temp[i]->SetComplete();
				//EMAIL GOAL SUCCESS UPDATE HERE
				GoalSuccess.Push(Temp[i]);
			}
			else
			{
				//EMAIL GOAL FAIL UPDATE HERE
				GoalFailure.Push(Temp[i]);
			}
			break;
		case BLUE:
			temp = iScore;
			BaseColourCheck(BLUE);
			if (iScore > temp)
			{
				Temp[i]->SetComplete();
				//EMAIL GOAL SUCCESS UPDATE HERE
				GoalSuccess.Push(Temp[i]);
			}
			else
			{
				//EMAIL GOAL FAIL UPDATE HERE
				GoalFailure.Push(Temp[i]);
			}
			break;
		case YELLOW:
			temp = iScore;
			BaseColourCheck(YELLOW);
			if (iScore > temp)
			{
				Temp[i]->SetComplete();
				//EMAIL GOAL SUCCESS UPDATE HERE
				GoalSuccess.Push(Temp[i]);
			}
			else
			{
				//EMAIL GOAL FAIL UPDATE HERE
				GoalFailure.Push(Temp[i]);
			}
			break;
		case PURPLE:
			temp = iScore;
			ComColourCheck(PURPLE);
			if (iScore > temp)
			{
				Temp[i]->SetComplete();
				//EMAIL GOAL SUCCESS UPDATE HERE
				GoalSuccess.Push(Temp[i]);
			}
			else
			{
				//EMAIL GOAL FAIL UPDATE HERE
				GoalFailure.Push(Temp[i]);
			}
			break;
		case GREEN:
			temp = iScore;
			ComColourCheck(GREEN);
			if (iScore > temp)
			{
				Temp[i]->SetComplete();
				//EMAIL GOAL SUCCESS UPDATE HERE
				GoalSuccess.Push(Temp[i]);
			}
			else
			{
				//EMAIL GOAL FAIL UPDATE HERE
				GoalFailure.Push(Temp[i]);
			}
			break;
		case ORANGE:
			temp = iScore;
			ComColourCheck(ORANGE);
			if (iScore > temp)
			{
				Temp[i]->SetComplete();
				//EMAIL GOAL SUCCESS UPDATE HERE
				GoalSuccess.Push(Temp[i]);
			}
			else
			{
				//EMAIL GOAL FAIL UPDATE HERE
				GoalFailure.Push(Temp[i]);
			}
			break;
		default:
			break;
		}
	}

	iMoney = iMoney + (iScore * 10);
	iScore = 0;
}

void UMyBouquet::GradeBouquetWithoutMoney()
{
	TArray<UMyGoal*> Temp = GetCurrOrder()->GetGoals();

	for (int i = 0; i < Temp.Num(); i++)
	{
		int temp;

		switch (Temp[i]->GetColourID())
		{
		case RED:
			temp = iScore;
			BaseColourCheck(RED);
			if (iScore > temp)
			{
				Temp[i]->SetComplete();
				//EMAIL GOAL SUCCESS UPDATE HERE
				GoalSuccess.Push(Temp[i]);
			}
			else
			{
				//EMAIL GOAL FAIL UPDATE HERE
				GoalFailure.Push(Temp[i]);
			}
			break;
		case BLUE:
			temp = iScore;
			BaseColourCheck(BLUE);
			if (iScore > temp)
			{
				Temp[i]->SetComplete();
				//EMAIL GOAL SUCCESS UPDATE HERE
				GoalSuccess.Push(Temp[i]);
			}
			else
			{
				//EMAIL GOAL FAIL UPDATE HERE
				GoalFailure.Push(Temp[i]);
			}
			break;
		case YELLOW:
			temp = iScore;
			BaseColourCheck(YELLOW);
			if (iScore > temp)
			{
				Temp[i]->SetComplete();
				//EMAIL GOAL SUCCESS UPDATE HERE
				GoalSuccess.Push(Temp[i]);
			}
			else
			{
				//EMAIL GOAL FAIL UPDATE HERE
				GoalFailure.Push(Temp[i]);
			}
			break;
		case PURPLE:
			temp = iScore;
			ComColourCheck(PURPLE);
			if (iScore > temp)
			{
				Temp[i]->SetComplete();
				//EMAIL GOAL SUCCESS UPDATE HERE
				GoalSuccess.Push(Temp[i]);
			}
			else
			{
				//EMAIL GOAL FAIL UPDATE HERE
				GoalFailure.Push(Temp[i]);
			}
			break;
		case GREEN:
			temp = iScore;
			ComColourCheck(GREEN);
			if (iScore > temp)
			{
				Temp[i]->SetComplete();
				//EMAIL GOAL SUCCESS UPDATE HERE
				GoalSuccess.Push(Temp[i]);
			}
			else
			{
				//EMAIL GOAL FAIL UPDATE HERE
				GoalFailure.Push(Temp[i]);
			}
			break;
		case ORANGE:
			temp = iScore;
			ComColourCheck(ORANGE);
			if (iScore > temp)
			{
				Temp[i]->SetComplete();
				//EMAIL GOAL SUCCESS UPDATE HERE
				GoalSuccess.Push(Temp[i]);
			}
			else
			{
				//EMAIL GOAL FAIL UPDATE HERE
				GoalFailure.Push(Temp[i]);
			}
			break;
		default:
			break;
		}
	}

	iScore = 0;
}

TArray<UMyFlower*> UMyBouquet::GetRow(int _iRow)
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

int UMyBouquet::GetWorth()
{
	return iMoney;
}

void UMyBouquet::ClearBouquet()
{
	Row1.Empty();
	Row2.Empty();
	Row3.Empty();
}

UMyFlower* UMyBouquet::SpawnFlower(int _iType)
{
	UMyFlower* temp = NewObject<UMyFlower>();
	temp->init(_iType);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Flower added:  %s"), *FString(temp->GetFlowerName())), false);

	return temp;
}


bool UMyBouquet::CheckFull()
{
	bool temp;

	if ((Row1.Num() == 2) && (Row2.Num() == 3) && (Row3.Num() == 2))
	{
		temp = true;
	}
	else
	{
		temp = false;
	}

	return temp;
}