// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFlower.h"

MyFlower::MyFlower(int _iType)
{
	int Temp = _iType;
	iType = Temp;

	switch (Temp)
	{
	case RED:
		iRed = 1;
		iBlue = 0;
		iYellow = 0;
		iPurple = 1;
		iGreen = 0;
		iOrange = 1;
		break;
	case BLUE:
		iRed = 0;
		iBlue = 1;
		iYellow = 0;
		iPurple = 1;
		iGreen = 1;
		iOrange = 0;
		break;
	case YELLOW:
		iRed = 0;
		iBlue = 0;
		iYellow = 1;
		iPurple = 0;
		iGreen = 1;
		iOrange = 1;
		break;
	case WHITE:
		iRed = 1;
		iBlue = 1;
		iYellow = 1;
		iPurple = 1;
		iGreen = 1;
		iOrange = 1;
		break;
	case PURPLE:
		iRed = 1;
		iBlue = 1;
		iYellow = 0;
		iPurple = 1;
		iGreen = 0;
		iOrange = 0;
		break;
	case GREEN:
		iRed = 0;
		iBlue = 1;
		iYellow = 1;
		iPurple = 0;
		iGreen = 1;
		iOrange = 0;
		break;
	case ORANGE:
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

MyFlower::~MyFlower()
{
}
