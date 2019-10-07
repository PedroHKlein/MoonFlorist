// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGoal.h"

UMyGoal::UMyGoal()
{
}

void UMyGoal::init(int _iCol, int _iGoal)
{

	iGoalColour = _iCol;
	iGoalNumber = _iGoal;

	switch (iGoalColour)
	{
		//RED GOALS HERE
	case GRED:
		sColour = "Red";
		switch (iGoalNumber)
		{
		case FIESTY:
			sGoal = "<Incomplete> Fiesty";
			break;
		case REDRED:
			sGoal = "<Incomplete> like RedRed";
			break;
		case PASSIONATE:
			sGoal = "<Incomplete> Passionate";
			break;
		case LOVE:
			sGoal = "<Incomplete> like Love";
			break;
		case CORAGEOUS:
			sGoal = "<Incomplete> Corageous";
			break;
		default:
			break;
		}
		break;
		//BLUE GOALS HERE
	case GBLUE:
		sColour = "Blue ";
		switch (iGoalNumber)
		{
		case COOL:
			sGoal = "<Incomplete> Cool";
			break;
		case BLUEBLUE:
			sGoal = "<Incomplete> like BlueBlue";
			break;
		case TRUST:
			sGoal = "<Incomplete> like Trust";
			break;
		case SMART:
			sGoal = "<Incomplete> Smart";
			break;
		case PEACEFUL:
			sGoal = "<Incomplete> Peaceful";
			break;
		default:
			break;
		}
		break;
		//YELLOW GOALS HERE
	case GYELLOW:
		sColour = "Yellow";
		switch (iGoalNumber)
		{
		case OPTIMISTIC:
			sGoal = "<Incomplete> Optimistic";
			break;
		case YELLOWYELLOW:
			sGoal = "<Incomplete> like YellowYellow";
			break;
		case CHEERFUL:
			sGoal = "<Incomplete> Cheerful";
			break;
		case BRIGHT:
			sGoal = "<Incomplete> Bright";
			break;
		case SUNNY:
			sGoal = "<Incomplete> Sunny";
			break;
		default:
			break;
		}
		break;
		//PURPLE GOALS HERE
	case GPURPLE:
		sColour = "Purple ";
		switch (iGoalNumber)
		{
		case MAGIC:
			sGoal = "<Incomplete> Magic";
			break;
		case REDBLUE:
			sGoal = "<Incomplete> like RedBlue";
			break;
		case MYSTERY:
			sGoal = "<Incomplete> Mysterious";
			break;
		case INSPIRING:
			sGoal = "<Incomplete> Inspiring";
			break;
		case SENSUAL:
			sGoal = "<Incomplete> Sensual";
			break;
		default:
			break;
		}
		break;
		//GREEN GOALS HERE
	case GGREEN:
		sColour = "Green ";
		switch (iGoalNumber)
		{
		case NATURAL:
			sGoal = "<Incomplete> Natural";
			break;
		case YELLOWBLUE:
			sGoal = "<Incomplete> like YellowBlue";
			break;
		case DOWNTOEARTH:
			sGoal = "<Incomplete> Down to Earth";
			break;
		case CLEAN:
			sGoal = "<Incomplete> Clean";
			break;
		case FORWARD:
			sGoal = "<Incomplete> Forward";
			break;
		default:
			break;
		}
		break;
		//ORANGE GOALS HERE
	case GORANGE:
		sColour = "Orange";
		switch (iGoalNumber)
		{
		case ADVENTUROUS:
			sGoal = "<Incomplete> Adventurous";
			break;
		case REDYELLOW:
			sGoal = "<Incomplete> like RedYellow";
			break;
		case WARM:
			sGoal = "<Incomplete> Warm";
			break;
		case ZESTY:
			sGoal = "<Incomplete> Zesty";
			break;
		case TANGY:
			sGoal = "<Incomplete> Tangy";
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
}

UMyGoal::~UMyGoal()
{

}

int UMyGoal::GetColourID()
{
	return iGoalColour;
}

int UMyGoal::GetGoalID()
{
	return iGoalNumber;
}

FString UMyGoal::GetColour()
{
	return sColour;
}

FString UMyGoal::GetGoal()
{
	return sGoal;
}