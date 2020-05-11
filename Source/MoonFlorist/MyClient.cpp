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
		sName = "<Default> Mark</>";
		sTitle = "";
		break;
	case PEPE:
		sName = "<Default> Pepe</>";
		sTitle = "";
		break;
	case KIKI:
		sName = "<Default> KiKi</>";
		sTitle = "";
		break;
	case SHIKA:
		sName = "<Default> Shika</>";
		sTitle = "";
		break;
	case STEVEN:
		sName = "<Default> Steven</>";
		sTitle = "";
		break;
	case IZZIE:
		sName = "<Default> Izzie</>";
		sTitle = "";
		break;
	case JONTY:
		sName = "<Default> Jonty</>";
		sTitle = "";
		break;
	case ALEX:
		sName = "<Default> Alex</>";
		sTitle = "";
		break;
	case FRASER:
		sName = "<Default> Fraser</>";
		sTitle = "";
		break;
	case ROURKE:
		sName = "<Default> Rourke</>";
		sTitle = "";
		break;
	case ROWAN:
		sName = "<Default> Rowan</>";
		sTitle = "";
		break;
	case MICHAEL:
		sName = "<Default> Michael</>";
		sTitle = "";
		break;
	case SHUNI:
		sName = "<Default> Shuni</>";
		sTitle = "";
		break;
	case JESSKALOO:
		sName = "<Default> Jesska-Loo</>";
		sTitle = "";
		break;
	case CASPIAN:
		sName = "<Default> Caspian</>";
		sTitle = "";
		break;
	case MATI:
		sName = "<Default> Mati</>";
		sTitle = "";
		break;
	case JEREMY:
		sName = "<Default> Jeremy</>";
		sTitle = "";
		break;
	case ROGER:
		sName = "<Default> Roger</>";
		sTitle = "";
		break;
	case KERRY:
		sName = "<Default> Kerry</>";
		sTitle = "";
		break;
	case VIVIAN:
		sName = "<Default> Vivian</>";
		sTitle = "";
		break;
	case SALLY:
		sName = "<Default> Sally</>";
		sTitle = "";
		break;
	case JAMES:
		sName = "<Default> James</>";
		sTitle = "";
		break;
	case JIMBO:
		sName = "<Default> Jimbo</>";
		sTitle = "";
		break;
	case DONUT:
		sName = "<Default> Donut</>";
		sTitle = "";
		break;
	case JIMOTHY:
		sName = "<Default> Jimothy</>";
		sTitle = "";
		break;
	case JASPOR:
		sName = "<Default> Jaspor</>";
		sTitle = "";
		break;
	case CARLO:
		sName = "<Default> Carlo</>";
		sTitle = "";
		break;
	case LARISSA:
		sName = "<Default> Larissa</>";
		sTitle = "";
		break;
	case MARA:
		sName = "<Default> Mara</>";
		sTitle = "";
		break;
	case CAROLINE:
		sName = "<Default> Caroline</>";
		sTitle = "";
		break;
	case SAMI:
		sName = "<Default> Sami</>";
		sTitle = "";
		break;
	case KATE:
		sName = "<Default> Kate</>";
		sTitle = "";
		break;
	case BENNET:
		sName = "<Default> Bennet</>";
		sTitle = "";
		break;
	case RYAN:
		sName = "<Default> Ryan</>";
		sTitle = "";
		break;
	case FRANCIS:
		sName = "<Default> Francis</>";
		sTitle = "";
		break;
	case ELLIE:
		sName = "<Default> Ellie</>";
		sTitle = "";
		break;
	case REBEKKAH:
		sName = "<Default> Rebekkah</>";
		sTitle = "";
		break;
	case SOFIE:
		sName = "<Default> Sofie</>";
		sTitle = "";
		break;
	case ZANNI:
		sName = "<Default> Zanni</>";
		sTitle = "";
		break;
	case HOLLY:
		sName = "<Default> Holly</>";
		sTitle = "";
		break;
	case EMMA:
		sName = "<Default> Emma</>";
		sTitle = "";
		break;
	case ROBYN:
		sName = "<Default> Robyn</>";
		sTitle = "";
		break;
	case YULI:
		sName = "<Default> Yuli</>";
		sTitle = "";
		break;
	case PAULA:
		sName = "<Default> Paula</>";
		sTitle = "";
		break;
	case MEG:
		sName = "<Default> Meg</>";
		sTitle = "";
		break;
	case BERT:
		sName = "<Default> Bert</>";
		sTitle = "";
		break;
	case MAXWELL:
		sName = "<Default> Maxwell</>";
		sTitle = "";
		break;
	case ABIGAIL:
		sName = "<Default> Abigail</>";
		sTitle = "";
		break;
	case ALEXANDRA:
		sName = "<Default> Alexandra</>";
		sTitle = "";
		break;
	case AMANDA:
		sName = "<Default> Amanda</>";
		sTitle = "";
		break;
	case ARIANNE:
		sName = "<Default> Arianne</>";
		sTitle = "";
		break;
	case BAILEY:
		sName = "<Default> Bailey</>";
		sTitle = "";
		break;
	case BEN:
		sName = "<Default> Ben</>";
		sTitle = "";
		break;
	case BETH:
		sName = "<Default> Beth</>";
		sTitle = "";
		break;
	case BLAIR:
		sName = "<Default> Blair</>";
		sTitle = "";
		break;
	case BO:
		sName = "<Default>Bo</>";
		sTitle = "";
		break;
	case BRIDGET:
		sName = "<Default>Bridget</>";
		sTitle = "";
		break;
	case BROOKE:
		sName = "<Default> Brooke</>";
		sTitle = "";
		break;
	case BECKY:
		sName = "<Default> Becky</>";
		sTitle = "";
		break;
	case CLAIRE:
		sName = "<Default> Claire</>";
		sTitle = "";
		break;
	case DAMIEN:
		sName = "<Default> Damien</>";
		sTitle = "";
		break;
	case DANNY:
		sName = "<Default> Danny</>";
		sTitle = "";
		break;
	case IVAN:
		sName = "<Default> Ivan</>";
		sTitle = "";
		break;
	case SAM:
		sName = "<Default> Sam</>";
		sTitle = "";
		break;
	case SID:
		sName = "<Default> Sid</>";
		sTitle = "";
		break;
	case TECE:
		sName = "<Default> Tece</>";
		sTitle = "";
		break;
	case ASMA:
		sName = "<Default> Asma</>";
		sTitle = "";
		break;
	case SHILPA:
		sName = "<Default> Shilpa</>";
		sTitle = "";
		break;
	case SAMAH:
		sName = "<Default> Samah</>";
		sTitle = "";
		break;
	case TAMRYN:
		sName = "<Default> Tamryn</>";
		sTitle = "";
		break;
	case CALLAN:
		sName = "<Default> Callan</>";
		sTitle = "";
		break;
	case FAWAD:
		sName = "<Default> Fawad</>";
		sTitle = "";
		break;
	case DAVID:
		sName = "<Default> David</>";
		sTitle = "";
		break;
	case ANDREW:
		sName = "<Default> Andrew</>";
		sTitle = "";
		break;
	case SHANNON:
		sName = "<Default> Shannon</>";
		sTitle = "";
		break;
	case KAITLIN:
		sName = "<Default> Kaitlin</>";
		sTitle = "";
		break;
	case PIGEON:
		sName = "<Default> Pigeon</>";
		sTitle = "";
		break;
	case BOOF:
		sName = "<Default> Boof</>";
		sTitle = "";
		break;
	case ANNA:
		sName = "<Default> Anna Rose</>";
		sTitle = "";
		break;
	case KIMBERLY:
		sName = "<Default> Kimmi</>";
		sTitle = "";
		break;
	case SASKIA:
		sName = "<Default> Saskia</>";
		sTitle = "";
		break;
	case STEPH:
		sName = "<Default> Steph</>";
		sTitle = "";
		break;
	case PINKY:
		sName = "<Default> Pinky</>";
		sTitle = "";
		break;
	case SARAH:
		sName = "<Default> Sarah</>";
		sTitle = "";
		break;
	case SERENA:
		sName = "<Default> Serena</>";
		sTitle = "";
		break;
	case IDA:
		sName = "<Default> Ida</>";
		sTitle = "";
		break;
	case LAUREN:
		sName = "<Default> Lauren</>";
		sTitle = "";
		break;
	case KEIRA:
		sName = "<Default> Keira</>";
		sTitle = "";
		break;
	case RIANNA:
		sName = "<Default> Rianna</>";
		sTitle = "";
		break;
	case ROSARIA:
		sName = "<Default> Rosaria</>";
		sTitle = "";
		break;
	case JHARAIZ:
		sName = "<Default> Jharaiz</>";
		sTitle = "";
		break;
	case AMY:
		sName = "<Default> Amy</>";
		sTitle = "";
		break;
	case JANELLE:
		sName = "<Default> Janelle</>";
		sTitle = "";
		break;
	case JORDAN:
		sName = "<Default> Jordan</>";
		sTitle = "";
		break;
	case HAMISH:
		sName = "<Default> Hamish</>";
		sTitle = "";
		break;
	case NIKKI:
		sName = "<Default> Nikki</>";
		sTitle = "";
		break;
	case PITCAM:
		sName = "<Default> Pitcam</>";
		sTitle = "";
		break;
	case JUNIPER:
		sName = "<Default> Juniper</>";
		sTitle = "";
		break;
	case LOCHIE:
		sName = "<Default> Lochie</>";
		sTitle = "";
		break;
	case CALLUM:
		sName = "<Default> Callum</>";
		sTitle = "";
		break;
	default:
		break;
	}

	//set nature
	switch (_iNature)
	{
	case NORMAL:
		sTitle = "Boquet Order - " + sName;
		sGreeting = "Hello my name is ";
		Dialogue1 = ". I would like to order a bouquet that feels";
		Dialogue2 = "<Default>,</>";
		Dialogue3 = "<Default> and</>";
		break;
	case FLIRTY:
		sTitle = "Boquet Order - " + sName;
		sGreeting = "Hey cutie uwu~ I'm ";
		Dialogue1 = ". I would love :D it if you could make me a bOwOquet that feels";
		Dialogue2 = "<Default>,</>";
		Dialogue3 = "<Default>. OH OH OH and also</>";
		break;
	case SHY:
		sTitle = "Boquet Order - " + sName;
		sGreeting = "Um... Hi, I am ";
		Dialogue1 = ". can I get a gathering of flowers, I don't know, that feel";
		Dialogue2 = "<Default>,</>";
		Dialogue3 = "<Default> um and</>";
		break;
	case GRUMPY:
		sTitle = "Boquet Order - " + sName;
		sGreeting = "WRITE THIS DOWN, my name is ";
		Dialogue1 = ". Give me a bouquet that feels";
		Dialogue2 = "<Default>,</>";
		Dialogue3 = "<Default> and</>";
		break;
	case HIP:
		sTitle = "Boquet Order - " + sName;
		sGreeting = "Yo what up! It is ";
		Dialogue1 = ". Can you shaka brah me a brahquet that feels";
		Dialogue2 = "<Default>,</>";
		Dialogue3 = "<Default>. YO and</>";
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
		  sFullDescription = sGreeting +  sName  + Dialogue1 + GetCurrentOrder()->GetGoals()[0]->GetGoal();
		break;
	case 2:
		  sFullDescription = sGreeting + sName  + Dialogue1 + GetCurrentOrder()->GetGoals()[0]->GetGoal() + Dialogue3 + GetCurrentOrder()->GetGoals()[1]->GetGoal();
		break;
	case 3:
		  sFullDescription = sGreeting + sName  + Dialogue1 + GetCurrentOrder()->GetGoals()[0]->GetGoal() + Dialogue2 + GetCurrentOrder()->GetGoals()[1]->GetGoal() + Dialogue3 + GetCurrentOrder()->GetGoals()[2]->GetGoal();
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
		Dialogue2 = "<Default>,</>";
		Dialogue3 = "<Default> and</>";
		break;
	case FLIRTY:
		sGreeting = "xX";
		Dialogue1 = "Xx again~ O.o need a buwuquet hehe that is";
		Dialogue2 = "<Default>,</>";
		Dialogue3 = "<Default>. oooOOOooo and</>";
		break;
	case SHY:
		sGreeting = "Uhhh, I don't know if you remember me. I am ";
		Dialogue1 = ". can I please have a bouquet, if you have the time, that feels";
		Dialogue2 = "<Default>,</>";
		Dialogue3 = "<Default> um and</>";
		break;
	case GRUMPY:
		sGreeting = "IT IS ME AGAIN, ";
		Dialogue1 = ". Give me a bouquet that feels";
		Dialogue2 = "<Default>,</>";
		Dialogue3 = "<Default> and</>";
		break;
	case HIP:
		sGreeting = "Yo yo, mofo, remember ";
		Dialogue1 = ". IT IS ME, need a broquet bro, that feels";
		Dialogue2 = "<Default>,</>";
		Dialogue3 = "<Default>. YO and</>";
		break;
	default:
		break;
	}

	//Set new full description
	SetFullDescription();
}

int AMyClient::GetNature()
{
	return iNature;
}

FString AMyClient::GetName()
{
	return sName;
}

FString AMyClient::GetFullDescription()
{
	return sFullDescription;
}

void AMyClient::ToggleServeable()
{
	if (bCanServe)
	{
		bCanServe = false;
	}
	else
	{
		bCanServe = true;
	}
}

bool AMyClient::GetServeable()
{
	return bCanServe;
}
