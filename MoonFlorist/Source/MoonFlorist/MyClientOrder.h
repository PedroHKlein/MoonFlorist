// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EngineUtils.h"
#include "Engine/World.h"
#include "MyGoal.h"
#include "UObject/NoExportTypes.h"
#include "MyClientOrder.generated.h"

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

UCLASS()
class MOONFLORIST_API UMyClientOrder : public UObject
{
	GENERATED_BODY()
	
public:
	UMyClientOrder();
	~UMyClientOrder();

	UFUNCTION(BlueprintCallable)
	void init(int _iName, int _iNumOfGoals, UWorld* _world);
	UFUNCTION(BlueprintCallable)
	void GenerateJob(int _iNum);
	UFUNCTION(BlueprintCallable)
	FString GetName();
	UFUNCTION(BlueprintCallable)
	TArray<UMyGoal*> GetGoals();
	UFUNCTION(BlueprintCallable)
	FString GetFullDescription();
	UFUNCTION(BlueprintCallable)
	void SetDescription(FString _Description);

private:
	UPROPERTY()
	int iName;
	UPROPERTY()
	FString sGreeting = "<Default>Hello my name is ";
	UPROPERTY()
	FString Dialogue1 = "<Default>. I would like to order a bouquet that feels";
	UPROPERTY()
	FString Dialogue2 = "<Default>,";
	UPROPERTY()
	FString Dialogue3 = "<Default> and";
	UPROPERTY()
	FString sName;
	UPROPERTY()
	TArray<UMyGoal*> Goals;
	UPROPERTY()
	FString sFullDescription;
	UPROPERTY()
	UWorld* World;
	UPROPERTY()
	class AMyGameManager* GameManager;

};
