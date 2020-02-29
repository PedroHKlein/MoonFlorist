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

//init function
void AMyClient::Init(int _iName, int _iNature)
{


	iName = _iName;
	iNature = _iNature;


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

	//set nature
	switch (_iNature)
	{
	case NORMAL:
		sTitle = "Boquet Order - " + sName;
		sGreeting = "<RED>Hello my name is </>";
		Dialogue1 = ". I would like to order a bouquet that feels";
		Dialogue2 = "<Default>,";
		Dialogue3 = "<Default> and";
		break;
	case FLIRTY:
		sTitle = "Boquet Order - " + sName;
		sGreeting = "<RED>Hey cutie uwu~ I'm </>";
		Dialogue1 = ". I would love :D it if you could make me a bOwOquet that feels";
		Dialogue2 = "<Default>,";
		Dialogue3 = "<Default>. OH OH OH and also";
		break;
	case SHY:
		sTitle = "Boquet Order - " + sName;
		sGreeting = "<RED>Um... Hi, I am </>";
		Dialogue1 = ". can I get a gathering of flowers, I don't know, that feel";
		Dialogue2 = "<Default>,";
		Dialogue3 = "<Default> um and";
		break;
	case GRUMPY:
		sTitle = "Boquet Order - " + sName;
		sGreeting = "<RED>WRITE THIS DOWN, my name is </>";
		Dialogue1 = ". Give me a bouquet that feels";
		Dialogue2 = "<Default>,";
		Dialogue3 = "<Default> and";
		break;
	case HIP:
		sTitle = "Boquet Order - " + sName;
		sGreeting = "<RED>Yo what up! It is </>";
		Dialogue1 = ". Can you shaka brah me a brahquet that feels";
		Dialogue2 = "<Default>,";
		Dialogue3 = "<Default>. YO and";
		break;
	default:
		break;
	}

	//set order
	NewOrder();
}

//new order function
void AMyClient::NewOrder()
{
	//if no new order
	if (CurrentOrder == NULL)
	{
		//set new order as current order
		CurrentOrder = NewObject<UMyClientOrder>();
		CurrentOrder->init(iName, FMath::RandRange(1, 3), GetWorld());
		SetFullDescription();
	}
	//else if order already exists
	else
	{
		//Set current order to last order
		LastOrder = CurrentOrder;

		//Create new order, sett as current order
		CurrentOrder = NewObject<UMyClientOrder>();
		CurrentOrder->init(iName, FMath::RandRange(1, 3), GetWorld());
		SetFullDescription();
	}
}

//Client order description in full
void AMyClient::SetFullDescription()
{
	//Get amount of goals
	int temp = GetCurrentOrder()->GetGoals().Num();

	//Set full description based on the amount of goals
	switch (temp)
	{
	case 1:
		sFullDescription = sGreeting + "<Default>" + LINE_TERMINATOR + "</>" + "<Default>" + sName + Dialogue1 + GetCurrentOrder()->GetGoals()[0]->GetGoal();
		break;
	case 2:
		sFullDescription = sGreeting + "<Default>" + LINE_TERMINATOR + "</>" + "<Default>" + sName + Dialogue1 + GetCurrentOrder()->GetGoals()[0]->GetGoal() + Dialogue3 + GetCurrentOrder()->GetGoals()[1]->GetGoal();
		break;
	case 3:
		sFullDescription = sGreeting + "<Default>" + LINE_TERMINATOR + "</>" + "<Default>" + sName + Dialogue1 + GetCurrentOrder()->GetGoals()[0]->GetGoal() + Dialogue2 + GetCurrentOrder()->GetGoals()[1]->GetGoal() + Dialogue3 + GetCurrentOrder()->GetGoals()[2]->GetGoal();
		break;
	default:
		break;
	}
	//set order full description to sFullDescription
	GetCurrentOrder()->SetDescription(sFullDescription);
}

//Getter for current order
UMyClientOrder* AMyClient::GetCurrentOrder()
{
	return CurrentOrder;
}

//Getter for previous order
UMyClientOrder* AMyClient::GetPreviousOrder()
{
	return LastOrder;
}

//Client description updates after they have been served
void AMyClient::UpdateClientDescriptions()
{
	switch (iNature)
	{
	case NORMAL:
		sGreeting = "Hi, it is ";
		Dialogue1 = " again. I would like a bouquet that feels";
		Dialogue2 = "<Default>,";
		Dialogue3 = "<Default> and";
		break;
	case FLIRTY:
		sGreeting = "xX";
		Dialogue1 = "Xx again~ O.o need a buwuquet hehe that is";
		Dialogue2 = "<Default>,";
		Dialogue3 = "<Default>. oooOOOooo and";
		break;
	case SHY:
		sGreeting = "Uhhh, I don't know if you remember me. I am ";
		Dialogue1 = ". can I please have a bouquet, if you have the time, that feels";
		Dialogue2 = "<Default>,";
		Dialogue3 = "<Default> um and";
		break;
	case GRUMPY:
		sGreeting = "IT IS ME AGAIN, ";
		Dialogue1 = ". Give me a bouquet that feels";
		Dialogue2 = "<Default>,";
		Dialogue3 = "<Default> and";
		break;
	case HIP:
		sGreeting = "Yo yo, mofo, remember ";
		Dialogue1 = ". IT IS ME, need a broquet bro, that feels";
		Dialogue2 = "<Default>,";
		Dialogue3 = "<Default>. YO and";
		break;
	default:
		break;
	}

	//Set new full description
	SetFullDescription();
}

