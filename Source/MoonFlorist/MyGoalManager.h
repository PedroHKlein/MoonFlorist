// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyGoal.h"
#include "GameFramework/Actor.h"
#include "MyGoalManager.generated.h"

UCLASS()
class MOONFLORIST_API AMyGoalManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyGoalManager();
	UFUNCTION()
	void init();
	UFUNCTION()
	UMyGoal* GetGoal(int _icol, int _igoal);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY()
	TArray<UMyGoal*> RedGoals;
	UPROPERTY()
	TArray<UMyGoal*> BlueGoals;
	UPROPERTY()
	TArray<UMyGoal*> YellowGoals;
	UPROPERTY()
	TArray<UMyGoal*> GreenGoals;
	UPROPERTY()
	TArray<UMyGoal*> PurpleGoals;
	UPROPERTY()
	TArray<UMyGoal*> OrangeGoals;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
