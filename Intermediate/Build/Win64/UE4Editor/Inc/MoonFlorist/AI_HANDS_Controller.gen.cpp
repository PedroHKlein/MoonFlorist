// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoonFlorist/AI_HANDS_Controller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_HANDS_Controller() {}
// Cross Module References
	MOONFLORIST_API UClass* Z_Construct_UClass_AAI_HANDS_Controller_NoRegister();
	MOONFLORIST_API UClass* Z_Construct_UClass_AAI_HANDS_Controller();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_MoonFlorist();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AAI_HANDS_Controller_OnPawnDetected();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
// End Cross Module References
	void AAI_HANDS_Controller::StaticRegisterNativesAAI_HANDS_Controller()
	{
		UClass* Class = AAI_HANDS_Controller::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPawnDetected", &AAI_HANDS_Controller::execOnPawnDetected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAI_HANDS_Controller_OnPawnDetected_Statics
	{
		struct AI_HANDS_Controller_eventOnPawnDetected_Parms
		{
			TArray<AActor*> DetectedPawns;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectedPawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DetectedPawns;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetectedPawns_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_HANDS_Controller_OnPawnDetected_Statics::NewProp_DetectedPawns_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAI_HANDS_Controller_OnPawnDetected_Statics::NewProp_DetectedPawns = { "DetectedPawns", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_HANDS_Controller_eventOnPawnDetected_Parms, DetectedPawns), METADATA_PARAMS(Z_Construct_UFunction_AAI_HANDS_Controller_OnPawnDetected_Statics::NewProp_DetectedPawns_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AAI_HANDS_Controller_OnPawnDetected_Statics::NewProp_DetectedPawns_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAI_HANDS_Controller_OnPawnDetected_Statics::NewProp_DetectedPawns_Inner = { "DetectedPawns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAI_HANDS_Controller_OnPawnDetected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_HANDS_Controller_OnPawnDetected_Statics::NewProp_DetectedPawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_HANDS_Controller_OnPawnDetected_Statics::NewProp_DetectedPawns_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_HANDS_Controller_OnPawnDetected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI_HANDS_Controller.h" },
		{ "ToolTip", "void OnMoveCompleted(FAIRequestID RequestID, EPathFollowingResult::Type Result);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_HANDS_Controller_OnPawnDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_HANDS_Controller, nullptr, "OnPawnDetected", sizeof(AI_HANDS_Controller_eventOnPawnDetected_Parms), Z_Construct_UFunction_AAI_HANDS_Controller_OnPawnDetected_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAI_HANDS_Controller_OnPawnDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAI_HANDS_Controller_OnPawnDetected_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAI_HANDS_Controller_OnPawnDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAI_HANDS_Controller_OnPawnDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAI_HANDS_Controller_OnPawnDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAI_HANDS_Controller_NoRegister()
	{
		return AAI_HANDS_Controller::StaticClass();
	}
	struct Z_Construct_UClass_AAI_HANDS_Controller_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SightConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoseSightRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoseSightRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightAge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SightAge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SightRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_HANDS_Controller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_MoonFlorist,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAI_HANDS_Controller_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAI_HANDS_Controller_OnPawnDetected, "OnPawnDetected" }, // 662557394
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_HANDS_Controller_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AI_HANDS_Controller.h" },
		{ "ModuleRelativePath", "AI_HANDS_Controller.h" },
		{ "ToolTip", "H.A.N.D.S controller class" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_HANDS_Controller_Statics::NewProp_SightConfig_MetaData[] = {
		{ "Category", "AI_HANDS" },
		{ "ModuleRelativePath", "AI_HANDS_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_HANDS_Controller_Statics::NewProp_SightConfig = { "SightConfig", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_HANDS_Controller, SightConfig), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAI_HANDS_Controller_Statics::NewProp_SightConfig_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAI_HANDS_Controller_Statics::NewProp_SightConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_HANDS_Controller_Statics::NewProp_FOV_MetaData[] = {
		{ "Category", "AI_HANDS" },
		{ "ModuleRelativePath", "AI_HANDS_Controller.h" },
		{ "ToolTip", "Field of View of HANDS" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAI_HANDS_Controller_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_HANDS_Controller, FOV), METADATA_PARAMS(Z_Construct_UClass_AAI_HANDS_Controller_Statics::NewProp_FOV_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAI_HANDS_Controller_Statics::NewProp_FOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_HANDS_Controller_Statics::NewProp_LoseSightRadius_MetaData[] = {
		{ "Category", "AI_HANDS" },
		{ "ModuleRelativePath", "AI_HANDS_Controller.h" },
		{ "ToolTip", "How far away for the HANDS to not see you anymore" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAI_HANDS_Controller_Statics::NewProp_LoseSightRadius = { "LoseSightRadius", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_HANDS_Controller, LoseSightRadius), METADATA_PARAMS(Z_Construct_UClass_AAI_HANDS_Controller_Statics::NewProp_LoseSightRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAI_HANDS_Controller_Statics::NewProp_LoseSightRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_HANDS_Controller_Statics::NewProp_SightAge_MetaData[] = {
		{ "Category", "AI_HANDS" },
		{ "ModuleRelativePath", "AI_HANDS_Controller.h" },
		{ "ToolTip", "How long it keeps this sight information" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAI_HANDS_Controller_Statics::NewProp_SightAge = { "SightAge", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_HANDS_Controller, SightAge), METADATA_PARAMS(Z_Construct_UClass_AAI_HANDS_Controller_Statics::NewProp_SightAge_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAI_HANDS_Controller_Statics::NewProp_SightAge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_HANDS_Controller_Statics::NewProp_SightRadius_MetaData[] = {
		{ "Category", "AI_HANDS" },
		{ "ModuleRelativePath", "AI_HANDS_Controller.h" },
		{ "ToolTip", "How far HANDS can see" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAI_HANDS_Controller_Statics::NewProp_SightRadius = { "SightRadius", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_HANDS_Controller, SightRadius), METADATA_PARAMS(Z_Construct_UClass_AAI_HANDS_Controller_Statics::NewProp_SightRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAI_HANDS_Controller_Statics::NewProp_SightRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAI_HANDS_Controller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_HANDS_Controller_Statics::NewProp_SightConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_HANDS_Controller_Statics::NewProp_FOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_HANDS_Controller_Statics::NewProp_LoseSightRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_HANDS_Controller_Statics::NewProp_SightAge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_HANDS_Controller_Statics::NewProp_SightRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_HANDS_Controller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_HANDS_Controller>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI_HANDS_Controller_Statics::ClassParams = {
		&AAI_HANDS_Controller::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAI_HANDS_Controller_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AAI_HANDS_Controller_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAI_HANDS_Controller_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAI_HANDS_Controller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAI_HANDS_Controller()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAI_HANDS_Controller_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAI_HANDS_Controller, 3873857126);
	template<> MOONFLORIST_API UClass* StaticClass<AAI_HANDS_Controller>()
	{
		return AAI_HANDS_Controller::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAI_HANDS_Controller(Z_Construct_UClass_AAI_HANDS_Controller, &AAI_HANDS_Controller::StaticClass, TEXT("/Script/MoonFlorist"), TEXT("AAI_HANDS_Controller"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_HANDS_Controller);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
