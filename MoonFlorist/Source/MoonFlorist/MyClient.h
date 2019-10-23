// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MyClientOrder.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyClient.generated.h"


enum Nature
{
	NORMAL = 1,
	FLIRTY,
	SHY,
	GRUMPY,
	HIP
};


UCLASS()
class MOONFLORIST_API AMyClient : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyClient();
	~AMyClient();

	UFUNCTION()
	void Init(int _iNature);
	void NewOrder(int _iOrder);
	void SetGreetings(int _iNature);
	UMyClientOrder* GetCurrentOrder();
	UMyClientOrder* GetPreviousOrder();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	int iName;
	int iNature;

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
