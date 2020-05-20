// Fill out your copyright notice in the Description page of Project Settings.


#include "ManualPlantingArea.h"
#include "Engine/StaticMesh.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/SceneComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/EngineTypes.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "Kismet/KismetMathLibrary.h"

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
	

}

// Called every frame
void AManualPlantingArea::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

void AManualPlantingArea::PlantingAreaInteraction()
{
	if (Cast<AManualPlantingArea>(PlayerRef->HitResult.GetActor()))
	{
		
		LocationUnderCursor = PlayerRef->HitResult.Location;
		
		if (!PlayerRef->WateringMode && !PlayerRef->FertilizingMode && (PlayerRef->ChosenFlower != EItems::Noneselected))
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
				!CurrentFlower->ReadyToBloom)
			{
				CurrentFlower->Bloom();
			}
			else if (PlayerRef->WateringMode && !PlayerRef->FertilizingMode)
			{
				CurrentFlower->Watered = true;
				if (CurrentFlower->ReadyToBloom)
				{
					/*Remove from here once spawning vfx*/
					CurrentFlower->ReadyToCollect = true;
					CurrentFlower->ReadyForVFX = true;
				}
			}
			else if (CurrentFlower->ReadyToCollect)
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

	for (int i = 0; i < (PlayerRef->PlayerStorage->StorageArray.Num() - 1); i++)
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
	
}

void AManualPlantingArea::DeducedChosenItem(TEnumAsByte<EItems> ItemToDeduct)
{
	FString Name = UEnum::GetValueAsString(ItemToDeduct.GetValue()).RightChop(8);
	for (int i = 0; i < (PlayerRef->PlayerStorage->StorageArray.Num() - 1); i++)
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
	for (int i = 0; i < (PlayerRef->PlayerStorage->StorageArray.Num() - 1); i++)
	{

		if (PlayerRef->PlayerStorage->StorageArray[i]->GetName().ToString() == Name)
		{
			PlayerRef->PlayerStorage->IncreaseStacks(1, PlayerRef->PlayerStorage->StorageArray[i]);
			return;

		}
	}
}

void AManualPlantingArea::CanPlant(TEnumAsByte<EItems> FlowerToPlant)
{
	FString Name = UEnum::GetValueAsString(FlowerToPlant.GetValue()).RightChop(8);

	for (int i = 0; i < (PlayerRef->PlayerStorage->StorageArray.Num() - 1); i++)
	{

		if (PlayerRef->PlayerStorage->StorageArray[i]->GetName().ToString() == Name)
		{
			if (PlayerRef->PlayerStorage->StorageArray[i]->GetStacks() > 0)
			{
				PlayerRef->CanPlant = true;
				return;
			}
			else if(PlayerRef->PlayerStorage->StorageArray[i]->GetStacks() <= 0)
			{
				PlayerRef->CanPlant = false;
				return;
			}
		}
	}
}


