// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoonFlorist/MyClientManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyClientManager() {}
// Cross Module References
	MOONFLORIST_API UClass* Z_Construct_UClass_AMyClientManager_NoRegister();
	MOONFLORIST_API UClass* Z_Construct_UClass_AMyClientManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MoonFlorist();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyClientManager_init();
	MOONFLORIST_API UClass* Z_Construct_UClass_AMyClient_NoRegister();
// End Cross Module References
	void AMyClientManager::StaticRegisterNativesAMyClientManager()
	{
		UClass* Class = AMyClientManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "init", &AMyClientManager::execinit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyClientManager_init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyClientManager_init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyClientManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyClientManager_init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyClientManager, nullptr, "init", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyClientManager_init_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyClientManager_init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyClientManager_init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyClientManager_init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyClientManager_NoRegister()
	{
		return AMyClientManager::StaticClass();
	}
	struct Z_Construct_UClass_AMyClientManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Clients_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Clients;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Clients_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyClientManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MoonFlorist,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyClientManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyClientManager_init, "init" }, // 3168740347
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyClientManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyClientManager.h" },
		{ "ModuleRelativePath", "MyClientManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyClientManager_Statics::NewProp_Clients_MetaData[] = {
		{ "ModuleRelativePath", "MyClientManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyClientManager_Statics::NewProp_Clients = { "Clients", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyClientManager, Clients), METADATA_PARAMS(Z_Construct_UClass_AMyClientManager_Statics::NewProp_Clients_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyClientManager_Statics::NewProp_Clients_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyClientManager_Statics::NewProp_Clients_Inner = { "Clients", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMyClient_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyClientManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyClientManager_Statics::NewProp_Clients,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyClientManager_Statics::NewProp_Clients_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyClientManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyClientManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyClientManager_Statics::ClassParams = {
		&AMyClientManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyClientManager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AMyClientManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMyClientManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyClientManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyClientManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyClientManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyClientManager, 1972399576);
	template<> MOONFLORIST_API UClass* StaticClass<AMyClientManager>()
	{
		return AMyClientManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyClientManager(Z_Construct_UClass_AMyClientManager, &AMyClientManager::StaticClass, TEXT("/Script/MoonFlorist"), TEXT("AMyClientManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyClientManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
