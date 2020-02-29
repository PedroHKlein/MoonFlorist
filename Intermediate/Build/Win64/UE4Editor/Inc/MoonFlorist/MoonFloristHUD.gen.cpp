// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoonFlorist/MoonFloristHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoonFloristHUD() {}
// Cross Module References
	MOONFLORIST_API UClass* Z_Construct_UClass_AMoonFloristHUD_NoRegister();
	MOONFLORIST_API UClass* Z_Construct_UClass_AMoonFloristHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_MoonFlorist();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMoonFloristHUD_ChangeState();
	MOONFLORIST_API UFunction* Z_Construct_UFunction_AMoonFloristHUD_ToggleAlpha();
// End Cross Module References
	void AMoonFloristHUD::StaticRegisterNativesAMoonFloristHUD()
	{
		UClass* Class = AMoonFloristHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeState", &AMoonFloristHUD::execChangeState },
			{ "ToggleAlpha", &AMoonFloristHUD::execToggleAlpha },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMoonFloristHUD_ChangeState_Statics
	{
		struct MoonFloristHUD_eventChangeState_Parms
		{
			int32 _state;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMoonFloristHUD_ChangeState_Statics::NewProp__state = { "_state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoonFloristHUD_eventChangeState_Parms, _state), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMoonFloristHUD_ChangeState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoonFloristHUD_ChangeState_Statics::NewProp__state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoonFloristHUD_ChangeState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Crosshair" },
		{ "ModuleRelativePath", "MoonFloristHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoonFloristHUD_ChangeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoonFloristHUD, nullptr, "ChangeState", sizeof(MoonFloristHUD_eventChangeState_Parms), Z_Construct_UFunction_AMoonFloristHUD_ChangeState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMoonFloristHUD_ChangeState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMoonFloristHUD_ChangeState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMoonFloristHUD_ChangeState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMoonFloristHUD_ChangeState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMoonFloristHUD_ChangeState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMoonFloristHUD_ToggleAlpha_Statics
	{
		struct MoonFloristHUD_eventToggleAlpha_Parms
		{
			bool _changeState;
		};
		static void NewProp__changeState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__changeState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMoonFloristHUD_ToggleAlpha_Statics::NewProp__changeState_SetBit(void* Obj)
	{
		((MoonFloristHUD_eventToggleAlpha_Parms*)Obj)->_changeState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMoonFloristHUD_ToggleAlpha_Statics::NewProp__changeState = { "_changeState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MoonFloristHUD_eventToggleAlpha_Parms), &Z_Construct_UFunction_AMoonFloristHUD_ToggleAlpha_Statics::NewProp__changeState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMoonFloristHUD_ToggleAlpha_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoonFloristHUD_ToggleAlpha_Statics::NewProp__changeState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoonFloristHUD_ToggleAlpha_Statics::Function_MetaDataParams[] = {
		{ "Category", "Crosshair" },
		{ "ModuleRelativePath", "MoonFloristHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoonFloristHUD_ToggleAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoonFloristHUD, nullptr, "ToggleAlpha", sizeof(MoonFloristHUD_eventToggleAlpha_Parms), Z_Construct_UFunction_AMoonFloristHUD_ToggleAlpha_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMoonFloristHUD_ToggleAlpha_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMoonFloristHUD_ToggleAlpha_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMoonFloristHUD_ToggleAlpha_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMoonFloristHUD_ToggleAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMoonFloristHUD_ToggleAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMoonFloristHUD_NoRegister()
	{
		return AMoonFloristHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMoonFloristHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMoonFloristHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_MoonFlorist,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMoonFloristHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMoonFloristHUD_ChangeState, "ChangeState" }, // 2961370630
		{ &Z_Construct_UFunction_AMoonFloristHUD_ToggleAlpha, "ToggleAlpha" }, // 3972284467
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoonFloristHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MoonFloristHUD.h" },
		{ "ModuleRelativePath", "MoonFloristHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMoonFloristHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoonFloristHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMoonFloristHUD_Statics::ClassParams = {
		&AMoonFloristHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMoonFloristHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMoonFloristHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMoonFloristHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMoonFloristHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMoonFloristHUD, 2114203893);
	template<> MOONFLORIST_API UClass* StaticClass<AMoonFloristHUD>()
	{
		return AMoonFloristHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMoonFloristHUD(Z_Construct_UClass_AMoonFloristHUD, &AMoonFloristHUD::StaticClass, TEXT("/Script/MoonFlorist"), TEXT("AMoonFloristHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMoonFloristHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
