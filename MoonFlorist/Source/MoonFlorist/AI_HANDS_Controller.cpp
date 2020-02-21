// Fill out your copyright notice in the Description page of Project Settings.


#include "AI_HANDS_Controller.h"
#include "AI_HANDS.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"

AAI_HANDS_Controller::AAI_HANDS_Controller()
{
	PrimaryActorTick.bCanEverTick = true;
		
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));
	SetPerceptionComponent(*CreateDefaultSubobject<UAIPerceptionComponent>(("Perception Component")));
	//Setting Configurations
	SightConfig->SightRadius = SightRadius;
	SightConfig->LoseSightRadius = LoseSightRadius;
	SightConfig->PeripheralVisionAngleDegrees = FOV;
	SightConfig->SetMaxAge(SightAge);

	//This allows hands to be able to detect these different types of entities
	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

	GetPerceptionComponent()->SetDominantSense(*SightConfig->GetSenseImplementation());
	GetPerceptionComponent()->OnPerceptionUpdated.AddDynamic(this, &AAI_HANDS_Controller::OnPawnDetected);
	GetPerceptionComponent()->ConfigureSense(*SightConfig);

}

void AAI_HANDS_Controller::BeginPlay()
{
	Super::BeginPlay();
}

void AAI_HANDS_Controller::OnPossess(APawn* _Pawn)
{
	Super::OnPossess(_Pawn);
	
	if (GetPerceptionComponent() != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("AI System Ready"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Percetion Component MISSING"));
	}
}

void AAI_HANDS_Controller::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

FRotator AAI_HANDS_Controller::GetControlRotation() const
{
	if (GetPawn() == nullptr)
	{
		//If there is not pawn, then return no rotation of the pawn
		return FRotator(0.0f,0.0f,0.0f);
	}
	//Returns the y axis
	return FRotator(0.0f, GetPawn()->GetActorRotation().Yaw, 0.0f);
}
//
//void AAI_HANDS_Controller::OnMoveCompleted(FAIRequestID RequestID, EPathFollowingResult::Type Result)
//{
//	
//
//}


void AAI_HANDS_Controller::OnPawnDetected(const TArray<AActor*>& DetectedPawns)
{
}
