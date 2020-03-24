// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Waypoint.h"
#include "Types.h"
#include "AI_HANDS.generated.h"

UCLASS()
class MOONFLORIST_API AAI_HANDS : public ACharacter
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAI_HANDS();
	UPROPERTY(EditAnywhere, Category = "Way Points")
	TArray<AWaypoint*> WaypointArray;

	UPROPERTY(EditAnywhere, Category = "Way Points")
	AWaypoint* CurrentWaypoint;
	UPROPERTY(EditAnywhere, Category = "Way Points")
		AWaypoint* NextWaypoint;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Way Points")
	bool IsMoving;

	/*Hands different behaviors are executed depending on his current states, (passive, patrolling,park, deliverymode ) */
	UPROPERTY(EditAnywhere, Category = "AI")
	EHandsStates HandsState;

	/*BehaviorTree for hands. Allows hands to make decisions based on the data feed into it through the blackboard. Created here so we can have mutliple behaviors for hands while only needing one controller*/
	UPROPERTY(EditAnywhere, Category = "AI")
		class UBehaviorTree* HandsBehaviorTree;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	AWaypoint* RandomiseWP();

	void MoveToWayPoint();

	/*Change the state of hands while in gameplay*/
	void SetHandsState(EHandsStates NewState);
};
