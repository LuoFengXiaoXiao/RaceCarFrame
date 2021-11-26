// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FWheeledSnaphotData;
class UChaosVehicleWheel;
struct FWheelStatus;
struct FWheelSnapshot;
struct FTransform;
struct FVector;
class UPhysicalMaterial;
#ifdef CHAOSVEHICLES_ChaosWheeledVehicleMovementComponent_generated_h
#error "ChaosWheeledVehicleMovementComponent.generated.h already included, missing '#pragma once' in ChaosWheeledVehicleMovementComponent.h"
#endif
#define CHAOSVEHICLES_ChaosWheeledVehicleMovementComponent_generated_h

#define Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_475_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosWheelSetup_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<struct FChaosWheelSetup>();

#define Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_408_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics; \
	CHAOSVEHICLES_API static class UScriptStruct* StaticStruct();


template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<struct FVehicleSteeringConfig>();

#define Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_278_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics; \
	CHAOSVEHICLES_API static class UScriptStruct* StaticStruct();


template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<struct FVehicleTransmissionConfig>();

#define Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_194_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics; \
	CHAOSVEHICLES_API static class UScriptStruct* StaticStruct();


template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<struct FVehicleEngineConfig>();

#define Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_159_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleDifferentialConfig_Statics; \
	CHAOSVEHICLES_API static class UScriptStruct* StaticStruct();


template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<struct FVehicleDifferentialConfig>();

#define Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWheelStatus_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<struct FWheelStatus>();

#define Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_601_SPARSE_DATA
#define Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_601_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetWheelMaxSteerAngle); \
	DECLARE_FUNCTION(execSetWheelHandbrakeTorque); \
	DECLARE_FUNCTION(execSetWheelMaxBrakeTorque); \
	DECLARE_FUNCTION(execSetWheelSlipGraphMultiplier); \
	DECLARE_FUNCTION(execSetWheelFrictionMultiplier); \
	DECLARE_FUNCTION(execSetWheelRadius); \
	DECLARE_FUNCTION(execSetAffectedByEngine); \
	DECLARE_FUNCTION(execSetAffectedBySteering); \
	DECLARE_FUNCTION(execSetAffectedByHandbrake); \
	DECLARE_FUNCTION(execSetAffectedByBrake); \
	DECLARE_FUNCTION(execSetABSEnabled); \
	DECLARE_FUNCTION(execSetTractionControlEnabled); \
	DECLARE_FUNCTION(execSetDifferentialFrontRearSplit); \
	DECLARE_FUNCTION(execSetDownforceCoefficient); \
	DECLARE_FUNCTION(execSetDragCoefficient); \
	DECLARE_FUNCTION(execSetMaxEngineTorque); \
	DECLARE_FUNCTION(execSetSnapshot); \
	DECLARE_FUNCTION(execGetSnapshot); \
	DECLARE_FUNCTION(execSetWheelClass); \
	DECLARE_FUNCTION(execEnableWheelFriction); \
	DECLARE_FUNCTION(execEnableSuspension); \
	DECLARE_FUNCTION(execEnableMechanicalSim); \
	DECLARE_FUNCTION(execGetWheelState); \
	DECLARE_FUNCTION(execMakeWheelSnapshot); \
	DECLARE_FUNCTION(execBreakWheelSnapshot); \
	DECLARE_FUNCTION(execMakeWheeledSnapshot); \
	DECLARE_FUNCTION(execBreakWheeledSnapshot); \
	DECLARE_FUNCTION(execMakeWheelStatus); \
	DECLARE_FUNCTION(execBreakWheelStatus); \
	DECLARE_FUNCTION(execGetNumWheels); \
	DECLARE_FUNCTION(execGetEngineMaxRotationSpeed); \
	DECLARE_FUNCTION(execGetEngineRotationSpeed);


