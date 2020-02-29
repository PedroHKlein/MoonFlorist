// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMyEmail;
#ifdef MOONFLORIST_MyEmailManager_generated_h
#error "MyEmailManager.generated.h already included, missing '#pragma once' in MyEmailManager.h"
#endif
#define MOONFLORIST_MyEmailManager_generated_h

#define MoonFlorist_Source_MoonFlorist_MyEmailManager_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddToSpam) \
	{ \
		P_GET_OBJECT(AMyEmail,Z_Param__email); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddToSpam(Z_Param__email); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToFeedback) \
	{ \
		P_GET_OBJECT(AMyEmail,Z_Param__email); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddToFeedback(Z_Param__email); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToOrders) \
	{ \
		P_GET_OBJECT(AMyEmail,Z_Param__email); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddToOrders(Z_Param__email); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpam) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AMyEmail*>*)Z_Param__Result=P_THIS->GetSpam(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFeedback) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AMyEmail*>*)Z_Param__Result=P_THIS->GetFeedback(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOrders) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AMyEmail*>*)Z_Param__Result=P_THIS->GetOrders(); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_MyEmailManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddToSpam) \
	{ \
		P_GET_OBJECT(AMyEmail,Z_Param__email); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddToSpam(Z_Param__email); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToFeedback) \
	{ \
		P_GET_OBJECT(AMyEmail,Z_Param__email); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddToFeedback(Z_Param__email); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToOrders) \
	{ \
		P_GET_OBJECT(AMyEmail,Z_Param__email); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddToOrders(Z_Param__email); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpam) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AMyEmail*>*)Z_Param__Result=P_THIS->GetSpam(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFeedback) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AMyEmail*>*)Z_Param__Result=P_THIS->GetFeedback(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOrders) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AMyEmail*>*)Z_Param__Result=P_THIS->GetOrders(); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_MyEmailManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyEmailManager(); \
	friend struct Z_Construct_UClass_AMyEmailManager_Statics; \
public: \
	DECLARE_CLASS(AMyEmailManager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(AMyEmailManager)


#define MoonFlorist_Source_MoonFlorist_MyEmailManager_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMyEmailManager(); \
	friend struct Z_Construct_UClass_AMyEmailManager_Statics; \
public: \
	DECLARE_CLASS(AMyEmailManager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(AMyEmailManager)


#define MoonFlorist_Source_MoonFlorist_MyEmailManager_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyEmailManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyEmailManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyEmailManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyEmailManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyEmailManager(AMyEmailManager&&); \
	NO_API AMyEmailManager(const AMyEmailManager&); \
public:


#define MoonFlorist_Source_MoonFlorist_MyEmailManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyEmailManager(AMyEmailManager&&); \
	NO_API AMyEmailManager(const AMyEmailManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyEmailManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyEmailManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyEmailManager)


#define MoonFlorist_Source_MoonFlorist_MyEmailManager_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Orders() { return STRUCT_OFFSET(AMyEmailManager, Orders); } \
	FORCEINLINE static uint32 __PPO__Feedback() { return STRUCT_OFFSET(AMyEmailManager, Feedback); } \
	FORCEINLINE static uint32 __PPO__Spam() { return STRUCT_OFFSET(AMyEmailManager, Spam); }


#define MoonFlorist_Source_MoonFlorist_MyEmailManager_h_10_PROLOG
#define MoonFlorist_Source_MoonFlorist_MyEmailManager_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_MyEmailManager_h_13_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_MyEmailManager_h_13_RPC_WRAPPERS \
	MoonFlorist_Source_MoonFlorist_MyEmailManager_h_13_INCLASS \
	MoonFlorist_Source_MoonFlorist_MyEmailManager_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoonFlorist_Source_MoonFlorist_MyEmailManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_MyEmailManager_h_13_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_MyEmailManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_MyEmailManager_h_13_INCLASS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_MyEmailManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOONFLORIST_API UClass* StaticClass<class AMyEmailManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoonFlorist_Source_MoonFlorist_MyEmailManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
