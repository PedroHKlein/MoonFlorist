// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef MOONFLORIST_MoonFloristProjectile_generated_h
#error "MoonFloristProjectile.generated.h already included, missing '#pragma once' in MoonFloristProjectile.h"
#endif
#define MOONFLORIST_MoonFloristProjectile_generated_h

#define MoonFlorist_Source_MoonFlorist_MoonFloristProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_MoonFloristProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_MoonFloristProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMoonFloristProjectile(); \
	friend struct Z_Construct_UClass_AMoonFloristProjectile_Statics; \
public: \
	DECLARE_CLASS(AMoonFloristProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(AMoonFloristProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MoonFlorist_Source_MoonFlorist_MoonFloristProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMoonFloristProjectile(); \
	friend struct Z_Construct_UClass_AMoonFloristProjectile_Statics; \
public: \
	DECLARE_CLASS(AMoonFloristProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(AMoonFloristProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MoonFlorist_Source_MoonFlorist_MoonFloristProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMoonFloristProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMoonFloristProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMoonFloristProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMoonFloristProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMoonFloristProjectile(AMoonFloristProjectile&&); \
	NO_API AMoonFloristProjectile(const AMoonFloristProjectile&); \
public:


#define MoonFlorist_Source_MoonFlorist_MoonFloristProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMoonFloristProjectile(AMoonFloristProjectile&&); \
	NO_API AMoonFloristProjectile(const AMoonFloristProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMoonFloristProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMoonFloristProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMoonFloristProjectile)


#define MoonFlorist_Source_MoonFlorist_MoonFloristProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AMoonFloristProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AMoonFloristProjectile, ProjectileMovement); }


#define MoonFlorist_Source_MoonFlorist_MoonFloristProjectile_h_9_PROLOG
#define MoonFlorist_Source_MoonFlorist_MoonFloristProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_MoonFloristProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_MoonFloristProjectile_h_12_RPC_WRAPPERS \
	MoonFlorist_Source_MoonFlorist_MoonFloristProjectile_h_12_INCLASS \
	MoonFlorist_Source_MoonFlorist_MoonFloristProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoonFlorist_Source_MoonFlorist_MoonFloristProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_MoonFloristProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_MoonFloristProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_MoonFloristProjectile_h_12_INCLASS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_MoonFloristProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOONFLORIST_API UClass* StaticClass<class AMoonFloristProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoonFlorist_Source_MoonFlorist_MoonFloristProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
