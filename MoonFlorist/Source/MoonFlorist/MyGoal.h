// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */

enum ClientColourGoals
{
	GRED = 1,
	GBLUE,
	GYELLOW,
	GPURPLE,
	GGREEN,
	GORANGE
};

enum RedGoalNames
{
	FIESTY = 1,
	PASSIONATE,
	LOVE,
	CORAGEOUS,
	REDRED

};

enum BlueGoalNames
{
	COOL = 1,
	TRUST,
	SMART,
	PEACEFUL,
	BLUEBLUE

};

enum YellowGoalNames
{
	OPTIMISTIC = 1,
	CHEERFUL,
	BRIGHT,
	SUNNY,
	YELLOWYELLOW

};

enum PurpleGoalNames
{
	MAGIC = 1,
	MYSTERY,
	INSPIRING,
	SENSUAL,
	REDBLUE

};

enum GreenGoalNames
{
	NATURAL = 1,
	DOWNTOEARTH,
	CLEAN,
	FORWARD,
	YELLOWBLUE
};

enum OrangeGoalNames
{
	ADVENTUROUS = 1,
	WARM,
	ZESTY,
	TANGY,
	REDYELLOW
};


class MOONFLORIST_API MyGoal
{
public:
	MyGoal(int _iCol, int iGoal);
	~MyGoal();

	int GetColourID();
	int GetGoalID();
	FString GetColour();
	FString GetGoal();

private:

	int iGoalColour;
	int iGoalNumber;
	FString sColour;
	FString sGoal;
};
