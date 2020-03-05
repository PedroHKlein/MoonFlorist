// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/Texture.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "DayNight_DMSwitcher.generated.h"


UCLASS()
class MOONFLORIST_API ADayNight_DMSwitcher : public AActor
{
	GENERATED_BODY()
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "DMSwitcher", meta = (AllowPrivateAccess = "true"))
	class UDecalComponent* DayNightDecal;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "DMSwitcher", meta = (AllowPrivateAccess = "true"))
		bool LightsOn;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "DMSwitcher", meta = (AllowPrivateAccess = "true"))
		UMaterialInstanceDynamic* DM;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "DMSwitcher", meta = (AllowPrivateAccess = "true"))
	class USceneComponent* Root;
public:	
	// Sets default values for this actor's properties
	ADayNight_DMSwitcher();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable, Category = "DMSwitcher")
		void DynamicMaterialSwitching(UMaterialInstanceDynamic* _MaterialInstance, UTexture* _Texture, FLinearColor _EmissionColor1, FLinearColor _EmissionColor2);
};
