// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_FindPatrolLocation.h"
#include "PatrolPoint.h"
#include "AI_HANDS_Controller.h"
#include "AI_HANDS.h"

/* AI Module includes */
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
/* This contains includes all key types like UBlackboardKeyType_Vector used below. */
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "NavigationSystem.h"


EBTNodeResult::Type UBTTask_FindPatrolLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAI_HANDS_Controller* HandsController = Cast<AAI_HANDS_Controller>(OwnerComp.GetAIOwner());
	if (HandsController == nullptr)
	{
		/* Task Returns Fail State */
		UE_LOG(LogTemp, Error, TEXT("BTTask_FindPatrolPoint: No AI Controller"));
		return EBTNodeResult::Failed;
	}
	APatrolPoint* CurrentPatrolPoint = HandsController->GetPatrolPoint();
	if (CurrentPatrolPoint)
	{
		/* Finds a position which is close to the destination. Adding Random to making AI feel less Automated */
		const FVector SearchDestination = CurrentPatrolPoint->GetActorLocation();
		
		FNavLocation ResultLoc;
		UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetNavigationSystem(HandsController);
		/* Using built in RandomPointInRadius to slowly move the Hands to the destination */
		if (NavSystem && NavSystem->GetRandomPointInNavigableRadius(SearchDestination, SearchRadius, ResultLoc))
		{
			/* GetSelectedKey is set outside in the BehaviorTree. Should be set to "PatrolLocation" */
			OwnerComp.GetBlackboardComponent()->SetValue<UBlackboardKeyType_Vector>(BlackboardKey.GetSelectedKeyID(),ResultLoc.Location);
			/* Task Returns Succeeded State */
			UE_LOG(LogTemp, Error, TEXT("BTTask_FindPatrolLocation: Found Patrol Location"));
			return  EBTNodeResult::Succeeded;
		}
	}

	/* Task Returns Fail State */
	UE_LOG(LogTemp, Error, TEXT("BTTask_FindPatrolLocation: Cannot Find Location"));
	return EBTNodeResult::Failed;
}
