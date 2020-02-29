// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoonFlorist/MySeed.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySeed() {}
// Cross Module References
	MOONFLORIST_API UClass* Z_Construct_UClass_UMySeed_NoRegister();
	MOONFLORIST_API UClass* Z_Construct_UClass_UMySeed();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MoonFlorist();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_UMySeed_init();
// End Cross Module References
	void UMySeed::StaticRegisterNativesUMySeed()
	{
		UClass* Class = UMySeed::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "init", &UMySeed::execinit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMySeed_init_Statics
	{
		struct MySeed_eventinit_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMySeed_init_Statics::NewProp__iType = { "_iType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MySeed_eventinit_Parms, _iType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySeed_init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySeed_init_Statics::NewProp__iType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySeed_init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MySeed.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySeed_init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySeed, nullptr, "init", sizeof(MySeed_eventinit_Parms), Z_Construct_UFunction_UMySeed_init_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMySeed_init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySeed_init_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMySeed_init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySeed_init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMySeed_init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMySeed_NoRegister()
	{
		return UMySeed::StaticClass();
	}
	struct Z_Construct_UClass_UMySeed_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iType_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMySeed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MoonFlorist,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMySeed_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMySeed_init, "init" }, // 809397526
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySeed_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MySeed.h" },
		{ "ModuleRelativePath", "MySeed.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySeed_Statics::NewProp_iType_MetaData[] = {
		{ "ModuleRelativePath", "MySeed.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMySeed_Statics::NewProp_iType = { "iType", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMySeed, iType), METADATA_PARAMS(Z_Construct_UClass_UMySeed_Statics::NewProp_iType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMySeed_Statics::NewProp_iType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMySeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySeed_Statics::NewProp_iType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMySeed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMySeed>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMySeed_Statics::ClassParams = {
		&UMySeed::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMySeed_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UMySeed_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMySeed_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMySeed_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMySeed()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMySeed_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMySeed, 1838893658);
	template<> MOONFLORIST_API UClass* StaticClass<UMySeed>()
	{
		return UMySeed::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMySeed(Z_Construct_UClass_UMySeed, &UMySeed::StaticClass, TEXT("/Script/MoonFlorist"), TEXT("UMySeed"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMySeed);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
