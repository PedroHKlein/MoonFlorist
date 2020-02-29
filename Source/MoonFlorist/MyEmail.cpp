// Fill out your copyright notice in the Description page of Project Settings.


#include "MyEmail.h"

// Sets default values
AMyEmail::AMyEmail()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyEmail::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyEmail::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyEmail::init()
{
	sSubject = "No Subject";
	sGood = "It was ok";
	sBad = "It was pretty bad";
	sOverall = "Overall pretty shit tbh";
	sClientName = "Mark";
	sFullEmail = sSubject + sGood + sBad + sOverall + sClientName;
}

FString AMyEmail::GetFullEmail()
{
	return sFullEmail;
}

void AMyEmail::SetFullEmail(FString _FullEmail)
{
	sFullEmail = _FullEmail;
}

