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
		case AMOROUS:
			sGoal = "<Incomplete> Amorous";
			break;
		case PASSIONATE:
			sGoal = "<Incomplete> Passionate";
			break;
		case LOVE:
			sGoal = "<Incomplete> like Love";
			break;
		case CORAGEOUS:
			sGoal = "<Incomplete> Courageous";
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
		case CALM:
			sGoal = "<Incomplete> Calm";
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
		case BUBBLY:
			sGoal = "<Incomplete> Bubbly";
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
		case REGAL:
			sGoal = "<Incomplete> Regal";
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
		case ANCIENT:
			sGoal = "<Incomplete> Ancient";
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
		case ENERGETIC:
			sGoal = "<Incomplete> Energetic";
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

void UMyGoal::SetComplete()
{
	switch (iGoalColour)
	{
		//RED GOALS HERE
	case GRED:
		sColour = "Red";
		switch (iGoalNumber)
		{
		case FIESTY:
			sGoal = "<Red> Fiesty";
			break;
		case AMOROUS:
			sGoal = "<Red> Amorous";
			break;
		case PASSIONATE:
			sGoal = "<Red> Passionate";
			break;
		case LOVE:
			sGoal = "<Red> like Love";
			break;
		case CORAGEOUS:
			sGoal = "<Red> Courageous";
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
			sGoal = "<Blue> Cool";
			break;
		case CALM:
			sGoal = "<Blue> Calm";
			break;
		case TRUST:
			sGoal = "<Blue> like Trust";
			break;
		case SMART:
			sGoal = "<Blue> Smart";
			break;
		case PEACEFUL:
			sGoal = "<Blue> Peaceful";
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
			sGoal = "<Yellow> Optimistic";
			break;
		case BUBBLY:
			sGoal = "<Yellow> Bubbly";
			break;
		case CHEERFUL:
			sGoal = "<Yellow> Cheerful";
			break;
		case BRIGHT:
			sGoal = "<Yellow> Bright";
			break;
		case SUNNY:
			sGoal = "<Yellow> Sunny";
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
			sGoal = "<Purple> Magic";
			break;
		case REGAL:
			sGoal = "<Purple> Regal";
			break;
		case MYSTERY:
			sGoal = "<Purple> Mysterious";
			break;
		case INSPIRING:
			sGoal = "<Purple> Inspiring";
			break;
		case SENSUAL:
			sGoal = "<Purple> Sensual";
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
			sGoal = "<Green> Natural";
			break;
		case ANCIENT:
			sGoal = "<Green> Ancient";
			break;
		case DOWNTOEARTH:
			sGoal = "<Green> Down to Earth";
			break;
		case CLEAN:
			sGoal = "<Green> Clean";
			break;
		case FORWARD:
			sGoal = "<Green> Forward";
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
			sGoal = "<Orange> Adventurous";
			break;
		case ENERGETIC:
			sGoal = "<Orange> Energetic";
			break;
		case WARM:
			sGoal = "<Orange> Warm";
			break;
		case ZESTY:
			sGoal = "<Orange> Zesty";
			break;
		case TANGY:
			sGoal = "<Orange> Tangy";
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
}