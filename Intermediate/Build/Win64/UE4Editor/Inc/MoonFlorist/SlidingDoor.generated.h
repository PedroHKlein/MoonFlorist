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
struct FHitResult;
#ifdef MOONFLORIST_SlidingDoor_generated_h
#error "SlidingDoor.generated.h already included, missing '#pragma once' in SlidingDoor.h"
#endif
#define MOONFLORIST_SlidingDoor_generated_h

#define MoonFlorist_Source_MoonFlorist_SlidingDoor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_SlidingDoor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_SlidingDoor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASlidingDoor(); \
	friend struct Z_Construct_UClass_ASlidingDoor_Statics; \
public: \
	DECLARE_CLASS(ASlidingDoor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(ASlidingDoor)


#define MoonFlorist_Source_MoonFlorist_SlidingDoor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASlidingDoor(); \
	friend struct Z_Construct_UClass_ASlidingDoor_Statics; \
public: \
	DECLARE_CLASS(ASlidingDoor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(ASlidingDoor)


#define MoonFlorist_Source_MoonFlorist_SlidingDoor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASlidingDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASlidingDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASlidingDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASlidingDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASlidingDoor(ASlidingDoor&&); \
	NO_API ASlidingDoor(const ASlidingDoor&); \
public:


#define MoonFlorist_Source_MoonFlorist_SlidingDoor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASlidingDoor(ASlidingDoor&&); \
	NO_API ASlidingDoor(const ASlidingDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASlidingDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASlidingDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASlidingDoor)


#define MoonFlorist_Source_MoonFlorist_SlidingDoor_h_12_PRIVATE_PROPERTY_OFFSET
#define MoonFlorist_Source_MoonFlorist_SlidingDoor_h_9_PROLOG
#define MoonFlorist_Source_MoonFlorist_SlidingDoor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_SlidingDoor_h_12_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_SlidingDoor_h_12_RPC_WRAPPERS \
	MoonFlorist_Source_MoonFlorist_SlidingDoor_h_12_INCLASS \
	MoonFlorist_Source_MoonFlorist_SlidingDoor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoonFlorist_Source_MoonFlorist_SlidingDoor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_SlidingDoor_h_12_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_SlidingDoor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_SlidingDoor_h_12_INCLASS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_SlidingDoor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOONFLORIST_API UClass* StaticClass<class ASlidingDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoonFlorist_Source_MoonFlorist_SlidingDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
