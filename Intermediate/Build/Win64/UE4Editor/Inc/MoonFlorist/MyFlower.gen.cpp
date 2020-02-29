// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoonFlorist/MyFlower.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyFlower() {}
// Cross Module References
	MOONFLORIST_API UClass* Z_Construct_UClass_UMyFlower_NoRegister();
	MOONFLORIST_API UClass* Z_Construct_UClass_UMyFlower();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MoonFlorist();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_UMyFlower_GetColourScore();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_UMyFlower_GetFlowerID();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_UMyFlower_GetFlowerName();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_UMyFlower_init();
// End Cross Module References
	void UMyFlower::StaticRegisterNativesUMyFlower()
	{
		UClass* Class = UMyFlower::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetColourScore", &UMyFlower::execGetColourScore },
			{ "GetFlowerID", &UMyFlower::execGetFlowerID },
			{ "GetFlowerName", &UMyFlower::execGetFlowerName },
			{ "init", &UMyFlower::execinit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyFlower_GetColourScore_Statics
	{
		struct MyFlower_eventGetColourScore_Parms
		{
			int32 _iCol;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__iCol;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMyFlower_GetColourScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyFlower_eventGetColourScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMyFlower_GetColourScore_Statics::NewProp__iCol = { "_iCol", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyFlower_eventGetColourScore_Parms, _iCol), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyFlower_GetColourScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFlower_GetColourScore_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFlower_GetColourScore_Statics::NewProp__iCol,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyFlower_GetColourScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyFlower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyFlower_GetColourScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyFlower, nullptr, "GetColourScore", sizeof(MyFlower_eventGetColourScore_Parms), Z_Construct_UFunction_UMyFlower_GetColourScore_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyFlower_GetColourScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyFlower_GetColourScore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyFlower_GetColourScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyFlower_GetColourScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyFlower_GetColourScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyFlower_GetFlowerID_Statics
	{
		struct MyFlower_eventGetFlowerID_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMyFlower_GetFlowerID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyFlower_eventGetFlowerID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyFlower_GetFlowerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFlower_GetFlowerID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyFlower_GetFlowerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyFlower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyFlower_GetFlowerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyFlower, nullptr, "GetFlowerID", sizeof(MyFlower_eventGetFlowerID_Parms), Z_Construct_UFunction_UMyFlower_GetFlowerID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyFlower_GetFlowerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyFlower_GetFlowerID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyFlower_GetFlowerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyFlower_GetFlowerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyFlower_GetFlowerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyFlower_GetFlowerName_Statics
	{
		struct MyFlower_eventGetFlowerName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyFlower_GetFlowerName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyFlower_eventGetFlowerName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyFlower_GetFlowerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFlower_GetFlowerName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyFlower_GetFlowerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyFlower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyFlower_GetFlowerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyFlower, nullptr, "GetFlowerName", sizeof(MyFlower_eventGetFlowerName_Parms), Z_Construct_UFunction_UMyFlower_GetFlowerName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyFlower_GetFlowerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyFlower_GetFlowerName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyFlower_GetFlowerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyFlower_GetFlowerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyFlower_GetFlowerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyFlower_init_Statics
	{
		struct MyFlower_eventinit_Parms
		{
			int32 _iType;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__iType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMyFlower_init_Statics::NewProp__iType = { "_iType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyFlower_eventinit_Parms, _iType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyFlower_init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFlower_init_Statics::NewProp__iType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyFlower_init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyFlower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyFlower_init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyFlower, nullptr, "init", sizeof(MyFlower_eventinit_Parms), Z_Construct_UFunction_UMyFlower_init_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyFlower_init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyFlower_init_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyFlower_init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyFlower_init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyFlower_init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyFlower_NoRegister()
	{
		return UMyFlower::StaticClass();
	}
	struct Z_Construct_UClass_UMyFlower_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iOrange_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iOrange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iGreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iGreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iPurple_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iPurple;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iYellow_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iYellow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iBlue_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iBlue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iRed_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iRed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sColour_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sColour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iType_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyFlower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MoonFlorist,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyFlower_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyFlower_GetColourScore, "GetColourScore" }, // 351202453
		{ &Z_Construct_UFunction_UMyFlower_GetFlowerID, "GetFlowerID" }, // 275307726
		{ &Z_Construct_UFunction_UMyFlower_GetFlowerName, "GetFlowerName" }, // 4290337540
		{ &Z_Construct_UFunction_UMyFlower_init, "init" }, // 1484990413
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyFlower_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyFlower.h" },
		{ "ModuleRelativePath", "MyFlower.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyFlower_Statics::NewProp_iOrange_MetaData[] = {
		{ "ModuleRelativePath", "MyFlower.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMyFlower_Statics::NewProp_iOrange = { "iOrange", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyFlower, iOrange), METADATA_PARAMS(Z_Construct_UClass_UMyFlower_Statics::NewProp_iOrange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyFlower_Statics::NewProp_iOrange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyFlower_Statics::NewProp_iGreen_MetaData[] = {
		{ "ModuleRelativePath", "MyFlower.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMyFlower_Statics::NewProp_iGreen = { "iGreen", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyFlower, iGreen), METADATA_PARAMS(Z_Construct_UClass_UMyFlower_Statics::NewProp_iGreen_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyFlower_Statics::NewProp_iGreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyFlower_Statics::NewProp_iPurple_MetaData[] = {
		{ "ModuleRelativePath", "MyFlower.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMyFlower_Statics::NewProp_iPurple = { "iPurple", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyFlower, iPurple), METADATA_PARAMS(Z_Construct_UClass_UMyFlower_Statics::NewProp_iPurple_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyFlower_Statics::NewProp_iPurple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyFlower_Statics::NewProp_iYellow_MetaData[] = {
		{ "ModuleRelativePath", "MyFlower.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMyFlower_Statics::NewProp_iYellow = { "iYellow", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyFlower, iYellow), METADATA_PARAMS(Z_Construct_UClass_UMyFlower_Statics::NewProp_iYellow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyFlower_Statics::NewProp_iYellow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyFlower_Statics::NewProp_iBlue_MetaData[] = {
		{ "ModuleRelativePath", "MyFlower.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMyFlower_Statics::NewProp_iBlue = { "iBlue", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyFlower, iBlue), METADATA_PARAMS(Z_Construct_UClass_UMyFlower_Statics::NewProp_iBlue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyFlower_Statics::NewProp_iBlue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyFlower_Statics::NewProp_iRed_MetaData[] = {
		{ "ModuleRelativePath", "MyFlower.h" },
		{ "ToolTip", "Score Values" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMyFlower_Statics::NewProp_iRed = { "iRed", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyFlower, iRed), METADATA_PARAMS(Z_Construct_UClass_UMyFlower_Statics::NewProp_iRed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyFlower_Statics::NewProp_iRed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyFlower_Statics::NewProp_sColour_MetaData[] = {
		{ "ModuleRelativePath", "MyFlower.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMyFlower_Statics::NewProp_sColour = { "sColour", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyFlower, sColour), METADATA_PARAMS(Z_Construct_UClass_UMyFlower_Statics::NewProp_sColour_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyFlower_Statics::NewProp_sColour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyFlower_Statics::NewProp_iType_MetaData[] = {
		{ "ModuleRelativePath", "MyFlower.h" },
		{ "ToolTip", "type of flower" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMyFlower_Statics::NewProp_iType = { "iType", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyFlower, iType), METADATA_PARAMS(Z_Construct_UClass_UMyFlower_Statics::NewProp_iType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyFlower_Statics::NewProp_iType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyFlower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyFlower_Statics::NewProp_iOrange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyFlower_Statics::NewProp_iGreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyFlower_Statics::NewProp_iPurple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyFlower_Statics::NewProp_iYellow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyFlower_Statics::NewProp_iBlue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyFlower_Statics::NewProp_iRed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyFlower_Statics::NewProp_sColour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyFlower_Statics::NewProp_iType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyFlower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyFlower>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyFlower_Statics::ClassParams = {
		&UMyFlower::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyFlower_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UMyFlower_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyFlower_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMyFlower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyFlower()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyFlower_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyFlower, 359277292);
	template<> MOONFLORIST_API UClass* StaticClass<UMyFlower>()
	{
		return UMyFlower::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyFlower(Z_Construct_UClass_UMyFlower, &UMyFlower::StaticClass, TEXT("/Script/MoonFlorist"), TEXT("UMyFlower"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyFlower);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
