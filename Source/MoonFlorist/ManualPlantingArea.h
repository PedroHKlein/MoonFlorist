// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractableActor.h"
#include "ManualPlantingArea.generated.h"

UCLASS()
class MOONFLORIST_API AManualPlantingArea : public AInteractableActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AManualPlantingArea();
	void PlantingAreaInteraction();
	//void CameraMovement();

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

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "PlantingArea", meta = (AllowPrivateAccess = "true"))
		FVector LocationUnderCursor;

	UPROPERTY(EditAnywhere, Category = "PlantingArea")
		TSubclassOf<class AActor> FlowerToSpawn;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
