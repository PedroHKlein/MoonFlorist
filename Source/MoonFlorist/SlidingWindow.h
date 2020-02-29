// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SlidingWindow.generated.h"

UCLASS()
class MOONFLORIST_API ASlidingWindow : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASlidingWindow();


	bool Open;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "SlidingWindow", meta = (AllowPrivateAccess = "true"))
		class USceneComponent* Root;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "SlidingWindow", meta = (AllowPrivateAccess = "true"))
		class USceneComponent* StartLerpLoc;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "SlidingWindow", meta = (AllowPrivateAccess = "true"))
		class USceneComponent* EndLerpLoc;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "SlidingWindow", meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* Window;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "SlidingWindow", meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* Switch;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
