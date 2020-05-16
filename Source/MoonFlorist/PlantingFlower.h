// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlantingFlower.generated.h"

UCLASS()
class MOONFLORIST_API APlantingFlower : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlantingFlower();
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Flower)
		bool ReadyToBloom;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Flower)
		bool ReadyToCollect;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Flower)
		bool Watered;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Flower)
		float PlayRate;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Flower, meta = (AllowPrivateAccess = "true"))
		class USceneComponent* Root;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		class USkeletalMeshComponent* FlowerSKMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Flower, meta = (AllowPrivateAccess = "true"))
		class UCapsuleComponent* PlantingRange;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
