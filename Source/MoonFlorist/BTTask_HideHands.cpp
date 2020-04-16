// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_HideHands.h"
#include "AI_HANDS_Controller.h"
#include "AI_HANDS.h"



/* AI Module includes */
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
/* This contains includes all key types like UBlackboardKeyType_Vector used below. */
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"

EBTNodeResult::Type UBTTask_HideHands::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//Initalizing nescssary variables for this task
	UBlackboardComponent* Blackboard = OwnerComp.GetBlackboardComponent();
	HandsController = Cast<AAI_HANDS_Controller>(OwnerComp.GetAIOwner());
	Hands = Cast<AAI_HANDS>(HandsController->GetPawn());

	if (!HandsController)
	{
		UE_LOG(LogTemp, Error, TEXT("BTTask_HideHands: No AI Controller"));
		return EBTNodeResult::Aborted;
	}

	if (Hands)
	{
		//Hides hands if the boolean is turned on 
		if (Hide)
		{
			Hands->SetActorHiddenInGame(true);
			UE_LOG(LogTemp, Error, TEXT("BTTask_HideHands: Hide Hands"));
			return EBTNodeResult::Succeeded;
		}
		else if (!Hide)//Unhides hands if the boolean is turned off
		{
			Hands->SetActorHiddenInGame(false);
			UE_LOG(LogTemp, Error, TEXT("BTTask_HideHands: Unhide Hands"));
			return EBTNodeResult::Succeeded;
		}
		
	}


	UE_LOG(LogTemp, Error, TEXT("BTTask_HideHands: No AI Character"));
	return EBTNodeResult::Failed;
}
