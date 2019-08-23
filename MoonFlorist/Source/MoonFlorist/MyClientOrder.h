// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */

enum ClientNames 
{
	MARK = 1,
	PEPE,
	KIKI,
	SHIKA,
	STEVEN,
	IZZIE,
	JONTY,
	ALEX,
	FRASER,
	ROURKE,
	ROWAN,
	MICHAEL,
	SHUNI,
	JESSKALOO,
	CASPIAN,
	MATI,
	JEREMY,
	ROGER,
	KERRY,
	VIVIAN,
	SALLY,
	JAMES,
	JIMBO,
	DONUT,
	JIMOTHY,
	JASPOR,
	CARLO,
	LARISSA,
	MARA,
	CAROLINE,
	SAMI,
	KATE,
	BENNET,
	RYAN,
	FRANCIS,
	ELLIE,
	REBEKKAH,
	SOFIE,
	ZANNI,
	HOLLY,
	EMMA,
	ROBYN,
	YULI,
	PAULA,
	MEG,
	BERT,
	MAXWELL,
	ABIGAIL,
	ALEXANDRA,
	AMANDA,
	ARIANNE,
	BAILEY,
	BEN,
	BETH,
	BLAIR,
	BO,
	BRIDGET,
	BROOKE,
	BECKY,
	CLAIRE,
	DAMIEN,
	DANNY,
	IVAN,
	SAM,
	SID,
	TECE,
	ASMA,
	SHILPA,
	SAMAH,
	TAMRYN,
	CALLAN,
	FAWAD,
	DAVID,
	ANDREW,
	SHANNON,
	KAITLIN,
	PIGEON,
	BOOF,
	ANNA,
	KIMBERLY,
	SASKIA,
	STEPH,
	PINKY,
	SARAH,
	SERENA,
	IDA,
	LAUREN,
	KEIRA,
	RIANNA,
	ROSARIA,
	JHARAIZ,
	AMY,
	JANELLE,
	JORDAN,
	HAMISH,
	NIKKI,
	PITCAM,
	JUNIPER,
	LOCHIE,
	CALLUM
};

enum ClientColourGoals
{
	RED = 1,
	BLUE,
	YELLOW,
	PURPLE,
	GREEN,
	ORANGE
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

class MOONFLORIST_API MyClientOrder
{
public:
	MyClientOrder(int _iName, int _goalColour, int _goalNumber);
	~MyClientOrder();

	FString GetName();
	FString GetColour();
	FString GetGoal();

private:
	int iName;
	int iGoalColour;
	int iGoalNumber;
	FString sName;
	FString sColour;
	FString sGoal;
};
