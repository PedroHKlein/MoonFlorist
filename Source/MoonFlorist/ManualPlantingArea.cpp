// Fill out your copyright notice in the Description page of Project Settings.


#include "ManualPlantingArea.h"
#include "Engine/StaticMesh.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/EngineTypes.h"
#include "Engine/Engine.h"
#include "Engine/World.h"

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
	if (PlayerRef->Clicked)
	{ 
		PlantingAreaInteraction();
	}

}

void AManualPlantingArea::PlantingAreaInteraction()
{
	if (PlayerRef)
	{
		if (PlayerRef->CurrentInteractActor && PlayerRef->Interacting)
		{

			LocationUnderCursor = PlayerRef->HitResult.Location;
			if (PlayerRef->HitResult.GetActor() == this)
			{
				if (!PlayerRef->WateringMode && !PlayerRef->FertilizingMode && (PlayerRef->ChosenFlower != EItems::Noneselected))
				{
					switch (PlayerRef->ChosenFlower)
					{
					case EItems::Scarletflower:
					{
						if (CheckEnough(EItems::Scarletseed))
						{
							GrowFlower(GrowTest);
							
							
						}
						break;
					}
					case EItems::Cobaltflower:
					{
						UE_LOG(LogPlantingArea, Warning, TEXT("PlantingArea: Plant Cobalt Flower"));
						break;
					}
					case EItems::Goldenflower:
					{
						UE_LOG(LogPlantingArea, Warning, TEXT("PlantingArea: Plant Gold Flower"));
						break;
					}
					case EItems::Silverflower:
					{
						UE_LOG(LogPlantingArea, Warning, TEXT("PlantingArea: Plant Silver Flower"));
						break;
					}
					default:
						break;
					}
				}
		}
			

		}
		else
		{
			UE_LOG(LogPlantingArea, Error, TEXT("PlantingArea: No Actor"));
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
	Param.Owner = this;
	APlantingFlower* Flower = GetWorld()->SpawnActor<APlantingFlower>(FlowerToGrow, LocationUnderCursor, FRotator(0.0f, 0.0f, 0.0f), Param);
	UE_LOG(LogPlantingArea, Warning, TEXT("PlantingArea: Plant RED Flower"));
}


