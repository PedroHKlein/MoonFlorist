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

	AttentionLightToggle = 0.0f;
}

// Called every frame
void AManualPlantingArea::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
}

void AManualPlantingArea::PlantingAreaInteraction()
{
	AManualPlantingArea* PlantingArea = Cast<AManualPlantingArea>(PlayerRef->HitResult.GetActor());
	if (PlantingArea)
	{
		
		LocationUnderCursor = PlayerRef->HitResult.Location;
		

		if (!PlayerRef->WateringMode && !PlayerRef->FertilizingMode && !PlayerRef->CollectMode && !PlayerRef->CareMode && (PlayerRef->ChosenFlower != EItems::Noneselected))
		{
			switch (PlayerRef->ChosenFlower)
			{
			case EItems::Scarletflower:
			{
				if (CheckEnough(EItems::Scarletseed))
				{
					GrowFlower(FlowerTemplate[0]);
					DeducedChosenItem(EItems::Scarletseed);
				}
				break;
			}
			case EItems::Cobaltflower:
			{
				if (CheckEnough(EItems::Cobaltseed))
				{
					GrowFlower(FlowerTemplate[1]);
					DeducedChosenItem(EItems::Cobaltseed);
				}
				break;
			}
			case EItems::Goldenflower:
			{
				if (CheckEnough(EItems::Goldenseed))
				{

					GrowFlower(FlowerTemplate[2]);
					DeducedChosenItem(EItems::Goldenseed);
				}
				break;
			}
			case EItems::Silverflower:
			{
				if (CheckEnough(EItems::Silverseed))
				{

					GrowFlower(FlowerTemplate[3]);

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
			if (!PlayerRef->WateringMode && !PlayerRef->FertilizingMode && 
				!CurrentFlower->ReadyToCollect && 
				!CurrentFlower->ReadyToBloom && !PlayerRef->CollectMode && !PlayerRef->CareMode)
			{
				CurrentFlower->Bloom();
				AttentionLightToggle = 1.0f;
			}
			else if (PlayerRef->WateringMode && !PlayerRef->FertilizingMode && !PlayerRef->CollectMode && !PlayerRef->CareMode)
			{
				FVector SpawnLocationWater = PlayerRef->HitResult.Location + FVector(-40.0f, 10.0f, 100.0f);
				SpawnParticle(WateringVFX, CurrentFlower->Root, "None", SpawnLocationWater, FRotator(0.0f, 0.0f, 0.0f), FVector(1.0f, 1.0f, 1.0f), EAttachLocation::KeepWorldPosition);
				SFX->PlaySoundOnce(WateringCue, CurrentFlower->Root);
				CurrentFlower->Watered = true;
				//dynamic material
				AttentionLightToggle = 0.0f;
				if (CurrentFlower->ReadyToBloom)
				{
					
					/*Remove from here once spawning vfx*/
					CurrentFlower->ReadyToCollect = true;
					CurrentFlower->ReadyForVFX = true;
					SpawnParticle(CurrentFlower->VFX, CurrentFlower->Root, "None", CurrentFlower->GetSocketLocation(), FRotator(0.0f, 0.0f, 0.0f), CurrentFlower->VFXScale, EAttachLocation::KeepWorldPosition);
				}

			}
			else if (!PlayerRef->WateringMode && PlayerRef->FertilizingMode && !PlayerRef->CollectMode && !PlayerRef->CareMode)
			{
				if (CurrentFlower->Growing)
				{
					switch (PlayerRef->ChosenFertilizer)
					{
					case EItems::Terranfertilizer:
					{
						if (CheckEnough(EItems::Terranfertilizer))
						{
							FVector SpawnLocationFert = PlayerRef->HitResult.Location + FVector(0.0f, 0.0f, 100.0f);
							SpawnParticle(FertilizerVFX, CurrentFlower->Root, "None", SpawnLocationFert, FRotator(0.0f, 0.0f, 0.0f), FVector(1.0f, 1.0f, 1.0f), EAttachLocation::KeepWorldPosition);
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
							FVector SpawnLocationFert = PlayerRef->HitResult.Location + FVector(0.0f, 0.0f, 100.0f);
							SpawnParticle(FertilizerVFX, CurrentFlower->Root, "None", SpawnLocationFert, FRotator(0.0f, 0.0f, 0.0f), FVector(1.0f, 1.0f, 1.0f), EAttachLocation::KeepWorldPosition);
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
							FVector SpawnLocationFert = PlayerRef->HitResult.Location + FVector(0.0f, 0.0f, 100.0f);
							SpawnParticle(FertilizerVFX, CurrentFlower->Root, "None", SpawnLocationFert, FRotator(0.0f, 0.0f, 0.0f), FVector(1.0f, 1.0f, 1.0f), EAttachLocation::KeepWorldPosition);
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
			else if (CurrentFlower->ReadyToCollect && PlayerRef->CollectMode && !PlayerRef->WateringMode && !PlayerRef->FertilizingMode && !PlayerRef->CareMode)
			{
				CollectFlower(CurrentFlower);
				
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

void AManualPlantingArea::GrowFlower(TSubclassOf<APlantingFlower> FlowerToGrow)
{
	FActorSpawnParameters Param;
	//Param.Owner = this;
	APlantingFlower* Flower = GetWorld()->SpawnActor<APlantingFlower>(FlowerToGrow, PlayerRef->HitResult.Location, FRotator(0.0f,0.0f,0.0f), Param);
	FRotator LookAt = UKismetMathLibrary::FindLookAtRotation(Flower->GetActorLocation(), LookAtDir->GetComponentLocation());
	Flower->SetActorRotation(FQuat(FRotator(Flower->GetActorRotation().Pitch,
											LookAt.Yaw,
											Flower->GetActorRotation().Roll)));
	AttentionLightToggle = 1.0f;
	
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

UParticleSystemComponent* AManualPlantingArea::SpawnParticle(UParticleSystem* PS, USceneComponent* AttachTo, FName AttachName, FVector Location, FRotator Rotation, FVector Scale, EAttachLocation::Type AttachType)
{
	UParticleSystemComponent* Particle = UGameplayStatics::SpawnEmitterAttached(PS, AttachTo, AttachName, Location, Rotation,Scale, AttachType);
	return Particle;
}


