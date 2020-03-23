// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "PatrolPoint.h"
#include "MoonFloristCharacter.h"
#include "AI_HANDS_Controller.generated.h"

/**
 * H.A.N.D.S controller class
 */
UCLASS()
class MOONFLORIST_API AAI_HANDS_Controller : public AAIController
{
	GENERATED_BODY()


public:
	AAI_HANDS_Controller(const class FObjectInitializer& ObjectInitializer);

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void OnPossess(APawn* _Pawn) override;

	virtual void OnUnPossess() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual FRotator GetControlRotation() const override;

//	void OnMoveCompleted(FAIRequestID RequestID, EPathFollowingResult::Type Result);

	UFUNCTION()
	void OnPawnDetected(const TArray<AActor*> &DetectedPawns);

	APatrolPoint* GetPatrolPoint();

	AMoonFloristCharacter* GetPlayer();


public:
	//How far HANDS can see
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AI_HANDS)
	float SightRadius = 500.0f;
	//How long it keeps this sight information
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AI_HANDS)
	float SightAge = 5.0f;
	//How far away for the HANDS to not see you anymore
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AI_HANDS)
	float LoseSightRadius = SightRadius + 50.0f;
	//Field of View of HANDS 
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AI_HANDS)
	float FOV = 90.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AI_HANDS)
	class UAISenseConfig_Sight* SightConfig;

	class UBehaviorTreeComponent* BehaviorComp;

	class UBlackboardComponent* BlackboardComp;

	UPROPERTY(EditDefaultsOnly, Category = "Hands AI")
	FName PatrolLocationKeyName;

	UPROPERTY(EditDefaultsOnly, Category = "Hands AI")
	FName CurrentPatrolPointKeyName;

	UPROPERTY(EditDefaultsOnly, Category = "Hands AI")
	FName CurrentStateKeyName;

	UPROPERTY(EditDefaultsOnly, Category = "Hands AI")
	FName PlayerKeyName;

	/** Returns BehaviorComp subobject **/
	FORCEINLINE UBehaviorTreeComponent* GetBehaviorComp() const { return BehaviorComp; }

	FORCEINLINE UBlackboardComponent* GetBlackboardComp() const { return BlackboardComp; }
};
