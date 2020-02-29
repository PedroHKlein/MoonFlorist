// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOONFLORIST_MoonFloristHUD_generated_h
#error "MoonFloristHUD.generated.h already included, missing '#pragma once' in MoonFloristHUD.h"
#endif
#define MOONFLORIST_MoonFloristHUD_generated_h

#define MoonFlorist_Source_MoonFlorist_MoonFloristHUD_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeState) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__state); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeState(Z_Param__state); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleAlpha) \
	{ \
		P_GET_UBOOL(Z_Param__changeState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleAlpha(Z_Param__changeState); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_MoonFloristHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeState) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__state); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeState(Z_Param__state); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleAlpha) \
	{ \
		P_GET_UBOOL(Z_Param__changeState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleAlpha(Z_Param__changeState); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_MoonFloristHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMoonFloristHUD(); \
	friend struct Z_Construct_UClass_AMoonFloristHUD_Statics; \
public: \
	DECLARE_CLASS(AMoonFloristHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(AMoonFloristHUD)


#define MoonFlorist_Source_MoonFlorist_MoonFloristHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMoonFloristHUD(); \
	friend struct Z_Construct_UClass_AMoonFloristHUD_Statics; \
public: \
	DECLARE_CLASS(AMoonFloristHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(AMoonFloristHUD)


#define MoonFlorist_Source_MoonFlorist_MoonFloristHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMoonFloristHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMoonFloristHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMoonFloristHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMoonFloristHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMoonFloristHUD(AMoonFloristHUD&&); \
	NO_API AMoonFloristHUD(const AMoonFloristHUD&); \
public:


#define MoonFlorist_Source_MoonFlorist_MoonFloristHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMoonFloristHUD(AMoonFloristHUD&&); \
	NO_API AMoonFloristHUD(const AMoonFloristHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMoonFloristHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMoonFloristHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMoonFloristHUD)


#define MoonFlorist_Source_MoonFlorist_MoonFloristHUD_h_15_PRIVATE_PROPERTY_OFFSET
#define MoonFlorist_Source_MoonFlorist_MoonFloristHUD_h_12_PROLOG
#define MoonFlorist_Source_MoonFlorist_MoonFloristHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_MoonFloristHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_MoonFloristHUD_h_15_RPC_WRAPPERS \
	MoonFlorist_Source_MoonFlorist_MoonFloristHUD_h_15_INCLASS \
	MoonFlorist_Source_MoonFlorist_MoonFloristHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoonFlorist_Source_MoonFlorist_MoonFloristHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_MoonFloristHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_MoonFloristHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_MoonFloristHUD_h_15_INCLASS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_MoonFloristHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOONFLORIST_API UClass* StaticClass<class AMoonFloristHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoonFlorist_Source_MoonFlorist_MoonFloristHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
