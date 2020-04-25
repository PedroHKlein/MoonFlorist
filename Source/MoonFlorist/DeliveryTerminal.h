// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractableActor.h"
#include "Engine/EngineTypes.h"
#include "Components/TimelineComponent.h"
#include "DeliveryTerminal.generated.h"


/**
 * 
 */
UCLASS()
class MOONFLORIST_API ADeliveryTerminal : public AInteractableActor
{
	GENERATED_BODY()

	ADeliveryTerminal();

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "DeliveryTerminal", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* StandBody;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "DeliveryTerminal", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* StandBase;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "DeliveryTerminal", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* StandArm;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "DeliveryTerminal", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* StandMagnet;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "DeliveryTerminal", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* StandBaseArm;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "DeliveryTerminal", meta = (AllowPrivateAccess = "true"))
	class USceneComponent* Root;
	UPROPERTY(EditAnywhere, Category = "DeliveryTerminal", meta = (AllowPrivateAccess = "true"))
	float Speed;// Speed of arm rotation

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "DeliveryTerminal", meta = (AllowPrivateAccess = "true"))
		class USceneComponent* Position1;
protected:
	virtual void BeginPlay() override;

	bool ReadyToRot;
	bool AtPos1;
	bool AtPos2;
	bool AtOrigin;
	float TimelineVal;
	float CurveVal;
	FTimeline Pos1_TL;
	FTimeline Pos2_TL;
	FTimeline BackToOrigin_TL;
	UPROPERTY(EditAnywhere)
	UCurveFloat* Pos1Curve;

	UPROPERTY(EditAnywhere)
	UCurveFloat* Pos2Curve;

	UPROPERTY(EditAnywhere)
	UCurveFloat* OriginCurve;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void ChangeCapsule();
	UFUNCTION()
	void PlayArmAnmi();
	UFUNCTION()
	void RotateArm();
	UFUNCTION()
	void SetState();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Capsule")
	bool MakeCapsule;

};
