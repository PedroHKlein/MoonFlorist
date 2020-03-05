// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "BedroomPanel.generated.h"

/**
 * 
 */
UCLASS()
class MOONFLORIST_API ABedroomPanel : public AActor
{
	GENERATED_BODY()
		ABedroomPanel();
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "BedroomPanel", meta = (AllowPrivateAccess = "true"))
		class UTextRenderComponent* Hours;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "BedroomPanel", meta = (AllowPrivateAccess = "true"))
		class UTextRenderComponent* Minutes;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "BedroomPanel", meta = (AllowPrivateAccess = "true"))
		 UMaterialInstanceDynamic* DynamicMaterialHours;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "BedroomPanel", meta = (AllowPrivateAccess = "true"))
		 UMaterialInstanceDynamic* DynamicMaterialMinutes;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "BedroomPanel", meta = (AllowPrivateAccess = "true"))
		class USceneComponent* Root;
public:
	
	virtual void Tick(float DeltaTime) override;
protected:
	virtual void BeginPlay() override;
	UFUNCTION(BlueprintCallable, Category = "BedroomPanel")
	void GetTime(UTextRenderComponent* _Hours, UTextRenderComponent* _Minutes);

	UFUNCTION(BlueprintCallable, Category = "BedroomPanel")
	void DynamicMaterialChanging(UMaterialInstanceDynamic* _MaterialInstance, UTexture* _Texture, FLinearColor _EmissionColor1, FLinearColor _EmissionColor2);
};
