// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_FindDeliveryTerminal.h"
#include "PatrolPoint.h"
#include "AI_HANDS_Controller.h"
#include "Kismet/GameplayStatics.h"


/* AI Module includes */
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
/* This contains includes all key types like UBlackboardKeyType_Vector used below. */
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "NavigationSystem.h"

EBTNodeResult::Type UBTTask_FindDeliveryTerminal::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAI_HANDS_Controller* HandsController = Cast<AAI_HANDS_Controller>(OwnerComp.GetAIOwner());
	if (HandsController == nullptr)
	{
		/* Task Returns Fail State */
		UE_LOG(LogTemp, Error, TEXT("BTTask_FindDeliveryTerminal: No AI Controller"));
		return EBTNodeResult::Failed;
	}
	TArray<AActor*> Array;
	UGameplayStatics::GetAllActorsOfClass(HandsController, APatrolPoint::StaticClass(), Array);
	AActor* PointToGo = Array[0];

	if (Array.Num() == 0)
	{
		/* Task Returns Fail State */
		UE_LOG(LogTemp, Error, TEXT("BTTask_FindDeliveryTerminal: No Delivery Terminal Patrol Point"));
		return EBTNodeResult::Failed;
	}

	if (PointToGo)
	{
		/* Finds a position which is close to the destination. Adding Random to making AI feel less Automated */
		const FVector SeachDestination = PointToGo->GetActorLocation();
		FNavLocation ResultLocation;
		UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetNavigationSystem(HandsController);
		if (NavSystem && NavSystem->GetRandomPointInNavigableRadius(SeachDestination, SearchRadius, ResultLocation))
		{
			/* GetSelectedKey is set outside in the BehaviorTree. Should be set to "DeliveryTerminalLocation" */
			OwnerComp.GetBlackboardComponent()->SetValue<UBlackboardKeyType_Vector>(BlackboardKey.GetSelectedKeyID(), ResultLocation.Location);
			/* Task Returns Succeeded State */
			UE_LOG(LogTemp, Error, TEXT("BTTask_FindPatrolLocation: Found Delivery Terminal Location"));
			return  EBTNodeResult::Succeeded;
		}

	}

	/* Task Returns Fail State */
	UE_LOG(LogTemp, Error, TEXT("BTTask_FindDeliveryTerminal: Cannot Find Terminal"));
	return EBTNodeResult::Failed;
}
