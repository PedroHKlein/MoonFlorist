// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoonFlorist/MoonFloristHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoonFloristHUD() {}
// Cross Module References
	MOONFLORIST_API UClass* Z_Construct_UClass_AMoonFloristHUD_NoRegister();
	MOONFLORIST_API UClass* Z_Construct_UClass_AMoonFloristHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_MoonFlorist();
// End Cross Module References
	void AMoonFloristHUD::StaticRegisterNativesAMoonFloristHUD()
	{
	}
	UClass* Z_Construct_UClass_AMoonFloristHUD_NoRegister()
	{
		return AMoonFloristHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMoonFloristHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMoonFloristHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_MoonFlorist,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoonFloristHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MoonFloristHUD.h" },
		{ "ModuleRelativePath", "MoonFloristHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMoonFloristHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoonFloristHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMoonFloristHUD_Statics::ClassParams = {
		&AMoonFloristHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMoonFloristHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMoonFloristHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMoonFloristHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMoonFloristHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMoonFloristHUD, 1314916839);
	template<> MOONFLORIST_API UClass* StaticClass<AMoonFloristHUD>()
	{
		return AMoonFloristHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMoonFloristHUD(Z_Construct_UClass_AMoonFloristHUD, &AMoonFloristHUD::StaticClass, TEXT("/Script/MoonFlorist"), TEXT("AMoonFloristHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMoonFloristHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
