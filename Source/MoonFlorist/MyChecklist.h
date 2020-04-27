// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyClient.h"
#include "GameFramework/Actor.h"
#include "MyChecklist.generated.h"

UCLASS()
class MOONFLORIST_API AMyChecklist : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyChecklist();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	AMyClient* CurrentClient;
	FString sName;
	TArray<FString*> sGoals;
	FString sMakeBouquet;
	FString sSendBouquet;

};
