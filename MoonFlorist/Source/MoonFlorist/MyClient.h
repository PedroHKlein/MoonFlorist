// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MyClientOrder.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyClient.generated.h"

/*
enum Nature
{
	NORMAL = 1,
	FLIRTY,
	SHY,
	GRUMPY,
	COOL
};
*/

UCLASS()
class MOONFLORIST_API AMyClient : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyClient();
	//UFUNCTION(BlueprintCallable)
	//void Init(int _iNature);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	int iName;
	FString sGreeting = "<Default>Hello my name is ";
	FString Dialogue1 = "<Default>. I would like to order a bouquet that feels";
	FString Dialogue2 = "<Default>,";
	FString Dialogue3 = "<Default> and";
	FString sName;
	FString sFullDescription;

	UMyClientOrder* CurrentOrder;
	UMyClientOrder* LastOrder;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


};
