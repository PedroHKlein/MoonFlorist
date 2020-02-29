// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMyFlower;
class UMyClientOrder;
#ifdef MOONFLORIST_MyBouquet_generated_h
#error "MyBouquet.generated.h already included, missing '#pragma once' in MyBouquet.h"
#endif
#define MOONFLORIST_MyBouquet_generated_h

#define MoonFlorist_Source_MoonFlorist_MyBouquet_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGradeBouquetWithoutMoney) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GradeBouquetWithoutMoney(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckFull) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CheckFull(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnFlower) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMyFlower**)Z_Param__Result=P_THIS->SpawnFlower(Z_Param__iType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearBouquet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearBouquet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetWorth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRow) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iRow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UMyFlower*>*)Z_Param__Result=P_THIS->GetRow(Z_Param__iRow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGradeBouquet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GradeBouquet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComColourCheck) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iCol); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ComColourCheck(Z_Param__iCol); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBaseColourCheck) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iCol); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BaseColourCheck(Z_Param__iCol); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveFromRow) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iRow); \
		P_GET_OBJECT(UMyFlower,Z_Param__Flower); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveFromRow(Z_Param__iRow,Z_Param__Flower); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToRow) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iRow); \
		P_GET_OBJECT(UMyFlower,Z_Param__Flower); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddToRow(Z_Param__iRow,Z_Param__Flower); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrOrder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMyClientOrder**)Z_Param__Result=P_THIS->GetCurrOrder(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrOrder) \
	{ \
		P_GET_OBJECT(UMyClientOrder,Z_Param__Order); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrOrder(Z_Param__Order); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_MyBouquet_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGradeBouquetWithoutMoney) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GradeBouquetWithoutMoney(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckFull) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CheckFull(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnFlower) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMyFlower**)Z_Param__Result=P_THIS->SpawnFlower(Z_Param__iType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearBouquet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearBouquet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetWorth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRow) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iRow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UMyFlower*>*)Z_Param__Result=P_THIS->GetRow(Z_Param__iRow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGradeBouquet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GradeBouquet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComColourCheck) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iCol); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ComColourCheck(Z_Param__iCol); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBaseColourCheck) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iCol); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BaseColourCheck(Z_Param__iCol); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveFromRow) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iRow); \
		P_GET_OBJECT(UMyFlower,Z_Param__Flower); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveFromRow(Z_Param__iRow,Z_Param__Flower); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToRow) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iRow); \
		P_GET_OBJECT(UMyFlower,Z_Param__Flower); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddToRow(Z_Param__iRow,Z_Param__Flower); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrOrder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMyClientOrder**)Z_Param__Result=P_THIS->GetCurrOrder(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrOrder) \
	{ \
		P_GET_OBJECT(UMyClientOrder,Z_Param__Order); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrOrder(Z_Param__Order); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_MyBouquet_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyBouquet(); \
	friend struct Z_Construct_UClass_UMyBouquet_Statics; \
public: \
	DECLARE_CLASS(UMyBouquet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(UMyBouquet)


#define MoonFlorist_Source_MoonFlorist_MyBouquet_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMyBouquet(); \
	friend struct Z_Construct_UClass_UMyBouquet_Statics; \
public: \
	DECLARE_CLASS(UMyBouquet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(UMyBouquet)


#define MoonFlorist_Source_MoonFlorist_MyBouquet_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyBouquet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyBouquet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyBouquet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyBouquet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyBouquet(UMyBouquet&&); \
	NO_API UMyBouquet(const UMyBouquet&); \
public:


#define MoonFlorist_Source_MoonFlorist_MyBouquet_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyBouquet(UMyBouquet&&); \
	NO_API UMyBouquet(const UMyBouquet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyBouquet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyBouquet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyBouquet)


#define MoonFlorist_Source_MoonFlorist_MyBouquet_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Order() { return STRUCT_OFFSET(UMyBouquet, Order); } \
	FORCEINLINE static uint32 __PPO__Row1() { return STRUCT_OFFSET(UMyBouquet, Row1); } \
	FORCEINLINE static uint32 __PPO__Row2() { return STRUCT_OFFSET(UMyBouquet, Row2); } \
	FORCEINLINE static uint32 __PPO__Row3() { return STRUCT_OFFSET(UMyBouquet, Row3); } \
	FORCEINLINE static uint32 __PPO__iScore() { return STRUCT_OFFSET(UMyBouquet, iScore); } \
	FORCEINLINE static uint32 __PPO__iMoney() { return STRUCT_OFFSET(UMyBouquet, iMoney); } \
	FORCEINLINE static uint32 __PPO__GoalSuccess() { return STRUCT_OFFSET(UMyBouquet, GoalSuccess); } \
	FORCEINLINE static uint32 __PPO__GoalFailure() { return STRUCT_OFFSET(UMyBouquet, GoalFailure); }


#define MoonFlorist_Source_MoonFlorist_MyBouquet_h_14_PROLOG
#define MoonFlorist_Source_MoonFlorist_MyBouquet_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_MyBouquet_h_17_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_MyBouquet_h_17_RPC_WRAPPERS \
	MoonFlorist_Source_MoonFlorist_MyBouquet_h_17_INCLASS \
	MoonFlorist_Source_MoonFlorist_MyBouquet_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoonFlorist_Source_MoonFlorist_MyBouquet_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_MyBouquet_h_17_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_MyBouquet_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_MyBouquet_h_17_INCLASS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_MyBouquet_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOONFLORIST_API UClass* StaticClass<class UMyBouquet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoonFlorist_Source_MoonFlorist_MyBouquet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
