// Fill out your copyright notice in the Description page of Project Settings.

#include "MyClientOrder.h"
#include "MyGameManager.h"
#include "Kismet/GameplayStatics.h"

UMyClientOrder::UMyClientOrder()
{
	
}

UMyClientOrder::~UMyClientOrder()
{

}

void UMyClientOrder::init(int _iName, int _iNumOfGoals, UWorld* _world)
{
	World = _world;
	iName = _iName;

	GenerateJob(_iNumOfGoals);

	switch (iName)
	{
	case MARK:
		sName = "<Default> Mark";
		break;
	case PEPE:
		sName = "<Default> Pepe";
		break;
	case KIKI:
		sName = "<Default> KiKi";
		break;
	case SHIKA:
		sName = "<Default> Shika";
		break;
	case STEVEN:
		sName = "<Default> Steven";
		break;
	case IZZIE:
		sName = "<Default> Izzie";
		break;
	case JONTY:
		sName = "<Default> Jonty";
		break;
	case ALEX:
		sName = "<Default> Alex";
		break;
	case FRASER:
		sName = "<Default> Fraser";
		break;
	case ROURKE:
		sName = "<Default> Rourke";
		break;
	case ROWAN:
		sName = "<Default> Rowan";
		break;
	case MICHAEL:
		sName = "<Default> Michael";
		break;
	case SHUNI:
		sName = "<Default> Shuni";
		break;
	case JESSKALOO:
		sName = "<Default> Jesska-Loo";
		break;
	case CASPIAN:
		sName = "<Default> Caspian";
		break;
	case MATI:
		sName = "<Default> Mati";
		break;
	case JEREMY:
		sName = "<Default> Jeremy";
		break;
	case ROGER:
		sName = "<Default> Roger";
		break;
	case KERRY:
		sName = "<Default> Kerry";
		break;
	case VIVIAN:
		sName = "<Default> Vivian";
		break;
	case SALLY:
		sName = "<Default> Sally";
		break;
	case JAMES:
		sName = "<Default> James";
		break;
	case JIMBO:
		sName = "<Default> Jimbo";
		break;
	case DONUT:
		sName = "<Default> Donut";
		break;
	case JIMOTHY:
		sName = "<Default> Jimothy";
		break;
	case JASPOR:
		sName = "<Default> Jaspor";
		break;
	case CARLO:
		sName = "<Default> Carlo";
		break;
	case LARISSA:
		sName = "<Default> Larissa";
		break;
	case MARA:
		sName = "<Default> Mara";
		break;
	case CAROLINE:
		sName = "<Default> Caroline";
		break;
	case SAMI:
		sName = "<Default> Sami";
		break;
	case KATE:
		sName = "<Default> Kate";
		break;
	case BENNET:
		sName = "<Default> Bennet";
		break;
	case RYAN:
		sName = "<Default> Ryan";
		break;
	case FRANCIS:
		sName = "<Default> Francis";
		break;
	case ELLIE:
		sName = "<Default> Ellie";
		break;
	case REBEKKAH:
		sName = "<Default> Rebekkah";
		break;
	case SOFIE:
		sName = "<Default> Sofie";
		break;
	case ZANNI:
		sName = "<Default> Zanni";
		break;
	case HOLLY:
		sName = "<Default> Holly";
		break;
	case EMMA:
		sName = "<Default> Emma";
		break;
	case ROBYN:
		sName = "<Default> Robyn";
		break;
	case YULI:
		sName = "<Default> Yuli";
		break;
	case PAULA:
		sName = "<Default> Paula";
		break;
	case MEG:
		sName = "<Default> Meg";
		break;
	case BERT:
		sName = "<Default> Bert";
		break;
	case MAXWELL:
		sName = "<Default> Maxwell";
		break;
	case ABIGAIL:
		sName = "<Default> Abigail";
		break;
	case ALEXANDRA:
		sName = "<Default> Alexandra";
		break;
	case AMANDA:
		sName = "<Default> Amanda";
		break;
	case ARIANNE:
		sName = "<Default> Arianne";
		break;
	case BAILEY:
		sName = "<Default> Bailey";
		break;
	case BEN:
		sName = "<Default> Ben";
		break;
	case BETH:
		sName = "<Default> Beth";
		break;
	case BLAIR:
		sName = "<Default> Blair";
		break;
	case BO:
		sName = "<Default> Bo";
		break;
	case BRIDGET:
		sName = "<Default> Bridget";
		break;
	case BROOKE:
		sName = "<Default> Brooke";
		break;
	case BECKY:
		sName = "<Default> Becky";
		break;
	case CLAIRE:
		sName = "<Default> Claire";
		break;
	case DAMIEN:
		sName = "<Default> Damien";
		break;
	case DANNY:
		sName = "<Default> Danny";
		break;
	case IVAN:
		sName = "<Default> Ivan";
		break;
	case SAM:
		sName = "<Default> Sam";
		break;
	case SID:
		sName = "<Default> Sid";
		break;
	case TECE:
		sName = "<Default> Tece";
		break;
	case ASMA:
		sName = "<Default> Asma";
		break;
	case SHILPA:
		sName = "<Default> Shilpa";
		break;
	case SAMAH:
		sName = "<Default> Samah";
		break;
	case TAMRYN:
		sName = "<Default> Tamryn";
		break;
	case CALLAN:
		sName = "<Default> Callan";
		break;
	case FAWAD:
		sName = "<Default> Fawad";
		break;
	case DAVID:
		sName = "<Default> David";
		break;
	case ANDREW:
		sName = "<Default> Andrew";
		break;
	case SHANNON:
		sName = "<Default> Shannon";
		break;
	case KAITLIN:
		sName = "<Default> Kaitlin";
		break;
	case PIGEON:
		sName = "<Default> Pigeon";
		break;
	case BOOF:
		sName = "<Default> Boof";
		break;
	case ANNA:
		sName = "<Default> Anna Rose";
		break;
	case KIMBERLY:
		sName = "<Default> Kimmi";
		break;
	case SASKIA:
		sName = "<Default> Saskia";
		break;
	case STEPH:
		sName = "<Default> Steph";
		break;
	case PINKY:
		sName = "<Default> Pinky";
		break;
	case SARAH:
		sName = "<Default> Sarah";
		break;
	case SERENA:
		sName = "<Default> Serena";
		break;
	case IDA:
		sName = "<Default> Ida";
		break;
	case LAUREN:
		sName = "<Default> Lauren";
		break;
	case KEIRA:
		sName = "<Default> Keira";
		break;
	case RIANNA:
		sName = "<Default> Rianna";
		break;
	case ROSARIA:
		sName = "<Default> Rosaria";
		break;
	case JHARAIZ:
		sName = "<Default> Jharaiz";
		break;
	case AMY:
		sName = "<Default> Amy";
		break;
	case JANELLE:
		sName = "<Default> Janelle";
		break;
	case JORDAN:
		sName = "<Default> Jordan";
		break;
	case HAMISH:
		sName = "<Default> Hamish";
		break;
	case NIKKI:
		sName = "<Default> Nikki";
		break;
	case PITCAM:
		sName = "<Default> Pitcam";
		break;
	case JUNIPER:
		sName = "<Default> Juniper";
		break;
	case LOCHIE:
		sName = "<Default> Lochie";
		break;
	case CALLUM:
		sName = "<Default> Callum";
		break;
	default:
		break;
	}

	//SetDescription();
}

FString UMyClientOrder::GetName()
{
	return sName;
}

void UMyClientOrder::GenerateJob(int _iNum)
{
	for (TActorIterator<AMyGameManager> ActorItr(World); ActorItr; ++ActorItr)
	{
		GameManager = *ActorItr;
	}
	for (int i = 0; i < _iNum; i++)
	{

		Goals.Add(GameManager->GetGoalList()->GetGoal(FMath::RandRange(1, 6), FMath::RandRange(0, 4)));

		//Goals.Add(NewObject<UMyGoal>());
		//Goals[i]->init(FMath::RandRange(1, 6), FMath::RandRange(1, 5));
	}
}

TArray<UMyGoal*> UMyClientOrder::GetGoals()
{
	return Goals;
}

FString UMyClientOrder::GetFullDescription()
{
	return sFullDescription;
}

void UMyClientOrder::SetDescription(FString _description)
{
	sFullDescription = _description;

	
}