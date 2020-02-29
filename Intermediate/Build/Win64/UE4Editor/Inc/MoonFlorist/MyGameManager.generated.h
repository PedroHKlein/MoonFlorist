// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMyClient;
class AMyGoalManager;
class UMyBouquet;
class UMyClientOrder;
class AMyGameManager;
#ifdef MOONFLORIST_MyGameManager_generated_h
#error "MyGameManager.generated.h already included, missing '#pragma once' in MyGameManager.h"
#endif
#define MOONFLORIST_MyGameManager_generated_h

#define MoonFlorist_Source_MoonFlorist_MyGameManager_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrClient) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMyClient**)Z_Param__Result=P_THIS->GetCurrClient(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetLastBouquetWorth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->getLastBouquetWorth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetLastBouquetWorth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setLastBouquetWorth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGoalList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMyGoalManager**)Z_Param__Result=P_THIS->GetGoalList(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCompleteOrder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CompleteOrder(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMoney) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iMoolah); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMoney(Z_Param__iMoolah); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMoney) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMoney(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBouquet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMyBouquet**)Z_Param__Result=P_THIS->GetBouquet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOrder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMyClientOrder**)Z_Param__Result=P_THIS->GetOrder(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddMoney) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iMoolah); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddMoney(Z_Param__iMoolah); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuySeed) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BuySeed(Z_Param__iID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTest) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_delta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Test(Z_Param_delta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNewBouquet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NewBouquet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNewClient) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NewClient(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execinit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->init(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMyGameManager**)Z_Param__Result=P_THIS->GetInstance(); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_MyGameManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrClient) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMyClient**)Z_Param__Result=P_THIS->GetCurrClient(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetLastBouquetWorth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->getLastBouquetWorth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetLastBouquetWorth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setLastBouquetWorth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGoalList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMyGoalManager**)Z_Param__Result=P_THIS->GetGoalList(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCompleteOrder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CompleteOrder(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMoney) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iMoolah); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMoney(Z_Param__iMoolah); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMoney) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMoney(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBouquet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMyBouquet**)Z_Param__Result=P_THIS->GetBouquet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOrder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMyClientOrder**)Z_Param__Result=P_THIS->GetOrder(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddMoney) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iMoolah); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddMoney(Z_Param__iMoolah); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuySeed) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__iID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BuySeed(Z_Param__iID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTest) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_delta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Test(Z_Param_delta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNewBouquet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NewBouquet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNewClient) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NewClient(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execinit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->init(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMyGameManager**)Z_Param__Result=P_THIS->GetInstance(); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_MyGameManager_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyGameManager(); \
	friend struct Z_Construct_UClass_AMyGameManager_Statics; \
public: \
	DECLARE_CLASS(AMyGameManager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(AMyGameManager)


#define MoonFlorist_Source_MoonFlorist_MyGameManager_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAMyGameManager(); \
	friend struct Z_Construct_UClass_AMyGameManager_Statics; \
public: \
	DECLARE_CLASS(AMyGameManager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(AMyGameManager)


#define MoonFlorist_Source_MoonFlorist_MyGameManager_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameManager(AMyGameManager&&); \
	NO_API AMyGameManager(const AMyGameManager&); \
public:


#define MoonFlorist_Source_MoonFlorist_MyGameManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameManager(AMyGameManager&&); \
	NO_API AMyGameManager(const AMyGameManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyGameManager)


#define MoonFlorist_Source_MoonFlorist_MyGameManager_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GoalLists() { return STRUCT_OFFSET(AMyGameManager, GoalLists); } \
	FORCEINLINE static uint32 __PPO__ClientList() { return STRUCT_OFFSET(AMyGameManager, ClientList); } \
	FORCEINLINE static uint32 __PPO__CurrClient() { return STRUCT_OFFSET(AMyGameManager, CurrClient); } \
	FORCEINLINE static uint32 __PPO__CurrentClient() { return STRUCT_OFFSET(AMyGameManager, CurrentClient); } \
	FORCEINLINE static uint32 __PPO__CurrentBouquet() { return STRUCT_OFFSET(AMyGameManager, CurrentBouquet); } \
	FORCEINLINE static uint32 __PPO__fTimeToWait() { return STRUCT_OFFSET(AMyGameManager, fTimeToWait); } \
	FORCEINLINE static uint32 __PPO__fCurrTime() { return STRUCT_OFFSET(AMyGameManager, fCurrTime); } \
	FORCEINLINE static uint32 __PPO__iMoney() { return STRUCT_OFFSET(AMyGameManager, iMoney); } \
	FORCEINLINE static uint32 __PPO__Instance() { return STRUCT_OFFSET(AMyGameManager, Instance); } \
	FORCEINLINE static uint32 __PPO__Seeds() { return STRUCT_OFFSET(AMyGameManager, Seeds); } \
	FORCEINLINE static uint32 __PPO__iLastBoquetWorth() { return STRUCT_OFFSET(AMyGameManager, iLastBoquetWorth); } \
	FORCEINLINE static uint32 __PPO__EmailLists() { return STRUCT_OFFSET(AMyGameManager, EmailLists); }


#define MoonFlorist_Source_MoonFlorist_MyGameManager_h_15_PROLOG
#define MoonFlorist_Source_MoonFlorist_MyGameManager_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_MyGameManager_h_18_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_MyGameManager_h_18_RPC_WRAPPERS \
	MoonFlorist_Source_MoonFlorist_MyGameManager_h_18_INCLASS \
	MoonFlorist_Source_MoonFlorist_MyGameManager_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoonFlorist_Source_MoonFlorist_MyGameManager_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_MyGameManager_h_18_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_MyGameManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_MyGameManager_h_18_INCLASS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_MyGameManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOONFLORIST_API UClass* StaticClass<class AMyGameManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoonFlorist_Source_MoonFlorist_MyGameManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
