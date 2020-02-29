// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOONFLORIST_MyClientManager_generated_h
#error "MyClientManager.generated.h already included, missing '#pragma once' in MyClientManager.h"
#endif
#define MOONFLORIST_MyClientManager_generated_h

#define MoonFlorist_Source_MoonFlorist_MyClientManager_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execinit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->init(); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_MyClientManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execinit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->init(); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_MyClientManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyClientManager(); \
	friend struct Z_Construct_UClass_AMyClientManager_Statics; \
public: \
	DECLARE_CLASS(AMyClientManager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(AMyClientManager)


#define MoonFlorist_Source_MoonFlorist_MyClientManager_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMyClientManager(); \
	friend struct Z_Construct_UClass_AMyClientManager_Statics; \
public: \
	DECLARE_CLASS(AMyClientManager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(AMyClientManager)


#define MoonFlorist_Source_MoonFlorist_MyClientManager_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyClientManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyClientManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyClientManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyClientManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyClientManager(AMyClientManager&&); \
	NO_API AMyClientManager(const AMyClientManager&); \
public:


#define MoonFlorist_Source_MoonFlorist_MyClientManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyClientManager(AMyClientManager&&); \
	NO_API AMyClientManager(const AMyClientManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyClientManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyClientManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyClientManager)


#define MoonFlorist_Source_MoonFlorist_MyClientManager_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Clients() { return STRUCT_OFFSET(AMyClientManager, Clients); }


#define MoonFlorist_Source_MoonFlorist_MyClientManager_h_11_PROLOG
#define MoonFlorist_Source_MoonFlorist_MyClientManager_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_MyClientManager_h_14_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_MyClientManager_h_14_RPC_WRAPPERS \
	MoonFlorist_Source_MoonFlorist_MyClientManager_h_14_INCLASS \
	MoonFlorist_Source_MoonFlorist_MyClientManager_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoonFlorist_Source_MoonFlorist_MyClientManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_MyClientManager_h_14_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_MyClientManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_MyClientManager_h_14_INCLASS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_MyClientManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOONFLORIST_API UClass* StaticClass<class AMyClientManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoonFlorist_Source_MoonFlorist_MyClientManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
