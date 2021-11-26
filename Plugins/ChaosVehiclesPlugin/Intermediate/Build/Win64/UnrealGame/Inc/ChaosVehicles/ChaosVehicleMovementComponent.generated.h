// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSVEHICLES_ChaosVehicleMovementComponent_generated_h
#error "ChaosVehicleMovementComponent.generated.h already included, missing '#pragma once' in ChaosVehicleMovementComponent.h"
#endif
#define CHAOSVEHICLES_ChaosVehicleMovementComponent_generated_h

#define HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_614_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics; \
	CHAOSVEHICLES_API static class UScriptStruct* StaticStruct();


template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<struct FVehicleThrustConfig>();

#define HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_543_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<struct FVehicleAerofoilConfig>();

#define HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_436_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<struct FVehicleInputRateConfig>();

#define HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_329_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics; \
	CHAOSVEHICLES_API static class UScriptStruct* StaticStruct();


template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<struct FVehicleStabilizeControlConfig>();

#define HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_237_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics; \
	CHAOSVEHICLES_API static class UScriptStruct* StaticStruct();


template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<struct FVehicleTargetRotationControlConfig>();

#define HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_167_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics; \
	CHAOSVEHICLES_API static class UScriptStruct* StaticStruct();


template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<struct FVehicleTorqueControlConfig>();

#define HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_106_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<struct FVehicleReplicatedState>();

#define HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_755_SPARSE_DATA
#define HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_755_RPC_WRAPPERS \
	virtual bool ServerUpdateState_Validate(float , float , float , float , int32 , float , float , float ); \
	virtual void ServerUpdateState_Implementation(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 InCurrentGear, float InRollInput, float InPitchInput, float InYawInput); \
 \
	DECLARE_FUNCTION(execServerUpdateState); \
	DECLARE_FUNCTION(execEnableSelfRighting); \
	DECLARE_FUNCTION(execIsParked); \
	DECLARE_FUNCTION(execGetSteeringInput); \
	DECLARE_FUNCTION(execGetHandbrakeInput); \
	DECLARE_FUNCTION(execGetBrakeInput); \
	DECLARE_FUNCTION(execGetThrottleInput); \
	DECLARE_FUNCTION(execGetForwardSpeedMPH); \
	DECLARE_FUNCTION(execGetForwardSpeed); \
	DECLARE_FUNCTION(execGetUseAutoGears); \
	DECLARE_FUNCTION(execGetTargetGear); \
	DECLARE_FUNCTION(execGetCurrentGear); \
	DECLARE_FUNCTION(execSetUseAutomaticGears); \
	DECLARE_FUNCTION(execSetTargetGear); \
	DECLARE_FUNCTION(execSetChangeDownInput); \
	DECLARE_FUNCTION(execSetChangeUpInput); \
	DECLARE_FUNCTION(execSetParked); \
	DECLARE_FUNCTION(execSetHandbrakeInput); \
	DECLARE_FUNCTION(execSetYawInput); \
	DECLARE_FUNCTION(execSetRollInput); \
	DECLARE_FUNCTION(execSetPitchInput); \
	DECLARE_FUNCTION(execSetSteeringInput); \
	DECLARE_FUNCTION(execSetBrakeInput); \
	DECLARE_FUNCTION(execDecreaseThrottleInput); \
	DECLARE_FUNCTION(execIncreaseThrottleInput); \
	DECLARE_FUNCTION(execSetThrottleInput);


#define HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_755_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdateState_Validate(float , float , float , float , int32 , float , float , float ); \
	virtual void ServerUpdateState_Implementation(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 InCurrentGear, float InRollInput, float InPitchInput, float InYawInput); \
 \
	DECLARE_FUNCTION(execServerUpdateState); \
	DECLARE_FUNCTION(execEnableSelfRighting); \
	DECLARE_FUNCTION(execIsParked); \
	DECLARE_FUNCTION(execGetSteeringInput); \
	DECLARE_FUNCTION(execGetHandbrakeInput); \
	DECLARE_FUNCTION(execGetBrakeInput); \
	DECLARE_FUNCTION(execGetThrottleInput); \
	DECLARE_FUNCTION(execGetForwardSpeedMPH); \
	DECLARE_FUNCTION(execGetForwardSpeed); \
	DECLARE_FUNCTION(execGetUseAutoGears); \
	DECLARE_FUNCTION(execGetTargetGear); \
	DECLARE_FUNCTION(execGetCurrentGear); \
	DECLARE_FUNCTION(execSetUseAutomaticGears); \
	DECLARE_FUNCTION(execSetTargetGear); \
	DECLARE_FUNCTION(execSetChangeDownInput); \
	DECLARE_FUNCTION(execSetChangeUpInput); \
	DECLARE_FUNCTION(execSetParked); \
	DECLARE_FUNCTION(execSetHandbrakeInput); \
	DECLARE_FUNCTION(execSetYawInput); \
	DECLARE_FUNCTION(execSetRollInput); \
	DECLARE_FUNCTION(execSetPitchInput); \
	DECLARE_FUNCTION(execSetSteeringInput); \
	DECLARE_FUNCTION(execSetBrakeInput); \
	DECLARE_FUNCTION(execDecreaseThrottleInput); \
	DECLARE_FUNCTION(execIncreaseThrottleInput); \
	DECLARE_FUNCTION(execSetThrottleInput);


