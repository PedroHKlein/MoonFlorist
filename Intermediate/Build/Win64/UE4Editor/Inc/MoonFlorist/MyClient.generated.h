// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMyClientOrder;
#ifdef MOONFLORIST_MyClient_generated_h
#error "MyClient.generated.h already included, missing '#pragma once' in MyClient.h"
#endif
#define MOONFLORIST_MyClient_generated_h

#define MoonFlorist_Source_MoonFlorist_MyClient_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateClientDescriptions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateClientDescriptions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPreviousOrder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMyClientOrder**)Z_Param__Result=P_THIS->GetPreviousOrder(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentOrder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMyClientOrder**)Z_Param__Result=P_THIS->GetCurrentOrder(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFullDescription) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFullDescription(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNewOrder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NewOrder(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iName); \
		P_GET_PROPERTY(UIntProperty,Z_Param__iNature); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Init(Z_Param__iName,Z_Param__iNature); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_MyClient_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateClientDescriptions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateClientDescriptions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPreviousOrder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMyClientOrder**)Z_Param__Result=P_THIS->GetPreviousOrder(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentOrder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMyClientOrder**)Z_Param__Result=P_THIS->GetCurrentOrder(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFullDescription) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFullDescription(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNewOrder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NewOrder(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iName); \
		P_GET_PROPERTY(UIntProperty,Z_Param__iNature); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Init(Z_Param__iName,Z_Param__iNature); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_MyClient_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyClient(); \
	friend struct Z_Construct_UClass_AMyClient_Statics; \
public: \
	DECLARE_CLASS(AMyClient, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(AMyClient)


#define MoonFlorist_Source_MoonFlorist_MyClient_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAMyClient(); \
	friend struct Z_Construct_UClass_AMyClient_Statics; \
public: \
	DECLARE_CLASS(AMyClient, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(AMyClient)


#define MoonFlorist_Source_MoonFlorist_MyClient_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyClient(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyClient); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyClient(AMyClient&&); \
	NO_API AMyClient(const AMyClient&); \
public:


#define MoonFlorist_Source_MoonFlorist_MyClient_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyClient(AMyClient&&); \
	NO_API AMyClient(const AMyClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyClient); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyClient); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyClient)


#define MoonFlorist_Source_MoonFlorist_MyClient_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__iName() { return STRUCT_OFFSET(AMyClient, iName); } \
	FORCEINLINE static uint32 __PPO__iNature() { return STRUCT_OFFSET(AMyClient, iNature); } \
	FORCEINLINE static uint32 __PPO__sTitle() { return STRUCT_OFFSET(AMyClient, sTitle); } \
	FORCEINLINE static uint32 __PPO__sName() { return STRUCT_OFFSET(AMyClient, sName); } \
	FORCEINLINE static uint32 __PPO__sGreeting() { return STRUCT_OFFSET(AMyClient, sGreeting); } \
	FORCEINLINE static uint32 __PPO__Dialogue1() { return STRUCT_OFFSET(AMyClient, Dialogue1); } \
	FORCEINLINE static uint32 __PPO__Dialogue2() { return STRUCT_OFFSET(AMyClient, Dialogue2); } \
	FORCEINLINE static uint32 __PPO__Dialogue3() { return STRUCT_OFFSET(AMyClient, Dialogue3); } \
	FORCEINLINE static uint32 __PPO__sFullDescription() { return STRUCT_OFFSET(AMyClient, sFullDescription); } \
	FORCEINLINE static uint32 __PPO__CurrentOrder() { return STRUCT_OFFSET(AMyClient, CurrentOrder); } \
	FORCEINLINE static uint32 __PPO__LastOrder() { return STRUCT_OFFSET(AMyClient, LastOrder); }


#define MoonFlorist_Source_MoonFlorist_MyClient_h_21_PROLOG
#define MoonFlorist_Source_MoonFlorist_MyClient_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_MyClient_h_24_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_MyClient_h_24_RPC_WRAPPERS \
	MoonFlorist_Source_MoonFlorist_MyClient_h_24_INCLASS \
	MoonFlorist_Source_MoonFlorist_MyClient_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoonFlorist_Source_MoonFlorist_MyClient_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_MyClient_h_24_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_MyClient_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_MyClient_h_24_INCLASS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_MyClient_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOONFLORIST_API UClass* StaticClass<class AMyClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoonFlorist_Source_MoonFlorist_MyClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
