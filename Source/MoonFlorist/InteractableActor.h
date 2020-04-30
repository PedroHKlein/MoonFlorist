// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "InteractableActor.generated.h"

UCLASS()
class MOONFLORIST_API AInteractableActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractableActor();
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly)
	class USceneComponent* SceneComp;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite)
	class UWidgetComponent* FloatingText;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly)
	bool ShowOutline;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	class AMoonFloristCharacter* PlayerRef;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