#define HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_755_EVENT_PARMS \
	struct ChaosVehicleMovementComponent_eventServerUpdateState_Parms \
	{ \
		float InSteeringInput; \
		float InThrottleInput; \
		float InBrakeInput; \
		float InHandbrakeInput; \
		int32 InCurrentGear; \
		float InRollInput; \
		float InPitchInput; \
		float InYawInput; \
	};


#define HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_755_CALLBACK_WRAPPERS
#define HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_755_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UChaosVehicleMovementComponent, NO_API)


#define HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_755_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosVehicleMovementComponent(); \
	friend struct Z_Construct_UClass_UChaosVehicleMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UChaosVehicleMovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVehicles"), NO_API) \
	DECLARE_SERIALIZER(UChaosVehicleMovementComponent) \
	HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_755_ARCHIVESERIALIZER \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedState=NETFIELD_REP_START, \
		OverrideController, \
		NETFIELD_REP_END=OverrideController	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_755_INCLASS \
private: \
	static void StaticRegisterNativesUChaosVehicleMovementComponent(); \
	friend struct Z_Construct_UClass_UChaosVehicleMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UChaosVehicleMovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVehicles"), NO_API) \
	DECLARE_SERIALIZER(UChaosVehicleMovementComponent) \
	HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_755_ARCHIVESERIALIZER \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedState=NETFIELD_REP_START, \
		OverrideController, \
		NETFIELD_REP_END=OverrideController	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_755_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVehicleMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosVehicleMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVehicleMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVehicleMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaosVehicleMovementComponent(UChaosVehicleMovementComponent&&); \
	NO_API UChaosVehicleMovementComponent(const UChaosVehicleMovementComponent&); \
public:


#define HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_755_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVehicleMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaosVehicleMovementComponent(UChaosVehicleMovementComponent&&); \
	NO_API UChaosVehicleMovementComponent(const UChaosVehicleMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVehicleMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVehicleMovementComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosVehicleMovementComponent)


