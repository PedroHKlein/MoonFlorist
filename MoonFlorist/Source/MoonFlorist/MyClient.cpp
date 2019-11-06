// Fill out your copyright notice in the Description page of Project Settings.


#include "MyClient.h"

// Sets default values
AMyClient::AMyClient()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

AMyClient::~AMyClient()
{

}

// Called when the game starts or when spawned
void AMyClient::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMyClient::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyClient::Init(int _iName, int _iNature)
{


	iName = _iName;
	iNature = _iNature;

	switch (_iName)
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

	switch (_iNature)
	{
	case NORMAL:
		sGreeting = "<Default>Hello my name is ";
		Dialogue1 = "<Default>. I would like to order a bouquet that feels";
		Dialogue2 = "<Default>,";
		Dialogue3 = "<Default> and";
		break;
	case FLIRTY:
		sGreeting = "<Default>Hey cutie uwu~ I'm ";
		Dialogue1 = "<Default>. I would love <3 it if you could make me a bOwOquet that feels";
		Dialogue2 = "<Default>,";
		Dialogue3 = "<Default>. OH OH OH and also";
		break;
	case SHY:
		sGreeting = "<Default>Um... Hi, I am ";
		Dialogue1 = "<Default>. can I get a gathering of flowers, I don't know, that feel";
		Dialogue2 = "<Default>,";
		Dialogue3 = "<Default> um and";
		break;
	case GRUMPY:
		sGreeting = "<Default>WRITE THIS DOWN, my name is ";
		Dialogue1 = "<Default>. Give me a bouquet that feels";
		Dialogue2 = "<Default>,";
		Dialogue3 = "<Default> and";
		break;
	case HIP:
		sGreeting = "<Default>Yo what up! It is ";
		Dialogue1 = "<Default>. Can you shaka brah me a brahquet that feels";
		Dialogue2 = "<Default>,";
		Dialogue3 = "<Default>. YO and";
		break;
	default:
		break;
	}

	NewOrder();
}

void AMyClient::NewOrder()
{
	if (CurrentOrder == NULL)
	{
		CurrentOrder = NewObject<UMyClientOrder>();
		CurrentOrder->init(iName, FMath::RandRange(1, 3), GetWorld());
		SetFullDescription();
	}
	else
	{
		LastOrder = CurrentOrder;

		CurrentOrder = NewObject<UMyClientOrder>();
		CurrentOrder->init(iName, FMath::RandRange(1, 3), GetWorld());
		SetFullDescription();
	}
}

void AMyClient::SetFullDescription()
{
	int temp = GetCurrentOrder()->GetGoals().Num();

	switch (temp)
	{
	case 1:
		sFullDescription = sGreeting + sName + Dialogue1 + GetCurrentOrder()->GetGoals()[0]->GetGoal();
		break;
	case 2:
		sFullDescription = sGreeting + sName + Dialogue1 + GetCurrentOrder()->GetGoals()[0]->GetGoal() + Dialogue3 + GetCurrentOrder()->GetGoals()[1]->GetGoal();
		break;
	case 3:
		sFullDescription = sGreeting + sName + Dialogue1 + GetCurrentOrder()->GetGoals()[0]->GetGoal() + Dialogue2 + GetCurrentOrder()->GetGoals()[1]->GetGoal() + Dialogue3 + GetCurrentOrder()->GetGoals()[2]->GetGoal();
		break;
	default:
		break;
	}
	GetCurrentOrder()->SetDescription(sFullDescription);
}

UMyClientOrder* AMyClient::GetCurrentOrder()
{
	return CurrentOrder;
}


UMyClientOrder* AMyClient::GetPreviousOrder()
{
	return LastOrder;
}

void AMyClient::UpdateClientDescriptions()
{
	switch (iNature)
	{
	case NORMAL:
		sGreeting = "<Default>Hi, it is ";
		Dialogue1 = "<Default> again. I would like a bouquet that feels";
		Dialogue2 = "<Default>,";
		Dialogue3 = "<Default> and";
		break;
	case FLIRTY:
		sGreeting = "<Default>xX";
		Dialogue1 = "<Default>Xx again~ O.o need a buwuquet hehe that is";
		Dialogue2 = "<Default>,";
		Dialogue3 = "<Default>. oooOOOooo and";
		break;
	case SHY:
		sGreeting = "<Default>Uhhh, I don't know if you remember me. I am ";
		Dialogue1 = "<Default>. can I please have a bouquet, if you have the time, that feels";
		Dialogue2 = "<Default>,";
		Dialogue3 = "<Default> um and";
		break;
	case GRUMPY:
		sGreeting = "<Default>IT IS ME AGAIN, ";
		Dialogue1 = "<Default>. Give me a bouquet that feels";
		Dialogue2 = "<Default>,";
		Dialogue3 = "<Default> and";
		break;
	case HIP:
		sGreeting = "<Default>Yo yo, mofo, remember ";
		Dialogue1 = "<Default>. IT IS ME, need a broquet bro, that feels";
		Dialogue2 = "<Default>,";
		Dialogue3 = "<Default>. YO and";
		break;
	default:
		break;
	}

	SetFullDescription();
}

