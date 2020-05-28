// Fill out your copyright notice in the Description page of Project Settings.


#include "ManualPlantingArea.h"
#include "Engine/StaticMesh.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/SceneComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/InputComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Components/AudioComponent.h"
#include "Sound/SoundCue.h"
#include "Sound.h"
#include "Components/DecalComponent.h"
#include "Materials/MaterialInstanceDynamic.h"

DEFINE_LOG_CATEGORY_STATIC(LogPlantingArea, Warning, All);

// Sets default values
AManualPlantingArea::AManualPlantingArea()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlantingArea = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	PlantingArea->SetupAttachment(RootComponent);
	PlantingArea->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->SetRelativeRotation(FRotator(0.f, -45.f, 0.f));

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);

	WidgetComp = CreateDefaultSubobject<UWidgetComponent>(TEXT("Radial Menu"));
	WidgetComp->SetupAttachment(Camera);

	LookAtDir = CreateDefaultSubobject<USceneComponent>(TEXT("Look At Direction"));
	LookAtDir->SetupAttachment(RootComponent);

	/*Decal------------------*/
		/*Tend*/
	TendDecal = CreateDefaultSubobject<UDecalComponent>("Tend Decal");
	TendDecal->SetupAttachment(RootComponent);
	TendDecal->DecalSize = FVector(128.0f, 256.0f, 256.0f);
	TendDecal->FadeScreenSize = 0.01f;
	TendDecal->bDestroyOwnerAfterFade = true;
		/*Water*/
	WaterDecal = CreateDefaultSubobject<UDecalComponent>("Water Decal");
	WaterDecal->SetupAttachment(RootComponent);
	WaterDecal->DecalSize = FVector(128.0f, 256.0f, 256.0f);
	WaterDecal->FadeScreenSize = 0.01f;
	WaterDecal->bDestroyOwnerAfterFade = true;
		/*Colect*/
	CollectDecal = CreateDefaultSubobject<UDecalComponent>("Collect Decal");
	CollectDecal->SetupAttachment(RootComponent);
	CollectDecal->DecalSize = FVector(128.0f, 256.0f, 256.0f);
	CollectDecal->FadeScreenSize = 0.01f;
	CollectDecal->bDestroyOwnerAfterFade = true;
	/*----------------Decal*/
	/*Custom Sound Class Initilization*/
	SFX = new Sound();
} 

// Called when the game starts or when spawned
void AManualPlantingArea::BeginPlay()
{
	Super::BeginPlay();
	if (!PlayerRef)
	{
		PlayerRef = Cast<AMoonFloristCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	}
	if (FlowerTemplate.Num() == 0)
	{
		UE_LOG(LogPlantingArea, Error, TEXT("Planting Area: Flower Template Array is empty!"));
	}
	DM_Tend = TendDecal->CreateDynamicMaterialInstance();
	DM_Water = WaterDecal->CreateDynamicMaterialInstance();
	DM_Collect = CollectDecal->CreateDynamicMaterialInstance();
	AttentionSwitch(DM_Tend, 0.0f);
	AttentionSwitch(DM_Water, 0.0f);
	AttentionSwitch(DM_Collect, 0.0f);
}

void AManualPlantingArea::DecalDetection()
{
	if(GrownFlowers.Num() != 0)
	{
		
		for (int i = 0; i < GrownFlowers.Num(); i++)
		{
			if (GrownFlowers[i]->ReadyToCollect)
			{
				AttentionSwitch(DM_Collect, 1.0f);
				break;
			}
			else
			{
				AttentionSwitch(DM_Collect, 0.0f);
			}
		}
		for (int i = 0; i < GrownFlowers.Num(); i++)
		{
			if (GrownFlowers[i]->NeedWater)
			{
				AttentionSwitch(DM_Water, 1.0f);
				break;
			}
			else
			{
				AttentionSwitch(DM_Water, 0.0f);
			}

		}
		for (int i = 0; i < GrownFlowers.Num(); i++)
		{
			if (GrownFlowers[i]->CanTend)
			{
				AttentionSwitch(DM_Tend, 1.0f);
				break;
			}
			else
			{
				AttentionSwitch(DM_Tend, 0.0f);
			}
		}
	}
	else
	{
		AttentionSwitch(DM_Tend, 0.0f);
		AttentionSwitch(DM_Water, 0.0f);
		AttentionSwitch(DM_Collect, 0.0f);
	}
}

// Called every frame
void AManualPlantingArea::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	DecalDetection();
}

