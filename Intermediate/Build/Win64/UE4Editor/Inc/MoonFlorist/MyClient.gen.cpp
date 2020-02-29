// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoonFlorist/MyClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyClient() {}
// Cross Module References
	MOONFLORIST_API UClass* Z_Construct_UClass_AMyClient_NoRegister();
	MOONFLORIST_API UClass* Z_Construct_UClass_AMyClient();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MoonFlorist();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyClient_GetCurrentOrder();
	MOONFLORIST_API UClass* Z_Construct_UClass_UMyClientOrder_NoRegister();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyClient_GetPreviousOrder();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyClient_Init();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyClient_NewOrder();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyClient_SetFullDescription();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyClient_UpdateClientDescriptions();
// End Cross Module References
	void AMyClient::StaticRegisterNativesAMyClient()
	{
		UClass* Class = AMyClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentOrder", &AMyClient::execGetCurrentOrder },
			{ "GetPreviousOrder", &AMyClient::execGetPreviousOrder },
			{ "Init", &AMyClient::execInit },
			{ "NewOrder", &AMyClient::execNewOrder },
			{ "SetFullDescription", &AMyClient::execSetFullDescription },
			{ "UpdateClientDescriptions", &AMyClient::execUpdateClientDescriptions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyClient_GetCurrentOrder_Statics
	{
		struct MyClient_eventGetCurrentOrder_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyClient_GetCurrentOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyClient_eventGetCurrentOrder_Parms, ReturnValue), Z_Construct_UClass_UMyClientOrder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyClient_GetCurrentOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyClient_GetCurrentOrder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyClient_GetCurrentOrder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyClient_GetCurrentOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyClient, nullptr, "GetCurrentOrder", sizeof(MyClient_eventGetCurrentOrder_Parms), Z_Construct_UFunction_AMyClient_GetCurrentOrder_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyClient_GetCurrentOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyClient_GetCurrentOrder_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyClient_GetCurrentOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyClient_GetCurrentOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyClient_GetCurrentOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyClient_GetPreviousOrder_Statics
	{
		struct MyClient_eventGetPreviousOrder_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyClient_GetPreviousOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyClient_eventGetPreviousOrder_Parms, ReturnValue), Z_Construct_UClass_UMyClientOrder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyClient_GetPreviousOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyClient_GetPreviousOrder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyClient_GetPreviousOrder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyClient_GetPreviousOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyClient, nullptr, "GetPreviousOrder", sizeof(MyClient_eventGetPreviousOrder_Parms), Z_Construct_UFunction_AMyClient_GetPreviousOrder_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyClient_GetPreviousOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyClient_GetPreviousOrder_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyClient_GetPreviousOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyClient_GetPreviousOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyClient_GetPreviousOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyClient_Init_Statics
	{
		struct MyClient_eventInit_Parms
		{
			int32 _iName;
			int32 _iNature;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__iNature;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__iName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyClient_Init_Statics::NewProp__iNature = { "_iNature", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyClient_eventInit_Parms, _iNature), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyClient_Init_Statics::NewProp__iName = { "_iName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyClient_eventInit_Parms, _iName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyClient_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyClient_Init_Statics::NewProp__iNature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyClient_Init_Statics::NewProp__iName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyClient_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyClient_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyClient, nullptr, "Init", sizeof(MyClient_eventInit_Parms), Z_Construct_UFunction_AMyClient_Init_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyClient_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyClient_Init_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyClient_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyClient_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyClient_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyClient_NewOrder_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyClient_NewOrder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyClient_NewOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyClient, nullptr, "NewOrder", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyClient_NewOrder_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyClient_NewOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyClient_NewOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyClient_NewOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyClient_SetFullDescription_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyClient_SetFullDescription_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyClient_SetFullDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyClient, nullptr, "SetFullDescription", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyClient_SetFullDescription_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyClient_SetFullDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyClient_SetFullDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyClient_SetFullDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyClient_UpdateClientDescriptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyClient_UpdateClientDescriptions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyClient_UpdateClientDescriptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyClient, nullptr, "UpdateClientDescriptions", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyClient_UpdateClientDescriptions_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyClient_UpdateClientDescriptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyClient_UpdateClientDescriptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyClient_UpdateClientDescriptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyClient_NoRegister()
	{
		return AMyClient::StaticClass();
	}
	struct Z_Construct_UClass_AMyClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sFullDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sFullDescription;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iNature_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iNature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iName_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MoonFlorist,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyClient_GetCurrentOrder, "GetCurrentOrder" }, // 1596257593
		{ &Z_Construct_UFunction_AMyClient_GetPreviousOrder, "GetPreviousOrder" }, // 4083161243
		{ &Z_Construct_UFunction_AMyClient_Init, "Init" }, // 610415358
		{ &Z_Construct_UFunction_AMyClient_NewOrder, "NewOrder" }, // 2144082954
		{ &Z_Construct_UFunction_AMyClient_SetFullDescription, "SetFullDescription" }, // 1372316151
		{ &Z_Construct_UFunction_AMyClient_UpdateClientDescriptions, "UpdateClientDescriptions" }, // 3619228163
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyClient_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyClient.h" },
		{ "ModuleRelativePath", "MyClient.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyClient_Statics::NewProp_LastOrder_MetaData[] = {
		{ "ModuleRelativePath", "MyClient.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyClient_Statics::NewProp_LastOrder = { "LastOrder", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyClient, LastOrder), Z_Construct_UClass_UMyClientOrder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyClient_Statics::NewProp_LastOrder_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyClient_Statics::NewProp_LastOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyClient_Statics::NewProp_CurrentOrder_MetaData[] = {
		{ "ModuleRelativePath", "MyClient.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyClient_Statics::NewProp_CurrentOrder = { "CurrentOrder", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyClient, CurrentOrder), Z_Construct_UClass_UMyClientOrder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyClient_Statics::NewProp_CurrentOrder_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyClient_Statics::NewProp_CurrentOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyClient_Statics::NewProp_sFullDescription_MetaData[] = {
		{ "ModuleRelativePath", "MyClient.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMyClient_Statics::NewProp_sFullDescription = { "sFullDescription", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyClient, sFullDescription), METADATA_PARAMS(Z_Construct_UClass_AMyClient_Statics::NewProp_sFullDescription_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyClient_Statics::NewProp_sFullDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyClient_Statics::NewProp_Dialogue3_MetaData[] = {
		{ "ModuleRelativePath", "MyClient.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMyClient_Statics::NewProp_Dialogue3 = { "Dialogue3", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyClient, Dialogue3), METADATA_PARAMS(Z_Construct_UClass_AMyClient_Statics::NewProp_Dialogue3_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyClient_Statics::NewProp_Dialogue3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyClient_Statics::NewProp_Dialogue2_MetaData[] = {
		{ "ModuleRelativePath", "MyClient.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMyClient_Statics::NewProp_Dialogue2 = { "Dialogue2", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyClient, Dialogue2), METADATA_PARAMS(Z_Construct_UClass_AMyClient_Statics::NewProp_Dialogue2_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyClient_Statics::NewProp_Dialogue2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyClient_Statics::NewProp_Dialogue1_MetaData[] = {
		{ "ModuleRelativePath", "MyClient.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMyClient_Statics::NewProp_Dialogue1 = { "Dialogue1", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyClient, Dialogue1), METADATA_PARAMS(Z_Construct_UClass_AMyClient_Statics::NewProp_Dialogue1_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyClient_Statics::NewProp_Dialogue1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyClient_Statics::NewProp_sGreeting_MetaData[] = {
		{ "ModuleRelativePath", "MyClient.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMyClient_Statics::NewProp_sGreeting = { "sGreeting", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyClient, sGreeting), METADATA_PARAMS(Z_Construct_UClass_AMyClient_Statics::NewProp_sGreeting_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyClient_Statics::NewProp_sGreeting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyClient_Statics::NewProp_sName_MetaData[] = {
		{ "ModuleRelativePath", "MyClient.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMyClient_Statics::NewProp_sName = { "sName", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyClient, sName), METADATA_PARAMS(Z_Construct_UClass_AMyClient_Statics::NewProp_sName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyClient_Statics::NewProp_sName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyClient_Statics::NewProp_sTitle_MetaData[] = {
		{ "ModuleRelativePath", "MyClient.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMyClient_Statics::NewProp_sTitle = { "sTitle", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyClient, sTitle), METADATA_PARAMS(Z_Construct_UClass_AMyClient_Statics::NewProp_sTitle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyClient_Statics::NewProp_sTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyClient_Statics::NewProp_iNature_MetaData[] = {
		{ "ModuleRelativePath", "MyClient.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMyClient_Statics::NewProp_iNature = { "iNature", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyClient, iNature), METADATA_PARAMS(Z_Construct_UClass_AMyClient_Statics::NewProp_iNature_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyClient_Statics::NewProp_iNature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyClient_Statics::NewProp_iName_MetaData[] = {
		{ "ModuleRelativePath", "MyClient.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMyClient_Statics::NewProp_iName = { "iName", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyClient, iName), METADATA_PARAMS(Z_Construct_UClass_AMyClient_Statics::NewProp_iName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyClient_Statics::NewProp_iName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyClient_Statics::NewProp_LastOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyClient_Statics::NewProp_CurrentOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyClient_Statics::NewProp_sFullDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyClient_Statics::NewProp_Dialogue3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyClient_Statics::NewProp_Dialogue2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyClient_Statics::NewProp_Dialogue1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyClient_Statics::NewProp_sGreeting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyClient_Statics::NewProp_sName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyClient_Statics::NewProp_sTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyClient_Statics::NewProp_iNature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyClient_Statics::NewProp_iName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyClient_Statics::ClassParams = {
		&AMyClient::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyClient_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AMyClient_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMyClient_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyClient, 1327865229);
	template<> MOONFLORIST_API UClass* StaticClass<AMyClient>()
	{
		return AMyClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyClient(Z_Construct_UClass_AMyClient, &AMyClient::StaticClass, TEXT("/Script/MoonFlorist"), TEXT("AMyClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
