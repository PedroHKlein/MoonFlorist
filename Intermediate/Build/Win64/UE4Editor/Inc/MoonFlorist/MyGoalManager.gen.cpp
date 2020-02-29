// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoonFlorist/MyGoalManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGoalManager() {}
// Cross Module References
	MOONFLORIST_API UClass* Z_Construct_UClass_AMyGoalManager_NoRegister();
	MOONFLORIST_API UClass* Z_Construct_UClass_AMyGoalManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MoonFlorist();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyGoalManager_GetGoal();
	MOONFLORIST_API UClass* Z_Construct_UClass_UMyGoal_NoRegister();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyGoalManager_init();
// End Cross Module References
	void AMyGoalManager::StaticRegisterNativesAMyGoalManager()
	{
		UClass* Class = AMyGoalManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGoal", &AMyGoalManager::execGetGoal },
			{ "init", &AMyGoalManager::execinit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyGoalManager_GetGoal_Statics
	{
		struct MyGoalManager_eventGetGoal_Parms
		{
			int32 _icol;
			int32 _igoal;
			UMyGoal* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__igoal;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__icol;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyGoalManager_GetGoal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGoalManager_eventGetGoal_Parms, ReturnValue), Z_Construct_UClass_UMyGoal_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyGoalManager_GetGoal_Statics::NewProp__igoal = { "_igoal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGoalManager_eventGetGoal_Parms, _igoal), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyGoalManager_GetGoal_Statics::NewProp__icol = { "_icol", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGoalManager_eventGetGoal_Parms, _icol), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGoalManager_GetGoal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGoalManager_GetGoal_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGoalManager_GetGoal_Statics::NewProp__igoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGoalManager_GetGoal_Statics::NewProp__icol,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGoalManager_GetGoal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGoalManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGoalManager_GetGoal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGoalManager, nullptr, "GetGoal", sizeof(MyGoalManager_eventGetGoal_Parms), Z_Construct_UFunction_AMyGoalManager_GetGoal_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyGoalManager_GetGoal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGoalManager_GetGoal_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyGoalManager_GetGoal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGoalManager_GetGoal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyGoalManager_GetGoal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGoalManager_init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGoalManager_init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGoalManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGoalManager_init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGoalManager, nullptr, "init", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGoalManager_init_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyGoalManager_init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGoalManager_init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyGoalManager_init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyGoalManager_NoRegister()
	{
		return AMyGoalManager::StaticClass();
	}
	struct Z_Construct_UClass_AMyGoalManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrangeGoals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OrangeGoals;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OrangeGoals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurpleGoals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PurpleGoals;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PurpleGoals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GreenGoals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GreenGoals;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GreenGoals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YellowGoals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_YellowGoals;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_YellowGoals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueGoals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlueGoals;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlueGoals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedGoals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RedGoals;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RedGoals_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyGoalManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MoonFlorist,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyGoalManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyGoalManager_GetGoal, "GetGoal" }, // 4193951637
		{ &Z_Construct_UFunction_AMyGoalManager_init, "init" }, // 2856068762
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGoalManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyGoalManager.h" },
		{ "ModuleRelativePath", "MyGoalManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGoalManager_Statics::NewProp_OrangeGoals_MetaData[] = {
		{ "ModuleRelativePath", "MyGoalManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyGoalManager_Statics::NewProp_OrangeGoals = { "OrangeGoals", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGoalManager, OrangeGoals), METADATA_PARAMS(Z_Construct_UClass_AMyGoalManager_Statics::NewProp_OrangeGoals_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyGoalManager_Statics::NewProp_OrangeGoals_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGoalManager_Statics::NewProp_OrangeGoals_Inner = { "OrangeGoals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMyGoal_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGoalManager_Statics::NewProp_PurpleGoals_MetaData[] = {
		{ "ModuleRelativePath", "MyGoalManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyGoalManager_Statics::NewProp_PurpleGoals = { "PurpleGoals", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGoalManager, PurpleGoals), METADATA_PARAMS(Z_Construct_UClass_AMyGoalManager_Statics::NewProp_PurpleGoals_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyGoalManager_Statics::NewProp_PurpleGoals_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGoalManager_Statics::NewProp_PurpleGoals_Inner = { "PurpleGoals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMyGoal_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGoalManager_Statics::NewProp_GreenGoals_MetaData[] = {
		{ "ModuleRelativePath", "MyGoalManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyGoalManager_Statics::NewProp_GreenGoals = { "GreenGoals", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGoalManager, GreenGoals), METADATA_PARAMS(Z_Construct_UClass_AMyGoalManager_Statics::NewProp_GreenGoals_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyGoalManager_Statics::NewProp_GreenGoals_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGoalManager_Statics::NewProp_GreenGoals_Inner = { "GreenGoals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMyGoal_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGoalManager_Statics::NewProp_YellowGoals_MetaData[] = {
		{ "ModuleRelativePath", "MyGoalManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyGoalManager_Statics::NewProp_YellowGoals = { "YellowGoals", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGoalManager, YellowGoals), METADATA_PARAMS(Z_Construct_UClass_AMyGoalManager_Statics::NewProp_YellowGoals_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyGoalManager_Statics::NewProp_YellowGoals_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGoalManager_Statics::NewProp_YellowGoals_Inner = { "YellowGoals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMyGoal_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGoalManager_Statics::NewProp_BlueGoals_MetaData[] = {
		{ "ModuleRelativePath", "MyGoalManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyGoalManager_Statics::NewProp_BlueGoals = { "BlueGoals", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGoalManager, BlueGoals), METADATA_PARAMS(Z_Construct_UClass_AMyGoalManager_Statics::NewProp_BlueGoals_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyGoalManager_Statics::NewProp_BlueGoals_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGoalManager_Statics::NewProp_BlueGoals_Inner = { "BlueGoals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMyGoal_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGoalManager_Statics::NewProp_RedGoals_MetaData[] = {
		{ "ModuleRelativePath", "MyGoalManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyGoalManager_Statics::NewProp_RedGoals = { "RedGoals", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGoalManager, RedGoals), METADATA_PARAMS(Z_Construct_UClass_AMyGoalManager_Statics::NewProp_RedGoals_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyGoalManager_Statics::NewProp_RedGoals_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGoalManager_Statics::NewProp_RedGoals_Inner = { "RedGoals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMyGoal_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyGoalManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGoalManager_Statics::NewProp_OrangeGoals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGoalManager_Statics::NewProp_OrangeGoals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGoalManager_Statics::NewProp_PurpleGoals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGoalManager_Statics::NewProp_PurpleGoals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGoalManager_Statics::NewProp_GreenGoals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGoalManager_Statics::NewProp_GreenGoals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGoalManager_Statics::NewProp_YellowGoals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGoalManager_Statics::NewProp_YellowGoals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGoalManager_Statics::NewProp_BlueGoals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGoalManager_Statics::NewProp_BlueGoals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGoalManager_Statics::NewProp_RedGoals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGoalManager_Statics::NewProp_RedGoals_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyGoalManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGoalManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyGoalManager_Statics::ClassParams = {
		&AMyGoalManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyGoalManager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AMyGoalManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMyGoalManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyGoalManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyGoalManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyGoalManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyGoalManager, 1637492115);
	template<> MOONFLORIST_API UClass* StaticClass<AMyGoalManager>()
	{
		return AMyGoalManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyGoalManager(Z_Construct_UClass_AMyGoalManager, &AMyGoalManager::StaticClass, TEXT("/Script/MoonFlorist"), TEXT("AMyGoalManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGoalManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
