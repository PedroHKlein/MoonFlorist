// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOONFLORIST_MySeed_generated_h
#error "MySeed.generated.h already included, missing '#pragma once' in MySeed.h"
#endif
#define MOONFLORIST_MySeed_generated_h

#define MoonFlorist_Source_MoonFlorist_MySeed_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execinit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->init(Z_Param__iType); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_MySeed_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execinit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->init(Z_Param__iType); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_MySeed_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMySeed(); \
	friend struct Z_Construct_UClass_UMySeed_Statics; \
public: \
	DECLARE_CLASS(UMySeed, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(UMySeed)


#define MoonFlorist_Source_MoonFlorist_MySeed_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUMySeed(); \
	friend struct Z_Construct_UClass_UMySeed_Statics; \
public: \
	DECLARE_CLASS(UMySeed, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(UMySeed)


#define MoonFlorist_Source_MoonFlorist_MySeed_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMySeed(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMySeed) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMySeed); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMySeed); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMySeed(UMySeed&&); \
	NO_API UMySeed(const UMySeed&); \
public:


#define MoonFlorist_Source_MoonFlorist_MySeed_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMySeed(UMySeed&&); \
	NO_API UMySeed(const UMySeed&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMySeed); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMySeed); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMySeed)


#define MoonFlorist_Source_MoonFlorist_MySeed_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__iType() { return STRUCT_OFFSET(UMySeed, iType); }


#define MoonFlorist_Source_MoonFlorist_MySeed_h_24_PROLOG
#define MoonFlorist_Source_MoonFlorist_MySeed_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_MySeed_h_27_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_MySeed_h_27_RPC_WRAPPERS \
	MoonFlorist_Source_MoonFlorist_MySeed_h_27_INCLASS \
	MoonFlorist_Source_MoonFlorist_MySeed_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoonFlorist_Source_MoonFlorist_MySeed_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_MySeed_h_27_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_MySeed_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_MySeed_h_27_INCLASS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_MySeed_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOONFLORIST_API UClass* StaticClass<class UMySeed>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoonFlorist_Source_MoonFlorist_MySeed_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
