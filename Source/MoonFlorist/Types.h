// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Types.generated.h"

UENUM()
enum class EHandsStates : uint8
{
	//Does not move, in idle 
	HS_Passive,
	//Patrols around the base
	HS_Patrolling,
	//Parks on the delivery terminal
	HS_Park,
	//Goes and delivers the bouquet
	HS_DeliveryMode,
};
//Different item types in the game
UENUM(BlueprintType)
enum class EItems : uint8
{
	Scarletflower,
	Cobaltflower,
	Goldenflower,
	Silverflower,
	Scarletseed,
	Cobaltseed,
	Goldenseed,
	Silverseed,
	Cometfertilizer,
	Terranfertilizer,
	Moonfertilizer,
	Noneselected,
};


