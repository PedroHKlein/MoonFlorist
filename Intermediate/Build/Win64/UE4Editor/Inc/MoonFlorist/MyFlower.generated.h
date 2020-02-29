// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOONFLORIST_MyFlower_generated_h
#error "MyFlower.generated.h already included, missing '#pragma once' in MyFlower.h"
#endif
#define MOONFLORIST_MyFlower_generated_h

#define MoonFlorist_Source_MoonFlorist_MyFlower_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFlowerName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetFlowerName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFlowerID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetFlowerID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColourScore) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iCol); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetColourScore(Z_Param__iCol); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execinit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->init(Z_Param__iType); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_MyFlower_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFlowerName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetFlowerName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFlowerID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetFlowerID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColourScore) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iCol); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetColourScore(Z_Param__iCol); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execinit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->init(Z_Param__iType); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_MyFlower_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyFlower(); \
	friend struct Z_Construct_UClass_UMyFlower_Statics; \
public: \
	DECLARE_CLASS(UMyFlower, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(UMyFlower)


#define MoonFlorist_Source_MoonFlorist_MyFlower_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUMyFlower(); \
	friend struct Z_Construct_UClass_UMyFlower_Statics; \
public: \
	DECLARE_CLASS(UMyFlower, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(UMyFlower)


#define MoonFlorist_Source_MoonFlorist_MyFlower_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyFlower(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyFlower) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyFlower); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyFlower); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyFlower(UMyFlower&&); \
	NO_API UMyFlower(const UMyFlower&); \
public:


#define MoonFlorist_Source_MoonFlorist_MyFlower_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyFlower(UMyFlower&&); \
	NO_API UMyFlower(const UMyFlower&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyFlower); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyFlower); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyFlower)


#define MoonFlorist_Source_MoonFlorist_MyFlower_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__iType() { return STRUCT_OFFSET(UMyFlower, iType); } \
	FORCEINLINE static uint32 __PPO__sColour() { return STRUCT_OFFSET(UMyFlower, sColour); } \
	FORCEINLINE static uint32 __PPO__iRed() { return STRUCT_OFFSET(UMyFlower, iRed); } \
	FORCEINLINE static uint32 __PPO__iBlue() { return STRUCT_OFFSET(UMyFlower, iBlue); } \
	FORCEINLINE static uint32 __PPO__iYellow() { return STRUCT_OFFSET(UMyFlower, iYellow); } \
	FORCEINLINE static uint32 __PPO__iPurple() { return STRUCT_OFFSET(UMyFlower, iPurple); } \
	FORCEINLINE static uint32 __PPO__iGreen() { return STRUCT_OFFSET(UMyFlower, iGreen); } \
	FORCEINLINE static uint32 __PPO__iOrange() { return STRUCT_OFFSET(UMyFlower, iOrange); }


#define MoonFlorist_Source_MoonFlorist_MyFlower_h_24_PROLOG
#define MoonFlorist_Source_MoonFlorist_MyFlower_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_MyFlower_h_27_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_MyFlower_h_27_RPC_WRAPPERS \
	MoonFlorist_Source_MoonFlorist_MyFlower_h_27_INCLASS \
	MoonFlorist_Source_MoonFlorist_MyFlower_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoonFlorist_Source_MoonFlorist_MyFlower_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_MyFlower_h_27_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_MyFlower_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_MyFlower_h_27_INCLASS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_MyFlower_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOONFLORIST_API UClass* StaticClass<class UMyFlower>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoonFlorist_Source_MoonFlorist_MyFlower_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
