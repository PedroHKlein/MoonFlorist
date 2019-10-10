// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "MoonFloristCharacter.h"
#include "GameFramework/HUD.h"
#include "MoonFloristHUD.generated.h"



UCLASS()
class AMoonFloristHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	AMoonFloristHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

	UFUNCTION(BlueprintCallable, Category = "Crosshair")
		void ToggleAlpha(bool _changeState);
	UFUNCTION(BlueprintCallable, Category = "Crosshair")
		void ChangeState(int _state);\
	
	
	
private:
	bool Interacting;
	/** Current Crosshair */
	class UTexture2D* Current_CH;
	/** Idle Crosshair*/
	class UTexture2D* Idle_CH;
	/** Crosshair when player looks at a interactable Object*/
	class UTexture2D* LookAt_CH;
	/** Crosshair when player is in range to interact with the object*/
	class UTexture2D* InRange_CH;
	/** Crosshair when interacting */
	class UTexture2D* None_CH;

};

