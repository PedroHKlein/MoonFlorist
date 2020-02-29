// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoonFlorist/MyGameManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameManager() {}
// Cross Module References
	MOONFLORIST_API UClass* Z_Construct_UClass_AMyGameManager_NoRegister();
	MOONFLORIST_API UClass* Z_Construct_UClass_AMyGameManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MoonFlorist();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyGameManager_AddMoney();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyGameManager_BuySeed();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyGameManager_CompleteOrder();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyGameManager_GetBouquet();
	MOONFLORIST_API UClass* Z_Construct_UClass_UMyBouquet_NoRegister();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyGameManager_GetCurrClient();
	MOONFLORIST_API UClass* Z_Construct_UClass_AMyClient_NoRegister();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyGameManager_GetGoalList();
	MOONFLORIST_API UClass* Z_Construct_UClass_AMyGoalManager_NoRegister();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyGameManager_GetInstance();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyGameManager_getLastBouquetWorth();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyGameManager_GetMoney();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyGameManager_GetOrder();
	MOONFLORIST_API UClass* Z_Construct_UClass_UMyClientOrder_NoRegister();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyGameManager_init();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyGameManager_NewBouquet();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyGameManager_NewClient();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyGameManager_setLastBouquetWorth();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyGameManager_SetMoney();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyGameManager_Test();
	MOONFLORIST_API UClass* Z_Construct_UClass_AMyEmailManager_NoRegister();
	MOONFLORIST_API UClass* Z_Construct_UClass_UMySeed_NoRegister();
	MOONFLORIST_API UClass* Z_Construct_UClass_AMyClientManager_NoRegister();
