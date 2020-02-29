// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AItem;
#ifdef MOONFLORIST_Storage_generated_h
#error "Storage.generated.h already included, missing '#pragma once' in Storage.h"
#endif
#define MOONFLORIST_Storage_generated_h

#define MoonFlorist_Source_MoonFlorist_Storage_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIncreaseStacks) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__Amount); \
		P_GET_OBJECT(AItem,Z_Param__Item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseStacks(Z_Param__Amount,Z_Param__Item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveItem) \
	{ \
		P_GET_OBJECT(AItem,Z_Param__Item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveItem(Z_Param__Item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddItem) \
	{ \
		P_GET_OBJECT(AItem,Z_Param__Item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddItem(Z_Param__Item); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_Storage_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIncreaseStacks) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__Amount); \
		P_GET_OBJECT(AItem,Z_Param__Item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseStacks(Z_Param__Amount,Z_Param__Item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveItem) \
	{ \
		P_GET_OBJECT(AItem,Z_Param__Item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveItem(Z_Param__Item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddItem) \
	{ \
		P_GET_OBJECT(AItem,Z_Param__Item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddItem(Z_Param__Item); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_Storage_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStorage(); \
	friend struct Z_Construct_UClass_AStorage_Statics; \
public: \
	DECLARE_CLASS(AStorage, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(AStorage)


#define MoonFlorist_Source_MoonFlorist_Storage_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAStorage(); \
	friend struct Z_Construct_UClass_AStorage_Statics; \
public: \
	DECLARE_CLASS(AStorage, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(AStorage)


#define MoonFlorist_Source_MoonFlorist_Storage_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStorage(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStorage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStorage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStorage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStorage(AStorage&&); \
	NO_API AStorage(const AStorage&); \
public:


#define MoonFlorist_Source_MoonFlorist_Storage_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStorage(AStorage&&); \
	NO_API AStorage(const AStorage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStorage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStorage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStorage)


#define MoonFlorist_Source_MoonFlorist_Storage_h_13_PRIVATE_PROPERTY_OFFSET
#define MoonFlorist_Source_MoonFlorist_Storage_h_10_PROLOG
#define MoonFlorist_Source_MoonFlorist_Storage_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_Storage_h_13_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_Storage_h_13_RPC_WRAPPERS \
	MoonFlorist_Source_MoonFlorist_Storage_h_13_INCLASS \
	MoonFlorist_Source_MoonFlorist_Storage_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoonFlorist_Source_MoonFlorist_Storage_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_Storage_h_13_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_Storage_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_Storage_h_13_INCLASS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_Storage_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOONFLORIST_API UClass* StaticClass<class AStorage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoonFlorist_Source_MoonFlorist_Storage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
