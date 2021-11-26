// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosVehicles/Public/SnapshotData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapshotData() {}
// Cross Module References
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FWheeledSnaphotData();
	UPackage* Z_Construct_UPackage__Script_ChaosVehicles();
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FBaseSnapshotData();
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FWheelSnapshot();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References

static_assert(std::is_polymorphic<FWheeledSnaphotData>() == std::is_polymorphic<FBaseSnapshotData>(), "USTRUCT FWheeledSnaphotData cannot be polymorphic unless super FBaseSnapshotData is polymorphic");

class UScriptStruct* FWheeledSnaphotData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CHAOSVEHICLES_API uint32 Get_Z_Construct_UScriptStruct_FWheeledSnaphotData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWheeledSnaphotData, Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("WheeledSnaphotData"), sizeof(FWheeledSnaphotData), Get_Z_Construct_UScriptStruct_FWheeledSnaphotData_Hash());
	}
	return Singleton;
}
template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<FWheeledSnaphotData>()
{
	return FWheeledSnaphotData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWheeledSnaphotData(FWheeledSnaphotData::StaticStruct, TEXT("/Script/ChaosVehicles"), TEXT("WheeledSnaphotData"), false, nullptr, nullptr);
static struct FScriptStruct_ChaosVehicles_StaticRegisterNativesFWheeledSnaphotData
{
	FScriptStruct_ChaosVehicles_StaticRegisterNativesFWheeledSnaphotData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WheeledSnaphotData")),new UScriptStruct::TCppStructOps<FWheeledSnaphotData>);
	}
} ScriptStruct_ChaosVehicles_StaticRegisterNativesFWheeledSnaphotData;
	struct Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedGear_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SelectedGear;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineRPM_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EngineRPM;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WheelSnapshots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelSnapshots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WheelSnapshots;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SnapshotData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWheeledSnaphotData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_SelectedGear_MetaData[] = {
		{ "ModuleRelativePath", "Public/SnapshotData.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_SelectedGear = { "SelectedGear", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWheeledSnaphotData, SelectedGear), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_SelectedGear_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_SelectedGear_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_EngineRPM_MetaData[] = {
		{ "Comment", "// -ve reverse gear(s), 0 neutral, +ve forward gears\n" },
		{ "ModuleRelativePath", "Public/SnapshotData.h" },
		{ "ToolTip", "-ve reverse gear(s), 0 neutral, +ve forward gears" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_EngineRPM = { "EngineRPM", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWheeledSnaphotData, EngineRPM), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_EngineRPM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_EngineRPM_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_WheelSnapshots_Inner = { "WheelSnapshots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWheelSnapshot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_WheelSnapshots_MetaData[] = {
		{ "Comment", "// Engine Revolutions Per Minute\n" },
		{ "ModuleRelativePath", "Public/SnapshotData.h" },
		{ "ToolTip", "Engine Revolutions Per Minute" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_WheelSnapshots = { "WheelSnapshots", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWheeledSnaphotData, WheelSnapshots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_WheelSnapshots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_WheelSnapshots_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_SelectedGear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_EngineRPM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_WheelSnapshots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::NewProp_WheelSnapshots,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
		Z_Construct_UScriptStruct_FBaseSnapshotData,
		&NewStructOps,
		"WheeledSnaphotData",
		sizeof(FWheeledSnaphotData),
		alignof(FWheeledSnaphotData),
		Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWheeledSnaphotData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWheeledSnaphotData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ChaosVehicles();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WheeledSnaphotData"), sizeof(FWheeledSnaphotData), Get_Z_Construct_UScriptStruct_FWheeledSnaphotData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWheeledSnaphotData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWheeledSnaphotData_Hash() { return 836780610U; }
class UScriptStruct* FWheelSnapshot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CHAOSVEHICLES_API uint32 Get_Z_Construct_UScriptStruct_FWheelSnapshot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWheelSnapshot, Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("WheelSnapshot"), sizeof(FWheelSnapshot), Get_Z_Construct_UScriptStruct_FWheelSnapshot_Hash());
	}
	return Singleton;
}
template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<FWheelSnapshot>()
{
	return FWheelSnapshot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWheelSnapshot(FWheelSnapshot::StaticStruct, TEXT("/Script/ChaosVehicles"), TEXT("WheelSnapshot"), false, nullptr, nullptr);
static struct FScriptStruct_ChaosVehicles_StaticRegisterNativesFWheelSnapshot
{
	FScriptStruct_ChaosVehicles_StaticRegisterNativesFWheelSnapshot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WheelSnapshot")),new UScriptStruct::TCppStructOps<FWheelSnapshot>);
	}
} ScriptStruct_ChaosVehicles_StaticRegisterNativesFWheelSnapshot;
	struct Z_Construct_UScriptStruct_FWheelSnapshot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuspensionOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SuspensionOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelRotationAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelRotationAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteeringAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SteeringAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelAngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelAngularVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelSnapshot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SnapshotData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWheelSnapshot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_SuspensionOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/SnapshotData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_SuspensionOffset = { "SuspensionOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWheelSnapshot, SuspensionOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_SuspensionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_SuspensionOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_WheelRotationAngle_MetaData[] = {
		{ "Comment", "// suspension location\n" },
		{ "ModuleRelativePath", "Public/SnapshotData.h" },
		{ "ToolTip", "suspension location" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_WheelRotationAngle = { "WheelRotationAngle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWheelSnapshot, WheelRotationAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_WheelRotationAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_WheelRotationAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_SteeringAngle_MetaData[] = {
		{ "Comment", "// wheel rotation angle, rotated position\n" },
		{ "ModuleRelativePath", "Public/SnapshotData.h" },
		{ "ToolTip", "wheel rotation angle, rotated position" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_SteeringAngle = { "SteeringAngle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWheelSnapshot, SteeringAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_SteeringAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_SteeringAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_WheelRadius_MetaData[] = {
		{ "Comment", "// steering position\n" },
		{ "ModuleRelativePath", "Public/SnapshotData.h" },
		{ "ToolTip", "steering position" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_WheelRadius = { "WheelRadius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWheelSnapshot, WheelRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_WheelRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_WheelRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_WheelAngularVelocity_MetaData[] = {
		{ "Comment", "// radius of the wheel can be changed dynamically, to sim damaged ot flat\n" },
		{ "ModuleRelativePath", "Public/SnapshotData.h" },
		{ "ToolTip", "radius of the wheel can be changed dynamically, to sim damaged ot flat" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_WheelAngularVelocity = { "WheelAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWheelSnapshot, WheelAngularVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_WheelAngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_WheelAngularVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWheelSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_SuspensionOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_WheelRotationAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_SteeringAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_WheelRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelSnapshot_Statics::NewProp_WheelAngularVelocity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWheelSnapshot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
		nullptr,
		&NewStructOps,
		"WheelSnapshot",
		sizeof(FWheelSnapshot),
		alignof(FWheelSnapshot),
		Z_Construct_UScriptStruct_FWheelSnapshot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSnapshot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelSnapshot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSnapshot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWheelSnapshot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWheelSnapshot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ChaosVehicles();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WheelSnapshot"), sizeof(FWheelSnapshot), Get_Z_Construct_UScriptStruct_FWheelSnapshot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWheelSnapshot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWheelSnapshot_Hash() { return 1939202925U; }
class UScriptStruct* FBaseSnapshotData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CHAOSVEHICLES_API uint32 Get_Z_Construct_UScriptStruct_FBaseSnapshotData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseSnapshotData, Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("BaseSnapshotData"), sizeof(FBaseSnapshotData), Get_Z_Construct_UScriptStruct_FBaseSnapshotData_Hash());
	}
	return Singleton;
}
template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<FBaseSnapshotData>()
{
	return FBaseSnapshotData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBaseSnapshotData(FBaseSnapshotData::StaticStruct, TEXT("/Script/ChaosVehicles"), TEXT("BaseSnapshotData"), false, nullptr, nullptr);
static struct FScriptStruct_ChaosVehicles_StaticRegisterNativesFBaseSnapshotData
{
	FScriptStruct_ChaosVehicles_StaticRegisterNativesFBaseSnapshotData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BaseSnapshotData")),new UScriptStruct::TCppStructOps<FBaseSnapshotData>);
	}
} ScriptStruct_ChaosVehicles_StaticRegisterNativesFBaseSnapshotData;
	struct Z_Construct_UScriptStruct_FBaseSnapshotData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//: public UObject\n" },
		{ "ModuleRelativePath", "Public/SnapshotData.h" },
		{ "ToolTip", ": public UObject" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseSnapshotData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Public/SnapshotData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseSnapshotData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewProp_LinearVelocity_MetaData[] = {
		{ "Comment", "// world coords\n" },
		{ "ModuleRelativePath", "Public/SnapshotData.h" },
		{ "ToolTip", "world coords" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseSnapshotData, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewProp_LinearVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewProp_LinearVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Comment", "// world coords\n" },
		{ "ModuleRelativePath", "Public/SnapshotData.h" },
		{ "ToolTip", "world coords" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseSnapshotData, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewProp_AngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewProp_AngularVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewProp_LinearVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::NewProp_AngularVelocity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
		nullptr,
		&NewStructOps,
		"BaseSnapshotData",
		sizeof(FBaseSnapshotData),
		alignof(FBaseSnapshotData),
		Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBaseSnapshotData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBaseSnapshotData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ChaosVehicles();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BaseSnapshotData"), sizeof(FBaseSnapshotData), Get_Z_Construct_UScriptStruct_FBaseSnapshotData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBaseSnapshotData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBaseSnapshotData_Hash() { return 971964849U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
