// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractableActor.h"
#include "Containers/Array.h"
#include "PlantingFlower.h"
#include "MoonFloristCharacter.h"
#include "GameFramework/Actor.h"
#include "ManualPlantingArea.generated.h"


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

	UFUNCTION(BlueprintCallable, Category = "PlantingArea")
	void CanPlant(TEnumAsByte<EItems> FlowerToPlant);
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

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "PlantingArea", meta = (AllowPrivateAccess = "true"))
		class USceneComponent* LookAtDir;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
