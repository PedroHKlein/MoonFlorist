// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */

enum FLOWERCOLOUR
{
	RED = 1,
	BLUE,
	YELLOW,
	PURPLE,
	GREEN,
	ORANGE,
	WHITE
};

class MOONFLORIST_API MyFlower
{
public:
	MyFlower(int _iType);
	~MyFlower();
	int GetColourScore(int _iCol);
	int GetFlowerID();
	FString GetFlowerName();

private:
	//type of flower
	int iType;
	FString sColour;

	//Score Values
	int iRed = 0;
	int iBlue = 0;
	int iYellow = 0;
	int iPurple = 0;
	int iGreen = 0;
	int iOrange = 0;
};
