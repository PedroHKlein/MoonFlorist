// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef MOONFLORIST_AI_HANDS_Controller_generated_h
#error "AI_HANDS_Controller.generated.h already included, missing '#pragma once' in AI_HANDS_Controller.h"
#endif
#define MOONFLORIST_AI_HANDS_Controller_generated_h

#define MoonFlorist_Source_MoonFlorist_AI_HANDS_Controller_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPawnDetected) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_DetectedPawns); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPawnDetected(Z_Param_Out_DetectedPawns); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_AI_HANDS_Controller_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPawnDetected) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_DetectedPawns); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPawnDetected(Z_Param_Out_DetectedPawns); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_AI_HANDS_Controller_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAI_HANDS_Controller(); \
	friend struct Z_Construct_UClass_AAI_HANDS_Controller_Statics; \
public: \
	DECLARE_CLASS(AAI_HANDS_Controller, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(AAI_HANDS_Controller)


#define MoonFlorist_Source_MoonFlorist_AI_HANDS_Controller_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAI_HANDS_Controller(); \
	friend struct Z_Construct_UClass_AAI_HANDS_Controller_Statics; \
public: \
	DECLARE_CLASS(AAI_HANDS_Controller, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(AAI_HANDS_Controller)


#define MoonFlorist_Source_MoonFlorist_AI_HANDS_Controller_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAI_HANDS_Controller(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAI_HANDS_Controller) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAI_HANDS_Controller); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAI_HANDS_Controller); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAI_HANDS_Controller(AAI_HANDS_Controller&&); \
	NO_API AAI_HANDS_Controller(const AAI_HANDS_Controller&); \
public:


#define MoonFlorist_Source_MoonFlorist_AI_HANDS_Controller_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAI_HANDS_Controller(AAI_HANDS_Controller&&); \
	NO_API AAI_HANDS_Controller(const AAI_HANDS_Controller&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAI_HANDS_Controller); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAI_HANDS_Controller); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAI_HANDS_Controller)


#define MoonFlorist_Source_MoonFlorist_AI_HANDS_Controller_h_15_PRIVATE_PROPERTY_OFFSET
#define MoonFlorist_Source_MoonFlorist_AI_HANDS_Controller_h_12_PROLOG
#define MoonFlorist_Source_MoonFlorist_AI_HANDS_Controller_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_AI_HANDS_Controller_h_15_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_AI_HANDS_Controller_h_15_RPC_WRAPPERS \
	MoonFlorist_Source_MoonFlorist_AI_HANDS_Controller_h_15_INCLASS \
	MoonFlorist_Source_MoonFlorist_AI_HANDS_Controller_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoonFlorist_Source_MoonFlorist_AI_HANDS_Controller_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_AI_HANDS_Controller_h_15_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_AI_HANDS_Controller_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_AI_HANDS_Controller_h_15_INCLASS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_AI_HANDS_Controller_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOONFLORIST_API UClass* StaticClass<class AAI_HANDS_Controller>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoonFlorist_Source_MoonFlorist_AI_HANDS_Controller_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
