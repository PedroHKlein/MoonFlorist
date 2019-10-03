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
	PURPLE,
	GREEN,
	ORANGE,
	WHITE
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
	int iType;
	FString sColour;

	//Score Values
	int iRed = 0;
	int iBlue = 0;
	int iYellow = 0;
	int iPurple = 0;
	int iGreen = 0;
	int iOrange = 0;
	
};
