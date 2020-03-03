// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractableActor.h"
#include "Engine/EngineTypes.h"
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

	//3 Postions of the capsules
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "DeliveryTerminal", meta = (AllowPrivateAccess = "true"))
	class USceneComponent* Pos1; //90 Degree(Deg) Clockwise(CW)
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "DeliveryTerminal", meta = (AllowPrivateAccess = "true"))
	class USceneComponent* Pos2; //180 Deg CW
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "DeliveryTerminal", meta = (AllowPrivateAccess = "true"))
	class USceneComponent* Pos3; //270 Deg CW

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "DeliveryTerminal", meta = (AllowPrivateAccess = "true"))
	class USceneComponent* Root;
	UPROPERTY(EditAnywhere, Category = "DeliveryTerminal", meta = (AllowPrivateAccess = "true"))
	float Speed;// Speed of arm rotation


protected:
	virtual void BeginPlay() override;

	void SwitchCapsules(float DeltaTime);
	float threshHold;
	float current;
	FTimerHandle TimerHandle;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable, Category = "Interaction")
		void PrimaryRotate();
	UFUNCTION(BlueprintCallable, Category = "Interaction")
		void SecondaryRotate();

	bool RotateRight;
	UPROPERTY(BlueprintReadWrite, Category = "DeliveryTerminal")
	bool RotateLeft;
	bool FirstAction;
	bool SecondAction;
};
