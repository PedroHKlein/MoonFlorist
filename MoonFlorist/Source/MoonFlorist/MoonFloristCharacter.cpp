// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MoonFloristCharacter.h"
#include "MoonFloristProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "MotionControllerComponent.h"
#include "Engine.h"
#include "MoonFloristHUD.h"

#include "XRMotionControllerBase.h" // for FXRMotionControllerBase::RightHandSourceId

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AMoonFloristCharacter

AMoonFloristCharacter::AMoonFloristCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->RelativeLocation = FVector(-39.56f, 1.75f, 64.f); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->RelativeRotation = FRotator(1.9f, -19.19f, 5.2f);
	Mesh1P->RelativeLocation = FVector(-0.5f, -4.4f, -155.7f);


}

void AMoonFloristCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	PrimaryActorTick.bCanEverTick = true;


}

void AMoonFloristCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	RaycastCheck();
}

FHitResult AMoonFloristCharacter::RaycastCheck()
{
	FHitResult HitData;
	FVector start = FirstPersonCameraComponent->GetComponentLocation();
	FVector fwd = FirstPersonCameraComponent->GetForwardVector();
	FVector endTrace = ((fwd * 1000.0f) + start);
	FCollisionQueryParams CollisionParams;
	DrawDebugLine(GetWorld(), start, endTrace, FColor::Orange, false);
	bool isHit = GetWorld()->LineTraceSingleByChannel(HitData, start, endTrace, ECC_Visibility, CollisionParams);

	if (isHit)
	{
		AMoonFloristHUD* playerHUD = (AMoonFloristHUD*)(GetWorld()->GetFirstPlayerController()->GetHUD());
		if ((start - HitData.GetActor()->GetActorLocation()).Size() <= 200.0f && HitData.GetActor()->ActorHasTag(FName(TEXT("Interactable"))))
		{

			playerHUD->ChangeState(3);

		}
		else if ((start - HitData.GetActor()->GetActorLocation()).Size() > 200.0f && HitData.GetActor()->ActorHasTag(FName(TEXT("Interactable"))))
		{
			playerHUD->ChangeState(2);

		}
		else
		{
			playerHUD->ChangeState(1);
		}
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("Size: %f "), (start - HitData.GetActor()->GetActorLocation()).Size()));
	
	}

	return HitData;
	
}

//////////////////////////////////////////////////////////////////////////
// Input

void AMoonFloristCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AMoonFloristCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMoonFloristCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AMoonFloristCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AMoonFloristCharacter::LookUpAtRate);
}


void AMoonFloristCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AMoonFloristCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AMoonFloristCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AMoonFloristCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}



