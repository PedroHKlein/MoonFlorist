// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


/**
 * 
 */

enum SEEDCOLOUR
{
	RED = 1,
	BLUE,
	YELLOW,
	WHITE,
	PURPLE,
	GREEN,
	ORANGE
};

class MOONFLORIST_API MySeed
{
public:
	MySeed(int _iType);
	~MySeed();

private:
	int iType = 0;
};
