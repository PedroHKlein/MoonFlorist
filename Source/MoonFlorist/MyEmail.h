// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
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
	void init();
	FString GetFullEmail();
	void SetFullEmail(FString _FullEmail);

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
	FString sGreeting = "Hello my name is ";
	UPROPERTY()
	FString Dialogue1 = ". I would like to order a bouquet that feels";
	UPROPERTY()
	FString Dialogue2 = "<Default>,";
	UPROPERTY()
	FString Dialogue3 = "<Default> and";

};
