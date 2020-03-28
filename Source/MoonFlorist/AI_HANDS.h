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
	// Sets default values for this actor's properties
	AAI_HANDS(const class FObjectInitializer& ObjectInitializer);

	/* Last time the player was seen*/
	float LastSeenTime;

	/*Timer value to clear the sensed position of the player. Clears player after time out is 0. Will potentially trigger error if it is less thent he sens interval in the pawn sensing comp cause it will miss ticks*/
	UPROPERTY(EditDefaultsOnly, Category = "Hands AI")
	float SenseTimeOut;

	/*True when the player is sensed by Hands. Resets after the sense time out is complete. Can use potentially for sounds and other functions when Hands have seen the target */
	bool SensedPlayer;

	UPROPERTY(VisibleAnywhere, Category = "Hands AI")
	class UPawnSensingComponent* PawnSensingComp;

	UPROPERTY(EditDefaultsOnly, Category = "Hands AI")
		float VisionAngle = 60.0f;
	UPROPERTY(EditDefaultsOnly, Category = "Hands AI")
		float SightRadius = 2000.0f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/*Hands different behaviors are executed depending on his current states, (passive, patrolling,park, deliverymode ) */
	UPROPERTY(EditAnywhere, Category = "Hands AI")
		EHandsStates HandsState;

	/*BehaviorTree for hands. Allows hands to make decisions based on the data feed into it through the blackboard. Created here so we can have mutliple behaviors for hands while only needing one controller*/
	UPROPERTY(EditAnywhere, Category = "Hands AI")
		class UBehaviorTree* HandsBehaviorTree;

	/*Change the state of hands while in gameplay*/
	void SetHandsState(EHandsStates NewState);

	/*Triggered by pawn sensing comp when a pawn is spotted*/
	UFUNCTION()//Need to add UFUNCTION so I can add as a delegate
	void SeenPlayer(APawn* Pawn);


	//AWaypoint* RandomiseWP();
	//void MoveToWayPoint();

	/*UPROPERTY(EditAnywhere, Category = "Way Points")
	TArray<AWaypoint*> WaypointArray;

	UPROPERTY(EditAnywhere, Category = "Way Points")
	AWaypoint* CurrentWaypoint;

	UPROPERTY(EditAnywhere, Category = "Way Points")
	AWaypoint* NextWaypoint;*/

	/*UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Way Points")
	bool IsMoving;*/

};
