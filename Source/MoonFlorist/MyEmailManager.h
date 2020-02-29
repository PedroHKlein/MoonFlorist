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
	UFUNCTION(BlueprintCallable)
	TArray<AMyEmail*> GetOrders();
	UFUNCTION(BlueprintCallable)
	TArray<AMyEmail*> GetFeedback();
	UFUNCTION(BlueprintCallable)
	TArray<AMyEmail*> GetSpam();
	UFUNCTION(BlueprintCallable)
	void AddToOrders(AMyEmail* _email);
	UFUNCTION(BlueprintCallable)
	void AddToFeedback(AMyEmail* _email);
	UFUNCTION(BlueprintCallable)
	void AddToSpam(AMyEmail* _email);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY()
	TArray<AMyEmail*> Orders;
	UPROPERTY()
	TArray<AMyEmail*> Feedback;
	UPROPERTY()
	TArray<AMyEmail*> Spam;
};
