// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/Texture2D.h"
#include "Components/Image.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

UENUM()
enum EItemType
{
	IT_Flower	UMETA(DisplayName = "Flower"),
	IT_Seed 	UMETA(DisplayName = "Seed"),
	IT_Bouquet	UMETA(DisplayName = "Bouquet"),
	IT_Fertilizer	UMETA(DisplayName = "Fertilizer"),
};

UCLASS()
class MOONFLORIST_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

	void CreateItem(EItemType _ItemType, FString _Name, FString _IconPath, int _Stacks = 1, int _Price = 10, bool _Stackable = true, bool _InStorage = true);

	UFUNCTION(BlueprintCallable, Category = ItemFunc)
	void SetItemType(EItemType _ItemType);

	//Assigning Names to the item
	UFUNCTION(BlueprintCallable, Category = ItemFunc)
	void SetName(FName _Name);

	//Adjusting Prices
	UFUNCTION(BlueprintCallable, Category = ItemFunc)
	void SetPrice(int _Amount);

	UFUNCTION(BlueprintCallable, Category = ItemFunc)
	void SetStacks(int _Amount);
	

	UFUNCTION(BlueprintCallable, Category = ItemFunc)
	void SetIcon(UTexture2D* _Icon);
	UFUNCTION(BlueprintCallable, Category = ItemFunc)
	void SetMesh(UStaticMesh* _Mesh);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
#pragma region Variables
public:
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ItemVar)
	TEnumAsByte<EItemType> ItemType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ItemVar)
	FName Name;

	//The Price of the Item
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = ItemVar)
	int Price;

	//Stacks of the item
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = ItemVar)
	int Stacks;

	//Icon used when displayed in storage
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = ItemVar)
	UTexture2D* Icon;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = ItemVar)
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = ItemVar)
	bool InStorage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ItemVar)
	bool CanBeSold;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ItemVar)
	bool Stackable;
#pragma endregion


};
