// Fill out your copyright notice in the Description page of Project Settings.


#include "DayNight_DMSwitcher.h"
#include "Components/DecalComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Math/Color.h"


// Sets default values
ADayNight_DMSwitcher::ADayNight_DMSwitcher()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Root = CreateDefaultSubobject<USceneComponent>("Root");
	Root->SetupAttachment(RootComponent);


	DayNightDecal = CreateDefaultSubobject<UDecalComponent>("DayNight Decal");
	DayNightDecal->SetupAttachment(Root);
	DayNightDecal->SetDecalMaterial(ConstructorHelpers::FObjectFinder<UMaterialInterface>(TEXT("/Game/Materials/MI_WindowSwitch.MI_WindowSwitch")).Object);
	DayNightDecal->DecalSize = FVector(128.0f, 256.0f, 256.0f);
	DayNightDecal->FadeScreenSize = 0.01f;
	DayNightDecal->bDestroyOwnerAfterFade = true;
	
}

// Called when the game starts or when spawned
void ADayNight_DMSwitcher::BeginPlay()
{
	Super::BeginPlay();
	DM = DayNightDecal->CreateDynamicMaterialInstance();
}

// Called every frame
void ADayNight_DMSwitcher::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void ADayNight_DMSwitcher::DynamicMaterialSwitching(UMaterialInstanceDynamic* _MaterialInstance, UTexture* _Texture, FLinearColor _EmissionColor1, FLinearColor _EmissionColor2)
{

	_MaterialInstance->SetTextureParameterValue("Mask", _Texture);
	_MaterialInstance->SetVectorParameterValue("Emission Color 01", _EmissionColor1);
	_MaterialInstance->SetVectorParameterValue("Emission Color 02", _EmissionColor2);
}

