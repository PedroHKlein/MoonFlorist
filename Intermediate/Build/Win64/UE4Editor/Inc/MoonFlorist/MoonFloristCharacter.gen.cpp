// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoonFlorist/MoonFloristCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoonFloristCharacter() {}
// Cross Module References
	MOONFLORIST_API UClass* Z_Construct_UClass_AMoonFloristCharacter_NoRegister();
	MOONFLORIST_API UClass* Z_Construct_UClass_AMoonFloristCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MoonFlorist();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMoonFloristCharacter_DetectInteraction();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMoonFloristCharacter_RaycastCheck();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	MOONFLORIST_API UClass* Z_Construct_UClass_AStorage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AMoonFloristCharacter::StaticRegisterNativesAMoonFloristCharacter()
	{
		UClass* Class = AMoonFloristCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DetectInteraction", &AMoonFloristCharacter::execDetectInteraction },
			{ "RaycastCheck", &AMoonFloristCharacter::execRaycastCheck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMoonFloristCharacter_DetectInteraction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoonFloristCharacter_DetectInteraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "MoonFloristCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoonFloristCharacter_DetectInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoonFloristCharacter, nullptr, "DetectInteraction", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMoonFloristCharacter_DetectInteraction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMoonFloristCharacter_DetectInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMoonFloristCharacter_DetectInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMoonFloristCharacter_DetectInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMoonFloristCharacter_RaycastCheck_Statics
	{
		struct MoonFloristCharacter_eventRaycastCheck_Parms
		{
			FHitResult ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMoonFloristCharacter_RaycastCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoonFloristCharacter_eventRaycastCheck_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMoonFloristCharacter_RaycastCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoonFloristCharacter_RaycastCheck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoonFloristCharacter_RaycastCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "Raycast" },
		{ "ModuleRelativePath", "MoonFloristCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoonFloristCharacter_RaycastCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoonFloristCharacter, nullptr, "RaycastCheck", sizeof(MoonFloristCharacter_eventRaycastCheck_Parms), Z_Construct_UFunction_AMoonFloristCharacter_RaycastCheck_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMoonFloristCharacter_RaycastCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMoonFloristCharacter_RaycastCheck_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMoonFloristCharacter_RaycastCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMoonFloristCharacter_RaycastCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMoonFloristCharacter_RaycastCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMoonFloristCharacter_NoRegister()
	{
		return AMoonFloristCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMoonFloristCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStorage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerStorage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayDisCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RayDisCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Hitsdata_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_Hitsdata;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartCoins_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_StartCoins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CosmoCoins_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CosmoCoins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMoonFloristCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MoonFlorist,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMoonFloristCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMoonFloristCharacter_DetectInteraction, "DetectInteraction" }, // 1537667534
		{ &Z_Construct_UFunction_AMoonFloristCharacter_RaycastCheck, "RaycastCheck" }, // 2310226174
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoonFloristCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MoonFloristCharacter.h" },
		{ "ModuleRelativePath", "MoonFloristCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "MoonFloristCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoonFloristCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "MoonFloristCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoonFloristCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_PlayerStorage_MetaData[] = {
		{ "Category", "Storage" },
		{ "ModuleRelativePath", "MoonFloristCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_PlayerStorage = { "PlayerStorage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoonFloristCharacter, PlayerStorage), Z_Construct_UClass_AStorage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_PlayerStorage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_PlayerStorage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_RayDisCheck_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "MoonFloristCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_RayDisCheck = { "RayDisCheck", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoonFloristCharacter, RayDisCheck), METADATA_PARAMS(Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_RayDisCheck_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_RayDisCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_m_Hitsdata_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "MoonFloristCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_m_Hitsdata = { "m_Hitsdata", nullptr, (EPropertyFlags)0x0010008000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoonFloristCharacter, m_Hitsdata), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_m_Hitsdata_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_m_Hitsdata_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_StartCoins_MetaData[] = {
		{ "Category", "Currency" },
		{ "ModuleRelativePath", "MoonFloristCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_StartCoins = { "StartCoins", nullptr, (EPropertyFlags)0x0010000000030005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoonFloristCharacter, StartCoins), METADATA_PARAMS(Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_StartCoins_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_StartCoins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_CosmoCoins_MetaData[] = {
		{ "Category", "Currency" },
		{ "ModuleRelativePath", "MoonFloristCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_CosmoCoins = { "CosmoCoins", nullptr, (EPropertyFlags)0x0010000000030005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoonFloristCharacter, CosmoCoins), METADATA_PARAMS(Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_CosmoCoins_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_CosmoCoins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_MouseSensitivity_MetaData[] = {
		{ "Category", "Mouse Sens" },
		{ "ModuleRelativePath", "MoonFloristCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_MouseSensitivity = { "MouseSensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoonFloristCharacter, MouseSensitivity), METADATA_PARAMS(Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_MouseSensitivity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_MouseSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MoonFloristCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoonFloristCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MoonFloristCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoonFloristCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_Mesh1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_Mesh1P_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoonFloristCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_PlayerStorage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_RayDisCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_m_Hitsdata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_StartCoins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_CosmoCoins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_MouseSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoonFloristCharacter_Statics::NewProp_Mesh1P,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMoonFloristCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoonFloristCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMoonFloristCharacter_Statics::ClassParams = {
		&AMoonFloristCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMoonFloristCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AMoonFloristCharacter_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMoonFloristCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMoonFloristCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMoonFloristCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMoonFloristCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMoonFloristCharacter, 2834850913);
	template<> MOONFLORIST_API UClass* StaticClass<AMoonFloristCharacter>()
	{
		return AMoonFloristCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMoonFloristCharacter(Z_Construct_UClass_AMoonFloristCharacter, &AMoonFloristCharacter::StaticClass, TEXT("/Script/MoonFlorist"), TEXT("AMoonFloristCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMoonFloristCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
