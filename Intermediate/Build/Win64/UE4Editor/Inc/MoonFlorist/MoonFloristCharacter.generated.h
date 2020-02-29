// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef MOONFLORIST_MoonFloristCharacter_generated_h
#error "MoonFloristCharacter.generated.h already included, missing '#pragma once' in MoonFloristCharacter.h"
#endif
#define MOONFLORIST_MoonFloristCharacter_generated_h

#define MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDetectInteraction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DetectInteraction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRaycastCheck) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FHitResult*)Z_Param__Result=P_THIS->RaycastCheck(); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDetectInteraction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DetectInteraction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRaycastCheck) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FHitResult*)Z_Param__Result=P_THIS->RaycastCheck(); \
		P_NATIVE_END; \
	}


#define MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMoonFloristCharacter(); \
	friend struct Z_Construct_UClass_AMoonFloristCharacter_Statics; \
public: \
	DECLARE_CLASS(AMoonFloristCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(AMoonFloristCharacter)


#define MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMoonFloristCharacter(); \
	friend struct Z_Construct_UClass_AMoonFloristCharacter_Statics; \
public: \
	DECLARE_CLASS(AMoonFloristCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(AMoonFloristCharacter)


#define MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMoonFloristCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMoonFloristCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMoonFloristCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMoonFloristCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMoonFloristCharacter(AMoonFloristCharacter&&); \
	NO_API AMoonFloristCharacter(const AMoonFloristCharacter&); \
public:


#define MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMoonFloristCharacter(AMoonFloristCharacter&&); \
	NO_API AMoonFloristCharacter(const AMoonFloristCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMoonFloristCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMoonFloristCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMoonFloristCharacter)


#define MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AMoonFloristCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AMoonFloristCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__BaseTurnRate() { return STRUCT_OFFSET(AMoonFloristCharacter, BaseTurnRate); } \
	FORCEINLINE static uint32 __PPO__BaseLookUpRate() { return STRUCT_OFFSET(AMoonFloristCharacter, BaseLookUpRate); }


#define MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_13_PROLOG
#define MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_16_RPC_WRAPPERS \
	MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_16_INCLASS \
	MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_16_INCLASS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOONFLORIST_API UClass* StaticClass<class AMoonFloristCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
