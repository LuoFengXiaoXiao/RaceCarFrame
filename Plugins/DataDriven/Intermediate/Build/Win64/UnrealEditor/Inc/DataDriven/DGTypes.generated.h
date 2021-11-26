// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATADRIVEN_DGTypes_generated_h
#error "DGTypes.generated.h already included, missing '#pragma once' in DGTypes.h"
#endif
#define DATADRIVEN_DGTypes_generated_h

#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDGame_DGTypes_h_39_SPARSE_DATA
#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDGame_DGTypes_h_39_RPC_WRAPPERS
#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDGame_DGTypes_h_39_RPC_WRAPPERS_NO_PURE_DECLS
#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDGame_DGTypes_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDGTypes(); \
	friend struct Z_Construct_UClass_UDGTypes_Statics; \
public: \
	DECLARE_CLASS(UDGTypes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataDriven"), NO_API) \
	DECLARE_SERIALIZER(UDGTypes)


#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDGame_DGTypes_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUDGTypes(); \
	friend struct Z_Construct_UClass_UDGTypes_Statics; \
public: \
	DECLARE_CLASS(UDGTypes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataDriven"), NO_API) \
	DECLARE_SERIALIZER(UDGTypes)


#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDGame_DGTypes_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDGTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDGTypes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDGTypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDGTypes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDGTypes(UDGTypes&&); \
	NO_API UDGTypes(const UDGTypes&); \
public:


#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDGame_DGTypes_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDGTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDGTypes(UDGTypes&&); \
	NO_API UDGTypes(const UDGTypes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDGTypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDGTypes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDGTypes)


#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDGame_DGTypes_h_39_PRIVATE_PROPERTY_OFFSET
#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDGame_DGTypes_h_36_PROLOG
#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDGame_DGTypes_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDGame_DGTypes_h_39_PRIVATE_PROPERTY_OFFSET \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDGame_DGTypes_h_39_SPARSE_DATA \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDGame_DGTypes_h_39_RPC_WRAPPERS \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDGame_DGTypes_h_39_INCLASS \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDGame_DGTypes_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDGame_DGTypes_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDGame_DGTypes_h_39_PRIVATE_PROPERTY_OFFSET \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDGame_DGTypes_h_39_SPARSE_DATA \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDGame_DGTypes_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDGame_DGTypes_h_39_INCLASS_NO_PURE_DECLS \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDGame_DGTypes_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATADRIVEN_API UClass* StaticClass<class UDGTypes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDGame_DGTypes_h


#define FOREACH_ENUM_ERCMENUMODULE(op) \
	op(ERCMenuModule::Center) \
	op(ERCMenuModule::HUD) 

enum class ERCMenuModule : uint8;
template<> DATADRIVEN_API UEnum* StaticEnum<ERCMenuModule>();

#define FOREACH_ENUM_ERCGAMEMODULE(op) \
	op(ERCGameModule::Center) \
	op(ERCGameModule::HUD) \
	op(ERCGameModule::Player) 

enum class ERCGameModule : uint8;
template<> DATADRIVEN_API UEnum* StaticEnum<ERCGameModule>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
