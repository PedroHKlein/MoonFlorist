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

	UFUNCTION(BlueprintCallable, category = Flower)
		void Bloom();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Flower)
		FName FlowerName;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = VFX)
		class UParticleSystemComponent* VFXFlower;
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = Flower)
		 FVector VFXScale;

	UPROPERTY(BlueprintReadWrite, Category = Flower)
		float AnimationRate;

	UPROPERTY(BlueprintReadWrite, Category = Flower)
		float TestNumber;

	UPROPERTY(BlueprintReadWrite, Category = Flower)
		bool ReadyToBloom;

	UPROPERTY(BlueprintReadWrite, Category = Flower)
		bool ReadyToCollect;

	UPROPERTY(BlueprintReadWrite, Category = Flower)
		bool Watered;

	UPROPERTY(BlueprintReadWrite, Category = Flower)
		bool Growing;
	
	UPROPERTY(BlueprintReadWrite, Category = Flower)
		bool NeedWater;
	UPROPERTY(BlueprintReadWrite, Category = Flower)
		bool CanTend;

	UPROPERTY(BlueprintReadWrite, Category = Flower)
		float PlayRate;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
		class USceneComponent* Root;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh)
		class USkeletalMeshComponent* FlowerSKMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Flower, meta = (AllowPrivateAccess = "true"))
		class UCapsuleComponent* PlantingRange;

	UPROPERTY(BlueprintReadWrite, Category = Flower)
		bool Fidget;
	
	UFUNCTION(BlueprintCallable, category = Flower)
		FVector GetSocketLocation();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION(BlueprintCallable, category = Flower)
	void Setup();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
