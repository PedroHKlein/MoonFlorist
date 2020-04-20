// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_FindDeliveryLocation.h"
#include "AI_HANDS_Controller.h"
#include "AI_HANDS.h"
#include "Kismet/GameplayStatics.h"
#include "PatrolPoint.h"
/* AI Module includes */
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
/* This contains includes all key types like UBlackboardKeyType_Vector used below. */
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"

EBTNodeResult::Type UBTTask_FindDeliveryLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//Initalizing nescssary variables for this task
	UBlackboardComponent* Blackboard = OwnerComp.GetBlackboardComponent();
	HandsController = Cast<AAI_HANDS_Controller>(OwnerComp.GetAIOwner());
	Hands = Cast<AAI_HANDS>(HandsController->GetPawn());
	if (!HandsController)
	{
		UE_LOG(LogTemp, Error, TEXT("BTTask_FindDeliveryLocation: No AI Controller"));
		return EBTNodeResult::Aborted;
	}

	TArray<AActor*> Array;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APatrolPoint::StaticClass(), Array);
	if (Array.Num() == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("BTTask_FindDeliveryLocation: Empty Patrol Point Array"));
		return EBTNodeResult::Aborted;
	}
	AActor* DeliverLocation = nullptr;
	for (AActor* i : Array)
	{
		if (i->ActorHasTag("DeliverFadeOut"))
		{
			DeliverLocation = i;
		}
	}

	if (DeliverLocation)
	{
		if(Hands)
		{
		
			Blackboard->SetValue<UBlackboardKeyType_Vector>(BlackboardKey.GetSelectedKeyID(), DeliverLocation->GetActorLocation());

			UE_LOG(LogTemp, Error, TEXT("BTTask_FindDeliveryLocation: Unhide Hands"));
			return EBTNodeResult::Succeeded;
		}
		
	}


	UE_LOG(LogTemp, Error, TEXT("BTTask_FindDeliveryLocation: No AI Character"));
	return EBTNodeResult::Failed;
}
