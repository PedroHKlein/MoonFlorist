// Fill out your copyright notice in the Description page of Project Settings.


#include "DeliveryTerminal.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "TimerManager.h"

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

	Pos1 = CreateDefaultSubobject<USceneComponent>("Position 1");
	Pos1->SetupAttachment(StandBase);
	Pos2 = CreateDefaultSubobject<USceneComponent>("Position 2");
	Pos2->SetupAttachment(StandBase);
	Pos3 = CreateDefaultSubobject<USceneComponent>("Position 3");
	Pos3->SetupAttachment(StandBase);

}
void ADeliveryTerminal::BeginPlay()
{
	Super::BeginPlay();
	RotateRight = false;
	RotateLeft = false; 
	
}

void ADeliveryTerminal::PrimaryRotate()
{
	FirstAction = true;
	GetWorldTimerManager().ClearTimer(TimerHandle);
	UE_LOG(LogTemp, Warning, TEXT("First"));
}

void ADeliveryTerminal::SecondaryRotate()
{
	SecondAction = true;
	GetWorldTimerManager().ClearTimer(TimerHandle);
	UE_LOG(LogTemp, Warning, TEXT("Second")); 
}

void ADeliveryTerminal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	 current = StandBody->RelativeRotation.Yaw;
	if (RotateLeft)
	{
		UE_LOG(LogTemp, Warning, TEXT(" %f"), StandBody->RelativeRotation.Yaw);
		if (current >= 0.0f && current <= 89.0f)
		{
			StandBody->SetRelativeRotation(FMath::RInterpTo(StandBody->RelativeRotation, Pos1->RelativeRotation, DeltaTime,  Speed));
			
		}
		if (current > 89.0f && current <= 179.0f)
		{
		//	StandBody->SetRelativeRotation(FRotator(0.f, 90.0f, 0.f));
			StandBody->SetRelativeRotation(FMath::RInterpTo(StandBody->RelativeRotation, Pos2->RelativeRotation, DeltaTime,  Speed));
		
		}
		if (current > 179.0f )
		{
			//StandBody->SetRelativeRotation(FRotator(0.f, 270.0f, 0.f));
			StandBody->SetRelativeRotation(FMath::RInterpTo(StandBody->RelativeRotation, Pos3->RelativeRotation, DeltaTime, Speed));
		
			
		}
		if (current > 359.0f)
		{
			StandBody->SetRelativeRotation(FRotator(0.f, 0.0f, 0.f));
			
			RotateLeft = false;
		}
	/*	else if(StandBody->RelativeRotation == FRotator(0.0f,0.0f,0.0f))
		{
			RotateLeft = false;
		}*/

	}
	
}
