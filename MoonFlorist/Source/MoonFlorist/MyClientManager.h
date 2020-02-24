// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/World.h"
#include "MyClient.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyClientManager.generated.h"

UCLASS()
class MOONFLORIST_API AMyClientManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyClientManager();
	UFUNCTION()
	void init();
	TArray<AMyClient*> GetClients();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY()
	TArray<AMyClient*> Clients;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
