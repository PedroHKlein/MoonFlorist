// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyNotification.h"
#include "GameFramework/Actor.h"
#include "MyNotificationManager.generated.h"

UCLASS()
class MOONFLORIST_API AMyNotificationManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyNotificationManager();
	UFUNCTION(BlueprintCallable)
	void AddNotification(FString _Notification, float _fTime);
	UFUNCTION(BlueprintCallable)
	void GenerateNotifications();
	UFUNCTION(BlueprintCallable)
	void RemoveOldNotifications();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY()
	TArray<AMyNotification*> NotificationList;
	UPROPERTY()
	FString sAllNotifications;
};
