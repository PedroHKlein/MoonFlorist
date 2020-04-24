// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_HideHands.generated.h"

/**
 * 
 */
UCLASS()
class MOONFLORIST_API UBTTask_HideHands : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	class AAI_HANDS_Controller* HandsController;

	class AAI_HANDS* Hands;
public:
	UPROPERTY(EditAnywhere)
		bool Hide;


};
