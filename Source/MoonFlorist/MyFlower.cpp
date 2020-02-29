// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFlower.h"

UMyFlower::UMyFlower()
{

}

UMyFlower::~UMyFlower()
{

}

void UMyFlower::init(int _iType)
{
	int Temp = _iType;
	iType = Temp;

	switch (Temp)
	{
	case RED:
		sColour = "Red";
		iRed = 1;
		iBlue = 0;
		iYellow = 0;
		iPurple = 1;
		iGreen = 0;
		iOrange = 1;
		break;
	case BLUE:
		sColour = "Blue";
		iRed = 0;
		iBlue = 1;
		iYellow = 0;
		iPurple = 1;
		iGreen = 1;
		iOrange = 0;
		break;
	case YELLOW:
		sColour = "Yellow";
		iRed = 0;
		iBlue = 0;
		iYellow = 1;
		iPurple = 0;
		iGreen = 1;
		iOrange = 1;
		break;
	case WHITE:
		sColour = "White";
		iRed = 1;
		iBlue = 1;
		iYellow = 1;
		iPurple = 1;
		iGreen = 1;
		iOrange = 1;
		break;
	case PURPLE:
		sColour = "Purple";
		iRed = 1;
		iBlue = 1;
		iYellow = 0;
		iPurple = 1;
		iGreen = 0;
		iOrange = 0;
		break;
	case GREEN:
		sColour = "Green";
		iRed = 0;
		iBlue = 1;
		iYellow = 1;
		iPurple = 0;
		iGreen = 1;
		iOrange = 0;
		break;
	case ORANGE:
		sColour = "Orange";
		iRed = 1;
		iBlue = 0;
		iYellow = 1;
		iPurple = 0;
		iGreen = 0;
		iOrange = 1;
		break;
	default:
		break;
	}
}

int UMyFlower::GetColourScore(int _iCol)
{
	switch (_iCol)
	{
	case RED:
		return iRed;
	case BLUE:
		return iBlue;
	case YELLOW:
		return iYellow;
	case PURPLE:
		return iPurple;
	case GREEN:
		return iGreen;
	case ORANGE:
		return iOrange;
	default:
		return 0;
		break;
	}
}

int UMyFlower::GetFlowerID()
{
	return iType;
}

FString UMyFlower::GetFlowerName()
{
	return sColour;
}