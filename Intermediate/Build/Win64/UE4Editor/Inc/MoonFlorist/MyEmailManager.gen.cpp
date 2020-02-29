// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoonFlorist/MyEmailManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyEmailManager() {}
// Cross Module References
	MOONFLORIST_API UClass* Z_Construct_UClass_AMyEmailManager_NoRegister();
	MOONFLORIST_API UClass* Z_Construct_UClass_AMyEmailManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MoonFlorist();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyEmailManager_AddToFeedback();
	MOONFLORIST_API UClass* Z_Construct_UClass_AMyEmail_NoRegister();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyEmailManager_AddToOrders();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyEmailManager_AddToSpam();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyEmailManager_GetFeedback();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyEmailManager_GetOrders();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMyEmailManager_GetSpam();
// End Cross Module References
	void AMyEmailManager::StaticRegisterNativesAMyEmailManager()
	{
		UClass* Class = AMyEmailManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToFeedback", &AMyEmailManager::execAddToFeedback },
			{ "AddToOrders", &AMyEmailManager::execAddToOrders },
			{ "AddToSpam", &AMyEmailManager::execAddToSpam },
			{ "GetFeedback", &AMyEmailManager::execGetFeedback },
			{ "GetOrders", &AMyEmailManager::execGetOrders },
			{ "GetSpam", &AMyEmailManager::execGetSpam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyEmailManager_AddToFeedback_Statics
	{
		struct MyEmailManager_eventAddToFeedback_Parms
		{
			AMyEmail* _email;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__email;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyEmailManager_AddToFeedback_Statics::NewProp__email = { "_email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyEmailManager_eventAddToFeedback_Parms, _email), Z_Construct_UClass_AMyEmail_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyEmailManager_AddToFeedback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyEmailManager_AddToFeedback_Statics::NewProp__email,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyEmailManager_AddToFeedback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyEmailManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyEmailManager_AddToFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyEmailManager, nullptr, "AddToFeedback", sizeof(MyEmailManager_eventAddToFeedback_Parms), Z_Construct_UFunction_AMyEmailManager_AddToFeedback_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyEmailManager_AddToFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyEmailManager_AddToFeedback_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyEmailManager_AddToFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyEmailManager_AddToFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyEmailManager_AddToFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyEmailManager_AddToOrders_Statics
	{
		struct MyEmailManager_eventAddToOrders_Parms
		{
			AMyEmail* _email;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__email;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyEmailManager_AddToOrders_Statics::NewProp__email = { "_email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyEmailManager_eventAddToOrders_Parms, _email), Z_Construct_UClass_AMyEmail_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyEmailManager_AddToOrders_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyEmailManager_AddToOrders_Statics::NewProp__email,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyEmailManager_AddToOrders_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyEmailManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyEmailManager_AddToOrders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyEmailManager, nullptr, "AddToOrders", sizeof(MyEmailManager_eventAddToOrders_Parms), Z_Construct_UFunction_AMyEmailManager_AddToOrders_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyEmailManager_AddToOrders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyEmailManager_AddToOrders_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyEmailManager_AddToOrders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyEmailManager_AddToOrders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyEmailManager_AddToOrders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyEmailManager_AddToSpam_Statics
	{
		struct MyEmailManager_eventAddToSpam_Parms
		{
			AMyEmail* _email;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__email;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyEmailManager_AddToSpam_Statics::NewProp__email = { "_email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyEmailManager_eventAddToSpam_Parms, _email), Z_Construct_UClass_AMyEmail_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyEmailManager_AddToSpam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyEmailManager_AddToSpam_Statics::NewProp__email,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyEmailManager_AddToSpam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyEmailManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyEmailManager_AddToSpam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyEmailManager, nullptr, "AddToSpam", sizeof(MyEmailManager_eventAddToSpam_Parms), Z_Construct_UFunction_AMyEmailManager_AddToSpam_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyEmailManager_AddToSpam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyEmailManager_AddToSpam_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyEmailManager_AddToSpam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyEmailManager_AddToSpam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyEmailManager_AddToSpam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyEmailManager_GetFeedback_Statics
	{
		struct MyEmailManager_eventGetFeedback_Parms
		{
			TArray<AMyEmail*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMyEmailManager_GetFeedback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyEmailManager_eventGetFeedback_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyEmailManager_GetFeedback_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMyEmail_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyEmailManager_GetFeedback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyEmailManager_GetFeedback_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyEmailManager_GetFeedback_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyEmailManager_GetFeedback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyEmailManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyEmailManager_GetFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyEmailManager, nullptr, "GetFeedback", sizeof(MyEmailManager_eventGetFeedback_Parms), Z_Construct_UFunction_AMyEmailManager_GetFeedback_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyEmailManager_GetFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyEmailManager_GetFeedback_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyEmailManager_GetFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyEmailManager_GetFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyEmailManager_GetFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyEmailManager_GetOrders_Statics
	{
		struct MyEmailManager_eventGetOrders_Parms
		{
			TArray<AMyEmail*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMyEmailManager_GetOrders_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyEmailManager_eventGetOrders_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyEmailManager_GetOrders_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMyEmail_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyEmailManager_GetOrders_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyEmailManager_GetOrders_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyEmailManager_GetOrders_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyEmailManager_GetOrders_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyEmailManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyEmailManager_GetOrders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyEmailManager, nullptr, "GetOrders", sizeof(MyEmailManager_eventGetOrders_Parms), Z_Construct_UFunction_AMyEmailManager_GetOrders_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyEmailManager_GetOrders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyEmailManager_GetOrders_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyEmailManager_GetOrders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyEmailManager_GetOrders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyEmailManager_GetOrders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyEmailManager_GetSpam_Statics
	{
		struct MyEmailManager_eventGetSpam_Parms
		{
			TArray<AMyEmail*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMyEmailManager_GetSpam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyEmailManager_eventGetSpam_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyEmailManager_GetSpam_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMyEmail_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyEmailManager_GetSpam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyEmailManager_GetSpam_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyEmailManager_GetSpam_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyEmailManager_GetSpam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyEmailManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyEmailManager_GetSpam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyEmailManager, nullptr, "GetSpam", sizeof(MyEmailManager_eventGetSpam_Parms), Z_Construct_UFunction_AMyEmailManager_GetSpam_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyEmailManager_GetSpam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyEmailManager_GetSpam_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyEmailManager_GetSpam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyEmailManager_GetSpam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyEmailManager_GetSpam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyEmailManager_NoRegister()
	{
		return AMyEmailManager::StaticClass();
	}
	struct Z_Construct_UClass_AMyEmailManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Spam;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Feedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Feedback;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Feedback_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Orders;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Orders_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyEmailManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MoonFlorist,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyEmailManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyEmailManager_AddToFeedback, "AddToFeedback" }, // 1992864743
		{ &Z_Construct_UFunction_AMyEmailManager_AddToOrders, "AddToOrders" }, // 3793580389
		{ &Z_Construct_UFunction_AMyEmailManager_AddToSpam, "AddToSpam" }, // 2773027340
		{ &Z_Construct_UFunction_AMyEmailManager_GetFeedback, "GetFeedback" }, // 3688403503
		{ &Z_Construct_UFunction_AMyEmailManager_GetOrders, "GetOrders" }, // 1761157020
		{ &Z_Construct_UFunction_AMyEmailManager_GetSpam, "GetSpam" }, // 1635639239
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyEmailManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyEmailManager.h" },
		{ "ModuleRelativePath", "MyEmailManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyEmailManager_Statics::NewProp_Spam_MetaData[] = {
		{ "ModuleRelativePath", "MyEmailManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyEmailManager_Statics::NewProp_Spam = { "Spam", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyEmailManager, Spam), METADATA_PARAMS(Z_Construct_UClass_AMyEmailManager_Statics::NewProp_Spam_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyEmailManager_Statics::NewProp_Spam_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyEmailManager_Statics::NewProp_Spam_Inner = { "Spam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMyEmail_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyEmailManager_Statics::NewProp_Feedback_MetaData[] = {
		{ "ModuleRelativePath", "MyEmailManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyEmailManager_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyEmailManager, Feedback), METADATA_PARAMS(Z_Construct_UClass_AMyEmailManager_Statics::NewProp_Feedback_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyEmailManager_Statics::NewProp_Feedback_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyEmailManager_Statics::NewProp_Feedback_Inner = { "Feedback", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMyEmail_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyEmailManager_Statics::NewProp_Orders_MetaData[] = {
		{ "ModuleRelativePath", "MyEmailManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyEmailManager_Statics::NewProp_Orders = { "Orders", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyEmailManager, Orders), METADATA_PARAMS(Z_Construct_UClass_AMyEmailManager_Statics::NewProp_Orders_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyEmailManager_Statics::NewProp_Orders_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyEmailManager_Statics::NewProp_Orders_Inner = { "Orders", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMyEmail_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyEmailManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyEmailManager_Statics::NewProp_Spam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyEmailManager_Statics::NewProp_Spam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyEmailManager_Statics::NewProp_Feedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyEmailManager_Statics::NewProp_Feedback_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyEmailManager_Statics::NewProp_Orders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyEmailManager_Statics::NewProp_Orders_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyEmailManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyEmailManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyEmailManager_Statics::ClassParams = {
		&AMyEmailManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyEmailManager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AMyEmailManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMyEmailManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyEmailManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyEmailManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyEmailManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyEmailManager, 118117150);
	template<> MOONFLORIST_API UClass* StaticClass<AMyEmailManager>()
	{
		return AMyEmailManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyEmailManager(Z_Construct_UClass_AMyEmailManager, &AMyEmailManager::StaticClass, TEXT("/Script/MoonFlorist"), TEXT("AMyEmailManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyEmailManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
