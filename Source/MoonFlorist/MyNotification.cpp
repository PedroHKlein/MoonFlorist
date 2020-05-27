// Fill out your copyright notice in the Description page of Project Settings.


#include "MyNotification.h"

// Sets default values
AMyNotification::AMyNotification()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyNotification::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyNotification::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	fCurrTime = fCurrTime + DeltaTime;
}


void AMyNotification::Init(FString _Notification, float _fTime)
{
	sNotification = _Notification;
	fTime = _fTime;
}

FString AMyNotification::GetNotification()
{
	return sNotification;
}

bool AMyNotification::HasExpired()
{
	if (fCurrTime >= fTime)
	{
		return true;
	}
	else
	{
		return false;
	}
}

