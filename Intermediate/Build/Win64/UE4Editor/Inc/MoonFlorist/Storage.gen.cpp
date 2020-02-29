// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoonFlorist/Storage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStorage() {}
// Cross Module References
	MOONFLORIST_API UClass* Z_Construct_UClass_AStorage_NoRegister();
	MOONFLORIST_API UClass* Z_Construct_UClass_AStorage();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MoonFlorist();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AStorage_AddItem();
	MOONFLORIST_API UClass* Z_Construct_UClass_AItem_NoRegister();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AStorage_IncreaseStacks();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AStorage_RemoveItem();
// End Cross Module References
	void AStorage::StaticRegisterNativesAStorage()
	{
		UClass* Class = AStorage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItem", &AStorage::execAddItem },
			{ "IncreaseStacks", &AStorage::execIncreaseStacks },
			{ "RemoveItem", &AStorage::execRemoveItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStorage_AddItem_Statics
	{
		struct Storage_eventAddItem_Parms
		{
			AItem* _Item;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStorage_AddItem_Statics::NewProp__Item = { "_Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Storage_eventAddItem_Parms, _Item), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStorage_AddItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStorage_AddItem_Statics::NewProp__Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStorage_AddItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "StorageFunc" },
		{ "ModuleRelativePath", "Storage.h" },
		{ "ToolTip", "Storage Methods" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStorage_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStorage, nullptr, "AddItem", sizeof(Storage_eventAddItem_Parms), Z_Construct_UFunction_AStorage_AddItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AStorage_AddItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStorage_AddItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStorage_AddItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStorage_AddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStorage_AddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStorage_IncreaseStacks_Statics
	{
		struct Storage_eventIncreaseStacks_Parms
		{
			int32 _Amount;
			AItem* _Item;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Item;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStorage_IncreaseStacks_Statics::NewProp__Item = { "_Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Storage_eventIncreaseStacks_Parms, _Item), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AStorage_IncreaseStacks_Statics::NewProp__Amount = { "_Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Storage_eventIncreaseStacks_Parms, _Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStorage_IncreaseStacks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStorage_IncreaseStacks_Statics::NewProp__Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStorage_IncreaseStacks_Statics::NewProp__Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStorage_IncreaseStacks_Statics::Function_MetaDataParams[] = {
		{ "Category", "ItemFunc" },
		{ "ModuleRelativePath", "Storage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStorage_IncreaseStacks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStorage, nullptr, "IncreaseStacks", sizeof(Storage_eventIncreaseStacks_Parms), Z_Construct_UFunction_AStorage_IncreaseStacks_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AStorage_IncreaseStacks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStorage_IncreaseStacks_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStorage_IncreaseStacks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStorage_IncreaseStacks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStorage_IncreaseStacks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStorage_RemoveItem_Statics
	{
		struct Storage_eventRemoveItem_Parms
		{
			AItem* _Item;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStorage_RemoveItem_Statics::NewProp__Item = { "_Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Storage_eventRemoveItem_Parms, _Item), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStorage_RemoveItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStorage_RemoveItem_Statics::NewProp__Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStorage_RemoveItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "StorageFunc" },
		{ "ModuleRelativePath", "Storage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStorage_RemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStorage, nullptr, "RemoveItem", sizeof(Storage_eventRemoveItem_Parms), Z_Construct_UFunction_AStorage_RemoveItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AStorage_RemoveItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStorage_RemoveItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStorage_RemoveItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStorage_RemoveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStorage_RemoveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStorage_NoRegister()
	{
		return AStorage::StaticClass();
	}
	struct Z_Construct_UClass_AStorage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StorageArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StorageArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StorageArray_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStorage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MoonFlorist,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStorage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStorage_AddItem, "AddItem" }, // 2593077779
		{ &Z_Construct_UFunction_AStorage_IncreaseStacks, "IncreaseStacks" }, // 3711448812
		{ &Z_Construct_UFunction_AStorage_RemoveItem, "RemoveItem" }, // 3618871718
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStorage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Storage.h" },
		{ "ModuleRelativePath", "Storage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStorage_Statics::NewProp_StorageArray_MetaData[] = {
		{ "Category", "StorageVar" },
		{ "ModuleRelativePath", "Storage.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStorage_Statics::NewProp_StorageArray = { "StorageArray", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStorage, StorageArray), METADATA_PARAMS(Z_Construct_UClass_AStorage_Statics::NewProp_StorageArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStorage_Statics::NewProp_StorageArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStorage_Statics::NewProp_StorageArray_Inner = { "StorageArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStorage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStorage_Statics::NewProp_StorageArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStorage_Statics::NewProp_StorageArray_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStorage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStorage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStorage_Statics::ClassParams = {
		&AStorage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStorage_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AStorage_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AStorage_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AStorage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStorage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStorage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStorage, 1773846939);
	template<> MOONFLORIST_API UClass* StaticClass<AStorage>()
	{
		return AStorage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStorage(Z_Construct_UClass_AStorage, &AStorage::StaticClass, TEXT("/Script/MoonFlorist"), TEXT("AStorage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStorage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
