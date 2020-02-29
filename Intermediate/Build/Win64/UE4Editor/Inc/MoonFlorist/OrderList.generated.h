// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOONFLORIST_OrderList_generated_h
#error "OrderList.generated.h already included, missing '#pragma once' in OrderList.h"
#endif
#define MOONFLORIST_OrderList_generated_h

#define MoonFlorist_Source_MoonFlorist_OrderList_h_12_RPC_WRAPPERS
#define MoonFlorist_Source_MoonFlorist_OrderList_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MoonFlorist_Source_MoonFlorist_OrderList_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOrderList(); \
	friend struct Z_Construct_UClass_AOrderList_Statics; \
public: \
	DECLARE_CLASS(AOrderList, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(AOrderList)


#define MoonFlorist_Source_MoonFlorist_OrderList_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAOrderList(); \
	friend struct Z_Construct_UClass_AOrderList_Statics; \
public: \
	DECLARE_CLASS(AOrderList, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(AOrderList)


#define MoonFlorist_Source_MoonFlorist_OrderList_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOrderList(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOrderList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOrderList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOrderList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOrderList(AOrderList&&); \
	NO_API AOrderList(const AOrderList&); \
public:


#define MoonFlorist_Source_MoonFlorist_OrderList_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOrderList(AOrderList&&); \
	NO_API AOrderList(const AOrderList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOrderList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOrderList); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOrderList)


#define MoonFlorist_Source_MoonFlorist_OrderList_h_12_PRIVATE_PROPERTY_OFFSET
#define MoonFlorist_Source_MoonFlorist_OrderList_h_9_PROLOG
#define MoonFlorist_Source_MoonFlorist_OrderList_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_OrderList_h_12_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_OrderList_h_12_RPC_WRAPPERS \
	MoonFlorist_Source_MoonFlorist_OrderList_h_12_INCLASS \
	MoonFlorist_Source_MoonFlorist_OrderList_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoonFlorist_Source_MoonFlorist_OrderList_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_OrderList_h_12_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_OrderList_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_OrderList_h_12_INCLASS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_OrderList_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOONFLORIST_API UClass* StaticClass<class AOrderList>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoonFlorist_Source_MoonFlorist_OrderList_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
