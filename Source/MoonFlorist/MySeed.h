// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MySeed.generated.h"

/**
 * 
 */

enum SEEDCOLOUR
{
	SRED = 1,
	SBLUE,
	SYELLOW,
	SPURPLE,
	SGREEN,
	SORANGE,
	SWHITE
};

UCLASS()
class MOONFLORIST_API UMySeed : public UObject
{
	GENERATED_BODY()
	
public:
	UMySeed();
	~UMySeed();
	UFUNCTION(BlueprintCallable)
	void init(int _iType);


private:
	UPROPERTY()
	int iType = 0;
};
