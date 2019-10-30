// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyGoal.generated.h"

/**
 * 
 */

enum ClientColourGoals
{
	GRED = 1,
	GBLUE,
	GYELLOW,
	GPURPLE,
	GGREEN,
	GORANGE
};

enum RedGoalNames
{
	FIESTY = 1,
	PASSIONATE,
	LOVE,
	CORAGEOUS,
	REDRED

};

enum BlueGoalNames
{
	COOL = 1,
	TRUST,
	SMART,
	PEACEFUL,
	BLUEBLUE

};

enum YellowGoalNames
{
	OPTIMISTIC = 1,
	CHEERFUL,
	BRIGHT,
	SUNNY,
	YELLOWYELLOW

};

enum PurpleGoalNames
{
	MAGIC = 1,
	MYSTERY,
	INSPIRING,
	SENSUAL,
	REDBLUE

};

enum GreenGoalNames
{
	NATURAL = 1,
	DOWNTOEARTH,
	CLEAN,
	FORWARD,
	YELLOWBLUE
};

enum OrangeGoalNames
{
	ADVENTUROUS = 1,
	WARM,
	ZESTY,
	TANGY,
	REDYELLOW
};

UCLASS()
class MOONFLORIST_API UMyGoal : public UObject
{
	GENERATED_BODY()

public:
	UMyGoal();
	~UMyGoal();


	UFUNCTION(BlueprintCallable)
	void init(int _iCol, int iGoal);
	UFUNCTION(BlueprintCallable)
	int GetColourID();
	UFUNCTION(BlueprintCallable)
	int GetGoalID();
	UFUNCTION(BlueprintCallable)
	FString GetColour();
	UFUNCTION(BlueprintCallable)
	FString GetGoal();
	UFUNCTION(BlueprintCallable)
	void SetComplete();

private:
	UPROPERTY()
	int iGoalColour;
	UPROPERTY()
	int iGoalNumber;
	UPROPERTY()
	FString sColour;
	UPROPERTY()
	FString sGoal;
	UPROPERTY()
	bool bComplete;
	
};
