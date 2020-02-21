// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyEmail.h"
#include "GameFramework/Actor.h"
#include "MyEmailManager.generated.h"

UCLASS()
class MOONFLORIST_API AMyEmailManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyEmailManager();
	TArray<AMyEmail*> GetOrders();
	TArray<AMyEmail*> GetFeedback();
	TArray<AMyEmail*> GetSpam();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	TArray<AMyEmail*> Orders;
	TArray<AMyEmail*> Feedback;
	TArray<AMyEmail*> Spam;
};
