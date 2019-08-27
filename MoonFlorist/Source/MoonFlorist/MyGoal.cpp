// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGoal.h"

MyGoal::MyGoal(int _iCol, int _iGoal)
{

	iGoalColour = _iCol;
	iGoalNumber = _iGoal;

	switch (iGoalColour)
	{
		//RED GOALS HERE
	case RED:
		sColour = "Red";
		switch (iGoalNumber)
		{
		case FIESTY:
			sGoal = "Fiesty";
			break;
		case REDRED:
			sGoal = "like RedRed";
			break;
		case PASSIONATE:
			sGoal = "Passionate";
			break;
		case LOVE:
			sGoal = "like Love";
			break;
		case CORAGEOUS:
			sGoal = "Corageous";
			break;
		default:
			break;
		}
		break;
		//BLUE GOALS HERE
	case BLUE:
		sColour = "Blue";
		switch (iGoalNumber)
		{
		case COOL:
			sGoal = "Cool";
			break;
		case BLUEBLUE:
			sGoal = "like BlueBlue";
			break;
		case TRUST:
			sGoal = "like Trust";
			break;
		case SMART:
			sGoal = "Smart";
			break;
		case PEACEFUL:
			sGoal = "Peaceful";
			break;
		default:
			break;
		}
		break;
		//YELLOW GOALS HERE
	case YELLOW:
		sColour = "Yellow";
		switch (iGoalNumber)
		{
		case OPTIMISTIC:
			sGoal = "Optimistic";
			break;
		case YELLOWYELLOW:
			sGoal = "like YellowYellow";
			break;
		case CHEERFUL:
			sGoal = "Cheerful";
			break;
		case BRIGHT:
			sGoal = "Bright";
			break;
		case SUNNY:
			sGoal = "Sunny";
			break;
		default:
			break;
		}
		break;
		//PURPLE GOALS HERE
	case PURPLE:
		sColour = "Purple";
		switch (iGoalNumber)
		{
		case MAGIC:
			sGoal = "Magic";
			break;
		case REDBLUE:
			sGoal = "like RedBlue";
			break;
		case MYSTERY:
			sGoal = "Mysterious";
			break;
		case INSPIRING:
			sGoal = "Inspiring";
			break;
		case SENSUAL:
			sGoal = "Sensual";
			break;
		default:
			break;
		}
		break;
		//GREEN GOALS HERE
	case GREEN:
		sColour = "Green";
		switch (iGoalNumber)
		{
		case NATURAL:
			sGoal = "Natural";
			break;
		case YELLOWBLUE:
			sGoal = "like YellowBlue";
			break;
		case DOWNTOEARTH:
			sGoal = "Down to Earth";
			break;
		case CLEAN:
			sGoal = "Clean";
			break;
		case FORWARD:
			sGoal = "Forward";
			break;
		default:
			break;
		}
		break;
		//ORANGE GOALS HERE
	case ORANGE:
		sColour = "Orange";
		switch (iGoalNumber)
		{
		case ADVENTUROUS:
			sGoal = "Adventurous";
			break;
		case REDYELLOW:
			sGoal = "like RedYellow";
			break;
		case WARM:
			sGoal = "Warm";
			break;
		case ZESTY:
			sGoal = "Zesty";
			break;
		case TANGY:
			sGoal = "Tangy";
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
}

MyGoal::~MyGoal()
{

}

int MyGoal::GetColourID()
{
	return iGoalColour;
}

int MyGoal::GetGoalID()
{
	return iGoalNumber;
}

FString MyGoal::GetColour()
{
	return sColour;
}

FString MyGoal::GetGoal()
{
	return sGoal;
}
