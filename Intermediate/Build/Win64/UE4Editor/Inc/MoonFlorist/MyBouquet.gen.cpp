// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoonFlorist/MyBouquet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBouquet() {}
// Cross Module References
	MOONFLORIST_API UClass* Z_Construct_UClass_UMyBouquet_NoRegister();
	MOONFLORIST_API UClass* Z_Construct_UClass_UMyBouquet();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MoonFlorist();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_UMyBouquet_AddToRow();
	MOONFLORIST_API UClass* Z_Construct_UClass_UMyFlower_NoRegister();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_UMyBouquet_BaseColourCheck();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_UMyBouquet_CheckFull();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_UMyBouquet_ClearBouquet();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_UMyBouquet_ComColourCheck();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_UMyBouquet_GetCurrOrder();
	MOONFLORIST_API UClass* Z_Construct_UClass_UMyClientOrder_NoRegister();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_UMyBouquet_GetRow();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_UMyBouquet_GetWorth();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_UMyBouquet_GradeBouquet();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_UMyBouquet_GradeBouquetWithoutMoney();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_UMyBouquet_RemoveFromRow();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_UMyBouquet_SetCurrOrder();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_UMyBouquet_SpawnFlower();
	MOONFLORIST_API UClass* Z_Construct_UClass_UMyGoal_NoRegister();
