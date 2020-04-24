// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "Types.h"
#include "BTTask_ChangeHandsStates.generated.h"

/**
 * Change State for Hands, DeliveryMode, Passive, Patrol, Park
 */
UCLASS()
class MOONFLORIST_API UBTTask_ChangeHandsStates : public UBTTaskNode
{
	GENERATED_BODY()

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	class AAI_HANDS_Controller* HandsController;
	class AAI_HANDS* Hands;
public:
	UPROPERTY(EditAnywhere)
	EHandsStates State;
};
