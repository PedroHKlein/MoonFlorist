// Fill out your copyright notice in the Description page of Project Settings.


#include "DeliveryTerminal.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

ADeliveryTerminal::ADeliveryTerminal()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Root = CreateDefaultSubobject<USceneComponent>("Root");
	Root->SetupAttachment(RootComponent);
	Root->SetRelativeLocation(FVector(0.f, 0.f, 0.f));

	StandBase = CreateDefaultSubobject<UStaticMeshComponent>("Base");
	StandBase->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Game/Meshes/Props/SM_HandStand_SM_Stand_Base.SM_HandStand_SM_Stand_Base")).Object);
	StandBase->SetupAttachment(Root);
	StandBase->SetRelativeLocation(FVector(0.f, 0.f, 0.f));

	StandBody = CreateDefaultSubobject<UStaticMeshComponent>("MainBody");
	StandBody->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Game/Meshes/Props/SM_HandStand_SM_Stand_RotatingBase.SM_HandStand_SM_Stand_RotatingBase")).Object);
	StandBody->SetupAttachment(Root);
	StandBody->SetRelativeLocation(FVector(0.f, 0.f, 0.f));

	StandBaseArm = CreateDefaultSubobject<UStaticMeshComponent>("BaseArm");
	StandBaseArm->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Game/Meshes/Props/SM_HandStand_SM_Stand_Arm001.SM_HandStand_SM_Stand_Arm001")).Object);
	StandBaseArm->SetupAttachment(StandBody);
	StandBaseArm->SetRelativeLocation(FVector(0.f, 0.f, 0.f));

	StandArm = CreateDefaultSubobject<UStaticMeshComponent>("MainArm");
	StandArm->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Game/Meshes/Props/SM_HandStand_SM_Stand_Arm.SM_HandStand_SM_Stand_Arm")).Object);
	StandArm->SetupAttachment(StandBaseArm);
	StandArm->SetRelativeLocation(FVector(0.f, 0.f, 0.f));

	StandMagnet = CreateDefaultSubobject<UStaticMeshComponent>("Magnet");
	StandMagnet->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Game/Meshes/Props/SM_HandStand_Stand_Arm_002_Magnet.SM_HandStand_Stand_Arm_002_Magnet")).Object);
	StandMagnet->SetupAttachment(StandBaseArm);
	StandMagnet->SetRelativeLocation(FVector(0.f, 0.f, 0.f));

	//Pos1 = CreateDefaultSubobject<USceneComponent>("Position 1");
	//Pos1->SetupAttachment(Root);
	//Pos2 = CreateDefaultSubobject<USceneComponent>("Position 2");
	//Pos2->SetupAttachment(Root);
	//Pos3 = CreateDefaultSubobject<USceneComponent>("Position 3");
	//Pos3->SetupAttachment(Root);
	

}
void ADeliveryTerminal::BeginPlay()
{
	Super::BeginPlay();
	AtPos1 = true;
	AtPos2 = false;
	AtOrigin = false;
	//Check if time line exist
	if (Pos1Curve && Pos2Curve && OriginCurve)
	{
		FOnTimelineFloat TimelineCallback_1;
		FOnTimelineEventStatic TimelineFinishedCallback_1;
		
		TimelineCallback_1.BindUFunction(this, FName("RotateArm"));
		TimelineFinishedCallback_1.BindUFunction(this, FName("SetState"));
		Pos1_TL.AddInterpFloat(Pos1Curve, TimelineCallback_1);
		Pos1_TL.SetTimelineFinishedFunc(TimelineFinishedCallback_1);

		Pos2_TL.AddInterpFloat(Pos2Curve, TimelineCallback_1);
		Pos2_TL.SetTimelineFinishedFunc(TimelineFinishedCallback_1);

		BackToOrigin_TL.AddInterpFloat(OriginCurve, TimelineCallback_1);
		BackToOrigin_TL.SetTimelineFinishedFunc(TimelineFinishedCallback_1);

	}
}

void ADeliveryTerminal::SetState()
{
	if (AtPos1)
	{
		AtPos1 = false;
		AtPos2 = true;
		AtOrigin = false;
		Pos2_TL.PlayFromStart();
		return;
	}
	else if (AtPos2)
	{

		AtPos1 = false;
		AtPos2 = false;
		AtOrigin = true;
		BackToOrigin_TL.PlayFromStart();
		return;
	}
	else if (AtOrigin)
	{
		AtPos1 = true;
		AtPos2 = false;
		AtOrigin = false;
	}
}


void ADeliveryTerminal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Pos1_TL.TickTimeline(DeltaTime);
	Pos2_TL.TickTimeline(DeltaTime);
	BackToOrigin_TL.TickTimeline(DeltaTime);
}

void ADeliveryTerminal::ChangeCapsule()
{
	if (AtPos1)
	{
		Pos1_TL.PlayFromStart();
		UE_LOG(LogTemp, Warning, TEXT("Playing 1st"));
	}
}

void ADeliveryTerminal::PlayArmAnmi()
{
	if (AtPos1)
	{
		//Play Animation this
	}
	else if (AtPos2)
	{
		//play animation this
	}
	else if (AtOrigin)
	{
		//Play animation this
	}
}

void ADeliveryTerminal::RotateArm()
{
	if (AtPos1)
	{
		TimelineVal = Pos1_TL.GetPlaybackPosition();
		CurveVal =  Pos1Curve->GetFloatValue(TimelineVal);
		FQuat Pos1_Rotation = FQuat(FRotator(0.f, CurveVal, 0.f));

		StandBody->SetRelativeRotation(Pos1_Rotation);
		
	}
	else if (AtPos2)
	{
		TimelineVal = Pos2_TL.GetPlaybackPosition();
		CurveVal = Pos2Curve->GetFloatValue(TimelineVal);
		FQuat Pos2_Rotation = FQuat(FRotator(0.f, CurveVal, 0.f));

		StandBody->SetRelativeRotation(Pos2_Rotation);
	}
	else if (AtOrigin)
	{
		TimelineVal = BackToOrigin_TL.GetPlaybackPosition();
		CurveVal = OriginCurve->GetFloatValue(TimelineVal);
		FQuat BackToOrigin_Rotation = FQuat(FRotator(0.f, CurveVal, 0.f));

		StandBody->SetRelativeRotation(BackToOrigin_Rotation);
	}
}

