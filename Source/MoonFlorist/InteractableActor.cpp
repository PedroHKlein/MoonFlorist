// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableActor.h"
#include "Components/WidgetComponent.h"
#include "Components/SceneComponent.h"

// Sets default values
AInteractableActor::AInteractableActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
	SceneComp = RootComponent;
	FloatingText = CreateDefaultSubobject<UWidgetComponent>(TEXT("Floating Text"));
	FloatingText->SetupAttachment(SceneComp);


}

// Called when the game starts or when spawned
void AInteractableActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

