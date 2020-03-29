// Fill out your copyright notice in the Description page of Project Settings.


#include "AI_HANDS.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/Engine.h"
#include "AI_HANDS_Controller.h"
#include "EngineUtils.h"

/* AI Specific includes */
#include "Perception/PawnSensingComponent.h"

// Sets default values
AAI_HANDS::AAI_HANDS(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 100.0f, 0.0f);
	//IsMoving = false;

	/*Pawn Sensing Setup. Used to detect the Player by visibility checks*/
	PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComp"));
	PawnSensingComp->SetPeripheralVisionAngle(VisionAngle);
	PawnSensingComp->SightRadius = SightRadius;


	SenseTimeOut = 2.5f;


}

// Called when the game starts or when spawned
void AAI_HANDS::BeginPlay()
{
	Super::BeginPlay();
	////NextWaypoint->ActiveWaypoint = false;
	//for (TActorIterator<AWaypoint> Actor(GetWorld()); Actor; ++Actor)
	//{
	//	WaypointArray.Add(Cast<AWaypoint>(*Actor));
	//	
	//}
	////UE_LOG(LogTemp, Warning, TEXT("Waypoints: %d"), WaypointArray.Num());
	//NextWaypoint = RandomiseWP();
	//CurrentWaypoint = RandomiseWP();
	//MoveToWayPoint();
	PawnSensingComp->SetPeripheralVisionAngle(VisionAngle);
	PawnSensingComp->SightRadius = SightRadius;
	if (PawnSensingComp)
	{
		PawnSensingComp->OnSeePawn.AddDynamic(this, &AAI_HANDS::SeenPlayer);
	}

	HandsState = EHandsStates::HS_Patrolling;
}

// Called every frame
void AAI_HANDS::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//if (!(this->GetActorLocation() + CurrentWaypoint->GetActorLocation()).IsNearlyZero())
	//{
	//	IsMoving = true;
	//}
	//else
	//{
	//	IsMoving = false;
	//}
	if (SensedPlayer && (GetWorld()->TimeSeconds - LastSeenTime) > SenseTimeOut)
	{
		AAI_HANDS_Controller* AIController = Cast<AAI_HANDS_Controller>(GetController());
		if (AIController)
		{
			SensedPlayer = false;
			AIController->SetPlayer(nullptr);
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(0, 5.0f, FColor::Orange, "UnSee Player");
			}
		}
	}
}
//
//AWaypoint* AAI_HANDS::RandomiseWP()
//{
//	int index = FMath::RandRange(0, WaypointArray.Num() - 1);
//	if (GEngine)
//	{
//		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("Rand Value: %f"), index));
//	}
//	return (WaypointArray[index]);
//}

//void AAI_HANDS::MoveToWayPoint()
//{
//	AAI_HANDS_Controller* HandsController = Cast<AAI_HANDS_Controller>(GetController());
//	if (HandsController)
//	{
//		if (CurrentWaypoint != nullptr)
//		{
//			if (NextWaypoint != nullptr)
//			{
//				
//				HandsController->MoveToActor(NextWaypoint, 5.0f);
//				UE_LOG(LogTemp, Warning, TEXT("Working"));
//			}
//		
//
//		}
//
//	}
//}

void AAI_HANDS::SetHandsState(EHandsStates NewState)
{
	/* Set hands states to the new one for both in character and on the controller*/
	HandsState = NewState;
	AAI_HANDS_Controller* HandsController = Cast<AAI_HANDS_Controller>(GetController());

	if (HandsController)
	{
		HandsController->SetBlackBoardHandsState(NewState);
	}
}

void AAI_HANDS::SeenPlayer(APawn* Pawn)
{
	//do something 
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(0, 5.0f, FColor::Orange, "See's Player");
	}
	/*Keep track of time when hands sees the player*/
	LastSeenTime = GetWorld()->GetTimeSeconds();
	SensedPlayer = true;
	AAI_HANDS_Controller* HandsController = Cast<AAI_HANDS_Controller>(GetController());
	AMoonFloristCharacter* SensedPawn = Cast<AMoonFloristCharacter>(Pawn);
	if (SensedPawn && HandsController)
	{
		HandsController->SetPlayer(SensedPawn);
	}
}