#define Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_601_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetWheelMaxSteerAngle); \
	DECLARE_FUNCTION(execSetWheelHandbrakeTorque); \
	DECLARE_FUNCTION(execSetWheelMaxBrakeTorque); \
	DECLARE_FUNCTION(execSetWheelSlipGraphMultiplier); \
	DECLARE_FUNCTION(execSetWheelFrictionMultiplier); \
	DECLARE_FUNCTION(execSetWheelRadius); \
	DECLARE_FUNCTION(execSetAffectedByEngine); \
	DECLARE_FUNCTION(execSetAffectedBySteering); \
	DECLARE_FUNCTION(execSetAffectedByHandbrake); \
	DECLARE_FUNCTION(execSetAffectedByBrake); \
	DECLARE_FUNCTION(execSetABSEnabled); \
	DECLARE_FUNCTION(execSetTractionControlEnabled); \
	DECLARE_FUNCTION(execSetDifferentialFrontRearSplit); \
	DECLARE_FUNCTION(execSetDownforceCoefficient); \
	DECLARE_FUNCTION(execSetDragCoefficient); \
	DECLARE_FUNCTION(execSetMaxEngineTorque); \
	DECLARE_FUNCTION(execSetSnapshot); \
	DECLARE_FUNCTION(execGetSnapshot); \
	DECLARE_FUNCTION(execSetWheelClass); \
	DECLARE_FUNCTION(execEnableWheelFriction); \
	DECLARE_FUNCTION(execEnableSuspension); \
	DECLARE_FUNCTION(execEnableMechanicalSim); \
	DECLARE_FUNCTION(execGetWheelState); \
	DECLARE_FUNCTION(execMakeWheelSnapshot); \
	DECLARE_FUNCTION(execBreakWheelSnapshot); \
	DECLARE_FUNCTION(execMakeWheeledSnapshot); \
	DECLARE_FUNCTION(execBreakWheeledSnapshot); \
	DECLARE_FUNCTION(execMakeWheelStatus); \
	DECLARE_FUNCTION(execBreakWheelStatus); \
	DECLARE_FUNCTION(execGetNumWheels); \
	DECLARE_FUNCTION(execGetEngineMaxRotationSpeed); \
	DECLARE_FUNCTION(execGetEngineRotationSpeed);


#define Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_601_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UChaosWheeledVehicleMovementComponent, NO_API)


#define Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_601_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosWheeledVehicleMovementComponent(); \
	friend struct Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UChaosWheeledVehicleMovementComponent, UChaosVehicleMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVehicles"), NO_API) \
	DECLARE_SERIALIZER(UChaosWheeledVehicleMovementComponent) \
	Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_601_ARCHIVESERIALIZER


#define Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_601_INCLASS \
private: \
	static void StaticRegisterNativesUChaosWheeledVehicleMovementComponent(); \
	friend struct Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UChaosWheeledVehicleMovementComponent, UChaosVehicleMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVehicles"), NO_API) \
	DECLARE_SERIALIZER(UChaosWheeledVehicleMovementComponent) \
	Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_601_ARCHIVESERIALIZER


#define Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_601_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosWheeledVehicleMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosWheeledVehicleMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosWheeledVehicleMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosWheeledVehicleMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaosWheeledVehicleMovementComponent(UChaosWheeledVehicleMovementComponent&&); \
	NO_API UChaosWheeledVehicleMovementComponent(const UChaosWheeledVehicleMovementComponent&); \
public:


#define Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_601_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosWheeledVehicleMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaosWheeledVehicleMovementComponent(UChaosWheeledVehicleMovementComponent&&); \
	NO_API UChaosWheeledVehicleMovementComponent(const UChaosWheeledVehicleMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosWheeledVehicleMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosWheeledVehicleMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosWheeledVehicleMovementComponent)


#define Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_601_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_598_PROLOG
#define Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_601_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_601_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_601_SPARSE_DATA \
	Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_601_RPC_WRAPPERS \
	Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_601_INCLASS \
	Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_601_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_601_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_601_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_601_SPARSE_DATA \
	Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_601_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_601_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_601_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ChaosWheeledVehicleMovementComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSVEHICLES_API UClass* StaticClass<class UChaosWheeledVehicleMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h


#define FOREACH_ENUM_ESTEERINGTYPE(op) \
	op(ESteeringType::SingleAngle) \
	op(ESteeringType::AngleRatio) \
	op(ESteeringType::Ackermann) 

enum class ESteeringType : uint8;
template<> CHAOSVEHICLES_API UEnum* StaticEnum<ESteeringType>();

#define FOREACH_ENUM_EVEHICLEDIFFERENTIAL(op) \
	op(EVehicleDifferential::AllWheelDrive) \
	op(EVehicleDifferential::FrontWheelDrive) \
	op(EVehicleDifferential::RearWheelDrive) 

enum class EVehicleDifferential : uint8;
template<> CHAOSVEHICLES_API UEnum* StaticEnum<EVehicleDifferential>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
