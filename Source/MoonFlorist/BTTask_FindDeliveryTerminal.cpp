// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_FindDeliveryTerminal.h"
#include "PatrolPoint.h"
#include "AI_HANDS_Controller.h"
#include "AI_HANDS.h"
#include "Kismet/GameplayStatics.h"
#include "MyGameManager.h"


/* AI Module includes */
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
/* This contains includes all key types like UBlackboardKeyType_Vector used below. */
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "NavigationSystem.h"

EBTNodeResult::Type UBTTask_FindDeliveryTerminal::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAI_HANDS_Controller* HandsController = Cast<AAI_HANDS_Controller>(OwnerComp.GetAIOwner());
	AAI_HANDS* Hands = Cast<AAI_HANDS>(HandsController->GetPawn());
	TArray<AActor*> GMArray;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMyGameManager::StaticClass(), GMArray);
	if (GMArray.Num() == 0)
	{
		return EBTNodeResult::Aborted;
	}
	AMyGameManager* GameManager = Cast<AMyGameManager>(GMArray[0]);

	if (HandsController == nullptr)
	{
		/* Task Returns Fail State */
		UE_LOG(LogTemp, Error, TEXT("BTTask_FindDeliveryTerminal: No AI Controller"));
		return EBTNodeResult::Failed;
	}
	TArray<AActor*> Array;
	UGameplayStatics::GetAllActorsOfClass(HandsController, APatrolPoint::StaticClass(), Array);
	AActor* PointToGo = nullptr;
	for (AActor* i : Array)
	{
		if (i->ActorHasTag("DeliveryTerminalLocation"))
		{
			PointToGo = i;
			UE_LOG(LogTemp, Error, TEXT("Found It"));
		}
	}
	

	if (Array.Num() == 0)
	{
		/* Task Returns Fail State */
		UE_LOG(LogTemp, Error, TEXT("BTTask_FindDeliveryTerminal: No Delivery Terminal Patrol Point"));
		return EBTNodeResult::Failed;
	}
	
	if (PointToGo)
	{
		/* Finds a position which is close to the destination. Adding Random to making AI feel less Automated */
		const FVector SearchDestination = PointToGo->GetActorLocation();

		if (Hands)
		{
			OwnerComp.GetBlackboardComponent()->SetValue<UBlackboardKeyType_Vector>(BlackboardKey.GetSelectedKeyID(), SearchDestination);
			//OwnerComp.GetOwner()->TeleportTo(SearchDestination, Hands->GetActorRotation());
			Hands->SetActorLocation(SearchDestination);
			GameManager->HandsCanDeliver = false;
			Hands->SetHandsState(EHandsStates::HS_Passive);
		
			/* Task Returns Succeeded State */
			UE_LOG(LogTemp, Error, TEXT("BTTask_FindPatrolLocation:Teleported"));
			return  EBTNodeResult::Succeeded;
		}
		else
		{
			/* Task Returns Fail State */
			UE_LOG(LogTemp, Error, TEXT("BTTask_FindDeliveryTerminal: No Hands"));
			return EBTNodeResult::Failed;
		}
			
		
	}

	/* Task Returns Fail State */
	UE_LOG(LogTemp, Error, TEXT("BTTask_FindDeliveryTerminal: Cannot Find Terminal"));
	return EBTNodeResult::Failed;
}