#define HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_755_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ReplicatedState() { return STRUCT_OFFSET(UChaosVehicleMovementComponent, ReplicatedState); } \
	FORCEINLINE static uint32 __PPO__RawSteeringInput() { return STRUCT_OFFSET(UChaosVehicleMovementComponent, RawSteeringInput); } \
	FORCEINLINE static uint32 __PPO__RawThrottleInput() { return STRUCT_OFFSET(UChaosVehicleMovementComponent, RawThrottleInput); } \
	FORCEINLINE static uint32 __PPO__RawBrakeInput() { return STRUCT_OFFSET(UChaosVehicleMovementComponent, RawBrakeInput); } \
	FORCEINLINE static uint32 __PPO__RawPitchInput() { return STRUCT_OFFSET(UChaosVehicleMovementComponent, RawPitchInput); } \
	FORCEINLINE static uint32 __PPO__RawRollInput() { return STRUCT_OFFSET(UChaosVehicleMovementComponent, RawRollInput); } \
	FORCEINLINE static uint32 __PPO__RawYawInput() { return STRUCT_OFFSET(UChaosVehicleMovementComponent, RawYawInput); } \
	FORCEINLINE static uint32 __PPO__SteeringInput() { return STRUCT_OFFSET(UChaosVehicleMovementComponent, SteeringInput); } \
	FORCEINLINE static uint32 __PPO__ThrottleInput() { return STRUCT_OFFSET(UChaosVehicleMovementComponent, ThrottleInput); } \
	FORCEINLINE static uint32 __PPO__BrakeInput() { return STRUCT_OFFSET(UChaosVehicleMovementComponent, BrakeInput); } \
	FORCEINLINE static uint32 __PPO__PitchInput() { return STRUCT_OFFSET(UChaosVehicleMovementComponent, PitchInput); } \
	FORCEINLINE static uint32 __PPO__RollInput() { return STRUCT_OFFSET(UChaosVehicleMovementComponent, RollInput); } \
	FORCEINLINE static uint32 __PPO__YawInput() { return STRUCT_OFFSET(UChaosVehicleMovementComponent, YawInput); } \
	FORCEINLINE static uint32 __PPO__HandbrakeInput() { return STRUCT_OFFSET(UChaosVehicleMovementComponent, HandbrakeInput); } \
	FORCEINLINE static uint32 __PPO__bRequiresControllerForInputs() { return STRUCT_OFFSET(UChaosVehicleMovementComponent, bRequiresControllerForInputs); } \
	FORCEINLINE static uint32 __PPO__IdleBrakeInput() { return STRUCT_OFFSET(UChaosVehicleMovementComponent, IdleBrakeInput); } \
	FORCEINLINE static uint32 __PPO__StopThreshold() { return STRUCT_OFFSET(UChaosVehicleMovementComponent, StopThreshold); } \
	FORCEINLINE static uint32 __PPO__WrongDirectionThreshold() { return STRUCT_OFFSET(UChaosVehicleMovementComponent, WrongDirectionThreshold); } \
	FORCEINLINE static uint32 __PPO__ThrottleInputRate() { return STRUCT_OFFSET(UChaosVehicleMovementComponent, ThrottleInputRate); } \
	FORCEINLINE static uint32 __PPO__BrakeInputRate() { return STRUCT_OFFSET(UChaosVehicleMovementComponent, BrakeInputRate); } \
	FORCEINLINE static uint32 __PPO__SteeringInputRate() { return STRUCT_OFFSET(UChaosVehicleMovementComponent, SteeringInputRate); } \
	FORCEINLINE static uint32 __PPO__HandbrakeInputRate() { return STRUCT_OFFSET(UChaosVehicleMovementComponent, HandbrakeInputRate); } \
	FORCEINLINE static uint32 __PPO__PitchInputRate() { return STRUCT_OFFSET(UChaosVehicleMovementComponent, PitchInputRate); } \
	FORCEINLINE static uint32 __PPO__RollInputRate() { return STRUCT_OFFSET(UChaosVehicleMovementComponent, RollInputRate); } \
	FORCEINLINE static uint32 __PPO__YawInputRate() { return STRUCT_OFFSET(UChaosVehicleMovementComponent, YawInputRate); } \
	FORCEINLINE static uint32 __PPO__OverrideController() { return STRUCT_OFFSET(UChaosVehicleMovementComponent, OverrideController); }


#define HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_750_PROLOG \
	HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_755_EVENT_PARMS


#define HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_755_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_755_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_755_SPARSE_DATA \
	HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_755_RPC_WRAPPERS \
	HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_755_CALLBACK_WRAPPERS \
	HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_755_INCLASS \
	HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_755_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_755_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_755_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_755_SPARSE_DATA \
	HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_755_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_755_CALLBACK_WRAPPERS \
	HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_755_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_755_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ChaosVehicleMovementComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSVEHICLES_API UClass* StaticClass<class UChaosVehicleMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h


#define FOREACH_ENUM_EVEHICLETHRUSTTYPE(op) \
	op(EVehicleThrustType::Fixed) \
	op(EVehicleThrustType::Wing) \
	op(EVehicleThrustType::Rudder) \
	op(EVehicleThrustType::Elevator) 

enum class EVehicleThrustType : uint8;
template<> CHAOSVEHICLES_API UEnum* StaticEnum<EVehicleThrustType>();

#define FOREACH_ENUM_EVEHICLEAEROFOILTYPE(op) \
	op(EVehicleAerofoilType::Fixed) \
	op(EVehicleAerofoilType::Wing) \
	op(EVehicleAerofoilType::Rudder) \
	op(EVehicleAerofoilType::Elevator) 

enum class EVehicleAerofoilType : uint8;
template<> CHAOSVEHICLES_API UEnum* StaticEnum<EVehicleAerofoilType>();

#define FOREACH_ENUM_EINPUTFUNCTIONTYPE(op) \
	op(EInputFunctionType::LinearFunction) \
	op(EInputFunctionType::SquaredFunction) \
	op(EInputFunctionType::CustomCurve) 

enum class EInputFunctionType : uint8;
template<> CHAOSVEHICLES_API UEnum* StaticEnum<EInputFunctionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
