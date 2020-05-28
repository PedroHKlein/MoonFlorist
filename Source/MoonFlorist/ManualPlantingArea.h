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

	/*Planting Area Interaction------------------------------------------*/
	UFUNCTION(BlueprintCallable, Category = "PlantingArea")
		void PlantingAreaInteraction();
	
	UFUNCTION(BlueprintCallable, Category = "PlantingArea")
	bool CheckEnough(TEnumAsByte<EItems> ItemToCheck);
	
	UFUNCTION(BlueprintCallable, Category = "PlantingArea")
	APlantingFlower* GrowFlower(TSubclassOf<APlantingFlower> FlowerToGrow);
	
	UFUNCTION(BlueprintCallable, Category = "PlantingArea")
	void DeducedChosenItem(TEnumAsByte<EItems> ItemToDeduct);
	
	UFUNCTION(BlueprintCallable, Category = "PlantingArea")
	void CollectFlower(APlantingFlower* FlowerToCollect);
	/*-------------------------------------------Planting Area Interaction*/

	/*Decals----------------------------------*/
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "PlantingArea")
	class UDecalComponent* TendDecal;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "PlantingArea")
	class UDecalComponent* WaterDecal;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "PlantingArea")
	class UDecalComponent* CollectDecal;
	UPROPERTY( BlueprintReadOnly, Category = "PlantingArea")
	class UMaterialInstanceDynamic* DM_Tend;
	UPROPERTY(BlueprintReadOnly, Category = "PlantingArea")
	class UMaterialInstanceDynamic* DM_Water;
	UPROPERTY(BlueprintReadOnly, Category = "PlantingArea")
	class UMaterialInstanceDynamic* DM_Collect;

	bool NeedsAttention;
	UPROPERTY(BlueprintReadOnly, Category = "PlantingArea")
	TArray<APlantingFlower*>GrownFlowers;
	void AttentionSwitch(UMaterialInstanceDynamic* MaterialInstance, float Value);
	/*-----------------------------------Decals*/


	UParticleSystemComponent* SpawnParticle(UParticleSystem* PS,USceneComponent* AttachTo, FName AttachName, FVector Location, FRotator Rotation,FVector Scale, EAttachLocation::Type AttachType);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void DecalDetection();
	/*Components of Planting Area*/
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "PlantingArea", meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "PlantingArea", meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* PlantingArea;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "PlantingArea", meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* Camera;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "PlantingArea", meta = (AllowPrivateAccess = "true"))
	class UWidgetComponent* WidgetComp;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "PlantingArea", meta = (AllowPrivateAccess = "true"))
		class USceneComponent* LookAtDir;

	UPROPERTY(BlueprintReadOnly, Category = "PlantingArea", meta = (AllowPrivateAccess = "true"))
		FVector LocationUnderCursor;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlantingArea")
		TArray<TSubclassOf<APlantingFlower>> FlowerTemplate;

	/*Particles*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlantingArea")
		UParticleSystem* WateringVFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlantingArea")
		UParticleSystem* CometVFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlantingArea")
		UParticleSystem* MoonVFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlantingArea")
		UParticleSystem* TerranVFX;

	
	/*Sound*/
	UPROPERTY(EditAnywhere, Category = "PlantingArea")
		class USoundCue* WateringCue;
	
	UPROPERTY(EditAnywhere, Category = "PlantingArea")
		class USoundCue* FertilizerCue;

	UPROPERTY(EditAnywhere, Category = "PlantingArea")
		class USoundCue* PlantCue;



		class Sound* SFX;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
