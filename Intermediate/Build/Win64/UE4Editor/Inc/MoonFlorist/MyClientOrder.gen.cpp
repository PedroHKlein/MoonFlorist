// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoonFlorist/MyClientOrder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyClientOrder() {}
// Cross Module References
	MOONFLORIST_API UClass* Z_Construct_UClass_UMyClientOrder_NoRegister();
	MOONFLORIST_API UClass* Z_Construct_UClass_UMyClientOrder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MoonFlorist();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_UMyClientOrder_GenerateJob();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_UMyClientOrder_GetFullDescription();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_UMyClientOrder_GetGoals();
	MOONFLORIST_API UClass* Z_Construct_UClass_UMyGoal_NoRegister();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_UMyClientOrder_GetName();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_UMyClientOrder_init();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_UMyClientOrder_SetDescription();
	MOONFLORIST_API UClass* Z_Construct_UClass_AMyGameManager_NoRegister();
// End Cross Module References
	void UMyClientOrder::StaticRegisterNativesUMyClientOrder()
	{
		UClass* Class = UMyClientOrder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateJob", &UMyClientOrder::execGenerateJob },
			{ "GetFullDescription", &UMyClientOrder::execGetFullDescription },
			{ "GetGoals", &UMyClientOrder::execGetGoals },
			{ "GetName", &UMyClientOrder::execGetName },
			{ "init", &UMyClientOrder::execinit },
			{ "SetDescription", &UMyClientOrder::execSetDescription },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyClientOrder_GenerateJob_Statics
	{
		struct MyClientOrder_eventGenerateJob_Parms
		{
			int32 _iNum;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__iNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMyClientOrder_GenerateJob_Statics::NewProp__iNum = { "_iNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyClientOrder_eventGenerateJob_Parms, _iNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyClientOrder_GenerateJob_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyClientOrder_GenerateJob_Statics::NewProp__iNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyClientOrder_GenerateJob_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyClientOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyClientOrder_GenerateJob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyClientOrder, nullptr, "GenerateJob", sizeof(MyClientOrder_eventGenerateJob_Parms), Z_Construct_UFunction_UMyClientOrder_GenerateJob_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyClientOrder_GenerateJob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyClientOrder_GenerateJob_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyClientOrder_GenerateJob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyClientOrder_GenerateJob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyClientOrder_GenerateJob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyClientOrder_GetFullDescription_Statics
	{
		struct MyClientOrder_eventGetFullDescription_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyClientOrder_GetFullDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyClientOrder_eventGetFullDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyClientOrder_GetFullDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyClientOrder_GetFullDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyClientOrder_GetFullDescription_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyClientOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyClientOrder_GetFullDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyClientOrder, nullptr, "GetFullDescription", sizeof(MyClientOrder_eventGetFullDescription_Parms), Z_Construct_UFunction_UMyClientOrder_GetFullDescription_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyClientOrder_GetFullDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyClientOrder_GetFullDescription_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyClientOrder_GetFullDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyClientOrder_GetFullDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyClientOrder_GetFullDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyClientOrder_GetGoals_Statics
	{
		struct MyClientOrder_eventGetGoals_Parms
		{
			TArray<UMyGoal*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMyClientOrder_GetGoals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyClientOrder_eventGetGoals_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyClientOrder_GetGoals_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMyGoal_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyClientOrder_GetGoals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyClientOrder_GetGoals_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyClientOrder_GetGoals_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyClientOrder_GetGoals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyClientOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyClientOrder_GetGoals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyClientOrder, nullptr, "GetGoals", sizeof(MyClientOrder_eventGetGoals_Parms), Z_Construct_UFunction_UMyClientOrder_GetGoals_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyClientOrder_GetGoals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyClientOrder_GetGoals_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyClientOrder_GetGoals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyClientOrder_GetGoals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyClientOrder_GetGoals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyClientOrder_GetName_Statics
	{
		struct MyClientOrder_eventGetName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyClientOrder_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyClientOrder_eventGetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyClientOrder_GetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyClientOrder_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyClientOrder_GetName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyClientOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyClientOrder_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyClientOrder, nullptr, "GetName", sizeof(MyClientOrder_eventGetName_Parms), Z_Construct_UFunction_UMyClientOrder_GetName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyClientOrder_GetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyClientOrder_GetName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyClientOrder_GetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyClientOrder_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyClientOrder_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyClientOrder_init_Statics
	{
		struct MyClientOrder_eventinit_Parms
		{
			int32 _iName;
			int32 _iNumOfGoals;
			UWorld* _world;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__world;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__iNumOfGoals;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__iName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyClientOrder_init_Statics::NewProp__world = { "_world", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyClientOrder_eventinit_Parms, _world), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMyClientOrder_init_Statics::NewProp__iNumOfGoals = { "_iNumOfGoals", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyClientOrder_eventinit_Parms, _iNumOfGoals), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMyClientOrder_init_Statics::NewProp__iName = { "_iName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyClientOrder_eventinit_Parms, _iName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyClientOrder_init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyClientOrder_init_Statics::NewProp__world,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyClientOrder_init_Statics::NewProp__iNumOfGoals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyClientOrder_init_Statics::NewProp__iName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyClientOrder_init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyClientOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyClientOrder_init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyClientOrder, nullptr, "init", sizeof(MyClientOrder_eventinit_Parms), Z_Construct_UFunction_UMyClientOrder_init_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyClientOrder_init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyClientOrder_init_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyClientOrder_init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyClientOrder_init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyClientOrder_init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyClientOrder_SetDescription_Statics
	{
		struct MyClientOrder_eventSetDescription_Parms
		{
			FString _Description;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__Description;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyClientOrder_SetDescription_Statics::NewProp__Description = { "_Description", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyClientOrder_eventSetDescription_Parms, _Description), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyClientOrder_SetDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyClientOrder_SetDescription_Statics::NewProp__Description,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyClientOrder_SetDescription_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyClientOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyClientOrder_SetDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyClientOrder, nullptr, "SetDescription", sizeof(MyClientOrder_eventSetDescription_Parms), Z_Construct_UFunction_UMyClientOrder_SetDescription_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyClientOrder_SetDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyClientOrder_SetDescription_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyClientOrder_SetDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyClientOrder_SetDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyClientOrder_SetDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyClientOrder_NoRegister()
	{
		return UMyClientOrder::StaticClass();
	}
	struct Z_Construct_UClass_UMyClientOrder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sFullDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sFullDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Goals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Goals;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Goals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dialogue3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Dialogue3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dialogue2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Dialogue2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dialogue1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Dialogue1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sGreeting_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sGreeting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iName_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyClientOrder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MoonFlorist,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyClientOrder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyClientOrder_GenerateJob, "GenerateJob" }, // 3009421118
		{ &Z_Construct_UFunction_UMyClientOrder_GetFullDescription, "GetFullDescription" }, // 1953790590
		{ &Z_Construct_UFunction_UMyClientOrder_GetGoals, "GetGoals" }, // 1470056804
		{ &Z_Construct_UFunction_UMyClientOrder_GetName, "GetName" }, // 3896031
		{ &Z_Construct_UFunction_UMyClientOrder_init, "init" }, // 322563765
		{ &Z_Construct_UFunction_UMyClientOrder_SetDescription, "SetDescription" }, // 3988031438
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyClientOrder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyClientOrder.h" },
		{ "ModuleRelativePath", "MyClientOrder.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyClientOrder_Statics::NewProp_GameManager_MetaData[] = {
		{ "ModuleRelativePath", "MyClientOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyClientOrder_Statics::NewProp_GameManager = { "GameManager", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyClientOrder, GameManager), Z_Construct_UClass_AMyGameManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyClientOrder_Statics::NewProp_GameManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyClientOrder_Statics::NewProp_GameManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyClientOrder_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "MyClientOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyClientOrder_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyClientOrder, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyClientOrder_Statics::NewProp_World_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyClientOrder_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyClientOrder_Statics::NewProp_sFullDescription_MetaData[] = {
		{ "ModuleRelativePath", "MyClientOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMyClientOrder_Statics::NewProp_sFullDescription = { "sFullDescription", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyClientOrder, sFullDescription), METADATA_PARAMS(Z_Construct_UClass_UMyClientOrder_Statics::NewProp_sFullDescription_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyClientOrder_Statics::NewProp_sFullDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyClientOrder_Statics::NewProp_Goals_MetaData[] = {
		{ "ModuleRelativePath", "MyClientOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyClientOrder_Statics::NewProp_Goals = { "Goals", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyClientOrder, Goals), METADATA_PARAMS(Z_Construct_UClass_UMyClientOrder_Statics::NewProp_Goals_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyClientOrder_Statics::NewProp_Goals_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyClientOrder_Statics::NewProp_Goals_Inner = { "Goals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMyGoal_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyClientOrder_Statics::NewProp_sName_MetaData[] = {
		{ "ModuleRelativePath", "MyClientOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMyClientOrder_Statics::NewProp_sName = { "sName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyClientOrder, sName), METADATA_PARAMS(Z_Construct_UClass_UMyClientOrder_Statics::NewProp_sName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyClientOrder_Statics::NewProp_sName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyClientOrder_Statics::NewProp_Dialogue3_MetaData[] = {
		{ "ModuleRelativePath", "MyClientOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMyClientOrder_Statics::NewProp_Dialogue3 = { "Dialogue3", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyClientOrder, Dialogue3), METADATA_PARAMS(Z_Construct_UClass_UMyClientOrder_Statics::NewProp_Dialogue3_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyClientOrder_Statics::NewProp_Dialogue3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyClientOrder_Statics::NewProp_Dialogue2_MetaData[] = {
		{ "ModuleRelativePath", "MyClientOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMyClientOrder_Statics::NewProp_Dialogue2 = { "Dialogue2", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyClientOrder, Dialogue2), METADATA_PARAMS(Z_Construct_UClass_UMyClientOrder_Statics::NewProp_Dialogue2_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyClientOrder_Statics::NewProp_Dialogue2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyClientOrder_Statics::NewProp_Dialogue1_MetaData[] = {
		{ "ModuleRelativePath", "MyClientOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMyClientOrder_Statics::NewProp_Dialogue1 = { "Dialogue1", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyClientOrder, Dialogue1), METADATA_PARAMS(Z_Construct_UClass_UMyClientOrder_Statics::NewProp_Dialogue1_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyClientOrder_Statics::NewProp_Dialogue1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyClientOrder_Statics::NewProp_sGreeting_MetaData[] = {
		{ "ModuleRelativePath", "MyClientOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMyClientOrder_Statics::NewProp_sGreeting = { "sGreeting", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyClientOrder, sGreeting), METADATA_PARAMS(Z_Construct_UClass_UMyClientOrder_Statics::NewProp_sGreeting_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyClientOrder_Statics::NewProp_sGreeting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyClientOrder_Statics::NewProp_iName_MetaData[] = {
		{ "ModuleRelativePath", "MyClientOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMyClientOrder_Statics::NewProp_iName = { "iName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyClientOrder, iName), METADATA_PARAMS(Z_Construct_UClass_UMyClientOrder_Statics::NewProp_iName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyClientOrder_Statics::NewProp_iName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyClientOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyClientOrder_Statics::NewProp_GameManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyClientOrder_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyClientOrder_Statics::NewProp_sFullDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyClientOrder_Statics::NewProp_Goals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyClientOrder_Statics::NewProp_Goals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyClientOrder_Statics::NewProp_sName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyClientOrder_Statics::NewProp_Dialogue3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyClientOrder_Statics::NewProp_Dialogue2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyClientOrder_Statics::NewProp_Dialogue1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyClientOrder_Statics::NewProp_sGreeting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyClientOrder_Statics::NewProp_iName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyClientOrder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyClientOrder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyClientOrder_Statics::ClassParams = {
		&UMyClientOrder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyClientOrder_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UMyClientOrder_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyClientOrder_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMyClientOrder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyClientOrder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyClientOrder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyClientOrder, 3456331571);
	template<> MOONFLORIST_API UClass* StaticClass<UMyClientOrder>()
	{
		return UMyClientOrder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyClientOrder(Z_Construct_UClass_UMyClientOrder, &UMyClientOrder::StaticClass, TEXT("/Script/MoonFlorist"), TEXT("UMyClientOrder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyClientOrder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
