// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RACECARFRAME_RaceCarFramePawn_generated_h
#error "RaceCarFramePawn.generated.h already included, missing '#pragma once' in RaceCarFramePawn.h"
#endif
#define RACECARFRAME_RaceCarFramePawn_generated_h

#define RaceCarFrame_Source_RaceCarFrame_RaceCarFramePawn_h_21_SPARSE_DATA
#define RaceCarFrame_Source_RaceCarFrame_RaceCarFramePawn_h_21_RPC_WRAPPERS
#define RaceCarFrame_Source_RaceCarFrame_RaceCarFramePawn_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define RaceCarFrame_Source_RaceCarFrame_RaceCarFramePawn_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARaceCarFramePawn(); \
	friend struct Z_Construct_UClass_ARaceCarFramePawn_Statics; \
public: \
	DECLARE_CLASS(ARaceCarFramePawn, AWheeledVehiclePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RaceCarFrame"), NO_API) \
	DECLARE_SERIALIZER(ARaceCarFramePawn)


#define RaceCarFrame_Source_RaceCarFrame_RaceCarFramePawn_h_21_INCLASS \
private: \
	static void StaticRegisterNativesARaceCarFramePawn(); \
	friend struct Z_Construct_UClass_ARaceCarFramePawn_Statics; \
public: \
	DECLARE_CLASS(ARaceCarFramePawn, AWheeledVehiclePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RaceCarFrame"), NO_API) \
	DECLARE_SERIALIZER(ARaceCarFramePawn)


#define RaceCarFrame_Source_RaceCarFrame_RaceCarFramePawn_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARaceCarFramePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARaceCarFramePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARaceCarFramePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARaceCarFramePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARaceCarFramePawn(ARaceCarFramePawn&&); \
	NO_API ARaceCarFramePawn(const ARaceCarFramePawn&); \
public:


#define RaceCarFrame_Source_RaceCarFrame_RaceCarFramePawn_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARaceCarFramePawn(ARaceCarFramePawn&&); \
	NO_API ARaceCarFramePawn(const ARaceCarFramePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARaceCarFramePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARaceCarFramePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARaceCarFramePawn)


#define RaceCarFrame_Source_RaceCarFrame_RaceCarFramePawn_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ARaceCarFramePawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ARaceCarFramePawn, Camera); } \
	FORCEINLINE static uint32 __PPO__InternalCameraBase() { return STRUCT_OFFSET(ARaceCarFramePawn, InternalCameraBase); } \
	FORCEINLINE static uint32 __PPO__InternalCamera() { return STRUCT_OFFSET(ARaceCarFramePawn, InternalCamera); } \
	FORCEINLINE static uint32 __PPO__InCarSpeed() { return STRUCT_OFFSET(ARaceCarFramePawn, InCarSpeed); } \
	FORCEINLINE static uint32 __PPO__InCarGear() { return STRUCT_OFFSET(ARaceCarFramePawn, InCarGear); } \
	FORCEINLINE static uint32 __PPO__EngineSoundComponent() { return STRUCT_OFFSET(ARaceCarFramePawn, EngineSoundComponent); }


#define RaceCarFrame_Source_RaceCarFrame_RaceCarFramePawn_h_18_PROLOG
#define RaceCarFrame_Source_RaceCarFrame_RaceCarFramePawn_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RaceCarFrame_Source_RaceCarFrame_RaceCarFramePawn_h_21_PRIVATE_PROPERTY_OFFSET \
	RaceCarFrame_Source_RaceCarFrame_RaceCarFramePawn_h_21_SPARSE_DATA \
	RaceCarFrame_Source_RaceCarFrame_RaceCarFramePawn_h_21_RPC_WRAPPERS \
	RaceCarFrame_Source_RaceCarFrame_RaceCarFramePawn_h_21_INCLASS \
	RaceCarFrame_Source_RaceCarFrame_RaceCarFramePawn_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RaceCarFrame_Source_RaceCarFrame_RaceCarFramePawn_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RaceCarFrame_Source_RaceCarFrame_RaceCarFramePawn_h_21_PRIVATE_PROPERTY_OFFSET \
	RaceCarFrame_Source_RaceCarFrame_RaceCarFramePawn_h_21_SPARSE_DATA \
	RaceCarFrame_Source_RaceCarFrame_RaceCarFramePawn_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	RaceCarFrame_Source_RaceCarFrame_RaceCarFramePawn_h_21_INCLASS_NO_PURE_DECLS \
	RaceCarFrame_Source_RaceCarFrame_RaceCarFramePawn_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RACECARFRAME_API UClass* StaticClass<class ARaceCarFramePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RaceCarFrame_Source_RaceCarFrame_RaceCarFramePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