void AManualPlantingArea::PlantingAreaInteraction()
{
	AManualPlantingArea* PlantingArea = Cast<AManualPlantingArea>(PlayerRef->HitResult.GetActor());
	if (PlantingArea)
	{
		LocationUnderCursor = PlayerRef->HitResult.Location;
		/*Growing Flower----------------------------------*/
		if (!PlayerRef->WateringMode && !PlayerRef->FertilizingMode && !PlayerRef->CollectMode && !PlayerRef->CareMode && (PlayerRef->ChosenFlower != EItems::Noneselected))
		{
			switch (PlayerRef->ChosenFlower)
			{
			case EItems::Scarletflower:
			{
				if (CheckEnough(EItems::Scarletseed))
				{
					GrownFlowers.Add(GrowFlower(FlowerTemplate[0]));
					//GrowFlower(FlowerTemplate[0]);
					DeducedChosenItem(EItems::Scarletseed);
				}
				break;
			}
			case EItems::Cobaltflower:
			{
				if (CheckEnough(EItems::Cobaltseed))
				{
					GrownFlowers.Add(GrowFlower(FlowerTemplate[1]));
					DeducedChosenItem(EItems::Cobaltseed);
				}
				break;
			}
			case EItems::Goldenflower:
			{
				if (CheckEnough(EItems::Goldenseed))
				{

					GrownFlowers.Add(GrowFlower(FlowerTemplate[2]));
					DeducedChosenItem(EItems::Goldenseed);
				}
				break;
			}
			case EItems::Silverflower:
			{
				if (CheckEnough(EItems::Silverseed))
				{

					GrownFlowers.Add(GrowFlower(FlowerTemplate[3]));

					DeducedChosenItem(EItems::Silverseed);
				}
				break;
			}
			default:
				break;
			}
		}
	
	}
	else
	{
		APlantingFlower* CurrentFlower = Cast<APlantingFlower>(PlayerRef->HitResult.GetActor());
		if (CurrentFlower)
		{
			/*Blooming Flower----------------------------------*/
			if (!PlayerRef->WateringMode && !PlayerRef->FertilizingMode && 
				!CurrentFlower->ReadyToCollect && 
				!CurrentFlower->ReadyToBloom && !PlayerRef->CollectMode && PlayerRef->CareMode && !CurrentFlower->Growing)
			{
				CurrentFlower->Bloom();
				CurrentFlower->NeedWater = true;
				CurrentFlower->CanTend = false;
			}
			/*Watering Flower----------------------------------*/
			else if (PlayerRef->WateringMode && !PlayerRef->FertilizingMode && !PlayerRef->CollectMode && !PlayerRef->CareMode && !CurrentFlower->Watered)
			{
				FVector SpawnLocationWater = CurrentFlower->GetActorLocation() + FVector(0.0f, 0.0f, 150.0f);
				if (CurrentFlower->Growing)
				{
					SpawnParticle(WateringVFX, CurrentFlower->Root, "None", SpawnLocationWater, FRotator(0.0f, 0.0f, 0.0f), FVector(1.0f, 1.0f, 1.0f), EAttachLocation::KeepWorldPosition);
					SFX->PlaySoundOnce(WateringCue, CurrentFlower->Root);
					CurrentFlower->Watered = true;
				}
				if (CurrentFlower->ReadyToBloom)
				{
					SpawnParticle(WateringVFX, CurrentFlower->Root, "None", SpawnLocationWater, FRotator(0.0f, 0.0f, 0.0f), FVector(1.0f, 1.0f, 1.0f), EAttachLocation::KeepWorldPosition);
					SFX->PlaySoundOnce(WateringCue, CurrentFlower->Root);
					CurrentFlower->Watered = true;
					
					/*Spawn Flower VFX*/
					CurrentFlower->VFXFlower->bHiddenInGame = false;
					
					CurrentFlower->NeedWater = false;
					//CurrentFlower->ReadyToCollect = true;
					
				}			
			}
			/*Fertilizing Flower----------------------------------*/
			else if (!PlayerRef->WateringMode && PlayerRef->FertilizingMode && !PlayerRef->CollectMode && !PlayerRef->CareMode)
			{
				if (CurrentFlower->Growing)
				{
					FVector SpawnLocationFert = CurrentFlower->GetActorLocation() + FVector(0.0f, 0.0f, 150.0f);
					switch (PlayerRef->ChosenFertilizer)
					{
					case EItems::Terranfertilizer:
					{
						if (CheckEnough(EItems::Terranfertilizer))
						{
							
							SpawnParticle(TerranVFX, CurrentFlower->Root, "None", SpawnLocationFert, FRotator(0.0f, 0.0f, 0.0f), FVector(1.0f, 1.0f, 1.0f), EAttachLocation::KeepWorldPosition);
							SFX->PlaySoundOnce(FertilizerCue, CurrentFlower->Root);
							CurrentFlower->PlayRate = 1.2f;
							DeducedChosenItem(EItems::Terranfertilizer);
						}
						break;
					}
					case EItems::Moonfertilizer:
					{
						if (CheckEnough(EItems::Moonfertilizer))
						{
							
							SpawnParticle(MoonVFX, CurrentFlower->Root, "None", SpawnLocationFert, FRotator(0.0f, 0.0f, 0.0f), FVector(1.0f, 1.0f, 1.0f), EAttachLocation::KeepWorldPosition);
							SFX->PlaySoundOnce(FertilizerCue, CurrentFlower->Root);
							CurrentFlower->PlayRate = 1.6f;
							DeducedChosenItem(EItems::Moonfertilizer);
						}
						break;
					}
					case EItems::Cometfertilizer:
					{
						if (CheckEnough(EItems::Cometfertilizer))
						{
							SpawnParticle(CometVFX, CurrentFlower->Root, "None", SpawnLocationFert, FRotator(0.0f, 0.0f, 0.0f), FVector(1.0f, 1.0f, 1.0f), EAttachLocation::KeepWorldPosition);
							SFX->PlaySoundOnce(FertilizerCue, CurrentFlower->Root);
							CurrentFlower->PlayRate = 2.0f;
							DeducedChosenItem(EItems::Cometfertilizer);
						}
						break;
					}
					default:
						break;
					}
				}

			}
			/*Caring For Flower----------------------------------*/
			if (!PlayerRef->WateringMode && !PlayerRef->FertilizingMode &&
				CurrentFlower->ReadyToBloom && !PlayerRef->CollectMode && PlayerRef->CareMode && !CurrentFlower->Growing && !CurrentFlower->Watered)
			{
				CurrentFlower->Fidget = true;
			}
			/*Collecting Flower----------------------------------*/
			else if (CurrentFlower->ReadyToCollect && PlayerRef->CollectMode && !PlayerRef->WateringMode && !PlayerRef->FertilizingMode && !PlayerRef->CareMode)  
			{
				CollectFlower(CurrentFlower);
				GrownFlowers.Remove(CurrentFlower);
				CurrentFlower->Destroy();
			}
		}
		
	}
	
	
}

