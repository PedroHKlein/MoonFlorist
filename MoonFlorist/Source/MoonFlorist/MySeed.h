// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


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

class MOONFLORIST_API MySeed
{
public:
	MySeed(int _iType);
	~MySeed();

private:
	int iType = 0;
};
