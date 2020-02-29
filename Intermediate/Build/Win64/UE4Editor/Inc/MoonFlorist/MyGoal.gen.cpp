// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoonFlorist/MyGoal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGoal() {}
// Cross Module References
	MOONFLORIST_API UClass* Z_Construct_UClass_UMyGoal_NoRegister();
	MOONFLORIST_API UClass* Z_Construct_UClass_UMyGoal();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MoonFlorist();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_UMyGoal_GetColour();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_UMyGoal_GetColourID();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_UMyGoal_GetGoal();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_UMyGoal_GetGoalID();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_UMyGoal_init();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_UMyGoal_SetComplete();
// End Cross Module References
	void UMyGoal::StaticRegisterNativesUMyGoal()
	{
		UClass* Class = UMyGoal::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetColour", &UMyGoal::execGetColour },
			{ "GetColourID", &UMyGoal::execGetColourID },
			{ "GetGoal", &UMyGoal::execGetGoal },
			{ "GetGoalID", &UMyGoal::execGetGoalID },
			{ "init", &UMyGoal::execinit },
			{ "SetComplete", &UMyGoal::execSetComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyGoal_GetColour_Statics
	{
		struct MyGoal_eventGetColour_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyGoal_GetColour_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGoal_eventGetColour_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGoal_GetColour_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGoal_GetColour_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGoal_GetColour_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGoal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGoal_GetColour_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGoal, nullptr, "GetColour", sizeof(MyGoal_eventGetColour_Parms), Z_Construct_UFunction_UMyGoal_GetColour_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyGoal_GetColour_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGoal_GetColour_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyGoal_GetColour_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGoal_GetColour()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGoal_GetColour_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyGoal_GetColourID_Statics
	{
		struct MyGoal_eventGetColourID_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMyGoal_GetColourID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGoal_eventGetColourID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGoal_GetColourID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGoal_GetColourID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGoal_GetColourID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGoal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGoal_GetColourID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGoal, nullptr, "GetColourID", sizeof(MyGoal_eventGetColourID_Parms), Z_Construct_UFunction_UMyGoal_GetColourID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyGoal_GetColourID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGoal_GetColourID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyGoal_GetColourID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGoal_GetColourID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGoal_GetColourID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyGoal_GetGoal_Statics
	{
		struct MyGoal_eventGetGoal_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyGoal_GetGoal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGoal_eventGetGoal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGoal_GetGoal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGoal_GetGoal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGoal_GetGoal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGoal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGoal_GetGoal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGoal, nullptr, "GetGoal", sizeof(MyGoal_eventGetGoal_Parms), Z_Construct_UFunction_UMyGoal_GetGoal_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyGoal_GetGoal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGoal_GetGoal_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyGoal_GetGoal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGoal_GetGoal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGoal_GetGoal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyGoal_GetGoalID_Statics
	{
		struct MyGoal_eventGetGoalID_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMyGoal_GetGoalID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGoal_eventGetGoalID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGoal_GetGoalID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGoal_GetGoalID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGoal_GetGoalID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGoal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGoal_GetGoalID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGoal, nullptr, "GetGoalID", sizeof(MyGoal_eventGetGoalID_Parms), Z_Construct_UFunction_UMyGoal_GetGoalID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyGoal_GetGoalID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGoal_GetGoalID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyGoal_GetGoalID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGoal_GetGoalID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGoal_GetGoalID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyGoal_init_Statics
	{
		struct MyGoal_eventinit_Parms
		{
			int32 _iCol;
			int32 iGoal;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iGoal;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__iCol;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMyGoal_init_Statics::NewProp_iGoal = { "iGoal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGoal_eventinit_Parms, iGoal), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMyGoal_init_Statics::NewProp__iCol = { "_iCol", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGoal_eventinit_Parms, _iCol), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGoal_init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGoal_init_Statics::NewProp_iGoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGoal_init_Statics::NewProp__iCol,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGoal_init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGoal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGoal_init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGoal, nullptr, "init", sizeof(MyGoal_eventinit_Parms), Z_Construct_UFunction_UMyGoal_init_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyGoal_init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGoal_init_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyGoal_init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGoal_init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGoal_init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyGoal_SetComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGoal_SetComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGoal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGoal_SetComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGoal, nullptr, "SetComplete", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGoal_SetComplete_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyGoal_SetComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGoal_SetComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGoal_SetComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyGoal_NoRegister()
	{
		return UMyGoal::StaticClass();
	}
	struct Z_Construct_UClass_UMyGoal_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComplete_MetaData[];
#endif
		static void NewProp_bComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sGoal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sGoal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sColour_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sColour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iGoalNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iGoalNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iGoalColour_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iGoalColour;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyGoal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MoonFlorist,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyGoal_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyGoal_GetColour, "GetColour" }, // 1052079009
		{ &Z_Construct_UFunction_UMyGoal_GetColourID, "GetColourID" }, // 1044450390
		{ &Z_Construct_UFunction_UMyGoal_GetGoal, "GetGoal" }, // 3391896561
		{ &Z_Construct_UFunction_UMyGoal_GetGoalID, "GetGoalID" }, // 906164396
		{ &Z_Construct_UFunction_UMyGoal_init, "init" }, // 1221606797
		{ &Z_Construct_UFunction_UMyGoal_SetComplete, "SetComplete" }, // 1030925128
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGoal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyGoal.h" },
		{ "ModuleRelativePath", "MyGoal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGoal_Statics::NewProp_bComplete_MetaData[] = {
		{ "ModuleRelativePath", "MyGoal.h" },
	};
#endif
	void Z_Construct_UClass_UMyGoal_Statics::NewProp_bComplete_SetBit(void* Obj)
	{
		((UMyGoal*)Obj)->bComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGoal_Statics::NewProp_bComplete = { "bComplete", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGoal), &Z_Construct_UClass_UMyGoal_Statics::NewProp_bComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGoal_Statics::NewProp_bComplete_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGoal_Statics::NewProp_bComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGoal_Statics::NewProp_sGoal_MetaData[] = {
		{ "ModuleRelativePath", "MyGoal.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMyGoal_Statics::NewProp_sGoal = { "sGoal", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGoal, sGoal), METADATA_PARAMS(Z_Construct_UClass_UMyGoal_Statics::NewProp_sGoal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGoal_Statics::NewProp_sGoal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGoal_Statics::NewProp_sColour_MetaData[] = {
		{ "ModuleRelativePath", "MyGoal.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMyGoal_Statics::NewProp_sColour = { "sColour", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGoal, sColour), METADATA_PARAMS(Z_Construct_UClass_UMyGoal_Statics::NewProp_sColour_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGoal_Statics::NewProp_sColour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGoal_Statics::NewProp_iGoalNumber_MetaData[] = {
		{ "ModuleRelativePath", "MyGoal.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMyGoal_Statics::NewProp_iGoalNumber = { "iGoalNumber", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGoal, iGoalNumber), METADATA_PARAMS(Z_Construct_UClass_UMyGoal_Statics::NewProp_iGoalNumber_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGoal_Statics::NewProp_iGoalNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGoal_Statics::NewProp_iGoalColour_MetaData[] = {
		{ "ModuleRelativePath", "MyGoal.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMyGoal_Statics::NewProp_iGoalColour = { "iGoalColour", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGoal, iGoalColour), METADATA_PARAMS(Z_Construct_UClass_UMyGoal_Statics::NewProp_iGoalColour_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGoal_Statics::NewProp_iGoalColour_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyGoal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGoal_Statics::NewProp_bComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGoal_Statics::NewProp_sGoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGoal_Statics::NewProp_sColour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGoal_Statics::NewProp_iGoalNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGoal_Statics::NewProp_iGoalColour,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyGoal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGoal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyGoal_Statics::ClassParams = {
		&UMyGoal::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyGoal_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UMyGoal_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyGoal_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMyGoal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyGoal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyGoal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyGoal, 978538329);
	template<> MOONFLORIST_API UClass* StaticClass<UMyGoal>()
	{
		return UMyGoal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyGoal(Z_Construct_UClass_UMyGoal, &UMyGoal::StaticClass, TEXT("/Script/MoonFlorist"), TEXT("UMyGoal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGoal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
