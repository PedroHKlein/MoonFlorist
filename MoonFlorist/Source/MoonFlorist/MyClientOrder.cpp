// Fill out your copyright notice in the Description page of Project Settings.


#include "MyClientOrder.h"

MyClientOrder::MyClientOrder(int _iName, int _goalColour, int _goalNumber)
{
	iName = _iName;
	iGoalColour = _goalColour;
	iGoalNumber = _goalNumber;

	switch (iName)
	{
	case MARK:
		sName = "Mark";
		break;
	case PEPE:
		sName = "Pepe";
		break;
	case KIEKIE:
		sName = "KieKie";
		break;
	case SHIKA:
		sName = "Shika";
		break;
	case STEVEN:
		sName = "Steven";
		break;
	case IZZIE:
		sName = "Izzie";
		break;
	default:
		break;
	}

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
			sGoal = "RedRed";
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
			sGoal = "BlueBlue";
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
			sGoal = "YellowYellow";
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
			sGoal = "RedBlue";
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
		case ENIGMATIC:
			sGoal = "Enigmatic";
			break;
		case YELLOWBLUE:
			sGoal = "YellowBlue";
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
			sGoal = "RedYellow";
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
}

MyClientOrder::~MyClientOrder()
{

}

FString MyClientOrder::GetName()
{
	return sName;
}

FString MyClientOrder::GetColour()
{
	return sColour;
}

FString MyClientOrder::GetGoal()
{
	return sGoal;
}

//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Collision!")));