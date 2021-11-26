// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATADRIVEN_DDMM_generated_h
#error "DDMM.generated.h already included, missing '#pragma once' in DDMM.h"
#endif
#define DATADRIVEN_DDMM_generated_h

#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_18_SPARSE_DATA
#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_18_RPC_WRAPPERS
#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATADRIVEN_API UDDMM(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDDMM) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATADRIVEN_API, UDDMM); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDDMM); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DATADRIVEN_API UDDMM(UDDMM&&); \
	DATADRIVEN_API UDDMM(const UDDMM&); \
public:


#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATADRIVEN_API UDDMM(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DATADRIVEN_API UDDMM(UDDMM&&); \
	DATADRIVEN_API UDDMM(const UDDMM&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATADRIVEN_API, UDDMM); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDDMM); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDDMM)


#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDDMM(); \
	friend struct Z_Construct_UClass_UDDMM_Statics; \
public: \
	DECLARE_CLASS(UDDMM, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DataDriven"), DATADRIVEN_API) \
	DECLARE_SERIALIZER(UDDMM)


#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_18_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_18_GENERATED_UINTERFACE_BODY() \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_18_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_18_GENERATED_UINTERFACE_BODY() \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDDMM() {} \
public: \
	typedef UDDMM UClassType; \
	typedef IDDMM ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_18_INCLASS_IINTERFACE \
protected: \
	virtual ~IDDMM() {} \
public: \
	typedef UDDMM UClassType; \
	typedef IDDMM ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_15_PROLOG
#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_18_SPARSE_DATA \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_18_RPC_WRAPPERS \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_18_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_18_SPARSE_DATA \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATADRIVEN_API UClass* StaticClass<class UDDMM>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RaceCarFrame_Plugins_DataDriven_Source_DataDriven_Public_DDCore_DDMM_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
