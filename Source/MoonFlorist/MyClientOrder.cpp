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

	//set name
	switch (_iName)
	{
	case MARK:
		sName = " Mark";
		break;
	case PEPE:
		sName = " Pepe";
		break;
	case KIKI:
		sName = " KiKi";
		break;
	case SHIKA:
		sName = " Shika";
		break;
	case STEVEN:
		sName = " Steven";
		break;
	case IZZIE:
		sName = " Izzie";
		break;
	case JONTY:
		sName = " Jonty";
		break;
	case ALEX:
		sName = " Alex";
		break;
	case FRASER:
		sName = " Fraser";
		break;
	case ROURKE:
		sName = " Rourke";
		break;
	case ROWAN:
		sName = " Rowan";
		break;
	case MICHAEL:
		sName = " Michael";
		break;
	case SHUNI:
		sName = " Shuni";
		break;
	case JESSKALOO:
		sName = " Jesska-Loo";
		break;
	case CASPIAN:
		sName = " Caspian";
		break;
	case MATI:
		sName = " Mati";
		break;
	case JEREMY:
		sName = " Jeremy";
		break;
	case ROGER:
		sName = " Roger";
		break;
	case KERRY:
		sName = " Kerry";
		break;
	case VIVIAN:
		sName = " Vivian";
		break;
	case SALLY:
		sName = " Sally";
		break;
	case JAMES:
		sName = " James";
		break;
	case JIMBO:
		sName = " Jimbo";
		break;
	case DONUT:
		sName = " Donut";
		break;
	case JIMOTHY:
		sName = " Jimothy";
		break;
	case JASPOR:
		sName = " Jaspor";
		break;
	case CARLO:
		sName = " Carlo";
		break;
	case LARISSA:
		sName = " Larissa";
		break;
	case MARA:
		sName = " Mara";
		break;
	case CAROLINE:
		sName = " Caroline";
		break;
	case SAMI:
		sName = " Sami";
		break;
	case KATE:
		sName = " Kate";
		break;
	case BENNET:
		sName = " Bennet";
		break;
	case RYAN:
		sName = " Ryan";
		break;
	case FRANCIS:
		sName = " Francis";
		break;
	case ELLIE:
		sName = " Ellie";
		break;
	case REBEKKAH:
		sName = " Rebekkah";
		break;
	case SOFIE:
		sName = " Sofie";
		break;
	case ZANNI:
		sName = " Zanni";
		break;
	case HOLLY:
		sName = " Holly";
		break;
	case EMMA:
		sName = " Emma";
		break;
	case ROBYN:
		sName = " Robyn";
		break;
	case YULI:
		sName = " Yuli";
		break;
	case PAULA:
		sName = " Paula";
		break;
	case MEG:
		sName = " Meg";
		break;
	case BERT:
		sName = " Bert";
		break;
	case MAXWELL:
		sName = " Maxwell";
		break;
	case ABIGAIL:
		sName = " Abigail";
		break;
	case ALEXANDRA:
		sName = " Alexandra";
		break;
	case AMANDA:
		sName = " Amanda";
		break;
	case ARIANNE:
		sName = " Arianne";
		break;
	case BAILEY:
		sName = " Bailey";
		break;
	case BEN:
		sName = " Ben";
		break;
	case BETH:
		sName = " Beth";
		break;
	case BLAIR:
		sName = " Blair";
		break;
	case BO:
		sName = " Bo";
		break;
	case BRIDGET:
		sName = " Bridget";
		break;
	case BROOKE:
		sName = " Brooke";
		break;
	case BECKY:
		sName = " Becky";
		break;
	case CLAIRE:
		sName = " Claire";
		break;
	case DAMIEN:
		sName = " Damien";
		break;
	case DANNY:
		sName = " Danny";
		break;
	case IVAN:
		sName = " Ivan";
		break;
	case SAM:
		sName = " Sam";
		break;
	case SID:
		sName = " Sid";
		break;
	case TECE:
		sName = " Tece";
		break;
	case ASMA:
		sName = " Asma";
		break;
	case SHILPA:
		sName = " Shilpa";
		break;
	case SAMAH:
		sName = " Samah";
		break;
	case TAMRYN:
		sName = " Tamryn";
		break;
	case CALLAN:
		sName = " Callan";
		break;
	case FAWAD:
		sName = " Fawad";
		break;
	case DAVID:
		sName = " David";
		break;
	case ANDREW:
		sName = " Andrew";
		break;
	case SHANNON:
		sName = " Shannon";
		break;
	case KAITLIN:
		sName = " Kaitlin";
		break;
	case PIGEON:
		sName = " Pigeon";
		break;
	case BOOF:
		sName = " Boof";
		break;
	case ANNA:
		sName = " Anna Rose";
		break;
	case KIMBERLY:
		sName = " Kimmi";
		break;
	case SASKIA:
		sName = " Saskia";
		break;
	case STEPH:
		sName = " Steph";
		break;
	case PINKY:
		sName = " Pinky";
		break;
	case SARAH:
		sName = " Sarah";
		break;
	case SERENA:
		sName = " Serena";
		break;
	case IDA:
		sName = " Ida";
		break;
	case LAUREN:
		sName = " Lauren";
		break;
	case KEIRA:
		sName = " Keira";
		break;
	case RIANNA:
		sName = " Rianna";
		break;
	case ROSARIA:
		sName = " Rosaria";
		break;
	case JHARAIZ:
		sName = " Jharaiz";
		break;
	case AMY:
		sName = " Amy";
		break;
	case JANELLE:
		sName = " Janelle";
		break;
	case JORDAN:
		sName = " Jordan";
		break;
	case HAMISH:
		sName = " Hamish";
		break;
	case NIKKI:
		sName = " Nikki";
		break;
	case PITCAM:
		sName = " Pitcam";
		break;
	case JUNIPER:
		sName = " Juniper";
		break;
	case LOCHIE:
		sName = " Lochie";
		break;
	case CALLUM:
		sName = " Callum";
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