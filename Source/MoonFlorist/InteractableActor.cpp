// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableActor.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"
#include "MoonFloristCharacter.h"
#include "Components/SceneComponent.h"

// Sets default values
AInteractableActor::AInteractableActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
	SetRootComponent(SceneComp);
	SceneComp->bEditableWhenInherited = true;

	FloatingText = CreateDefaultSubobject<UWidgetComponent>(TEXT("Floating Text"));
	FloatingText->SetupAttachment(SceneComp);
	FloatingText->bEditableWhenInherited = true;

	
}

// Called when the game starts or when spawned
void AInteractableActor::BeginPlay()
{
	Super::BeginPlay();
	PlayerRef = Cast<AMoonFloristCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(),0));
}

// Called every frame
void AInteractableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (PlayerRef)
	{
		if (PlayerRef->IsOutlining && PlayerRef->m_Hitsdata.GetActor() == this)
		{
			ShowOutline = true;
		}
		else
		{
			ShowOutline = false;
		}

	}
}

