// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATADRIVEN_DDTypes_generated_h
#error "DDTypes.generated.h already included, missing '#pragma once' in DDTypes.h"
#endif
#define DATADRIVEN_DDTypes_generated_h

#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_18_SPARSE_DATA
#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_18_RPC_WRAPPERS
#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDDTypes(); \
	friend struct Z_Construct_UClass_UDDTypes_Statics; \
public: \
	DECLARE_CLASS(UDDTypes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataDriven"), NO_API) \
	DECLARE_SERIALIZER(UDDTypes)


#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUDDTypes(); \
	friend struct Z_Construct_UClass_UDDTypes_Statics; \
public: \
	DECLARE_CLASS(UDDTypes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataDriven"), NO_API) \
	DECLARE_SERIALIZER(UDDTypes)


#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDDTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDDTypes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDDTypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDDTypes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDDTypes(UDDTypes&&); \
	NO_API UDDTypes(const UDDTypes&); \
public:


#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDDTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDDTypes(UDDTypes&&); \
	NO_API UDDTypes(const UDDTypes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDDTypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDDTypes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDDTypes)


#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_18_PRIVATE_PROPERTY_OFFSET
#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_15_PROLOG
#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_18_PRIVATE_PROPERTY_OFFSET \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_18_SPARSE_DATA \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_18_RPC_WRAPPERS \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_18_INCLASS \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_18_PRIVATE_PROPERTY_OFFSET \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_18_SPARSE_DATA \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_18_INCLASS_NO_PURE_DECLS \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATADRIVEN_API UClass* StaticClass<class UDDTypes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h


#define FOREACH_ENUM_EAGREEMENTTYPE(op) \
	op(EAgreementType::SelfObject) \
	op(EAgreementType::OtherObject) \
	op(EAgreementType::ClassOtherObject) \
	op(EAgreementType::SelfClass) \
	op(EAgreementType::OtherClass) \
	op(EAgreementType::All) 

enum class EAgreementType : uint8;
template<> DATADRIVEN_API UEnum* StaticEnum<EAgreementType>();

#define FOREACH_ENUM_EBASEOBJECTSTATE(op) \
	op(EBaseObjectState::Active) \
	op(EBaseObjectState::Stable) \
	op(EBaseObjectState::Destory) 

enum class EBaseObjectState : uint8;
template<> DATADRIVEN_API UEnum* StaticEnum<EBaseObjectState>();

#define FOREACH_ENUM_EBASEOBJECTLIFE(op) \
	op(EBaseObjectLife::None) \
	op(EBaseObjectLife::Init) \
	op(EBaseObjectLife::Loading) \
	op(EBaseObjectLife::Register) \
	op(EBaseObjectLife::Enable) \
	op(EBaseObjectLife::Disable) \
	op(EBaseObjectLife::UnRegister) \
	op(EBaseObjectLife::UnLoading) 

enum class EBaseObjectLife : uint8;
template<> DATADRIVEN_API UEnum* StaticEnum<EBaseObjectLife>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
