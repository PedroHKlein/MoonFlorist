// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyFlower.generated.h"

/**
 * 
 */

enum FLOWERCOLOUR
{
	RED = 1,
	BLUE,
	YELLOW,
	WHITE,
	GREEN,
	ORANGE,
	PURPLE
};

UCLASS()
class MOONFLORIST_API UMyFlower : public UObject
{
	GENERATED_BODY()

public:
	UMyFlower();
	~UMyFlower();
	UFUNCTION(BlueprintCallable)
	void init(int _iType);
	UFUNCTION(BlueprintCallable)
	int GetColourScore(int _iCol);
	UFUNCTION(BlueprintCallable)
	int GetFlowerID();
	UFUNCTION(BlueprintCallable)
	FString GetFlowerName();

private:
	//type of flower
	UPROPERTY()
	int iType;
	UPROPERTY()
	FString sColour;

	//Score Values
	UPROPERTY()
	int iRed = 0;
	UPROPERTY()
	int iBlue = 0;
	UPROPERTY()
	int iYellow = 0;
	UPROPERTY()
	int iPurple = 0;
	UPROPERTY()
	int iGreen = 0;
	UPROPERTY()
	int iOrange = 0;
	
};
