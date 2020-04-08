// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_ChangeHandsStates.h"
#include "AI_HANDS_Controller.h"
#include "AI_HANDS.h"

/* AI Module includes */
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UBTTask_ChangeHandsStates::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//Initalizing nescssary variables for this task
	HandsController = Cast<AAI_HANDS_Controller>(OwnerComp.GetAIOwner());
	Hands = Cast<AAI_HANDS>(HandsController->GetPawn());

	if (!HandsController)
	{
		UE_LOG(LogTemp, Error, TEXT("BTTask_ChangeHandsStates: No AI Controller"));
		return EBTNodeResult::Aborted;
	}

	if (Hands)
	{
		Hands->SetHandsState(State);
		UE_LOG(LogTemp, Error, TEXT("BTTask_ChangeHandsStates: Changed State "));
		return EBTNodeResult::Succeeded;
	}


	UE_LOG(LogTemp, Error, TEXT("BTTask_ChangeHandsStates: No AI Character"));
	return EBTNodeResult::Failed;
}