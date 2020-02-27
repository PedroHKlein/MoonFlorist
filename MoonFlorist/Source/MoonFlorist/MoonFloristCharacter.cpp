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
#include "InteractableActor.h"
#include "SlidingWindow.h"
#include "Kismet/GameplayStatics.h"


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
	MouseSensitivity = 20.f;
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

	PlayerStorage = NewObject<AStorage>();
	StartItems();
	
	RayDisCheck = 200.0f;
	PlayerController = UGameplayStatics::GetPlayerController(this, 0);
	HUD = Cast<AMoonFloristHUD>(PlayerController->GetHUD());
	CosmoCoins = 10;
	UE_LOG(LogTemp, Warning, TEXT("Start"));
	flipflop = true;
	WithinRange = false;
}

void AMoonFloristCharacter::StartItems()
{
#pragma region FLOWERS
	//Scarlet Flower
	AItem* Scarlet = NewObject<AItem>();
	Scarlet->CreateItem(EItemType::IT_Flower, "RedFlower", "/Game/User_Interface/Storage/StorageAssets/ScarletFlower.ScarletFlower", 10, 15);
	PlayerStorage->AddItem(Scarlet);
	//Cobalt Flower
	AItem* Cobalt = NewObject<AItem>();
	Cobalt->CreateItem(EItemType::IT_Flower, "BlueFlower", "/Game/User_Interface/Storage/StorageAssets/CobaltFlower.CobaltFlower", 10, 15);
	PlayerStorage->AddItem(Cobalt);
	//Golden Flower
	AItem* Golden = NewObject<AItem>();
	Golden->CreateItem(EItemType::IT_Flower, "YellowFlower", "/Game/User_Interface/Storage/StorageAssets/GoldenFlower.GoldenFlower", 10, 15);
	PlayerStorage->AddItem(Golden);
	//Silver Flower
	AItem* Silver = NewObject<AItem>();
	Silver->CreateItem(EItemType::IT_Flower, "WhiteFlower", "/Game/User_Interface/Storage/StorageAssets/SilverFlower.SilverFlower", 10, 35);
	PlayerStorage->AddItem(Silver);
#pragma endregion
#pragma region SEEDS
	//Scarlet Seed
	AItem* ScarletSeeds = NewObject<AItem>();
	ScarletSeeds->CreateItem(EItemType::IT_Seed, "ScarletSeeds", "/Game/User_Interface/Storage/StorageAssets/ScarletSeeds.ScarletSeeds", 5, 15);
	PlayerStorage->AddItem(ScarletSeeds);
	//Cobalt Seed
	AItem* CobaltSeeds = NewObject<AItem>();
	CobaltSeeds->CreateItem(EItemType::IT_Seed, "CobaltSeeds", "/Game/User_Interface/Storage/StorageAssets/CobaltSeeds.CobaltSeeds", 5, 15);
	PlayerStorage->AddItem(CobaltSeeds);
	//Golden Seed
	AItem* GoldenSeeds = NewObject<AItem>();
	GoldenSeeds->CreateItem(EItemType::IT_Seed, "GoldenSeeds", "/Game/User_Interface/Storage/StorageAssets/GoldenSeeds.GoldenSeeds", 5, 35);
	PlayerStorage->AddItem(GoldenSeeds);
	//Silver Seed
	AItem* SilverSeeds = NewObject<AItem>();
	SilverSeeds->CreateItem(EItemType::IT_Seed, "SilverSeeds", "/Game/User_Interface/Storage/StorageAssets/SilverSeeds.SilverSeeds", 5, 35);
	PlayerStorage->AddItem(SilverSeeds);
#pragma endregion

	//Scarlet Seed
	AItem* BouquetExample = NewObject<AItem>();
	BouquetExample->CreateItem(EItemType::IT_Seed, "BouquetExample", "/Game/User_Interface/Storage/StorageAssets/ScarletSeeds.ScarletSeeds", 1, 70, false);
	PlayerStorage->AddItem(BouquetExample);

	PlayerStorage->IncreaseStacks(10, BouquetExample);
}

void AMoonFloristCharacter::DetectInteraction()
{

	AInteractableActor* Interactable = Cast<AInteractableActor>(m_Hitsdata.GetActor());
	UE_LOG(LogTemp, Warning, TEXT("Detecting"));
	if (Interactable)
	{
	
		if ((m_Hitsdata.TraceStart - m_Hitsdata.GetActor()->GetActorLocation()).Size() <= RayDisCheck)
		{
			WithinRange = true;
			UE_LOG(LogTemp, Warning, TEXT("true"));
			
		}
		else
		{
			WithinRange = false;
			UE_LOG(LogTemp, Warning, TEXT("false"));
		}

		if (WithinRange)
		{
			if (flipflop)
			{

				PlayerController->SetViewTargetWithBlend(Interactable, 1.0f, VTBlend_EaseIn, 2.0f);
				PlayerController->SetIgnoreMoveInput(true);
				PlayerController->SetIgnoreLookInput(true);
				PlayerController->bShowMouseCursor = true;
				HUD->ToggleAlpha(true);
				flipflop = false;
				UE_LOG(LogTemp, Warning, TEXT("working"));
				
			}
			else if(!flipflop)
			{
				PlayerController->SetViewTargetWithBlend(UGameplayStatics::GetPlayerCharacter(this,0), 1.0f, VTBlend_EaseOut, 2.0f);
				PlayerController->SetIgnoreMoveInput(false);
				PlayerController->SetIgnoreLookInput(false);
				PlayerController->bShowMouseCursor = false;
				HUD->ToggleAlpha(false);
				flipflop = true;
				UE_LOG(LogTemp, Warning, TEXT("working"));
			}
		}

	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed"));
	}
	if (m_Hitsdata.GetComponent()->ComponentHasTag(FName(TEXT("Switch"))))
	{
		ASlidingWindow* Window = Cast<ASlidingWindow>(m_Hitsdata.GetActor());
		if (Window->Open)
		{
			Window->Open = false;
		}
		else
		{
			Window->Open = true;
		}

	}
}

void AMoonFloristCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	m_Hitsdata = RaycastCheck();
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
		if ((start - HitData.GetActor()->GetActorLocation()).Size() <= 200.0f && HitData.GetActor()->ActorHasTag(FName(TEXT("Interactable"))) ||
			(start - HitData.GetComponent()->GetComponentLocation()).Size() <= 200.0f && HitData.GetComponent()->ComponentHasTag(FName(TEXT("Interactable"))))
		{

			playerHUD->ChangeState(3);

		}
		else if ((start - HitData.GetActor()->GetActorLocation()).Size() > 200.0f && HitData.GetActor()->ActorHasTag(FName(TEXT("Interactable"))) || 
			(start - HitData.GetComponent()->GetComponentLocation()).Size() > 200.0f && HitData.GetComponent()->ComponentHasTag(FName(TEXT("Interactable"))))
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

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AMoonFloristCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMoonFloristCharacter::MoveRight);
	PlayerInputComponent->BindAction("Action", IE_Pressed, this, &AMoonFloristCharacter::DetectInteraction);
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
	AddControllerYawInput(Rate * MouseSensitivity * GetWorld()->GetDeltaSeconds());
}

void AMoonFloristCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * MouseSensitivity * GetWorld()->GetDeltaSeconds());
}



