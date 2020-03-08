// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "MyBouquet.h"
#include "BouquetCapsule.generated.h"

/**
 * 
 */
UCLASS()
class MOONFLORIST_API ABouquetCapsule : public AItem
{
	GENERATED_BODY()
	 
public:
	ABouquetCapsule();
	
	UFUNCTION(BlueprintCallable, Category = "Capsule")
		void StoreBouquetInCap(UMyBouquet* _Bouquet);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, Category = ItemVar, meta = (AllowPrivateAccess = "true"))
		class UMyBouquet* StoredBouquet;

	
};
