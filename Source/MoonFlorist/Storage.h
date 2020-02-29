// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "GameFramework/Actor.h"
#include "Storage.generated.h"

UCLASS()
class MOONFLORIST_API AStorage : public AActor 
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStorage();

public:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	//Storage Methods
	UFUNCTION(BlueprintCallable, Category = StorageFunc)
	void AddItem(AItem* _Item);
	UFUNCTION(BlueprintCallable, Category = StorageFunc)
	void RemoveItem(AItem* _Item);

	UFUNCTION(BlueprintCallable, Category = ItemFunc)
	void IncreaseStacks(int _Amount, AItem* _Item);

	UPROPERTY(BlueprintReadWrite,Category = StorageVar)
	 TArray<AItem*> StorageArray; 
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
