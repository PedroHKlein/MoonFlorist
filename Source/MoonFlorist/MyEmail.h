// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyClient.h"
#include "EngineUtils.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "MyEmail.generated.h"

UCLASS()
class MOONFLORIST_API AMyEmail : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyEmail();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable)
	void Feedbackinit(AMyClient* _client ,TArray<UMyGoal*> _gSuccess, TArray<UMyGoal*> _gFailure, int _iScore, int _iWorth);
	UFUNCTION(BlueprintCallable)
	void Orderinit(AMyClient* _client);
	UFUNCTION(BlueprintCallable)
	void Spaminit(FString _spam);
	UFUNCTION(BlueprintCallable)
	FString GetFullEmail();
	UFUNCTION(BlueprintCallable)
	void SetFullEmail(FString _FullEmail);
	UFUNCTION(BlueprintCallable)
	void GenerateFeedbackEmail();
	UFUNCTION(BlueprintCallable)
	FString GetClientName();
	UFUNCTION(BlueprintCallable)
	bool GetDelivered();
	UFUNCTION(BlueprintCallable)
	int GetWorth();


private:
	UPROPERTY()
	int iGood;
	UPROPERTY()
	int iBad;
	UPROPERTY()
	int iScore;
	UPROPERTY()
	FString sSubject;
	UPROPERTY()
	FString sGood;
	UPROPERTY()
	FString sBad;
	UPROPERTY()
	FString sOverall;
	UPROPERTY()
	FString sClientName;
	UPROPERTY()
	FString sFullEmail;
	UPROPERTY()
	float fTime;
	UPROPERTY()
	bool bDelivered = true;
	UPROPERTY()
	int iWorth;
	UPROPERTY()
	bool bNotified = false;
	UPROPERTY()
	class AMyGameManager* GameManager;


	UPROPERTY()
	TArray<UMyGoal*> GoalSuccess;
	UPROPERTY()
	TArray<UMyGoal*> GoalFailure;

	UPROPERTY()
	AMyClient* Client;

};
