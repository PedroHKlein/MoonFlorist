// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoonFlorist/SlidingWindow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlidingWindow() {}
// Cross Module References
	MOONFLORIST_API UClass* Z_Construct_UClass_ASlidingWindow_NoRegister();
	MOONFLORIST_API UClass* Z_Construct_UClass_ASlidingWindow();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MoonFlorist();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void ASlidingWindow::StaticRegisterNativesASlidingWindow()
	{
	}
	UClass* Z_Construct_UClass_ASlidingWindow_NoRegister()
	{
		return ASlidingWindow::StaticClass();
	}
	struct Z_Construct_UClass_ASlidingWindow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Switch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Switch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Window_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Window;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLerpLoc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndLerpLoc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLerpLoc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartLerpLoc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASlidingWindow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MoonFlorist,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlidingWindow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SlidingWindow.h" },
		{ "ModuleRelativePath", "SlidingWindow.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlidingWindow_Statics::NewProp_Switch_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SlidingWindow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SlidingWindow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlidingWindow_Statics::NewProp_Switch = { "Switch", nullptr, (EPropertyFlags)0x00200800000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASlidingWindow, Switch), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASlidingWindow_Statics::NewProp_Switch_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASlidingWindow_Statics::NewProp_Switch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlidingWindow_Statics::NewProp_Window_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SlidingWindow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SlidingWindow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlidingWindow_Statics::NewProp_Window = { "Window", nullptr, (EPropertyFlags)0x00200800000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASlidingWindow, Window), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASlidingWindow_Statics::NewProp_Window_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASlidingWindow_Statics::NewProp_Window_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlidingWindow_Statics::NewProp_EndLerpLoc_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SlidingWindow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SlidingWindow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlidingWindow_Statics::NewProp_EndLerpLoc = { "EndLerpLoc", nullptr, (EPropertyFlags)0x00200800000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASlidingWindow, EndLerpLoc), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASlidingWindow_Statics::NewProp_EndLerpLoc_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASlidingWindow_Statics::NewProp_EndLerpLoc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlidingWindow_Statics::NewProp_StartLerpLoc_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SlidingWindow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SlidingWindow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlidingWindow_Statics::NewProp_StartLerpLoc = { "StartLerpLoc", nullptr, (EPropertyFlags)0x00200800000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASlidingWindow, StartLerpLoc), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASlidingWindow_Statics::NewProp_StartLerpLoc_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASlidingWindow_Statics::NewProp_StartLerpLoc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlidingWindow_Statics::NewProp_Root_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SlidingWindow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SlidingWindow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlidingWindow_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00200800000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASlidingWindow, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASlidingWindow_Statics::NewProp_Root_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASlidingWindow_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASlidingWindow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlidingWindow_Statics::NewProp_Switch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlidingWindow_Statics::NewProp_Window,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlidingWindow_Statics::NewProp_EndLerpLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlidingWindow_Statics::NewProp_StartLerpLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlidingWindow_Statics::NewProp_Root,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASlidingWindow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASlidingWindow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASlidingWindow_Statics::ClassParams = {
		&ASlidingWindow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASlidingWindow_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ASlidingWindow_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASlidingWindow_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASlidingWindow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASlidingWindow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASlidingWindow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASlidingWindow, 1438876049);
	template<> MOONFLORIST_API UClass* StaticClass<ASlidingWindow>()
	{
		return ASlidingWindow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASlidingWindow(Z_Construct_UClass_ASlidingWindow, &ASlidingWindow::StaticClass, TEXT("/Script/MoonFlorist"), TEXT("ASlidingWindow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASlidingWindow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
