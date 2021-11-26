// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RACECARFRAME_ReflectActor_generated_h
#error "ReflectActor.generated.h already included, missing '#pragma once' in ReflectActor.h"
#endif
#define RACECARFRAME_ReflectActor_generated_h

#define RaceCarFrame_Source_RaceCarFrame_ReflectActor_h_50_SPARSE_DATA
#define RaceCarFrame_Source_RaceCarFrame_ReflectActor_h_50_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWealthCall); \
	DECLARE_FUNCTION(execAcceptCall);


#define RaceCarFrame_Source_RaceCarFrame_ReflectActor_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWealthCall); \
	DECLARE_FUNCTION(execAcceptCall);


#define RaceCarFrame_Source_RaceCarFrame_ReflectActor_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAReflectActor(); \
	friend struct Z_Construct_UClass_AReflectActor_Statics; \
public: \
	DECLARE_CLASS(AReflectActor, ADDActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RaceCarFrame"), NO_API) \
	DECLARE_SERIALIZER(AReflectActor)


#define RaceCarFrame_Source_RaceCarFrame_ReflectActor_h_50_INCLASS \
private: \
	static void StaticRegisterNativesAReflectActor(); \
	friend struct Z_Construct_UClass_AReflectActor_Statics; \
public: \
	DECLARE_CLASS(AReflectActor, ADDActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RaceCarFrame"), NO_API) \
	DECLARE_SERIALIZER(AReflectActor)


#define RaceCarFrame_Source_RaceCarFrame_ReflectActor_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AReflectActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AReflectActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReflectActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReflectActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReflectActor(AReflectActor&&); \
	NO_API AReflectActor(const AReflectActor&); \
public:


#define RaceCarFrame_Source_RaceCarFrame_ReflectActor_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReflectActor(AReflectActor&&); \
	NO_API AReflectActor(const AReflectActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReflectActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReflectActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AReflectActor)


#define RaceCarFrame_Source_RaceCarFrame_ReflectActor_h_50_PRIVATE_PROPERTY_OFFSET
#define RaceCarFrame_Source_RaceCarFrame_ReflectActor_h_47_PROLOG
#define RaceCarFrame_Source_RaceCarFrame_ReflectActor_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RaceCarFrame_Source_RaceCarFrame_ReflectActor_h_50_PRIVATE_PROPERTY_OFFSET \
	RaceCarFrame_Source_RaceCarFrame_ReflectActor_h_50_SPARSE_DATA \
	RaceCarFrame_Source_RaceCarFrame_ReflectActor_h_50_RPC_WRAPPERS \
	RaceCarFrame_Source_RaceCarFrame_ReflectActor_h_50_INCLASS \
	RaceCarFrame_Source_RaceCarFrame_ReflectActor_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RaceCarFrame_Source_RaceCarFrame_ReflectActor_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RaceCarFrame_Source_RaceCarFrame_ReflectActor_h_50_PRIVATE_PROPERTY_OFFSET \
	RaceCarFrame_Source_RaceCarFrame_ReflectActor_h_50_SPARSE_DATA \
	RaceCarFrame_Source_RaceCarFrame_ReflectActor_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	RaceCarFrame_Source_RaceCarFrame_ReflectActor_h_50_INCLASS_NO_PURE_DECLS \
	RaceCarFrame_Source_RaceCarFrame_ReflectActor_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RACECARFRAME_API UClass* StaticClass<class AReflectActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RaceCarFrame_Source_RaceCarFrame_ReflectActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
