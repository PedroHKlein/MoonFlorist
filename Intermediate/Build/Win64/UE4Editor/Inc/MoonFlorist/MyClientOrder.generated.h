// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMyGoal;
class UWorld;
#ifdef MOONFLORIST_MyClientOrder_generated_h
#error "MyClientOrder.generated.h already included, missing '#pragma once' in MyClientOrder.h"
#endif
#define MOONFLORIST_MyClientOrder_generated_h

#define MoonFlorist_Source_MoonFlorist_MyClientOrder_h_123_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetDescription) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param__Description); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDescription(Z_Param__Description); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFullDescription) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetFullDescription(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGoals) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UMyGoal*>*)Z_Param__Result=P_THIS->GetGoals(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateJob) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iNum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GenerateJob(Z_Param__iNum); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execinit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iName); \
		P_GET_PROPERTY(UIntProperty,Z_Param__iNumOfGoals); \
		P_GET_OBJECT(UWorld,Z_Param__world); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->init(Z_Param__iName,Z_Param__iNumOfGoals,Z_Param__world); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_MyClientOrder_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDescription) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param__Description); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDescription(Z_Param__Description); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFullDescription) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetFullDescription(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGoals) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UMyGoal*>*)Z_Param__Result=P_THIS->GetGoals(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateJob) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iNum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GenerateJob(Z_Param__iNum); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execinit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iName); \
		P_GET_PROPERTY(UIntProperty,Z_Param__iNumOfGoals); \
		P_GET_OBJECT(UWorld,Z_Param__world); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->init(Z_Param__iName,Z_Param__iNumOfGoals,Z_Param__world); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_MyClientOrder_h_123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyClientOrder(); \
	friend struct Z_Construct_UClass_UMyClientOrder_Statics; \
public: \
	DECLARE_CLASS(UMyClientOrder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(UMyClientOrder)


#define MoonFlorist_Source_MoonFlorist_MyClientOrder_h_123_INCLASS \
private: \
	static void StaticRegisterNativesUMyClientOrder(); \
	friend struct Z_Construct_UClass_UMyClientOrder_Statics; \
public: \
	DECLARE_CLASS(UMyClientOrder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(UMyClientOrder)


#define MoonFlorist_Source_MoonFlorist_MyClientOrder_h_123_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyClientOrder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyClientOrder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyClientOrder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyClientOrder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyClientOrder(UMyClientOrder&&); \
	NO_API UMyClientOrder(const UMyClientOrder&); \
public:


#define MoonFlorist_Source_MoonFlorist_MyClientOrder_h_123_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyClientOrder(UMyClientOrder&&); \
	NO_API UMyClientOrder(const UMyClientOrder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyClientOrder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyClientOrder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyClientOrder)


#define MoonFlorist_Source_MoonFlorist_MyClientOrder_h_123_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__iName() { return STRUCT_OFFSET(UMyClientOrder, iName); } \
	FORCEINLINE static uint32 __PPO__sGreeting() { return STRUCT_OFFSET(UMyClientOrder, sGreeting); } \
	FORCEINLINE static uint32 __PPO__Dialogue1() { return STRUCT_OFFSET(UMyClientOrder, Dialogue1); } \
	FORCEINLINE static uint32 __PPO__Dialogue2() { return STRUCT_OFFSET(UMyClientOrder, Dialogue2); } \
	FORCEINLINE static uint32 __PPO__Dialogue3() { return STRUCT_OFFSET(UMyClientOrder, Dialogue3); } \
	FORCEINLINE static uint32 __PPO__sName() { return STRUCT_OFFSET(UMyClientOrder, sName); } \
	FORCEINLINE static uint32 __PPO__Goals() { return STRUCT_OFFSET(UMyClientOrder, Goals); } \
	FORCEINLINE static uint32 __PPO__sFullDescription() { return STRUCT_OFFSET(UMyClientOrder, sFullDescription); } \
	FORCEINLINE static uint32 __PPO__World() { return STRUCT_OFFSET(UMyClientOrder, World); } \
	FORCEINLINE static uint32 __PPO__GameManager() { return STRUCT_OFFSET(UMyClientOrder, GameManager); }


#define MoonFlorist_Source_MoonFlorist_MyClientOrder_h_120_PROLOG
#define MoonFlorist_Source_MoonFlorist_MyClientOrder_h_123_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_MyClientOrder_h_123_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_MyClientOrder_h_123_RPC_WRAPPERS \
	MoonFlorist_Source_MoonFlorist_MyClientOrder_h_123_INCLASS \
	MoonFlorist_Source_MoonFlorist_MyClientOrder_h_123_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoonFlorist_Source_MoonFlorist_MyClientOrder_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_MyClientOrder_h_123_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_MyClientOrder_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_MyClientOrder_h_123_INCLASS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_MyClientOrder_h_123_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOONFLORIST_API UClass* StaticClass<class UMyClientOrder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoonFlorist_Source_MoonFlorist_MyClientOrder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
