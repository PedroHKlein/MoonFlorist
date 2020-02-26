// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Storage.h"
#include "Item.h"
#include "MoonFloristCharacter.generated.h"

class UInputComponent;

UCLASS(config=Game)
class AMoonFloristCharacter : public ACharacter
{
	GENERATED_BODY()
#pragma region Setup Components
	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	class USkeletalMeshComponent* Mesh1P;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FirstPersonCameraComponent;

#pragma endregion 
public:
	AMoonFloristCharacter();
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Mouse Sens")
	float MouseSensitivity;
	UFUNCTION(BlueprintCallable, Category = "Raycast")
	FHitResult RaycastCheck();
	UPROPERTY(BlueprintReadWrite, VisibleDefaultsOnly, Category = "Currency")
	int CosmoCoins;
	UPROPERTY(BlueprintReadWrite, VisibleDefaultsOnly, Category = "Currency")
	int StartCoins;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Interaction")
	FHitResult m_Hitsdata;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Interaction", meta = (AllowPrivateAccess = "true"))
	float RayDisCheck;

	class AMoonFloristHUD* HUD;
	class APlayerController* PlayerController;
	bool flipflop;
	bool WithinRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Storage")
	class AStorage* PlayerStorage;

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void DetectInteraction();

protected:
	virtual void BeginPlay();
	//Beginning Items that the player has
	void StartItems();


protected:
	
	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles strafing movement, left and right */
	void MoveRight(float Val);

	
	
protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;

		/**
	 * Called via input to turn at a given rate.
	 * @param Rate    This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate    This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */


	void LookUpAtRate(float Rate);
public:
	/** Returns Mesh1P subobject **/
	FORCEINLINE class USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

};

