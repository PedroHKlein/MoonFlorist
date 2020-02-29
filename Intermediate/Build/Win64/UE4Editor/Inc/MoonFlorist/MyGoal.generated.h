// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOONFLORIST_MyGoal_generated_h
#error "MyGoal.generated.h already included, missing '#pragma once' in MyGoal.h"
#endif
#define MOONFLORIST_MyGoal_generated_h

#define MoonFlorist_Source_MoonFlorist_MyGoal_h_84_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetComplete) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetComplete(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGoal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetGoal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColour) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetColour(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGoalID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetGoalID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColourID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetColourID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execinit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iCol); \
		P_GET_PROPERTY(UIntProperty,Z_Param_iGoal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->init(Z_Param__iCol,Z_Param_iGoal); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_MyGoal_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetComplete) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetComplete(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGoal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetGoal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColour) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetColour(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGoalID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetGoalID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColourID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetColourID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execinit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iCol); \
		P_GET_PROPERTY(UIntProperty,Z_Param_iGoal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->init(Z_Param__iCol,Z_Param_iGoal); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_MyGoal_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyGoal(); \
	friend struct Z_Construct_UClass_UMyGoal_Statics; \
public: \
	DECLARE_CLASS(UMyGoal, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(UMyGoal)


#define MoonFlorist_Source_MoonFlorist_MyGoal_h_84_INCLASS \
private: \
	static void StaticRegisterNativesUMyGoal(); \
	friend struct Z_Construct_UClass_UMyGoal_Statics; \
public: \
	DECLARE_CLASS(UMyGoal, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(UMyGoal)


#define MoonFlorist_Source_MoonFlorist_MyGoal_h_84_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyGoal(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyGoal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGoal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGoal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyGoal(UMyGoal&&); \
	NO_API UMyGoal(const UMyGoal&); \
public:


#define MoonFlorist_Source_MoonFlorist_MyGoal_h_84_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyGoal(UMyGoal&&); \
	NO_API UMyGoal(const UMyGoal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGoal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGoal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyGoal)


#define MoonFlorist_Source_MoonFlorist_MyGoal_h_84_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__iGoalColour() { return STRUCT_OFFSET(UMyGoal, iGoalColour); } \
	FORCEINLINE static uint32 __PPO__iGoalNumber() { return STRUCT_OFFSET(UMyGoal, iGoalNumber); } \
	FORCEINLINE static uint32 __PPO__sColour() { return STRUCT_OFFSET(UMyGoal, sColour); } \
	FORCEINLINE static uint32 __PPO__sGoal() { return STRUCT_OFFSET(UMyGoal, sGoal); } \
	FORCEINLINE static uint32 __PPO__bComplete() { return STRUCT_OFFSET(UMyGoal, bComplete); }


#define MoonFlorist_Source_MoonFlorist_MyGoal_h_81_PROLOG
#define MoonFlorist_Source_MoonFlorist_MyGoal_h_84_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_MyGoal_h_84_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_MyGoal_h_84_RPC_WRAPPERS \
	MoonFlorist_Source_MoonFlorist_MyGoal_h_84_INCLASS \
	MoonFlorist_Source_MoonFlorist_MyGoal_h_84_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoonFlorist_Source_MoonFlorist_MyGoal_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_MyGoal_h_84_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_MyGoal_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_MyGoal_h_84_INCLASS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_MyGoal_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOONFLORIST_API UClass* StaticClass<class UMyGoal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoonFlorist_Source_MoonFlorist_MyGoal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
