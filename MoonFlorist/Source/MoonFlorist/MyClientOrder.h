// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */

enum ClientNames 
{
	MARK = 1,
	PEPE,
	KIEKIE,
	SHIKA,
	STEVEN,
	IZZIE
};

enum ClientColourGoals
{
	RED = 1,
	BLUE,
	YELLOW,
	PURPLE,
	GREEN,
	ORANGE
};

enum RedGoalNames
{
	FIESTY = 1,
	REDRED

};

enum BlueGoalNames
{
	COOL = 1,
	BLUEBLUE

};

enum YellowGoalNames
{
	OPTIMISTIC = 1,
	YELLOWYELLOW

};

enum PurpleGoalNames
{
	MAGIC = 1,
	REDBLUE

};

enum GreenGoalNames
{
	ENIGMATIC = 1,
	YELLOWBLUE
};

enum OrangeGoalNames
{
	ADVENTUROUS = 1,
	REDYELLOW
};

class MOONFLORIST_API MyClientOrder
{
public:
	MyClientOrder(int _iName, int _goalColour, int _goalNumber);
	~MyClientOrder();

	FString GetName();
	FString GetColour();
	FString GetGoal();

private:
	int iName;
	int iGoalColour;
	int iGoalNumber;
	FString sName;
	FString sColour;
	FString sGoal;
};
