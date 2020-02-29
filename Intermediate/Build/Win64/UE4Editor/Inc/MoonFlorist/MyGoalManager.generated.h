// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMyGoal;
#ifdef MOONFLORIST_MyGoalManager_generated_h
#error "MyGoalManager.generated.h already included, missing '#pragma once' in MyGoalManager.h"
#endif
#define MOONFLORIST_MyGoalManager_generated_h

#define MoonFlorist_Source_MoonFlorist_MyGoalManager_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGoal) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__icol); \
		P_GET_PROPERTY(UIntProperty,Z_Param__igoal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMyGoal**)Z_Param__Result=P_THIS->GetGoal(Z_Param__icol,Z_Param__igoal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execinit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->init(); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_MyGoalManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGoal) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__icol); \
		P_GET_PROPERTY(UIntProperty,Z_Param__igoal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMyGoal**)Z_Param__Result=P_THIS->GetGoal(Z_Param__icol,Z_Param__igoal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execinit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->init(); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_MyGoalManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyGoalManager(); \
	friend struct Z_Construct_UClass_AMyGoalManager_Statics; \
public: \
	DECLARE_CLASS(AMyGoalManager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(AMyGoalManager)


#define MoonFlorist_Source_MoonFlorist_MyGoalManager_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMyGoalManager(); \
	friend struct Z_Construct_UClass_AMyGoalManager_Statics; \
public: \
	DECLARE_CLASS(AMyGoalManager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(AMyGoalManager)


#define MoonFlorist_Source_MoonFlorist_MyGoalManager_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGoalManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGoalManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGoalManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGoalManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGoalManager(AMyGoalManager&&); \
	NO_API AMyGoalManager(const AMyGoalManager&); \
public:


#define MoonFlorist_Source_MoonFlorist_MyGoalManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGoalManager(AMyGoalManager&&); \
	NO_API AMyGoalManager(const AMyGoalManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGoalManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGoalManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyGoalManager)


#define MoonFlorist_Source_MoonFlorist_MyGoalManager_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RedGoals() { return STRUCT_OFFSET(AMyGoalManager, RedGoals); } \
	FORCEINLINE static uint32 __PPO__BlueGoals() { return STRUCT_OFFSET(AMyGoalManager, BlueGoals); } \
	FORCEINLINE static uint32 __PPO__YellowGoals() { return STRUCT_OFFSET(AMyGoalManager, YellowGoals); } \
	FORCEINLINE static uint32 __PPO__GreenGoals() { return STRUCT_OFFSET(AMyGoalManager, GreenGoals); } \
	FORCEINLINE static uint32 __PPO__PurpleGoals() { return STRUCT_OFFSET(AMyGoalManager, PurpleGoals); } \
	FORCEINLINE static uint32 __PPO__OrangeGoals() { return STRUCT_OFFSET(AMyGoalManager, OrangeGoals); }


#define MoonFlorist_Source_MoonFlorist_MyGoalManager_h_10_PROLOG
#define MoonFlorist_Source_MoonFlorist_MyGoalManager_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_MyGoalManager_h_13_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_MyGoalManager_h_13_RPC_WRAPPERS \
	MoonFlorist_Source_MoonFlorist_MyGoalManager_h_13_INCLASS \
	MoonFlorist_Source_MoonFlorist_MyGoalManager_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoonFlorist_Source_MoonFlorist_MyGoalManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_MyGoalManager_h_13_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_MyGoalManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_MyGoalManager_h_13_INCLASS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_MyGoalManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOONFLORIST_API UClass* StaticClass<class AMyGoalManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoonFlorist_Source_MoonFlorist_MyGoalManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
