// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractableActor.h"
#include "Containers/Array.h"
#include "PlantingFlower.h"
#include "MoonFloristCharacter.h"
#include "GameFramework/Actor.h"
#include "ManualPlantingArea.generated.h"

class UParticleSystem;
UCLASS()
class MOONFLORIST_API AManualPlantingArea : public AInteractableActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AManualPlantingArea();
	UFUNCTION(BlueprintCallable, Category = "PlantingArea")
	void PlantingAreaInteraction();
	//void CameraMovement();
	
	UFUNCTION(BlueprintCallable, Category = "PlantingArea")
	bool CheckEnough(TEnumAsByte<EItems> ItemToCheck);
	
	UFUNCTION(BlueprintCallable, Category = "PlantingArea")
	void GrowFlower(TSubclassOf<APlantingFlower> FlowerToGrow);
	
	UFUNCTION(BlueprintCallable, Category = "PlantingArea")
	void DeducedChosenItem(TEnumAsByte<EItems> ItemToDeduct);
	
	UFUNCTION(BlueprintCallable, Category = "PlantingArea")
	void CollectFlower(APlantingFlower* FlowerToCollect);

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "PlantingArea")
	class UDecalComponent* AttentionDecal;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "PlantingArea")
	class UMaterialInstanceDynamic* PA_DynamicMaterial;
	bool NeedsAttention;
	
	void AttentionSwitch(UMaterialInstanceDynamic* MaterialInstance, float Value);

	UParticleSystemComponent* SpawnParticle(UParticleSystem* PS,USceneComponent* AttachTo, FName AttachName, FVector Location, FRotator Rotation,FVector Scale, EAttachLocation::Type AttachType);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "PlantingArea", meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "PlantingArea", meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* PlantingArea;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "PlantingArea", meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* Camera;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "PlantingArea", meta = (AllowPrivateAccess = "true"))
	class UWidgetComponent* WidgetComp;

	UPROPERTY(BlueprintReadOnly, Category = "PlantingArea", meta = (AllowPrivateAccess = "true"))
		FVector LocationUnderCursor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlantingArea")
		TArray<TSubclassOf<APlantingFlower>> FlowerTemplate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlantingArea")
		UParticleSystem* WateringVFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlantingArea")
		UParticleSystem* CometVFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlantingArea")
		UParticleSystem* MoonVFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlantingArea")
		UParticleSystem* TerranVFX;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "PlantingArea", meta = (AllowPrivateAccess = "true"))
		class USceneComponent* LookAtDir;

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "PlantingArea")
		float AttentionLightToggle;

	UPROPERTY(EditAnywhere, Category = "PlantingArea")
		class USoundCue* WateringCue;
	
	UPROPERTY(EditAnywhere, Category = "PlantingArea")
		class USoundCue* FertilizerCue;

		class Sound* SFX;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
