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

	AItem* CreateItem(EItemType _ItemType, FString _Name, FString _IconPath, int _Stacks = 1, int _Price = 10, bool _Stackable = true, bool _InStorage = true);

	UFUNCTION(BlueprintCallable, Category = ItemFunc)
	void SetItemType(EItemType _ItemType);
	UFUNCTION(BlueprintCallable, Category = ItemFunc)
	EItemType GetType() { return ItemType; };
	//Assigning Names to the item
	UFUNCTION(BlueprintCallable, Category = ItemFunc)
	void SetName(FName _Name);
	UFUNCTION(BlueprintCallable, Category = ItemFunc)
	FName GetName() { return Name; };
	//Adjusting Prices
	UFUNCTION(BlueprintCallable, Category = ItemFunc)
	void SetPrice(int _Amount);
	UFUNCTION(BlueprintCallable, Category = ItemFunc)
	int GetPrice() { return Price; };
	UFUNCTION(BlueprintCallable, Category = ItemFunc)
	void SetStacks(int _Amount);
	UFUNCTION(BlueprintCallable, Category = ItemFunc)
	int GetStacks() { return Stacks; };

	UFUNCTION(BlueprintCallable, Category = ItemFunc)
	void SetIcon(UTexture2D* _Icon);
	UFUNCTION(BlueprintCallable, Category = ItemFunc)
	UTexture2D* GetIcon() {return Icon;};
	UFUNCTION(BlueprintCallable, Category = ItemFunc)
	void SetMesh(UStaticMesh* _Mesh);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadOnly, Category = ItemVar, meta = (AllowPrivateAccess = "true"))
		bool InStorage;
	UPROPERTY(BlueprintReadOnly, Category = ItemVar, meta = (AllowPrivateAccess = "true"))
		bool CanBeSold;
	UPROPERTY(BlueprintReadOnly, Category = ItemVar, meta = (AllowPrivateAccess = "true"))
		bool Stackable;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


#pragma region Variables
private:
	

	UPROPERTY(BlueprintReadOnly, Category = ItemVar, meta = (AllowPrivateAccess = "true"))
	TEnumAsByte<EItemType> ItemType;
	
	UPROPERTY(BlueprintReadOnly, Category = ItemVar, meta = (AllowPrivateAccess = "true"))
	FName Name;

	//The Price of the Item
	UPROPERTY(BlueprintReadOnly, Category = ItemVar, meta = (AllowPrivateAccess = "true"))
	int Price;

	//Stacks of the item
	UPROPERTY(BlueprintReadOnly, Category = ItemVar, meta = (AllowPrivateAccess = "true"))
	int Stacks;

	//Icon used when displayed in storage
	UPROPERTY(BlueprintReadOnly, Category = ItemVar, meta = (AllowPrivateAccess = "true"))
	UTexture2D* Icon;

	UPROPERTY(BlueprintReadOnly, Category = ItemVar, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* Mesh;


#pragma endregion


};
