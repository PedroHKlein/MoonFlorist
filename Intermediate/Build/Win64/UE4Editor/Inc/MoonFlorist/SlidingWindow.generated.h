// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOONFLORIST_SlidingWindow_generated_h
#error "SlidingWindow.generated.h already included, missing '#pragma once' in SlidingWindow.h"
#endif
#define MOONFLORIST_SlidingWindow_generated_h

#define MoonFlorist_Source_MoonFlorist_SlidingWindow_h_12_RPC_WRAPPERS
#define MoonFlorist_Source_MoonFlorist_SlidingWindow_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MoonFlorist_Source_MoonFlorist_SlidingWindow_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASlidingWindow(); \
	friend struct Z_Construct_UClass_ASlidingWindow_Statics; \
public: \
	DECLARE_CLASS(ASlidingWindow, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(ASlidingWindow)


#define MoonFlorist_Source_MoonFlorist_SlidingWindow_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASlidingWindow(); \
	friend struct Z_Construct_UClass_ASlidingWindow_Statics; \
public: \
	DECLARE_CLASS(ASlidingWindow, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(ASlidingWindow)


#define MoonFlorist_Source_MoonFlorist_SlidingWindow_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASlidingWindow(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASlidingWindow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASlidingWindow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASlidingWindow); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASlidingWindow(ASlidingWindow&&); \
	NO_API ASlidingWindow(const ASlidingWindow&); \
public:


#define MoonFlorist_Source_MoonFlorist_SlidingWindow_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASlidingWindow(ASlidingWindow&&); \
	NO_API ASlidingWindow(const ASlidingWindow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASlidingWindow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASlidingWindow); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASlidingWindow)


#define MoonFlorist_Source_MoonFlorist_SlidingWindow_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(ASlidingWindow, Root); } \
	FORCEINLINE static uint32 __PPO__StartLerpLoc() { return STRUCT_OFFSET(ASlidingWindow, StartLerpLoc); } \
	FORCEINLINE static uint32 __PPO__EndLerpLoc() { return STRUCT_OFFSET(ASlidingWindow, EndLerpLoc); } \
	FORCEINLINE static uint32 __PPO__Window() { return STRUCT_OFFSET(ASlidingWindow, Window); } \
	FORCEINLINE static uint32 __PPO__Switch() { return STRUCT_OFFSET(ASlidingWindow, Switch); }


#define MoonFlorist_Source_MoonFlorist_SlidingWindow_h_9_PROLOG
#define MoonFlorist_Source_MoonFlorist_SlidingWindow_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_SlidingWindow_h_12_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_SlidingWindow_h_12_RPC_WRAPPERS \
	MoonFlorist_Source_MoonFlorist_SlidingWindow_h_12_INCLASS \
	MoonFlorist_Source_MoonFlorist_SlidingWindow_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoonFlorist_Source_MoonFlorist_SlidingWindow_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_SlidingWindow_h_12_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_SlidingWindow_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_SlidingWindow_h_12_INCLASS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_SlidingWindow_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOONFLORIST_API UClass* StaticClass<class ASlidingWindow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoonFlorist_Source_MoonFlorist_SlidingWindow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
