// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAgreementType : uint8;
#ifdef DATADRIVEN_DDModule_generated_h
#error "DDModule.generated.h already included, missing '#pragma once' in DDModule.h"
#endif
#define DATADRIVEN_DDModule_generated_h

#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDModule_h_20_SPARSE_DATA
#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDModule_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisableObject); \
	DECLARE_FUNCTION(execEnableObject); \
	DECLARE_FUNCTION(execDestoryObject);


#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDModule_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisableObject); \
	DECLARE_FUNCTION(execEnableObject); \
	DECLARE_FUNCTION(execDestoryObject);


#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDModule_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDDModule(); \
	friend struct Z_Construct_UClass_UDDModule_Statics; \
public: \
	DECLARE_CLASS(UDDModule, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataDriven"), NO_API) \
	DECLARE_SERIALIZER(UDDModule)


#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDModule_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUDDModule(); \
	friend struct Z_Construct_UClass_UDDModule_Statics; \
public: \
	DECLARE_CLASS(UDDModule, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataDriven"), NO_API) \
	DECLARE_SERIALIZER(UDDModule)


#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDModule_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDDModule(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDDModule) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDDModule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDDModule); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDDModule(UDDModule&&); \
	NO_API UDDModule(const UDDModule&); \
public:


#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDModule_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDDModule(UDDModule&&); \
	NO_API UDDModule(const UDDModule&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDDModule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDDModule); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDDModule)


#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDModule_h_20_PRIVATE_PROPERTY_OFFSET
#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDModule_h_17_PROLOG
#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDModule_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDModule_h_20_PRIVATE_PROPERTY_OFFSET \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDModule_h_20_SPARSE_DATA \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDModule_h_20_RPC_WRAPPERS \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDModule_h_20_INCLASS \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDModule_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDModule_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDModule_h_20_PRIVATE_PROPERTY_OFFSET \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDModule_h_20_SPARSE_DATA \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDModule_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDModule_h_20_INCLASS_NO_PURE_DECLS \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDModule_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATADRIVEN_API UClass* StaticClass<class UDDModule>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDModule_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
