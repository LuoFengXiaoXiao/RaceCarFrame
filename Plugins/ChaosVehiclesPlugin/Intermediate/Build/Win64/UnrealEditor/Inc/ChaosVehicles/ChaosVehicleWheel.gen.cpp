// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosVehicles/Public/ChaosVehicleWheel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosVehicleWheel() {}
// Cross Module References
	CHAOSVEHICLES_API UEnum* Z_Construct_UEnum_ChaosVehicles_EAxleType();
	UPackage* Z_Construct_UPackage__Script_ChaosVehicles();
	CHAOSVEHICLES_API UEnum* Z_Construct_UEnum_ChaosVehicles_ESweepType();
	CHAOSVEHICLES_API UEnum* Z_Construct_UEnum_ChaosVehicles_ESweepShape();
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleWheel_NoRegister();
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleWheel();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_NoRegister();
// End Cross Module References
	static UEnum* EAxleType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ChaosVehicles_EAxleType, Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("EAxleType"));
		}
		return Singleton;
	}
	template<> CHAOSVEHICLES_API UEnum* StaticEnum<EAxleType>()
	{
		return EAxleType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAxleType(EAxleType_StaticEnum, TEXT("/Script/ChaosVehicles"), TEXT("EAxleType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ChaosVehicles_EAxleType_Hash() { return 2094641034U; }
	UEnum* Z_Construct_UEnum_ChaosVehicles_EAxleType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ChaosVehicles();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAxleType"), 0, Get_Z_Construct_UEnum_ChaosVehicles_EAxleType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAxleType::Undefined", (int64)EAxleType::Undefined },
				{ "EAxleType::Front", (int64)EAxleType::Front },
				{ "EAxleType::Rear", (int64)EAxleType::Rear },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Front.Name", "EAxleType::Front" },
				{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
				{ "Rear.Name", "EAxleType::Rear" },
				{ "Undefined.Name", "EAxleType::Undefined" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ChaosVehicles,
				nullptr,
				"EAxleType",
				"EAxleType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESweepType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ChaosVehicles_ESweepType, Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("ESweepType"));
		}
		return Singleton;
	}
	template<> CHAOSVEHICLES_API UEnum* StaticEnum<ESweepType>()
	{
		return ESweepType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESweepType(ESweepType_StaticEnum, TEXT("/Script/ChaosVehicles"), TEXT("ESweepType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ChaosVehicles_ESweepType_Hash() { return 2208350239U; }
	UEnum* Z_Construct_UEnum_ChaosVehicles_ESweepType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ChaosVehicles();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESweepType"), 0, Get_Z_Construct_UEnum_ChaosVehicles_ESweepType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESweepType::SimpleSweep", (int64)ESweepType::SimpleSweep },
				{ "ESweepType::ComplexSweep", (int64)ESweepType::ComplexSweep },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ComplexSweep.Comment", "/** Sweeps against complex geometry only */" },
				{ "ComplexSweep.DisplayName", "ComplexSweep" },
				{ "ComplexSweep.Name", "ESweepType::ComplexSweep" },
				{ "ComplexSweep.ToolTip", "Sweeps against complex geometry only" },
				{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
				{ "SimpleSweep.Comment", "/** Sweeps against simple geometry only */" },
				{ "SimpleSweep.DisplayName", "SimpleSweep" },
				{ "SimpleSweep.Name", "ESweepType::SimpleSweep" },
				{ "SimpleSweep.ToolTip", "Sweeps against simple geometry only" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ChaosVehicles,
				nullptr,
				"ESweepType",
				"ESweepType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESweepShape_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ChaosVehicles_ESweepShape, Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("ESweepShape"));
		}
		return Singleton;
	}
	template<> CHAOSVEHICLES_API UEnum* StaticEnum<ESweepShape>()
	{
		return ESweepShape_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESweepShape(ESweepShape_StaticEnum, TEXT("/Script/ChaosVehicles"), TEXT("ESweepShape"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ChaosVehicles_ESweepShape_Hash() { return 1235694946U; }
	UEnum* Z_Construct_UEnum_ChaosVehicles_ESweepShape()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ChaosVehicles();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESweepShape"), 0, Get_Z_Construct_UEnum_ChaosVehicles_ESweepShape_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESweepShape::Raycast", (int64)ESweepShape::Raycast },
				{ "ESweepShape::Spherecast", (int64)ESweepShape::Spherecast },
				{ "ESweepShape::Shapecast", (int64)ESweepShape::Shapecast },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
				{ "Raycast.Comment", "/** Use ray to determine suspension length to ground - fastest */" },
				{ "Raycast.DisplayName", "Raycast" },
				{ "Raycast.Name", "ESweepShape::Raycast" },
				{ "Raycast.ToolTip", "Use ray to determine suspension length to ground - fastest" },
				{ "Shapecast.Comment", "/** Use wheel collision shape to determine suspension length to ground - Slowest */" },
				{ "Shapecast.DisplayName", "Shapecast" },
				{ "Shapecast.Name", "ESweepShape::Shapecast" },
				{ "Shapecast.ToolTip", "Use wheel collision shape to determine suspension length to ground - Slowest" },
				{ "Spherecast.Comment", "/** Use sphere to determine suspension length to ground */" },
				{ "Spherecast.DisplayName", "Spherecast" },
				{ "Spherecast.Name", "ESweepShape::Spherecast" },
				{ "Spherecast.ToolTip", "Use sphere to determine suspension length to ground" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ChaosVehicles,
				nullptr,
				"ESweepShape",
				"ESweepShape",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UChaosVehicleWheel::execGetAxleType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAxleType*)Z_Param__Result=P_THIS->GetAxleType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleWheel::execIsInAir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInAir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleWheel::execGetWheelAngularVelocity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWheelAngularVelocity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleWheel::execGetWheelRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWheelRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleWheel::execGetSuspensionOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSuspensionOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleWheel::execGetRotationAngle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRotationAngle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleWheel::execGetSteerAngle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSteerAngle();
		P_NATIVE_END;
	}
	void UChaosVehicleWheel::StaticRegisterNativesUChaosVehicleWheel()
	{
		UClass* Class = UChaosVehicleWheel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAxleType", &UChaosVehicleWheel::execGetAxleType },
			{ "GetRotationAngle", &UChaosVehicleWheel::execGetRotationAngle },
			{ "GetSteerAngle", &UChaosVehicleWheel::execGetSteerAngle },
			{ "GetSuspensionOffset", &UChaosVehicleWheel::execGetSuspensionOffset },
			{ "GetWheelAngularVelocity", &UChaosVehicleWheel::execGetWheelAngularVelocity },
			{ "GetWheelRadius", &UChaosVehicleWheel::execGetWheelRadius },
			{ "IsInAir", &UChaosVehicleWheel::execIsInAir },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChaosVehicleWheel_GetAxleType_Statics
	{
		struct ChaosVehicleWheel_eventGetAxleType_Parms
		{
			EAxleType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChaosVehicleWheel_GetAxleType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UChaosVehicleWheel_GetAxleType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosVehicleWheel_eventGetAxleType_Parms, ReturnValue), Z_Construct_UEnum_ChaosVehicles_EAxleType, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleWheel_GetAxleType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleWheel_GetAxleType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleWheel_GetAxleType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleWheel_GetAxleType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|WheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleWheel_GetAxleType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleWheel, nullptr, "GetAxleType", nullptr, nullptr, sizeof(ChaosVehicleWheel_eventGetAxleType_Parms), Z_Construct_UFunction_UChaosVehicleWheel_GetAxleType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleWheel_GetAxleType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosVehicleWheel_GetAxleType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleWheel_GetAxleType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosVehicleWheel_GetAxleType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosVehicleWheel_GetAxleType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleWheel_GetRotationAngle_Statics
	{
		struct ChaosVehicleWheel_eventGetRotationAngle_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosVehicleWheel_GetRotationAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosVehicleWheel_eventGetRotationAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleWheel_GetRotationAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleWheel_GetRotationAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleWheel_GetRotationAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|WheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleWheel_GetRotationAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleWheel, nullptr, "GetRotationAngle", nullptr, nullptr, sizeof(ChaosVehicleWheel_eventGetRotationAngle_Parms), Z_Construct_UFunction_UChaosVehicleWheel_GetRotationAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleWheel_GetRotationAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosVehicleWheel_GetRotationAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleWheel_GetRotationAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosVehicleWheel_GetRotationAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosVehicleWheel_GetRotationAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleWheel_GetSteerAngle_Statics
	{
		struct ChaosVehicleWheel_eventGetSteerAngle_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosVehicleWheel_GetSteerAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosVehicleWheel_eventGetSteerAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleWheel_GetSteerAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleWheel_GetSteerAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleWheel_GetSteerAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|WheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleWheel_GetSteerAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleWheel, nullptr, "GetSteerAngle", nullptr, nullptr, sizeof(ChaosVehicleWheel_eventGetSteerAngle_Parms), Z_Construct_UFunction_UChaosVehicleWheel_GetSteerAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleWheel_GetSteerAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosVehicleWheel_GetSteerAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleWheel_GetSteerAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosVehicleWheel_GetSteerAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosVehicleWheel_GetSteerAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleWheel_GetSuspensionOffset_Statics
	{
		struct ChaosVehicleWheel_eventGetSuspensionOffset_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosVehicleWheel_GetSuspensionOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosVehicleWheel_eventGetSuspensionOffset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleWheel_GetSuspensionOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleWheel_GetSuspensionOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleWheel_GetSuspensionOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|WheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleWheel_GetSuspensionOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleWheel, nullptr, "GetSuspensionOffset", nullptr, nullptr, sizeof(ChaosVehicleWheel_eventGetSuspensionOffset_Parms), Z_Construct_UFunction_UChaosVehicleWheel_GetSuspensionOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleWheel_GetSuspensionOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosVehicleWheel_GetSuspensionOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleWheel_GetSuspensionOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosVehicleWheel_GetSuspensionOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosVehicleWheel_GetSuspensionOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleWheel_GetWheelAngularVelocity_Statics
	{
		struct ChaosVehicleWheel_eventGetWheelAngularVelocity_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosVehicleWheel_GetWheelAngularVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosVehicleWheel_eventGetWheelAngularVelocity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleWheel_GetWheelAngularVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleWheel_GetWheelAngularVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleWheel_GetWheelAngularVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|WheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleWheel_GetWheelAngularVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleWheel, nullptr, "GetWheelAngularVelocity", nullptr, nullptr, sizeof(ChaosVehicleWheel_eventGetWheelAngularVelocity_Parms), Z_Construct_UFunction_UChaosVehicleWheel_GetWheelAngularVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleWheel_GetWheelAngularVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosVehicleWheel_GetWheelAngularVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleWheel_GetWheelAngularVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosVehicleWheel_GetWheelAngularVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosVehicleWheel_GetWheelAngularVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleWheel_GetWheelRadius_Statics
	{
		struct ChaosVehicleWheel_eventGetWheelRadius_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosVehicleWheel_GetWheelRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosVehicleWheel_eventGetWheelRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleWheel_GetWheelRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleWheel_GetWheelRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleWheel_GetWheelRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|WheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleWheel_GetWheelRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleWheel, nullptr, "GetWheelRadius", nullptr, nullptr, sizeof(ChaosVehicleWheel_eventGetWheelRadius_Parms), Z_Construct_UFunction_UChaosVehicleWheel_GetWheelRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleWheel_GetWheelRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosVehicleWheel_GetWheelRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleWheel_GetWheelRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosVehicleWheel_GetWheelRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosVehicleWheel_GetWheelRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleWheel_IsInAir_Statics
	{
		struct ChaosVehicleWheel_eventIsInAir_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChaosVehicleWheel_IsInAir_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChaosVehicleWheel_eventIsInAir_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosVehicleWheel_IsInAir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ChaosVehicleWheel_eventIsInAir_Parms), &Z_Construct_UFunction_UChaosVehicleWheel_IsInAir_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleWheel_IsInAir_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleWheel_IsInAir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleWheel_IsInAir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|WheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleWheel_IsInAir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleWheel, nullptr, "IsInAir", nullptr, nullptr, sizeof(ChaosVehicleWheel_eventIsInAir_Parms), Z_Construct_UFunction_UChaosVehicleWheel_IsInAir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleWheel_IsInAir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosVehicleWheel_IsInAir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleWheel_IsInAir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosVehicleWheel_IsInAir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosVehicleWheel_IsInAir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UChaosVehicleWheel_NoRegister()
	{
		return UChaosVehicleWheel::StaticClass();
	}
	struct Z_Construct_UClass_UChaosVehicleWheel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionMesh;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AxleType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxleType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AxleType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CorneringStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CorneringStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrictionForceMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrictionForceMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SideSlipModifier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SideSlipModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlipThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlipThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkidThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SkidThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSteerAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSteerAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectedBySteering_MetaData[];
#endif
		static void NewProp_bAffectedBySteering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectedBySteering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectedByBrake_MetaData[];
#endif
		static void NewProp_bAffectedByBrake_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectedByBrake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectedByHandbrake_MetaData[];
#endif
		static void NewProp_bAffectedByHandbrake_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectedByHandbrake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectedByEngine_MetaData[];
#endif
		static void NewProp_bAffectedByEngine_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectedByEngine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bABSEnabled_MetaData[];
#endif
		static void NewProp_bABSEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bABSEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTractionControlEnabled_MetaData[];
#endif
		static void NewProp_bTractionControlEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTractionControlEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LateralSlipGraph_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LateralSlipGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuspensionAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SuspensionAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuspensionForceOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SuspensionForceOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuspensionMaxRaise_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SuspensionMaxRaise;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuspensionMaxDrop_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SuspensionMaxDrop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuspensionDampingRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SuspensionDampingRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelLoadRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelLoadRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringPreload_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringPreload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuspensionSmoothing_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SuspensionSmoothing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollbarScaling_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RollbarScaling;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SweepShape_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepShape_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SweepShape;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SweepType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SweepType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxBrakeTorque_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxBrakeTorque;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHandBrakeTorque_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHandBrakeTorque;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugLongSlip_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugLongSlip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugLatSlip_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugLatSlip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugNormalizedTireLoad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugNormalizedTireLoad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugWheelTorque_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugWheelTorque;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugLongForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugLongForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugLatForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugLatForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosVehicleWheel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChaosVehicleWheel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChaosVehicleWheel_GetAxleType, "GetAxleType" }, // 1952778359
		{ &Z_Construct_UFunction_UChaosVehicleWheel_GetRotationAngle, "GetRotationAngle" }, // 880210910
		{ &Z_Construct_UFunction_UChaosVehicleWheel_GetSteerAngle, "GetSteerAngle" }, // 3194412311
		{ &Z_Construct_UFunction_UChaosVehicleWheel_GetSuspensionOffset, "GetSuspensionOffset" }, // 3070892684
		{ &Z_Construct_UFunction_UChaosVehicleWheel_GetWheelAngularVelocity, "GetWheelAngularVelocity" }, // 3151941889
		{ &Z_Construct_UFunction_UChaosVehicleWheel_GetWheelRadius, "GetWheelRadius" }, // 4153158980
		{ &Z_Construct_UFunction_UChaosVehicleWheel_IsInAir, "IsInAir" }, // 3360227254
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ChaosVehicleWheel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_CollisionMesh_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "/**\n\x09\x09\x09* Static mesh with collision setup for wheel, will be used to create wheel shape\n\x09\x09\x09* (if empty, sphere will be added as wheel shape, check bDontCreateShape flag)\n\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Static mesh with collision setup for wheel, will be used to create wheel shape\n(if empty, sphere will be added as wheel shape, check bDontCreateShape flag)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_CollisionMesh = { "CollisionMesh", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, CollisionMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_CollisionMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_CollisionMesh_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_AxleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_AxleType_MetaData[] = {
		{ "Category", "Wheel" },
		{ "Comment", "/** If left undefined then the bAffectedByEngine value is used, if defined then bAffectedByEngine is ignored and the differential setup on the vehicle defines which wheels get power from the engine */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "If left undefined then the bAffectedByEngine value is used, if defined then bAffectedByEngine is ignored and the differential setup on the vehicle defines which wheels get power from the engine" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_AxleType = { "AxleType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, AxleType), Z_Construct_UEnum_ChaosVehicles_EAxleType, METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_AxleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_AxleType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Wheel" },
		{ "Comment", "/**\n\x09\x09 * If BoneName is specified, offset the wheel from the bone's location.\n\x09\x09 * Otherwise this offsets the wheel from the vehicle's origin.\n\x09\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "If BoneName is specified, offset the wheel from the bone's location.\nOtherwise this offsets the wheel from the vehicle's origin." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_WheelRadius_MetaData[] = {
		{ "Category", "Wheel" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Radius of the wheel */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Radius of the wheel" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_WheelRadius = { "WheelRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, WheelRadius), METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_WheelRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_WheelRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_WheelWidth_MetaData[] = {
		{ "Category", "Wheel" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Width of the wheel */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Width of the wheel" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_WheelWidth = { "WheelWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, WheelWidth), METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_WheelWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_WheelWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_CorneringStiffness_MetaData[] = {
		{ "Category", "Wheel" },
		{ "Comment", "/** Tyre Cornering Ability */" },
		{ "EditCondition", "bNewWheelSimulation" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Tyre Cornering Ability" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_CorneringStiffness = { "CorneringStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, CorneringStiffness), METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_CorneringStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_CorneringStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_FrictionForceMultiplier_MetaData[] = {
		{ "Category", "Wheel" },
		{ "Comment", "/** Friction Force Multiplier */" },
		{ "EditCondition", "bNewWheelSimulation" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Friction Force Multiplier" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_FrictionForceMultiplier = { "FrictionForceMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, FrictionForceMultiplier), METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_FrictionForceMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_FrictionForceMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SideSlipModifier_MetaData[] = {
		{ "Category", "Wheel" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Wheel Lateral Skid Grip Loss, lower number less grip on skid */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Wheel Lateral Skid Grip Loss, lower number less grip on skid" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SideSlipModifier = { "SideSlipModifier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, SideSlipModifier), METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SideSlipModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SideSlipModifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SlipThreshold_MetaData[] = {
		{ "Category", "Wheel" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Wheel Longitudinal Slip Threshold */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Wheel Longitudinal Slip Threshold" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SlipThreshold = { "SlipThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, SlipThreshold), METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SlipThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SlipThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SkidThreshold_MetaData[] = {
		{ "Category", "Wheel" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Wheel Lateral Skid Threshold */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Wheel Lateral Skid Threshold" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SkidThreshold = { "SkidThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, SkidThreshold), METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SkidThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SkidThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_MaxSteerAngle_MetaData[] = {
		{ "Category", "WheelsSetup" },
		{ "Comment", "// steer angle in degrees for this wheel\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "steer angle in degrees for this wheel" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_MaxSteerAngle = { "MaxSteerAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, MaxSteerAngle), METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_MaxSteerAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_MaxSteerAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bAffectedBySteering_MetaData[] = {
		{ "Category", "WheelsSetup" },
		{ "Comment", "/** Whether steering should affect this wheel */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Whether steering should affect this wheel" },
	};
#endif
	void Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bAffectedBySteering_SetBit(void* Obj)
	{
		((UChaosVehicleWheel*)Obj)->bAffectedBySteering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bAffectedBySteering = { "bAffectedBySteering", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UChaosVehicleWheel), &Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bAffectedBySteering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bAffectedBySteering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bAffectedBySteering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bAffectedByBrake_MetaData[] = {
		{ "Category", "Wheel" },
		{ "Comment", "/** Whether brake should affect this wheel */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Whether brake should affect this wheel" },
	};
#endif
	void Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bAffectedByBrake_SetBit(void* Obj)
	{
		((UChaosVehicleWheel*)Obj)->bAffectedByBrake = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bAffectedByBrake = { "bAffectedByBrake", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UChaosVehicleWheel), &Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bAffectedByBrake_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bAffectedByBrake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bAffectedByBrake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bAffectedByHandbrake_MetaData[] = {
		{ "Category", "Wheel" },
		{ "Comment", "/** Whether handbrake should affect this wheel */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Whether handbrake should affect this wheel" },
	};
#endif
	void Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bAffectedByHandbrake_SetBit(void* Obj)
	{
		((UChaosVehicleWheel*)Obj)->bAffectedByHandbrake = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bAffectedByHandbrake = { "bAffectedByHandbrake", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UChaosVehicleWheel), &Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bAffectedByHandbrake_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bAffectedByHandbrake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bAffectedByHandbrake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bAffectedByEngine_MetaData[] = {
		{ "Category", "Wheel" },
		{ "Comment", "/** Whether engine should power this wheel */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Whether engine should power this wheel" },
	};
#endif
	void Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bAffectedByEngine_SetBit(void* Obj)
	{
		((UChaosVehicleWheel*)Obj)->bAffectedByEngine = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bAffectedByEngine = { "bAffectedByEngine", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UChaosVehicleWheel), &Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bAffectedByEngine_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bAffectedByEngine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bAffectedByEngine_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bABSEnabled_MetaData[] = {
		{ "Category", "Wheel" },
		{ "Comment", "/** Advanced Braking System Enabled */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Advanced Braking System Enabled" },
	};
#endif
	void Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bABSEnabled_SetBit(void* Obj)
	{
		((UChaosVehicleWheel*)Obj)->bABSEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bABSEnabled = { "bABSEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UChaosVehicleWheel), &Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bABSEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bABSEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bABSEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bTractionControlEnabled_MetaData[] = {
		{ "Category", "Wheel" },
		{ "Comment", "/** Straight Line Traction Control Enabled */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Straight Line Traction Control Enabled" },
	};
#endif
	void Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bTractionControlEnabled_SetBit(void* Obj)
	{
		((UChaosVehicleWheel*)Obj)->bTractionControlEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bTractionControlEnabled = { "bTractionControlEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UChaosVehicleWheel), &Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bTractionControlEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bTractionControlEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bTractionControlEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_LateralSlipGraph_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_LateralSlipGraph = { "LateralSlipGraph", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, LateralSlipGraph), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_LateralSlipGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_LateralSlipGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SuspensionAxis_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/** Local body direction in which where suspension forces are applied (typically along -Z-axis) */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Local body direction in which where suspension forces are applied (typically along -Z-axis)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SuspensionAxis = { "SuspensionAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, SuspensionAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SuspensionAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SuspensionAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SuspensionForceOffset_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/** Vertical offset from where suspension forces are applied (along Z-axis) */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Vertical offset from where suspension forces are applied (along Z-axis)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SuspensionForceOffset = { "SuspensionForceOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, SuspensionForceOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SuspensionForceOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SuspensionForceOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SuspensionMaxRaise_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/** How far the wheel can go above the resting position */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "How far the wheel can go above the resting position" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SuspensionMaxRaise = { "SuspensionMaxRaise", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, SuspensionMaxRaise), METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SuspensionMaxRaise_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SuspensionMaxRaise_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SuspensionMaxDrop_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/** How far the wheel can drop below the resting position */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "How far the wheel can drop below the resting position" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SuspensionMaxDrop = { "SuspensionMaxDrop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, SuspensionMaxDrop), METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SuspensionMaxDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SuspensionMaxDrop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SuspensionDampingRatio_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "///** Oscillation frequency of suspension. Standard cars have values between 5 and 10 */\n//UPROPERTY(EditAnywhere, Category = Suspension)\n//float SuspensionNaturalFrequency;\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Oscillation frequency of suspension. Standard cars have values between 5 and 10\nUPROPERTY(EditAnywhere, Category = Suspension)\nfloat SuspensionNaturalFrequency;" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SuspensionDampingRatio = { "SuspensionDampingRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, SuspensionDampingRatio), METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SuspensionDampingRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SuspensionDampingRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_WheelLoadRatio_MetaData[] = {
		{ "Category", "Suspension" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09\x09 *\x09When 0 no weight load is transferred, 1 is Normal weight shift. Lower value cures lift off oversteer.\n\x09\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "When 0 no weight load is transferred, 1 is Normal weight shift. Lower value cures lift off oversteer." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_WheelLoadRatio = { "WheelLoadRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, WheelLoadRatio), METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_WheelLoadRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_WheelLoadRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SpringRate_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/** Spring Force (N/m) */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Spring Force (N/m)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SpringRate = { "SpringRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, SpringRate), METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SpringRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SpringRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SpringPreload_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/** Spring Preload (N/m) */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Spring Preload (N/m)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SpringPreload = { "SpringPreload", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, SpringPreload), METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SpringPreload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SpringPreload_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SuspensionSmoothing_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/** Smooth suspension [0-off, 10-max] - Warning might cause momentary visual inter-penetration of the wheel against objects/terrain */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Smooth suspension [0-off, 10-max] - Warning might cause momentary visual inter-penetration of the wheel against objects/terrain" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SuspensionSmoothing = { "SuspensionSmoothing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, SuspensionSmoothing), METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SuspensionSmoothing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SuspensionSmoothing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_RollbarScaling_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/** Anti-roll effect */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Anti-roll effect" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_RollbarScaling = { "RollbarScaling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, RollbarScaling), METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_RollbarScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_RollbarScaling_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SweepShape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SweepShape_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/** Whether wheel suspension considers simple, complex, or both */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Whether wheel suspension considers simple, complex, or both" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SweepShape = { "SweepShape", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, SweepShape), Z_Construct_UEnum_ChaosVehicles_ESweepShape, METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SweepShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SweepShape_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SweepType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SweepType_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/** Whether wheel suspension considers simple, complex, or both */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Whether wheel suspension considers simple, complex, or both" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SweepType = { "SweepType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, SweepType), Z_Construct_UEnum_ChaosVehicles_ESweepType, METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SweepType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SweepType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_MaxBrakeTorque_MetaData[] = {
		{ "Category", "Brakes" },
		{ "Comment", "/** max brake torque for this wheel (Nm) */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "max brake torque for this wheel (Nm)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_MaxBrakeTorque = { "MaxBrakeTorque", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, MaxBrakeTorque), METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_MaxBrakeTorque_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_MaxBrakeTorque_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_MaxHandBrakeTorque_MetaData[] = {
		{ "Category", "Brakes" },
		{ "Comment", "/**\n\x09\x09 *\x09Max handbrake brake torque for this wheel (Nm). A handbrake should have a stronger brake torque\n\x09\x09 *\x09than the brake. This will be ignored for wheels that are not affected by the handbrake.\n\x09\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Max handbrake brake torque for this wheel (Nm). A handbrake should have a stronger brake torque\nthan the brake. This will be ignored for wheels that are not affected by the handbrake." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_MaxHandBrakeTorque = { "MaxHandBrakeTorque", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, MaxHandBrakeTorque), METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_MaxHandBrakeTorque_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_MaxHandBrakeTorque_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_VehicleComponent_MetaData[] = {
		{ "Comment", "/** The vehicle that owns us */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "The vehicle that owns us" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_VehicleComponent = { "VehicleComponent", nullptr, (EPropertyFlags)0x0010000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, VehicleComponent), Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_VehicleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_VehicleComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_WheelIndex_MetaData[] = {
		{ "Comment", "// Our index in the vehicle's (and setup's) wheels array\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Our index in the vehicle's (and setup's) wheels array" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, WheelIndex), METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_WheelIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_WheelIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_DebugLongSlip_MetaData[] = {
		{ "Comment", "// Longitudinal slip experienced by the wheel\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Longitudinal slip experienced by the wheel" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_DebugLongSlip = { "DebugLongSlip", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, DebugLongSlip), METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_DebugLongSlip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_DebugLongSlip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_DebugLatSlip_MetaData[] = {
		{ "Comment", "// Lateral slip experienced by the wheel\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Lateral slip experienced by the wheel" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_DebugLatSlip = { "DebugLatSlip", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, DebugLatSlip), METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_DebugLatSlip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_DebugLatSlip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_DebugNormalizedTireLoad_MetaData[] = {
		{ "Comment", "// How much force the tire experiences at rest divided by how much force it is experiencing now\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "How much force the tire experiences at rest divided by how much force it is experiencing now" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_DebugNormalizedTireLoad = { "DebugNormalizedTireLoad", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, DebugNormalizedTireLoad), METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_DebugNormalizedTireLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_DebugNormalizedTireLoad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_DebugWheelTorque_MetaData[] = {
		{ "Comment", "// Wheel torque\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Wheel torque" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_DebugWheelTorque = { "DebugWheelTorque", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, DebugWheelTorque), METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_DebugWheelTorque_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_DebugWheelTorque_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_DebugLongForce_MetaData[] = {
		{ "Comment", "// Longitudinal force the wheel is applying to the chassis\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Longitudinal force the wheel is applying to the chassis" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_DebugLongForce = { "DebugLongForce", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, DebugLongForce), METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_DebugLongForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_DebugLongForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_DebugLatForce_MetaData[] = {
		{ "Comment", "// Lateral force the wheel is applying to the chassis\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Lateral force the wheel is applying to the chassis" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_DebugLatForce = { "DebugLatForce", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, DebugLatForce), METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_DebugLatForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_DebugLatForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_Location_MetaData[] = {
		{ "Comment", "// Worldspace location of this wheel\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Worldspace location of this wheel" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_OldLocation_MetaData[] = {
		{ "Comment", "// Worldspace location of this wheel last frame\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Worldspace location of this wheel last frame" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_OldLocation = { "OldLocation", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, OldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_OldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_OldLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_Velocity_MetaData[] = {
		{ "Comment", "// Current velocity of the wheel center (change in location over time)\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleWheel.h" },
		{ "ToolTip", "Current velocity of the wheel center (change in location over time)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosVehicleWheel, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_Velocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaosVehicleWheel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_CollisionMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_AxleType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_AxleType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_WheelRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_WheelWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_CorneringStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_FrictionForceMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SideSlipModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SlipThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SkidThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_MaxSteerAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bAffectedBySteering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bAffectedByBrake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bAffectedByHandbrake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bAffectedByEngine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bABSEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_bTractionControlEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_LateralSlipGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SuspensionAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SuspensionForceOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SuspensionMaxRaise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SuspensionMaxDrop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SuspensionDampingRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_WheelLoadRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SpringRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SpringPreload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SuspensionSmoothing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_RollbarScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SweepShape_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SweepShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SweepType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_SweepType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_MaxBrakeTorque,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_MaxHandBrakeTorque,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_VehicleComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_WheelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_DebugLongSlip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_DebugLatSlip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_DebugNormalizedTireLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_DebugWheelTorque,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_DebugLongForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_DebugLatForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_OldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleWheel_Statics::NewProp_Velocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosVehicleWheel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosVehicleWheel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosVehicleWheel_Statics::ClassParams = {
		&UChaosVehicleWheel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UChaosVehicleWheel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChaosVehicleWheel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleWheel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosVehicleWheel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChaosVehicleWheel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChaosVehicleWheel, 3513503277);
	template<> CHAOSVEHICLES_API UClass* StaticClass<UChaosVehicleWheel>()
	{
		return UChaosVehicleWheel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChaosVehicleWheel(Z_Construct_UClass_UChaosVehicleWheel, &UChaosVehicleWheel::StaticClass, TEXT("/Script/ChaosVehicles"), TEXT("UChaosVehicleWheel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosVehicleWheel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
