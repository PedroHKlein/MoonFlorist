// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyNotification.generated.h"

UCLASS()
class MOONFLORIST_API AMyNotification : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyNotification();
	UFUNCTION(BlueprintCallable)
	void Init(FString _Notification, float _fTime);
	UFUNCTION(BlueprintCallable)
	FString GetNotification();
	UFUNCTION(BlueprintCallable)
	bool HasExpired();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY()
	FString sNotification;
	UPROPERTY()
	float fTime;
	UPROPERTY()
	float fCurrTime = 0;

};