bool AManualPlantingArea::CheckEnough(TEnumAsByte<EItems> ItemToCheck)
{
	FString Name = UEnum::GetValueAsString(ItemToCheck.GetValue()).RightChop(8);

	for (int i = 0; i < PlayerRef->PlayerStorage->StorageArray.Num(); i++)
	{

		if (PlayerRef->PlayerStorage->StorageArray[i]->GetName().ToString() == Name)
		{
			if (PlayerRef->PlayerStorage->StorageArray[i]->GetStacks() > 0)
			{
				return true;
			}
		}
	}
	return false;
}

APlantingFlower* AManualPlantingArea::GrowFlower(TSubclassOf<APlantingFlower> FlowerToGrow)
{
	FActorSpawnParameters Param;
	//Param.Owner = this;
	APlantingFlower* Flower = GetWorld()->SpawnActor<APlantingFlower>(FlowerToGrow, PlayerRef->HitResult.Location, FRotator(0.0f,0.0f,0.0f), Param);
	FRotator LookAt = UKismetMathLibrary::FindLookAtRotation(Flower->GetActorLocation(), LookAtDir->GetComponentLocation());
	Flower->SetActorRotation(FQuat(FRotator(Flower->GetActorRotation().Pitch,
											LookAt.Yaw,
											Flower->GetActorRotation().Roll)));

	return Flower;
}

void AManualPlantingArea::DeducedChosenItem(TEnumAsByte<EItems> ItemToDeduct)
{
	FString Name = UEnum::GetValueAsString(ItemToDeduct.GetValue()).RightChop(8);
	for (int i = 0; i < (PlayerRef->PlayerStorage->StorageArray.Num()); i++)
	{

		if (PlayerRef->PlayerStorage->StorageArray[i]->GetName().ToString() == Name)
		{
			PlayerRef->PlayerStorage->DecreaseStacks(1, PlayerRef->PlayerStorage->StorageArray[i]);
			return;
			
		}
	}
}

void AManualPlantingArea::CollectFlower(APlantingFlower* FlowerToCollect)
{
	
	FString Name = FlowerToCollect->FlowerName.ToString();
	for (int i = 0; i < (PlayerRef->PlayerStorage->StorageArray.Num()); i++)
	{

		if (PlayerRef->PlayerStorage->StorageArray[i]->GetName().ToString() == Name)
		{
			PlayerRef->PlayerStorage->IncreaseStacks(1, PlayerRef->PlayerStorage->StorageArray[i]);
			return;

		}
	}
}

void AManualPlantingArea::AttentionSwitch(UMaterialInstanceDynamic* MaterialInstance, float Value)
{
	MaterialInstance->SetScalarParameterValue("Emission Strenght", Value);
}

UParticleSystemComponent* AManualPlantingArea::SpawnParticle(UParticleSystem* PS, USceneComponent* AttachTo, FName AttachName, FVector Location, FRotator Rotation, FVector Scale, EAttachLocation::Type AttachType)
{
	UParticleSystemComponent* Particle = UGameplayStatics::SpawnEmitterAttached(PS, AttachTo, AttachName, Location, Rotation,Scale, AttachType);
	return Particle;
}


