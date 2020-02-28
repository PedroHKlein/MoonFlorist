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

	UFUNCTION(BlueprintCallable)
	void Init(int _iName, int _iNature);
	UFUNCTION(BlueprintCallable)
	void NewOrder();
	UFUNCTION(BlueprintCallable)
	void SetFullDescription();
	UFUNCTION(BlueprintCallable)
	UMyClientOrder* GetCurrentOrder();
	UFUNCTION(BlueprintCallable)
	UMyClientOrder* GetPreviousOrder();
	UFUNCTION(BlueprintCallable)
	void UpdateClientDescriptions();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY()
	int iName;
	UPROPERTY()
	int iNature;

	UPROPERTY()
	FString sTitle = " URGENT EMAIL";
	UPROPERTY()
	FString sName = " Jobin";
	UPROPERTY()
	FString sGreeting = "Hello my name is ";
	UPROPERTY()
	FString Dialogue1 = ". I would like to order a bouquet that feels";
	UPROPERTY()
	FString Dialogue2 = "<Default>,";
	UPROPERTY()
	FString Dialogue3 = "<Default> and";
	UPROPERTY()
	FString sFullDescription;
	UPROPERTY()
	UMyClientOrder* CurrentOrder;
	UPROPERTY()
	UMyClientOrder* LastOrder;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


};
