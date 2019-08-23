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
	case KIKI:
		sName = "KiKi";
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
	case JONTY:
		sName = "Jonty";
		break;
	case ALEX:
		sName = "Alex";
		break;
	case FRASER:
		sName = "Fraser";
		break;
	case ROURKE:
		sName = "Rourke";
		break;
	case ROWAN:
		sName = "Rowan";
		break;
	case MICHAEL:
		sName = "Michael";
		break;
	case SHUNI:
		sName = "Shuni";
		break;
	case JESSKALOO:
		sName = "Jesska-Loo";
		break;
	case CASPIAN:
		sName = "Caspian";
		break;
	case MATI:
		sName = "Mati";
		break;
	case JEREMY:
		sName = "Jeremy";
		break;
	case ROGER:
		sName = "Roger";
		break;
	case KERRY:
		sName = "Kerry";
		break;
	case VIVIAN:
		sName = "Vivian";
		break;
	case SALLY:
		sName = "Sally";
		break;
	case JAMES:
		sName = "James";
		break;
	case JIMBO:
		sName = "Jimbo";
		break;
	case DONUT:
		sName = "Donut";
		break;
	case JIMOTHY:
		sName = "Jimothy";
		break;
	case JASPOR:
		sName = "Jaspor";
		break;
	case CARLO:
		sName = "Carlo";
		break;
	case LARISSA:
		sName = "Larissa";
		break;
	case MARA:
		sName = "Mara";
		break;
	case CAROLINE:
		sName = "Caroline";
		break;
	case SAMI:
		sName = "Sami";
		break;
	case KATE:
		sName = "Kate";
		break;
	case BENNET:
		sName = "Bennet";
		break;
	case RYAN:
		sName = "Ryan";
		break;
	case FRANCIS:
		sName = "Francis";
		break;
	case ELLIE:
		sName = "Ellie";
		break;
	case REBEKKAH:
		sName = "Rebekkah";
		break;
	case SOFIE:
		sName = "Sofie";
		break;
	case ZANNI:
		sName = "Zanni";
		break;
	case HOLLY:
		sName = "Holly";
		break;
	case EMMA:
		sName = "Emma";
		break;
	case ROBYN:
		sName = "Robyn";
		break;
	case YULI:
		sName = "Yuli";
		break;
	case PAULA:
		sName = "Paula";
		break;
	case MEG:
		sName = "Meg";
		break;
	case BERT:
		sName = "Bert";
		break;
	case MAXWELL:
		sName = "Maxwell";
		break;
	case ABIGAIL:
		sName = "Abigail";
		break;
	case ALEXANDRA:
		sName = "Alexandra";
		break;
	case AMANDA:
		sName = "Amanda";
		break;
	case ARIANNE:
		sName = "Arianne";
		break;
	case BAILEY:
		sName = "Bailey";
		break;
	case BEN:
		sName = "Ben";
		break;
	case BETH:
		sName = "Beth";
		break;
	case BLAIR:
		sName = "Blair";
		break;
	case BO:
		sName = "Bo";
		break;
	case BRIDGET:
		sName = "Bridget";
		break;
	case BROOKE:
		sName = "Brooke";
		break;
	case BECKY:
		sName = "Becky";
		break;
	case CLAIRE:
		sName = "Claire";
		break;
	case DAMIEN:
		sName = "Damien";
		break;
	case DANNY:
		sName = "Danny";
		break;
	case IVAN:
		sName = "Ivan";
		break;
	case SAM:
		sName = "Sam";
		break;
	case SID:
		sName = "Sid";
		break;
	case TECE:
		sName = "Tece";
		break;
	case ASMA:
		sName = "Asma";
		break;
	case SHILPA:
		sName = "Shilpa";
		break;
	case SAMAH:
		sName = "Samah";
		break;
	case TAMRYN:
		sName = "Tamryn";
		break;
	case CALLAN:
		sName = "Callan";
		break;
	case FAWAD:
		sName = "Fawad";
		break;
	case DAVID: 
		sName = "David";
		break;
	case ANDREW:
		sName = "Andrew";
		break;
	case SHANNON:
		sName = "Shannon";
		break;
	case KAITLIN:
		sName = "Kaitlin";
		break;
	case PIGEON:
		sName = "Pigeon";
		break;
	case BOOF:
		sName = "Boof";
		break;
	case ANNA:
		sName = "Anna Rose";
		break;
	case KIMBERLY:
		sName = "Kimmi";
		break;
	case SASKIA:
		sName = "Saskia";
		break;
	case STEPH:
		sName = "Steph";
		break;
	case PINKY:
		sName = "Pinky";
		break;
	case SARAH:
		sName = "Sarah";
		break;
	case SERENA:
		sName = "Serena";
		break;
	case IDA:
		sName = "Ida";
		break;
	case LAUREN:
		sName = "Lauren";
		break;
	case KEIRA:
		sName = "Keira";
		break;
	case RIANNA:
		sName = "Rianna";
		break;
	case ROSARIA:
		sName = "Rosaria";
		break;
	case JHARAIZ:
		sName = "Jharaiz";
		break;
	case AMY:
		sName = "Amy";
		break;
	case JANELLE:
		sName = "Janelle";
		break;
	case JORDAN:
		sName = "Jordan";
		break;
	case HAMISH:
		sName = "Hamish";
		break;
	case NIKKI:
		sName = "Nikki";
		break;
	case PITCAM:
		sName = "Pitcam";
		break;
	case JUNIPER:
		sName = "Juniper";
		break;
	case LOCHIE:
		sName = "Lochie";
		break;
	case CALLUM:
		sName = "Callum";
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