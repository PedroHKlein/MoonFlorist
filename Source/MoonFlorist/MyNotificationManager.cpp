// Fill out your copyright notice in the Description page of Project Settings.


#include "MyNotificationManager.h"

// Sets default values
AMyNotificationManager::AMyNotificationManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyNotificationManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyNotificationManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyNotificationManager::AddNotification(FString _Notification, float _fTime)
{
	AMyNotification* temp;
	temp = GetWorld()->SpawnActor<AMyNotification>(AMyNotification::StaticClass());
	temp->Init(_Notification, _fTime);
	NotificationList.Insert(temp, 0);
}

void AMyNotificationManager::GenerateNotifications()
{
	if (NotificationList[0] != NULL)
	{
		for (int i = 0; i < NotificationList.Num(); i++)
		{
			sAllNotifications = sAllNotifications + NotificationList[i]->GetNotification() + LINE_TERMINATOR;
		}
	}
}

void AMyNotificationManager::RemoveOldNotifications()
{
	for (int i = 0; i < NotificationList.Num(); i++)
	{
		if (NotificationList[i]->HasExpired())
		{
			NotificationList.RemoveAt(i);
		}
	}
	GenerateNotifications();
}
