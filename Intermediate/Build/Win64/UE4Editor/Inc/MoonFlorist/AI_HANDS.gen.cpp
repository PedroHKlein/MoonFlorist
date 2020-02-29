// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoonFlorist/AI_HANDS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_HANDS() {}
// Cross Module References
	MOONFLORIST_API UClass* Z_Construct_UClass_AAI_HANDS_NoRegister();
	MOONFLORIST_API UClass* Z_Construct_UClass_AAI_HANDS();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MoonFlorist();
	MOONFLORIST_API UClass* Z_Construct_UClass_AWaypoint_NoRegister();
// End Cross Module References
	void AAI_HANDS::StaticRegisterNativesAAI_HANDS()
	{
	}
	UClass* Z_Construct_UClass_AAI_HANDS_NoRegister()
	{
		return AAI_HANDS::StaticClass();
	}
	struct Z_Construct_UClass_AAI_HANDS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsMoving_MetaData[];
#endif
		static void NewProp_IsMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextWaypoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NextWaypoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWaypoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWaypoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaypointArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WaypointArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WaypointArray_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_HANDS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MoonFlorist,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_HANDS_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI_HANDS.h" },
		{ "ModuleRelativePath", "AI_HANDS.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_HANDS_Statics::NewProp_IsMoving_MetaData[] = {
		{ "Category", "Way Points" },
		{ "ModuleRelativePath", "AI_HANDS.h" },
	};
#endif
	void Z_Construct_UClass_AAI_HANDS_Statics::NewProp_IsMoving_SetBit(void* Obj)
	{
		((AAI_HANDS*)Obj)->IsMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAI_HANDS_Statics::NewProp_IsMoving = { "IsMoving", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAI_HANDS), &Z_Construct_UClass_AAI_HANDS_Statics::NewProp_IsMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAI_HANDS_Statics::NewProp_IsMoving_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAI_HANDS_Statics::NewProp_IsMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_HANDS_Statics::NewProp_NextWaypoint_MetaData[] = {
		{ "Category", "Way Points" },
		{ "ModuleRelativePath", "AI_HANDS.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_HANDS_Statics::NewProp_NextWaypoint = { "NextWaypoint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_HANDS, NextWaypoint), Z_Construct_UClass_AWaypoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAI_HANDS_Statics::NewProp_NextWaypoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAI_HANDS_Statics::NewProp_NextWaypoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_HANDS_Statics::NewProp_CurrentWaypoint_MetaData[] = {
		{ "Category", "Way Points" },
		{ "ModuleRelativePath", "AI_HANDS.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_HANDS_Statics::NewProp_CurrentWaypoint = { "CurrentWaypoint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_HANDS, CurrentWaypoint), Z_Construct_UClass_AWaypoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAI_HANDS_Statics::NewProp_CurrentWaypoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAI_HANDS_Statics::NewProp_CurrentWaypoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_HANDS_Statics::NewProp_WaypointArray_MetaData[] = {
		{ "Category", "Way Points" },
		{ "ModuleRelativePath", "AI_HANDS.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAI_HANDS_Statics::NewProp_WaypointArray = { "WaypointArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_HANDS, WaypointArray), METADATA_PARAMS(Z_Construct_UClass_AAI_HANDS_Statics::NewProp_WaypointArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAI_HANDS_Statics::NewProp_WaypointArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_HANDS_Statics::NewProp_WaypointArray_Inner = { "WaypointArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWaypoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAI_HANDS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_HANDS_Statics::NewProp_IsMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_HANDS_Statics::NewProp_NextWaypoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_HANDS_Statics::NewProp_CurrentWaypoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_HANDS_Statics::NewProp_WaypointArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_HANDS_Statics::NewProp_WaypointArray_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_HANDS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_HANDS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI_HANDS_Statics::ClassParams = {
		&AAI_HANDS::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAI_HANDS_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AAI_HANDS_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAI_HANDS_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAI_HANDS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAI_HANDS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAI_HANDS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAI_HANDS, 3832555679);
	template<> MOONFLORIST_API UClass* StaticClass<AAI_HANDS>()
	{
		return AAI_HANDS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAI_HANDS(Z_Construct_UClass_AAI_HANDS, &AAI_HANDS::StaticClass, TEXT("/Script/MoonFlorist"), TEXT("AAI_HANDS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_HANDS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
