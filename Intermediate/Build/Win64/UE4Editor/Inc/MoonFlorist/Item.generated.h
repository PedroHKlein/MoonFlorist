// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
class UTexture2D;
#ifdef MOONFLORIST_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define MOONFLORIST_Item_generated_h

#define MoonFlorist_Source_MoonFlorist_Item_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMesh) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param__Mesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMesh(Z_Param__Mesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIcon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=P_THIS->GetIcon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIcon) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param__Icon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIcon(Z_Param__Icon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStacks) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetStacks(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStacks) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStacks(Z_Param__Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPrice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPrice(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPrice) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPrice(Z_Param__Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param__Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetName(Z_Param__Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EItemType>*)Z_Param__Result=P_THIS->GetType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetItemType) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param__ItemType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetItemType(EItemType(Z_Param__ItemType)); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_Item_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMesh) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param__Mesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMesh(Z_Param__Mesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIcon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=P_THIS->GetIcon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIcon) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param__Icon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIcon(Z_Param__Icon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStacks) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetStacks(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStacks) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStacks(Z_Param__Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPrice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPrice(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPrice) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPrice(Z_Param__Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param__Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetName(Z_Param__Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EItemType>*)Z_Param__Result=P_THIS->GetType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetItemType) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param__ItemType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetItemType(EItemType(Z_Param__ItemType)); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_Item_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(AItem)


#define MoonFlorist_Source_MoonFlorist_Item_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(AItem)


#define MoonFlorist_Source_MoonFlorist_Item_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public:


#define MoonFlorist_Source_MoonFlorist_Item_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItem)


#define MoonFlorist_Source_MoonFlorist_Item_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ItemType() { return STRUCT_OFFSET(AItem, ItemType); } \
	FORCEINLINE static uint32 __PPO__Name() { return STRUCT_OFFSET(AItem, Name); } \
	FORCEINLINE static uint32 __PPO__Price() { return STRUCT_OFFSET(AItem, Price); } \
	FORCEINLINE static uint32 __PPO__Stacks() { return STRUCT_OFFSET(AItem, Stacks); } \
	FORCEINLINE static uint32 __PPO__Icon() { return STRUCT_OFFSET(AItem, Icon); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AItem, Mesh); }


#define MoonFlorist_Source_MoonFlorist_Item_h_22_PROLOG
#define MoonFlorist_Source_MoonFlorist_Item_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_Item_h_25_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_Item_h_25_RPC_WRAPPERS \
	MoonFlorist_Source_MoonFlorist_Item_h_25_INCLASS \
	MoonFlorist_Source_MoonFlorist_Item_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoonFlorist_Source_MoonFlorist_Item_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_Item_h_25_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_Item_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_Item_h_25_INCLASS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_Item_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOONFLORIST_API UClass* StaticClass<class AItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoonFlorist_Source_MoonFlorist_Item_h


#define FOREACH_ENUM_EITEMTYPE(op) \
	op(IT_Flower) \
	op(IT_Seed) \
	op(IT_Bouquet) \
	op(IT_Fertilizer) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
