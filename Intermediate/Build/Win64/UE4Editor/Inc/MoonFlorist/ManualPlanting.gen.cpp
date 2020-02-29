// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoonFlorist/ManualPlanting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManualPlanting() {}
// Cross Module References
	MOONFLORIST_API UClass* Z_Construct_UClass_AManualPlanting_NoRegister();
	MOONFLORIST_API UClass* Z_Construct_UClass_AManualPlanting();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MoonFlorist();
// End Cross Module References
	void AManualPlanting::StaticRegisterNativesAManualPlanting()
	{
	}
	UClass* Z_Construct_UClass_AManualPlanting_NoRegister()
	{
		return AManualPlanting::StaticClass();
	}
	struct Z_Construct_UClass_AManualPlanting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AManualPlanting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MoonFlorist,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManualPlanting_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ManualPlanting.h" },
		{ "ModuleRelativePath", "ManualPlanting.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AManualPlanting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AManualPlanting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AManualPlanting_Statics::ClassParams = {
		&AManualPlanting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AManualPlanting_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AManualPlanting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AManualPlanting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AManualPlanting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AManualPlanting, 1858005306);
	template<> MOONFLORIST_API UClass* StaticClass<AManualPlanting>()
	{
		return AManualPlanting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AManualPlanting(Z_Construct_UClass_AManualPlanting, &AManualPlanting::StaticClass, TEXT("/Script/MoonFlorist"), TEXT("AManualPlanting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AManualPlanting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
