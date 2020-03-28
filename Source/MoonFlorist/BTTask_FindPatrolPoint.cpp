// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_FindPatrolPoint.h"
#include "PatrolPoint.h"
#include "AI_HANDS_Controller.h"
#include "Kismet/GameplayStatics.h"

/* AI Specific Includes */
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
/* This contains includes all key types like UBlackboardKeyType_Vector used below. */
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"


EBTNodeResult::Type UBTTask_FindPatrolPoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAI_HANDS_Controller* HandsController = Cast<AAI_HANDS_Controller>(OwnerComp.GetAIOwner());
	if (HandsController == nullptr)
	{
		/* Task Returns Fail State */
		UE_LOG(LogTemp, Error, TEXT("BTTask_FindPatrolPoint: No AI Controller"));
		return EBTNodeResult::Failed;
	}
	/* Getting the current patrol point hands has */
	APatrolPoint* CurrentPatrolPoint = HandsController->GetPatrolPoint();
	AActor* NextPatrolPoint = nullptr;

	/* Find all the patrol points that are placed in the level */
	TArray<AActor*> AllPatrolPoints;
	UGameplayStatics::GetAllActorsOfClass(HandsController, APatrolPoint::StaticClass(), AllPatrolPoints);

	if (AllPatrolPoints.Num() == 0)
	{
		/* Task Returns Fail State */
		UE_LOG(LogTemp, Error, TEXT("BTTask_FindPatrolPoint: Patrol Point Array Empty (No Patrol Points in Level)"));
		return EBTNodeResult::Failed;
	}
	/* Randomly Find the next patrol point for hands to go to from the array of patrolpoints (can include the current patrol point in which it will run this again) */
	NextPatrolPoint = AllPatrolPoints[FMath::RandRange(0, AllPatrolPoints.Num() - 1)];

	/* If a next patrol point is found, then set it to the blackboard key */
	if (NextPatrolPoint)
	{
		/* GetSelectedKey is set outside in the BehaviorTree. Should be set to "CurrentPatrolPoint" */
		OwnerComp.GetBlackboardComponent()->SetValue<UBlackboardKeyType_Object>(BlackboardKey.GetSelectedKeyID(), NextPatrolPoint);
		/* Task Returns Succeeded State */
		UE_LOG(LogTemp, Error, TEXT("BTTask_FindPatrolPoint: Found Next Patrol Point"));
		return  EBTNodeResult::Succeeded;
	}

	/* Task Returns Fail State */
	UE_LOG(LogTemp, Error, TEXT("BTTask_FindPatrolPoint: No Next Patrol Point"));
	return EBTNodeResult::Failed;
}
