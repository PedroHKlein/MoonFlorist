// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoonFlorist/Item.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem() {}
// Cross Module References
	MOONFLORIST_API UEnum* Z_Construct_UEnum_MoonFlorist_EItemType();
	UPackage* Z_Construct_UPackage__Script_MoonFlorist();
	MOONFLORIST_API UClass* Z_Construct_UClass_AItem_NoRegister();
	MOONFLORIST_API UClass* Z_Construct_UClass_AItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AItem_GetIcon();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AItem_GetName();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AItem_GetPrice();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AItem_GetStacks();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AItem_GetType();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AItem_SetIcon();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AItem_SetItemType();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AItem_SetMesh();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AItem_SetName();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AItem_SetPrice();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AItem_SetStacks();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* EItemType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MoonFlorist_EItemType, Z_Construct_UPackage__Script_MoonFlorist(), TEXT("EItemType"));
		}
		return Singleton;
	}
	template<> MOONFLORIST_API UEnum* StaticEnum<EItemType>()
	{
		return EItemType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EItemType(EItemType_StaticEnum, TEXT("/Script/MoonFlorist"), TEXT("EItemType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MoonFlorist_EItemType_Hash() { return 3399099079U; }
	UEnum* Z_Construct_UEnum_MoonFlorist_EItemType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MoonFlorist();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EItemType"), 0, Get_Z_Construct_UEnum_MoonFlorist_EItemType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "IT_Flower", (int64)IT_Flower },
				{ "IT_Seed", (int64)IT_Seed },
				{ "IT_Bouquet", (int64)IT_Bouquet },
				{ "IT_Fertilizer", (int64)IT_Fertilizer },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "IT_Bouquet.DisplayName", "Bouquet" },
				{ "IT_Fertilizer.DisplayName", "Fertilizer" },
				{ "IT_Flower.DisplayName", "Flower" },
				{ "IT_Seed.DisplayName", "Seed" },
				{ "ModuleRelativePath", "Item.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MoonFlorist,
				nullptr,
				"EItemType",
				"EItemType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AItem::StaticRegisterNativesAItem()
	{
		UClass* Class = AItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIcon", &AItem::execGetIcon },
			{ "GetName", &AItem::execGetName },
			{ "GetPrice", &AItem::execGetPrice },
			{ "GetStacks", &AItem::execGetStacks },
			{ "GetType", &AItem::execGetType },
			{ "SetIcon", &AItem::execSetIcon },
			{ "SetItemType", &AItem::execSetItemType },
			{ "SetMesh", &AItem::execSetMesh },
			{ "SetName", &AItem::execSetName },
			{ "SetPrice", &AItem::execSetPrice },
			{ "SetStacks", &AItem::execSetStacks },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AItem_GetIcon_Statics
	{
		struct Item_eventGetIcon_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_GetIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventGetIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_GetIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_GetIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_GetIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "ItemFunc" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_GetIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "GetIcon", sizeof(Item_eventGetIcon_Parms), Z_Construct_UFunction_AItem_GetIcon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AItem_GetIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_GetIcon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AItem_GetIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_GetIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_GetIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItem_GetName_Statics
	{
		struct Item_eventGetName_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AItem_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventGetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_GetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_GetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ItemFunc" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "GetName", sizeof(Item_eventGetName_Parms), Z_Construct_UFunction_AItem_GetName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AItem_GetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_GetName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AItem_GetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItem_GetPrice_Statics
	{
		struct Item_eventGetPrice_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AItem_GetPrice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventGetPrice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_GetPrice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_GetPrice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_GetPrice_Statics::Function_MetaDataParams[] = {
		{ "Category", "ItemFunc" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_GetPrice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "GetPrice", sizeof(Item_eventGetPrice_Parms), Z_Construct_UFunction_AItem_GetPrice_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AItem_GetPrice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_GetPrice_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AItem_GetPrice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_GetPrice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_GetPrice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItem_GetStacks_Statics
	{
		struct Item_eventGetStacks_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AItem_GetStacks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventGetStacks_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_GetStacks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_GetStacks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_GetStacks_Statics::Function_MetaDataParams[] = {
		{ "Category", "ItemFunc" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_GetStacks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "GetStacks", sizeof(Item_eventGetStacks_Parms), Z_Construct_UFunction_AItem_GetStacks_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AItem_GetStacks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_GetStacks_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AItem_GetStacks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_GetStacks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_GetStacks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItem_GetType_Statics
	{
		struct Item_eventGetType_Parms
		{
			TEnumAsByte<EItemType> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AItem_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_MoonFlorist_EItemType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_GetType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_GetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_GetType_Statics::Function_MetaDataParams[] = {
		{ "Category", "ItemFunc" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "GetType", sizeof(Item_eventGetType_Parms), Z_Construct_UFunction_AItem_GetType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AItem_GetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_GetType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AItem_GetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_GetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_GetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItem_SetIcon_Statics
	{
		struct Item_eventSetIcon_Parms
		{
			UTexture2D* _Icon;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Icon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_SetIcon_Statics::NewProp__Icon = { "_Icon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventSetIcon_Parms, _Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_SetIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_SetIcon_Statics::NewProp__Icon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_SetIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "ItemFunc" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_SetIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "SetIcon", sizeof(Item_eventSetIcon_Parms), Z_Construct_UFunction_AItem_SetIcon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AItem_SetIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_SetIcon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AItem_SetIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_SetIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_SetIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItem_SetItemType_Statics
	{
		struct Item_eventSetItemType_Parms
		{
			TEnumAsByte<EItemType> _ItemType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__ItemType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AItem_SetItemType_Statics::NewProp__ItemType = { "_ItemType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventSetItemType_Parms, _ItemType), Z_Construct_UEnum_MoonFlorist_EItemType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_SetItemType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_SetItemType_Statics::NewProp__ItemType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_SetItemType_Statics::Function_MetaDataParams[] = {
		{ "Category", "ItemFunc" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_SetItemType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "SetItemType", sizeof(Item_eventSetItemType_Parms), Z_Construct_UFunction_AItem_SetItemType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AItem_SetItemType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_SetItemType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AItem_SetItemType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_SetItemType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_SetItemType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItem_SetMesh_Statics
	{
		struct Item_eventSetMesh_Parms
		{
			UStaticMesh* _Mesh;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_SetMesh_Statics::NewProp__Mesh = { "_Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventSetMesh_Parms, _Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_SetMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_SetMesh_Statics::NewProp__Mesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_SetMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "ItemFunc" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_SetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "SetMesh", sizeof(Item_eventSetMesh_Parms), Z_Construct_UFunction_AItem_SetMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AItem_SetMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_SetMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AItem_SetMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_SetMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_SetMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItem_SetName_Statics
	{
		struct Item_eventSetName_Parms
		{
			FName _Name;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AItem_SetName_Statics::NewProp__Name = { "_Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventSetName_Parms, _Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_SetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_SetName_Statics::NewProp__Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_SetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ItemFunc" },
		{ "ModuleRelativePath", "Item.h" },
		{ "ToolTip", "Assigning Names to the item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_SetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "SetName", sizeof(Item_eventSetName_Parms), Z_Construct_UFunction_AItem_SetName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AItem_SetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_SetName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AItem_SetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_SetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_SetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItem_SetPrice_Statics
	{
		struct Item_eventSetPrice_Parms
		{
			int32 _Amount;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AItem_SetPrice_Statics::NewProp__Amount = { "_Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventSetPrice_Parms, _Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_SetPrice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_SetPrice_Statics::NewProp__Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_SetPrice_Statics::Function_MetaDataParams[] = {
		{ "Category", "ItemFunc" },
		{ "ModuleRelativePath", "Item.h" },
		{ "ToolTip", "Adjusting Prices" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_SetPrice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "SetPrice", sizeof(Item_eventSetPrice_Parms), Z_Construct_UFunction_AItem_SetPrice_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AItem_SetPrice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_SetPrice_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AItem_SetPrice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_SetPrice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_SetPrice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItem_SetStacks_Statics
	{
		struct Item_eventSetStacks_Parms
		{
			int32 _Amount;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AItem_SetStacks_Statics::NewProp__Amount = { "_Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventSetStacks_Parms, _Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_SetStacks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_SetStacks_Statics::NewProp__Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_SetStacks_Statics::Function_MetaDataParams[] = {
		{ "Category", "ItemFunc" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_SetStacks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "SetStacks", sizeof(Item_eventSetStacks_Parms), Z_Construct_UFunction_AItem_SetStacks_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AItem_SetStacks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_SetStacks_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AItem_SetStacks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_SetStacks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_SetStacks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AItem_NoRegister()
	{
		return AItem::StaticClass();
	}
	struct Z_Construct_UClass_AItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stacks_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Stacks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Price_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Price;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stackable_MetaData[];
#endif
		static void NewProp_Stackable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Stackable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanBeSold_MetaData[];
#endif
		static void NewProp_CanBeSold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanBeSold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InStorage_MetaData[];
#endif
		static void NewProp_InStorage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InStorage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MoonFlorist,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AItem_GetIcon, "GetIcon" }, // 2416655761
		{ &Z_Construct_UFunction_AItem_GetName, "GetName" }, // 378656133
		{ &Z_Construct_UFunction_AItem_GetPrice, "GetPrice" }, // 993304160
		{ &Z_Construct_UFunction_AItem_GetStacks, "GetStacks" }, // 1188419710
		{ &Z_Construct_UFunction_AItem_GetType, "GetType" }, // 2956095310
		{ &Z_Construct_UFunction_AItem_SetIcon, "SetIcon" }, // 4232150610
		{ &Z_Construct_UFunction_AItem_SetItemType, "SetItemType" }, // 2058106043
		{ &Z_Construct_UFunction_AItem_SetMesh, "SetMesh" }, // 1767336287
		{ &Z_Construct_UFunction_AItem_SetName, "SetName" }, // 282679157
		{ &Z_Construct_UFunction_AItem_SetPrice, "SetPrice" }, // 3789630713
		{ &Z_Construct_UFunction_AItem_SetStacks, "SetStacks" }, // 1609878337
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Item.h" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ItemVar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x004000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_Mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_Icon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ItemVar" },
		{ "ModuleRelativePath", "Item.h" },
		{ "ToolTip", "Icon used when displayed in storage" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_Icon_MetaData, ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_Stacks_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ItemVar" },
		{ "ModuleRelativePath", "Item.h" },
		{ "ToolTip", "Stacks of the item" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_Stacks = { "Stacks", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem, Stacks), METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_Stacks_MetaData, ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_Stacks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_Price_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ItemVar" },
		{ "ModuleRelativePath", "Item.h" },
		{ "ToolTip", "The Price of the Item" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_Price = { "Price", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem, Price), METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_Price_MetaData, ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_Price_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ItemVar" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AItem_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem, Name), METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_ItemType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ItemVar" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AItem_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem, ItemType), Z_Construct_UEnum_MoonFlorist_EItemType, METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_ItemType_MetaData, ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_ItemType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_Stackable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ItemVar" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	void Z_Construct_UClass_AItem_Statics::NewProp_Stackable_SetBit(void* Obj)
	{
		((AItem*)Obj)->Stackable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_Stackable = { "Stackable", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AItem), &Z_Construct_UClass_AItem_Statics::NewProp_Stackable_SetBit, METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_Stackable_MetaData, ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_Stackable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_CanBeSold_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ItemVar" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	void Z_Construct_UClass_AItem_Statics::NewProp_CanBeSold_SetBit(void* Obj)
	{
		((AItem*)Obj)->CanBeSold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_CanBeSold = { "CanBeSold", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AItem), &Z_Construct_UClass_AItem_Statics::NewProp_CanBeSold_SetBit, METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_CanBeSold_MetaData, ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_CanBeSold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_InStorage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ItemVar" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	void Z_Construct_UClass_AItem_Statics::NewProp_InStorage_SetBit(void* Obj)
	{
		((AItem*)Obj)->InStorage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_InStorage = { "InStorage", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AItem), &Z_Construct_UClass_AItem_Statics::NewProp_InStorage_SetBit, METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_InStorage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_InStorage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_Stacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_Price,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_Stackable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_CanBeSold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_InStorage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AItem_Statics::ClassParams = {
		&AItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AItem_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AItem, 1917435595);
	template<> MOONFLORIST_API UClass* StaticClass<AItem>()
	{
		return AItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AItem(Z_Construct_UClass_AItem, &AItem::StaticClass, TEXT("/Script/MoonFlorist"), TEXT("AItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
