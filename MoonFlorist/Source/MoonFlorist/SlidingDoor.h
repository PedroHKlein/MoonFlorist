// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SlidingDoor.generated.h"

UCLASS()
class MOONFLORIST_API ASlidingDoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASlidingDoor();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SlidingDoor")
	class UStaticMeshComponent* LeftDoor;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SlidingDoor")
	class UStaticMeshComponent* RightDoor;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SlidingDoor")
	class UStaticMeshComponent* DoorFrame;

	UPROPERTY(VisibleAnywhere, Category = "SlidingDoor")
	class UBoxComponent* TriggerBox;
	UPROPERTY(VisibleAnywhere, Category = "SlidingDoor")
	class UArrowComponent* LeftPoint;

	UPROPERTY(VisibleAnywhere, Category = "SlidingDoor")
	class UArrowComponent* RightPoint;
	bool Open;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