// End Cross Module References
	void AMyGameManager::StaticRegisterNativesAMyGameManager()
	{
		UClass* Class = AMyGameManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMoney", &AMyGameManager::execAddMoney },
			{ "BuySeed", &AMyGameManager::execBuySeed },
			{ "CompleteOrder", &AMyGameManager::execCompleteOrder },
			{ "GetBouquet", &AMyGameManager::execGetBouquet },
			{ "GetCurrClient", &AMyGameManager::execGetCurrClient },
			{ "GetGoalList", &AMyGameManager::execGetGoalList },
			{ "GetInstance", &AMyGameManager::execGetInstance },
			{ "getLastBouquetWorth", &AMyGameManager::execgetLastBouquetWorth },
			{ "GetMoney", &AMyGameManager::execGetMoney },
			{ "GetOrder", &AMyGameManager::execGetOrder },
			{ "init", &AMyGameManager::execinit },
			{ "NewBouquet", &AMyGameManager::execNewBouquet },
			{ "NewClient", &AMyGameManager::execNewClient },
			{ "setLastBouquetWorth", &AMyGameManager::execsetLastBouquetWorth },
			{ "SetMoney", &AMyGameManager::execSetMoney },
			{ "Test", &AMyGameManager::execTest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyGameManager_AddMoney_Statics
	{
		struct MyGameManager_eventAddMoney_Parms
		{
			int32 _iMoolah;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__iMoolah;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyGameManager_AddMoney_Statics::NewProp__iMoolah = { "_iMoolah", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameManager_eventAddMoney_Parms, _iMoolah), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameManager_AddMoney_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameManager_AddMoney_Statics::NewProp__iMoolah,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameManager_AddMoney_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameManager_AddMoney_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameManager, nullptr, "AddMoney", sizeof(MyGameManager_eventAddMoney_Parms), Z_Construct_UFunction_AMyGameManager_AddMoney_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyGameManager_AddMoney_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameManager_AddMoney_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyGameManager_AddMoney_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameManager_AddMoney()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyGameManager_AddMoney_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameManager_BuySeed_Statics
	{
		struct MyGameManager_eventBuySeed_Parms
		{
			int32 _iID;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__iID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyGameManager_BuySeed_Statics::NewProp__iID = { "_iID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameManager_eventBuySeed_Parms, _iID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameManager_BuySeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameManager_BuySeed_Statics::NewProp__iID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameManager_BuySeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameManager_BuySeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameManager, nullptr, "BuySeed", sizeof(MyGameManager_eventBuySeed_Parms), Z_Construct_UFunction_AMyGameManager_BuySeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyGameManager_BuySeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameManager_BuySeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyGameManager_BuySeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameManager_BuySeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyGameManager_BuySeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameManager_CompleteOrder_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameManager_CompleteOrder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameManager_CompleteOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameManager, nullptr, "CompleteOrder", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameManager_CompleteOrder_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyGameManager_CompleteOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameManager_CompleteOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyGameManager_CompleteOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameManager_GetBouquet_Statics
	{
		struct MyGameManager_eventGetBouquet_Parms
		{
			UMyBouquet* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyGameManager_GetBouquet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameManager_eventGetBouquet_Parms, ReturnValue), Z_Construct_UClass_UMyBouquet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameManager_GetBouquet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameManager_GetBouquet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameManager_GetBouquet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameManager_GetBouquet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameManager, nullptr, "GetBouquet", sizeof(MyGameManager_eventGetBouquet_Parms), Z_Construct_UFunction_AMyGameManager_GetBouquet_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyGameManager_GetBouquet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameManager_GetBouquet_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyGameManager_GetBouquet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameManager_GetBouquet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyGameManager_GetBouquet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameManager_GetCurrClient_Statics
	{
		struct MyGameManager_eventGetCurrClient_Parms
		{
			AMyClient* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyGameManager_GetCurrClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameManager_eventGetCurrClient_Parms, ReturnValue), Z_Construct_UClass_AMyClient_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameManager_GetCurrClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameManager_GetCurrClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameManager_GetCurrClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameManager_GetCurrClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameManager, nullptr, "GetCurrClient", sizeof(MyGameManager_eventGetCurrClient_Parms), Z_Construct_UFunction_AMyGameManager_GetCurrClient_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyGameManager_GetCurrClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameManager_GetCurrClient_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyGameManager_GetCurrClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameManager_GetCurrClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyGameManager_GetCurrClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameManager_GetGoalList_Statics
	{
		struct MyGameManager_eventGetGoalList_Parms
		{
			AMyGoalManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyGameManager_GetGoalList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameManager_eventGetGoalList_Parms, ReturnValue), Z_Construct_UClass_AMyGoalManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameManager_GetGoalList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameManager_GetGoalList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameManager_GetGoalList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameManager_GetGoalList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameManager, nullptr, "GetGoalList", sizeof(MyGameManager_eventGetGoalList_Parms), Z_Construct_UFunction_AMyGameManager_GetGoalList_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyGameManager_GetGoalList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameManager_GetGoalList_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyGameManager_GetGoalList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameManager_GetGoalList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyGameManager_GetGoalList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameManager_GetInstance_Statics
	{
		struct MyGameManager_eventGetInstance_Parms
		{
			AMyGameManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyGameManager_GetInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameManager_eventGetInstance_Parms, ReturnValue), Z_Construct_UClass_AMyGameManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameManager_GetInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameManager_GetInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameManager_GetInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameManager_GetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameManager, nullptr, "GetInstance", sizeof(MyGameManager_eventGetInstance_Parms), Z_Construct_UFunction_AMyGameManager_GetInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyGameManager_GetInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameManager_GetInstance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyGameManager_GetInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameManager_GetInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyGameManager_GetInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameManager_getLastBouquetWorth_Statics
	{
		struct MyGameManager_eventgetLastBouquetWorth_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyGameManager_getLastBouquetWorth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameManager_eventgetLastBouquetWorth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameManager_getLastBouquetWorth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameManager_getLastBouquetWorth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameManager_getLastBouquetWorth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameManager_getLastBouquetWorth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameManager, nullptr, "getLastBouquetWorth", sizeof(MyGameManager_eventgetLastBouquetWorth_Parms), Z_Construct_UFunction_AMyGameManager_getLastBouquetWorth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyGameManager_getLastBouquetWorth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameManager_getLastBouquetWorth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyGameManager_getLastBouquetWorth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameManager_getLastBouquetWorth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyGameManager_getLastBouquetWorth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameManager_GetMoney_Statics
	{
		struct MyGameManager_eventGetMoney_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyGameManager_GetMoney_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameManager_eventGetMoney_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameManager_GetMoney_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameManager_GetMoney_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameManager_GetMoney_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameManager_GetMoney_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameManager, nullptr, "GetMoney", sizeof(MyGameManager_eventGetMoney_Parms), Z_Construct_UFunction_AMyGameManager_GetMoney_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyGameManager_GetMoney_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameManager_GetMoney_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyGameManager_GetMoney_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameManager_GetMoney()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyGameManager_GetMoney_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameManager_GetOrder_Statics
	{
		struct MyGameManager_eventGetOrder_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyGameManager_GetOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameManager_eventGetOrder_Parms, ReturnValue), Z_Construct_UClass_UMyClientOrder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameManager_GetOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameManager_GetOrder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameManager_GetOrder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameManager_GetOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameManager, nullptr, "GetOrder", sizeof(MyGameManager_eventGetOrder_Parms), Z_Construct_UFunction_AMyGameManager_GetOrder_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyGameManager_GetOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameManager_GetOrder_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyGameManager_GetOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameManager_GetOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyGameManager_GetOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameManager_init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameManager_init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameManager_init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameManager, nullptr, "init", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameManager_init_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyGameManager_init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameManager_init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyGameManager_init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameManager_NewBouquet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameManager_NewBouquet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameManager_NewBouquet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameManager, nullptr, "NewBouquet", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameManager_NewBouquet_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyGameManager_NewBouquet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameManager_NewBouquet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyGameManager_NewBouquet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameManager_NewClient_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameManager_NewClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameManager_NewClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameManager, nullptr, "NewClient", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameManager_NewClient_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyGameManager_NewClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameManager_NewClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyGameManager_NewClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameManager_setLastBouquetWorth_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameManager_setLastBouquetWorth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameManager_setLastBouquetWorth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameManager, nullptr, "setLastBouquetWorth", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameManager_setLastBouquetWorth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyGameManager_setLastBouquetWorth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameManager_setLastBouquetWorth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyGameManager_setLastBouquetWorth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameManager_SetMoney_Statics
	{
		struct MyGameManager_eventSetMoney_Parms
		{
			int32 _iMoolah;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__iMoolah;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyGameManager_SetMoney_Statics::NewProp__iMoolah = { "_iMoolah", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameManager_eventSetMoney_Parms, _iMoolah), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameManager_SetMoney_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameManager_SetMoney_Statics::NewProp__iMoolah,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameManager_SetMoney_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameManager_SetMoney_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameManager, nullptr, "SetMoney", sizeof(MyGameManager_eventSetMoney_Parms), Z_Construct_UFunction_AMyGameManager_SetMoney_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyGameManager_SetMoney_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameManager_SetMoney_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyGameManager_SetMoney_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameManager_SetMoney()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyGameManager_SetMoney_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameManager_Test_Statics
	{
		struct MyGameManager_eventTest_Parms
		{
			float delta;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyGameManager_Test_Statics::NewProp_delta = { "delta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameManager_eventTest_Parms, delta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameManager_Test_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameManager_Test_Statics::NewProp_delta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameManager_Test_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameManager_Test_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameManager, nullptr, "Test", sizeof(MyGameManager_eventTest_Parms), Z_Construct_UFunction_AMyGameManager_Test_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyGameManager_Test_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameManager_Test_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyGameManager_Test_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameManager_Test()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyGameManager_Test_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyGameManager_NoRegister()
	{
		return AMyGameManager::StaticClass();
	}
	struct Z_Construct_UClass_AMyGameManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmailLists_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmailLists;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iLastBoquetWorth_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iLastBoquetWorth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seeds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Seeds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Seeds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iMoney_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iMoney;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fCurrTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fCurrTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fTimeToWait_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fTimeToWait;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBouquet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentBouquet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentClient_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentClient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrClient_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrClient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClientList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalLists_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GoalLists;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyGameManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MoonFlorist,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyGameManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyGameManager_AddMoney, "AddMoney" }, // 3278262086
		{ &Z_Construct_UFunction_AMyGameManager_BuySeed, "BuySeed" }, // 1171942711
		{ &Z_Construct_UFunction_AMyGameManager_CompleteOrder, "CompleteOrder" }, // 33955971
		{ &Z_Construct_UFunction_AMyGameManager_GetBouquet, "GetBouquet" }, // 1022866299
		{ &Z_Construct_UFunction_AMyGameManager_GetCurrClient, "GetCurrClient" }, // 2494378055
		{ &Z_Construct_UFunction_AMyGameManager_GetGoalList, "GetGoalList" }, // 1483760446
		{ &Z_Construct_UFunction_AMyGameManager_GetInstance, "GetInstance" }, // 1265354524
		{ &Z_Construct_UFunction_AMyGameManager_getLastBouquetWorth, "getLastBouquetWorth" }, // 1313795063
		{ &Z_Construct_UFunction_AMyGameManager_GetMoney, "GetMoney" }, // 4183525732
		{ &Z_Construct_UFunction_AMyGameManager_GetOrder, "GetOrder" }, // 520760668
		{ &Z_Construct_UFunction_AMyGameManager_init, "init" }, // 4285373556
		{ &Z_Construct_UFunction_AMyGameManager_NewBouquet, "NewBouquet" }, // 2035340497
		{ &Z_Construct_UFunction_AMyGameManager_NewClient, "NewClient" }, // 3248844996
		{ &Z_Construct_UFunction_AMyGameManager_setLastBouquetWorth, "setLastBouquetWorth" }, // 2724477328
		{ &Z_Construct_UFunction_AMyGameManager_SetMoney, "SetMoney" }, // 3619495442
		{ &Z_Construct_UFunction_AMyGameManager_Test, "Test" }, // 3997305778
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyGameManager.h" },
		{ "ModuleRelativePath", "MyGameManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameManager_Statics::NewProp_EmailLists_MetaData[] = {
		{ "ModuleRelativePath", "MyGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameManager_Statics::NewProp_EmailLists = { "EmailLists", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameManager, EmailLists), Z_Construct_UClass_AMyEmailManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyGameManager_Statics::NewProp_EmailLists_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyGameManager_Statics::NewProp_EmailLists_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameManager_Statics::NewProp_iLastBoquetWorth_MetaData[] = {
		{ "ModuleRelativePath", "MyGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMyGameManager_Statics::NewProp_iLastBoquetWorth = { "iLastBoquetWorth", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameManager, iLastBoquetWorth), METADATA_PARAMS(Z_Construct_UClass_AMyGameManager_Statics::NewProp_iLastBoquetWorth_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyGameManager_Statics::NewProp_iLastBoquetWorth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameManager_Statics::NewProp_Seeds_MetaData[] = {
		{ "ModuleRelativePath", "MyGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyGameManager_Statics::NewProp_Seeds = { "Seeds", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameManager, Seeds), METADATA_PARAMS(Z_Construct_UClass_AMyGameManager_Statics::NewProp_Seeds_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyGameManager_Statics::NewProp_Seeds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameManager_Statics::NewProp_Seeds_Inner = { "Seeds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMySeed_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameManager_Statics::NewProp_Instance_MetaData[] = {
		{ "ModuleRelativePath", "MyGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameManager_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameManager, Instance), Z_Construct_UClass_AMyGameManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyGameManager_Statics::NewProp_Instance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyGameManager_Statics::NewProp_Instance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameManager_Statics::NewProp_iMoney_MetaData[] = {
		{ "ModuleRelativePath", "MyGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMyGameManager_Statics::NewProp_iMoney = { "iMoney", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameManager, iMoney), METADATA_PARAMS(Z_Construct_UClass_AMyGameManager_Statics::NewProp_iMoney_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyGameManager_Statics::NewProp_iMoney_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameManager_Statics::NewProp_fCurrTime_MetaData[] = {
		{ "ModuleRelativePath", "MyGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyGameManager_Statics::NewProp_fCurrTime = { "fCurrTime", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameManager, fCurrTime), METADATA_PARAMS(Z_Construct_UClass_AMyGameManager_Statics::NewProp_fCurrTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyGameManager_Statics::NewProp_fCurrTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameManager_Statics::NewProp_fTimeToWait_MetaData[] = {
		{ "ModuleRelativePath", "MyGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyGameManager_Statics::NewProp_fTimeToWait = { "fTimeToWait", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameManager, fTimeToWait), METADATA_PARAMS(Z_Construct_UClass_AMyGameManager_Statics::NewProp_fTimeToWait_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyGameManager_Statics::NewProp_fTimeToWait_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameManager_Statics::NewProp_CurrentBouquet_MetaData[] = {
		{ "ModuleRelativePath", "MyGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameManager_Statics::NewProp_CurrentBouquet = { "CurrentBouquet", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameManager, CurrentBouquet), Z_Construct_UClass_UMyBouquet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyGameManager_Statics::NewProp_CurrentBouquet_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyGameManager_Statics::NewProp_CurrentBouquet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameManager_Statics::NewProp_CurrentClient_MetaData[] = {
		{ "ModuleRelativePath", "MyGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameManager_Statics::NewProp_CurrentClient = { "CurrentClient", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameManager, CurrentClient), Z_Construct_UClass_UMyClientOrder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyGameManager_Statics::NewProp_CurrentClient_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyGameManager_Statics::NewProp_CurrentClient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameManager_Statics::NewProp_CurrClient_MetaData[] = {
		{ "ModuleRelativePath", "MyGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameManager_Statics::NewProp_CurrClient = { "CurrClient", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameManager, CurrClient), Z_Construct_UClass_AMyClient_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyGameManager_Statics::NewProp_CurrClient_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyGameManager_Statics::NewProp_CurrClient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameManager_Statics::NewProp_ClientList_MetaData[] = {
		{ "ModuleRelativePath", "MyGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameManager_Statics::NewProp_ClientList = { "ClientList", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameManager, ClientList), Z_Construct_UClass_AMyClientManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyGameManager_Statics::NewProp_ClientList_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyGameManager_Statics::NewProp_ClientList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameManager_Statics::NewProp_GoalLists_MetaData[] = {
		{ "ModuleRelativePath", "MyGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameManager_Statics::NewProp_GoalLists = { "GoalLists", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameManager, GoalLists), Z_Construct_UClass_AMyGoalManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyGameManager_Statics::NewProp_GoalLists_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyGameManager_Statics::NewProp_GoalLists_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyGameManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameManager_Statics::NewProp_EmailLists,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameManager_Statics::NewProp_iLastBoquetWorth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameManager_Statics::NewProp_Seeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameManager_Statics::NewProp_Seeds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameManager_Statics::NewProp_Instance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameManager_Statics::NewProp_iMoney,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameManager_Statics::NewProp_fCurrTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameManager_Statics::NewProp_fTimeToWait,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameManager_Statics::NewProp_CurrentBouquet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameManager_Statics::NewProp_CurrentClient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameManager_Statics::NewProp_CurrClient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameManager_Statics::NewProp_ClientList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameManager_Statics::NewProp_GoalLists,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyGameManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyGameManager_Statics::ClassParams = {
		&AMyGameManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyGameManager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AMyGameManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMyGameManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyGameManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyGameManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyGameManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyGameManager, 3681096803);
	template<> MOONFLORIST_API UClass* StaticClass<AMyGameManager>()
	{
		return AMyGameManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyGameManager(Z_Construct_UClass_AMyGameManager, &AMyGameManager::StaticClass, TEXT("/Script/MoonFlorist"), TEXT("AMyGameManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
