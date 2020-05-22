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

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Flower)
		FName FlowerName;

	UPROPERTY(BlueprintReadWrite, Category = Flower)
		bool ReadyToBloom;

	UPROPERTY(BlueprintReadWrite, Category = Flower)
		bool ReadyToCollect;

	UPROPERTY(BlueprintReadWrite, Category = Flower)
		bool Watered;

	UPROPERTY(BlueprintReadWrite, Category = Flower)
		bool Growing;

	UPROPERTY(BlueprintReadWrite, Category = Flower)
		bool ReadyForVFX;

	UPROPERTY(BlueprintReadWrite, Category = Flower)
		float PlayRate;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
		class USceneComponent* Root;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
		class USkeletalMeshComponent* FlowerSKMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Flower, meta = (AllowPrivateAccess = "true"))
		class UCapsuleComponent* PlantingRange;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Setup();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
