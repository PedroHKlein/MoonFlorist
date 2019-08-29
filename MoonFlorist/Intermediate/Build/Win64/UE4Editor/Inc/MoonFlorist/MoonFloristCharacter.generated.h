// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOONFLORIST_MoonFloristCharacter_generated_h
#error "MoonFloristCharacter.generated.h already included, missing '#pragma once' in MoonFloristCharacter.h"
#endif
#define MOONFLORIST_MoonFloristCharacter_generated_h

#define MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_14_RPC_WRAPPERS
#define MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMoonFloristCharacter(); \
	friend struct Z_Construct_UClass_AMoonFloristCharacter_Statics; \
public: \
	DECLARE_CLASS(AMoonFloristCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(AMoonFloristCharacter)


#define MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMoonFloristCharacter(); \
	friend struct Z_Construct_UClass_AMoonFloristCharacter_Statics; \
public: \
	DECLARE_CLASS(AMoonFloristCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoonFlorist"), NO_API) \
	DECLARE_SERIALIZER(AMoonFloristCharacter)


#define MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_14_STANDARD_CONSTRUCTORS \
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


#define MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMoonFloristCharacter(AMoonFloristCharacter&&); \
	NO_API AMoonFloristCharacter(const AMoonFloristCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMoonFloristCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMoonFloristCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMoonFloristCharacter)


#define MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AMoonFloristCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AMoonFloristCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AMoonFloristCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AMoonFloristCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AMoonFloristCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AMoonFloristCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AMoonFloristCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AMoonFloristCharacter, L_MotionController); }


#define MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_11_PROLOG
#define MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_14_RPC_WRAPPERS \
	MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_14_INCLASS \
	MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_14_INCLASS_NO_PURE_DECLS \
	MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOONFLORIST_API UClass* StaticClass<class AMoonFloristCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoonFlorist_Source_MoonFlorist_MoonFloristCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
