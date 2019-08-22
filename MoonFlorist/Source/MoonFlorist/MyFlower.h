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
	WHITE,
	PURPLE,
	GREEN,
	ORANGE
};

class MOONFLORIST_API MyFlower
{
public:
	MyFlower(int _iType);
	~MyFlower();

private:
	//type of flower
	int iType;

	//Score Values
	int iRed = 0;
	int iBlue = 0;
	int iYellow = 0;
	int iPurple = 0;
	int iGreen = 0;
	int iOrange = 0;
};