// End Cross Module References
	void UMyBouquet::StaticRegisterNativesUMyBouquet()
	{
		UClass* Class = UMyBouquet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToRow", &UMyBouquet::execAddToRow },
			{ "BaseColourCheck", &UMyBouquet::execBaseColourCheck },
			{ "CheckFull", &UMyBouquet::execCheckFull },
			{ "ClearBouquet", &UMyBouquet::execClearBouquet },
			{ "ComColourCheck", &UMyBouquet::execComColourCheck },
			{ "GetCurrOrder", &UMyBouquet::execGetCurrOrder },
			{ "GetRow", &UMyBouquet::execGetRow },
			{ "GetWorth", &UMyBouquet::execGetWorth },
			{ "GradeBouquet", &UMyBouquet::execGradeBouquet },
			{ "GradeBouquetWithoutMoney", &UMyBouquet::execGradeBouquetWithoutMoney },
			{ "RemoveFromRow", &UMyBouquet::execRemoveFromRow },
			{ "SetCurrOrder", &UMyBouquet::execSetCurrOrder },
			{ "SpawnFlower", &UMyBouquet::execSpawnFlower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyBouquet_AddToRow_Statics
	{
		struct MyBouquet_eventAddToRow_Parms
		{
			int32 _iRow;
			UMyFlower* _Flower;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Flower;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__iRow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyBouquet_AddToRow_Statics::NewProp__Flower = { "_Flower", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBouquet_eventAddToRow_Parms, _Flower), Z_Construct_UClass_UMyFlower_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMyBouquet_AddToRow_Statics::NewProp__iRow = { "_iRow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBouquet_eventAddToRow_Parms, _iRow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBouquet_AddToRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBouquet_AddToRow_Statics::NewProp__Flower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBouquet_AddToRow_Statics::NewProp__iRow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBouquet_AddToRow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyBouquet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBouquet_AddToRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBouquet, nullptr, "AddToRow", sizeof(MyBouquet_eventAddToRow_Parms), Z_Construct_UFunction_UMyBouquet_AddToRow_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyBouquet_AddToRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBouquet_AddToRow_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyBouquet_AddToRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBouquet_AddToRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBouquet_AddToRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBouquet_BaseColourCheck_Statics
	{
		struct MyBouquet_eventBaseColourCheck_Parms
		{
			int32 _iCol;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__iCol;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMyBouquet_BaseColourCheck_Statics::NewProp__iCol = { "_iCol", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBouquet_eventBaseColourCheck_Parms, _iCol), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBouquet_BaseColourCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBouquet_BaseColourCheck_Statics::NewProp__iCol,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBouquet_BaseColourCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyBouquet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBouquet_BaseColourCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBouquet, nullptr, "BaseColourCheck", sizeof(MyBouquet_eventBaseColourCheck_Parms), Z_Construct_UFunction_UMyBouquet_BaseColourCheck_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyBouquet_BaseColourCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBouquet_BaseColourCheck_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyBouquet_BaseColourCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBouquet_BaseColourCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBouquet_BaseColourCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBouquet_CheckFull_Statics
	{
		struct MyBouquet_eventCheckFull_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMyBouquet_CheckFull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyBouquet_eventCheckFull_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyBouquet_CheckFull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyBouquet_eventCheckFull_Parms), &Z_Construct_UFunction_UMyBouquet_CheckFull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBouquet_CheckFull_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBouquet_CheckFull_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBouquet_CheckFull_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyBouquet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBouquet_CheckFull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBouquet, nullptr, "CheckFull", sizeof(MyBouquet_eventCheckFull_Parms), Z_Construct_UFunction_UMyBouquet_CheckFull_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyBouquet_CheckFull_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBouquet_CheckFull_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyBouquet_CheckFull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBouquet_CheckFull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBouquet_CheckFull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBouquet_ClearBouquet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBouquet_ClearBouquet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyBouquet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBouquet_ClearBouquet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBouquet, nullptr, "ClearBouquet", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBouquet_ClearBouquet_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyBouquet_ClearBouquet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBouquet_ClearBouquet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBouquet_ClearBouquet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBouquet_ComColourCheck_Statics
	{
		struct MyBouquet_eventComColourCheck_Parms
		{
			int32 _iCol;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__iCol;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMyBouquet_ComColourCheck_Statics::NewProp__iCol = { "_iCol", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBouquet_eventComColourCheck_Parms, _iCol), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBouquet_ComColourCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBouquet_ComColourCheck_Statics::NewProp__iCol,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBouquet_ComColourCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyBouquet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBouquet_ComColourCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBouquet, nullptr, "ComColourCheck", sizeof(MyBouquet_eventComColourCheck_Parms), Z_Construct_UFunction_UMyBouquet_ComColourCheck_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyBouquet_ComColourCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBouquet_ComColourCheck_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyBouquet_ComColourCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBouquet_ComColourCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBouquet_ComColourCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBouquet_GetCurrOrder_Statics
	{
		struct MyBouquet_eventGetCurrOrder_Parms
		{
			UMyClientOrder* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyBouquet_GetCurrOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBouquet_eventGetCurrOrder_Parms, ReturnValue), Z_Construct_UClass_UMyClientOrder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBouquet_GetCurrOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBouquet_GetCurrOrder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBouquet_GetCurrOrder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyBouquet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBouquet_GetCurrOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBouquet, nullptr, "GetCurrOrder", sizeof(MyBouquet_eventGetCurrOrder_Parms), Z_Construct_UFunction_UMyBouquet_GetCurrOrder_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyBouquet_GetCurrOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBouquet_GetCurrOrder_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyBouquet_GetCurrOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBouquet_GetCurrOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBouquet_GetCurrOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBouquet_GetRow_Statics
	{
		struct MyBouquet_eventGetRow_Parms
		{
			int32 _iRow;
			TArray<UMyFlower*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__iRow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMyBouquet_GetRow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBouquet_eventGetRow_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyBouquet_GetRow_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMyFlower_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMyBouquet_GetRow_Statics::NewProp__iRow = { "_iRow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBouquet_eventGetRow_Parms, _iRow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBouquet_GetRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBouquet_GetRow_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBouquet_GetRow_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBouquet_GetRow_Statics::NewProp__iRow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBouquet_GetRow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyBouquet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBouquet_GetRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBouquet, nullptr, "GetRow", sizeof(MyBouquet_eventGetRow_Parms), Z_Construct_UFunction_UMyBouquet_GetRow_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyBouquet_GetRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBouquet_GetRow_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyBouquet_GetRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBouquet_GetRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBouquet_GetRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBouquet_GetWorth_Statics
	{
		struct MyBouquet_eventGetWorth_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMyBouquet_GetWorth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBouquet_eventGetWorth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBouquet_GetWorth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBouquet_GetWorth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBouquet_GetWorth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyBouquet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBouquet_GetWorth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBouquet, nullptr, "GetWorth", sizeof(MyBouquet_eventGetWorth_Parms), Z_Construct_UFunction_UMyBouquet_GetWorth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyBouquet_GetWorth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBouquet_GetWorth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyBouquet_GetWorth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBouquet_GetWorth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBouquet_GetWorth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBouquet_GradeBouquet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBouquet_GradeBouquet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyBouquet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBouquet_GradeBouquet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBouquet, nullptr, "GradeBouquet", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBouquet_GradeBouquet_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyBouquet_GradeBouquet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBouquet_GradeBouquet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBouquet_GradeBouquet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBouquet_GradeBouquetWithoutMoney_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBouquet_GradeBouquetWithoutMoney_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyBouquet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBouquet_GradeBouquetWithoutMoney_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBouquet, nullptr, "GradeBouquetWithoutMoney", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBouquet_GradeBouquetWithoutMoney_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyBouquet_GradeBouquetWithoutMoney_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBouquet_GradeBouquetWithoutMoney()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBouquet_GradeBouquetWithoutMoney_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBouquet_RemoveFromRow_Statics
	{
		struct MyBouquet_eventRemoveFromRow_Parms
		{
			int32 _iRow;
			UMyFlower* _Flower;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Flower;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__iRow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyBouquet_RemoveFromRow_Statics::NewProp__Flower = { "_Flower", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBouquet_eventRemoveFromRow_Parms, _Flower), Z_Construct_UClass_UMyFlower_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMyBouquet_RemoveFromRow_Statics::NewProp__iRow = { "_iRow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBouquet_eventRemoveFromRow_Parms, _iRow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBouquet_RemoveFromRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBouquet_RemoveFromRow_Statics::NewProp__Flower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBouquet_RemoveFromRow_Statics::NewProp__iRow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBouquet_RemoveFromRow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyBouquet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBouquet_RemoveFromRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBouquet, nullptr, "RemoveFromRow", sizeof(MyBouquet_eventRemoveFromRow_Parms), Z_Construct_UFunction_UMyBouquet_RemoveFromRow_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyBouquet_RemoveFromRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBouquet_RemoveFromRow_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyBouquet_RemoveFromRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBouquet_RemoveFromRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBouquet_RemoveFromRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBouquet_SetCurrOrder_Statics
	{
		struct MyBouquet_eventSetCurrOrder_Parms
		{
			UMyClientOrder* _Order;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Order;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyBouquet_SetCurrOrder_Statics::NewProp__Order = { "_Order", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBouquet_eventSetCurrOrder_Parms, _Order), Z_Construct_UClass_UMyClientOrder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBouquet_SetCurrOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBouquet_SetCurrOrder_Statics::NewProp__Order,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBouquet_SetCurrOrder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyBouquet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBouquet_SetCurrOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBouquet, nullptr, "SetCurrOrder", sizeof(MyBouquet_eventSetCurrOrder_Parms), Z_Construct_UFunction_UMyBouquet_SetCurrOrder_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyBouquet_SetCurrOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBouquet_SetCurrOrder_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyBouquet_SetCurrOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBouquet_SetCurrOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBouquet_SetCurrOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBouquet_SpawnFlower_Statics
	{
		struct MyBouquet_eventSpawnFlower_Parms
		{
			int32 _iType;
			UMyFlower* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__iType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyBouquet_SpawnFlower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBouquet_eventSpawnFlower_Parms, ReturnValue), Z_Construct_UClass_UMyFlower_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMyBouquet_SpawnFlower_Statics::NewProp__iType = { "_iType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBouquet_eventSpawnFlower_Parms, _iType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBouquet_SpawnFlower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBouquet_SpawnFlower_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBouquet_SpawnFlower_Statics::NewProp__iType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBouquet_SpawnFlower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyBouquet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBouquet_SpawnFlower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBouquet, nullptr, "SpawnFlower", sizeof(MyBouquet_eventSpawnFlower_Parms), Z_Construct_UFunction_UMyBouquet_SpawnFlower_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyBouquet_SpawnFlower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBouquet_SpawnFlower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyBouquet_SpawnFlower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBouquet_SpawnFlower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBouquet_SpawnFlower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyBouquet_NoRegister()
	{
		return UMyBouquet::StaticClass();
	}
	struct Z_Construct_UClass_UMyBouquet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GoalFailure;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GoalFailure_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GoalSuccess;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GoalSuccess_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iMoney_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iMoney;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Row3_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Row3;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Row3_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Row2_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Row2;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Row2_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Row1_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Row1;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Row1_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Order_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Order;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyBouquet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MoonFlorist,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyBouquet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyBouquet_AddToRow, "AddToRow" }, // 79724939
		{ &Z_Construct_UFunction_UMyBouquet_BaseColourCheck, "BaseColourCheck" }, // 1396887079
		{ &Z_Construct_UFunction_UMyBouquet_CheckFull, "CheckFull" }, // 769075557
		{ &Z_Construct_UFunction_UMyBouquet_ClearBouquet, "ClearBouquet" }, // 1598012307
		{ &Z_Construct_UFunction_UMyBouquet_ComColourCheck, "ComColourCheck" }, // 1340594827
		{ &Z_Construct_UFunction_UMyBouquet_GetCurrOrder, "GetCurrOrder" }, // 3007406876
		{ &Z_Construct_UFunction_UMyBouquet_GetRow, "GetRow" }, // 864234289
		{ &Z_Construct_UFunction_UMyBouquet_GetWorth, "GetWorth" }, // 3849645724
		{ &Z_Construct_UFunction_UMyBouquet_GradeBouquet, "GradeBouquet" }, // 4154969269
		{ &Z_Construct_UFunction_UMyBouquet_GradeBouquetWithoutMoney, "GradeBouquetWithoutMoney" }, // 1680780411
		{ &Z_Construct_UFunction_UMyBouquet_RemoveFromRow, "RemoveFromRow" }, // 719408265
		{ &Z_Construct_UFunction_UMyBouquet_SetCurrOrder, "SetCurrOrder" }, // 62313554
		{ &Z_Construct_UFunction_UMyBouquet_SpawnFlower, "SpawnFlower" }, // 3655726025
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBouquet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyBouquet.h" },
		{ "ModuleRelativePath", "MyBouquet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBouquet_Statics::NewProp_GoalFailure_MetaData[] = {
		{ "ModuleRelativePath", "MyBouquet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyBouquet_Statics::NewProp_GoalFailure = { "GoalFailure", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyBouquet, GoalFailure), METADATA_PARAMS(Z_Construct_UClass_UMyBouquet_Statics::NewProp_GoalFailure_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyBouquet_Statics::NewProp_GoalFailure_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyBouquet_Statics::NewProp_GoalFailure_Inner = { "GoalFailure", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMyGoal_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBouquet_Statics::NewProp_GoalSuccess_MetaData[] = {
		{ "ModuleRelativePath", "MyBouquet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyBouquet_Statics::NewProp_GoalSuccess = { "GoalSuccess", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyBouquet, GoalSuccess), METADATA_PARAMS(Z_Construct_UClass_UMyBouquet_Statics::NewProp_GoalSuccess_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyBouquet_Statics::NewProp_GoalSuccess_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyBouquet_Statics::NewProp_GoalSuccess_Inner = { "GoalSuccess", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMyGoal_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBouquet_Statics::NewProp_iMoney_MetaData[] = {
		{ "ModuleRelativePath", "MyBouquet.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMyBouquet_Statics::NewProp_iMoney = { "iMoney", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyBouquet, iMoney), METADATA_PARAMS(Z_Construct_UClass_UMyBouquet_Statics::NewProp_iMoney_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyBouquet_Statics::NewProp_iMoney_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBouquet_Statics::NewProp_iScore_MetaData[] = {
		{ "ModuleRelativePath", "MyBouquet.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMyBouquet_Statics::NewProp_iScore = { "iScore", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyBouquet, iScore), METADATA_PARAMS(Z_Construct_UClass_UMyBouquet_Statics::NewProp_iScore_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyBouquet_Statics::NewProp_iScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBouquet_Statics::NewProp_Row3_MetaData[] = {
		{ "ModuleRelativePath", "MyBouquet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyBouquet_Statics::NewProp_Row3 = { "Row3", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyBouquet, Row3), METADATA_PARAMS(Z_Construct_UClass_UMyBouquet_Statics::NewProp_Row3_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyBouquet_Statics::NewProp_Row3_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyBouquet_Statics::NewProp_Row3_Inner = { "Row3", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMyFlower_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBouquet_Statics::NewProp_Row2_MetaData[] = {
		{ "ModuleRelativePath", "MyBouquet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyBouquet_Statics::NewProp_Row2 = { "Row2", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyBouquet, Row2), METADATA_PARAMS(Z_Construct_UClass_UMyBouquet_Statics::NewProp_Row2_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyBouquet_Statics::NewProp_Row2_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyBouquet_Statics::NewProp_Row2_Inner = { "Row2", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMyFlower_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBouquet_Statics::NewProp_Row1_MetaData[] = {
		{ "ModuleRelativePath", "MyBouquet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyBouquet_Statics::NewProp_Row1 = { "Row1", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyBouquet, Row1), METADATA_PARAMS(Z_Construct_UClass_UMyBouquet_Statics::NewProp_Row1_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyBouquet_Statics::NewProp_Row1_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyBouquet_Statics::NewProp_Row1_Inner = { "Row1", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMyFlower_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBouquet_Statics::NewProp_Order_MetaData[] = {
		{ "ModuleRelativePath", "MyBouquet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyBouquet_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyBouquet, Order), Z_Construct_UClass_UMyClientOrder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyBouquet_Statics::NewProp_Order_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyBouquet_Statics::NewProp_Order_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyBouquet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBouquet_Statics::NewProp_GoalFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBouquet_Statics::NewProp_GoalFailure_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBouquet_Statics::NewProp_GoalSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBouquet_Statics::NewProp_GoalSuccess_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBouquet_Statics::NewProp_iMoney,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBouquet_Statics::NewProp_iScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBouquet_Statics::NewProp_Row3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBouquet_Statics::NewProp_Row3_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBouquet_Statics::NewProp_Row2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBouquet_Statics::NewProp_Row2_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBouquet_Statics::NewProp_Row1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBouquet_Statics::NewProp_Row1_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBouquet_Statics::NewProp_Order,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyBouquet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBouquet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyBouquet_Statics::ClassParams = {
		&UMyBouquet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyBouquet_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UMyBouquet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyBouquet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMyBouquet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyBouquet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyBouquet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyBouquet, 987386449);
	template<> MOONFLORIST_API UClass* StaticClass<UMyBouquet>()
	{
		return UMyBouquet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyBouquet(Z_Construct_UClass_UMyBouquet, &UMyBouquet::StaticClass, TEXT("/Script/MoonFlorist"), TEXT("UMyBouquet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBouquet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
