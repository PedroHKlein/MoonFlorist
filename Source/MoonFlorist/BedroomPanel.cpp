// Fill out your copyright notice in the Description page of Project Settings.


#include "BedroomPanel.h"
#include "Components/TextRenderComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetTextLibrary.h"
#include "UObject/ConstructorHelpers.h"
#include "Math/Color.h"


ABedroomPanel::ABedroomPanel()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Root = CreateDefaultSubobject<USceneComponent>("Root");
	Root->SetupAttachment(RootComponent);
	Root->SetRelativeLocation(FVector(0.f, 0.f, 0.f));

	Hours = CreateDefaultSubobject<UTextRenderComponent>("Hours Text");
	Hours->SetupAttachment(Root);
	Minutes = CreateDefaultSubobject<UTextRenderComponent>("Minutes Text");
	Minutes->SetupAttachment(Root);
}

void ABedroomPanel::BeginPlay()
{
	Super::BeginPlay();
	DynamicMaterialHours = Hours->CreateDynamicMaterialInstance(0);
	DynamicMaterialMinutes = Minutes->CreateDynamicMaterialInstance(0);
}


void ABedroomPanel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	GetTime(Hours, Minutes);
}


void ABedroomPanel::GetTime(UTextRenderComponent* _Hours, UTextRenderComponent* _Minutes)
{
	
	_Hours->SetText(UKismetTextLibrary::Conv_IntToText(UKismetMathLibrary::Now().GetHour(),false,true,2));
	_Minutes->SetText(UKismetTextLibrary::Conv_IntToText(UKismetMathLibrary::Now().GetMinute(), false, true, 2));

}

void ABedroomPanel::DynamicMaterialChanging(UMaterialInstanceDynamic* _MaterialInstance, UTexture* _Texture, FLinearColor _EmissionColor1, FLinearColor _EmissionColor2)
{
	_MaterialInstance->SetTextureParameterValue("Mask", _Texture);
	_MaterialInstance->SetVectorParameterValue("Emission Color 01", _EmissionColor1);
	_MaterialInstance->SetVectorParameterValue("Emission Color 02", _EmissionColor2);
}
