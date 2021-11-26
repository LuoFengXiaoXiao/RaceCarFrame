// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosVehicles/Public/AnimNode_WheelController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_WheelController() {}
// Cross Module References
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_WheelController();
	UPackage* Z_Construct_UPackage__Script_ChaosVehicles();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_WheelController>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_WheelController cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

class UScriptStruct* FAnimNode_WheelController::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CHAOSVEHICLES_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_WheelController_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_WheelController, Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("AnimNode_WheelController"), sizeof(FAnimNode_WheelController), Get_Z_Construct_UScriptStruct_FAnimNode_WheelController_Hash());
	}
	return Singleton;
}
template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<FAnimNode_WheelController>()
{
	return FAnimNode_WheelController::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_WheelController(FAnimNode_WheelController::StaticStruct, TEXT("/Script/ChaosVehicles"), TEXT("AnimNode_WheelController"), false, nullptr, nullptr);
static struct FScriptStruct_ChaosVehicles_StaticRegisterNativesFAnimNode_WheelController
{
	FScriptStruct_ChaosVehicles_StaticRegisterNativesFAnimNode_WheelController()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_WheelController")),new UScriptStruct::TCppStructOps<FAnimNode_WheelController>);
	}
} ScriptStruct_ChaosVehicles_StaticRegisterNativesFAnimNode_WheelController;
	struct Z_Construct_UScriptStruct_FAnimNode_WheelController_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_WheelController_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Simple controller that replaces or adds to the translation/rotation of a single bone.\n */" },
		{ "ModuleRelativePath", "Public/AnimNode_WheelController.h" },
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_WheelController_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_WheelController>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_WheelController_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_WheelController",
		sizeof(FAnimNode_WheelController),
		alignof(FAnimNode_WheelController),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_WheelController_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_WheelController_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_WheelController()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_WheelController_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ChaosVehicles();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_WheelController"), sizeof(FAnimNode_WheelController), Get_Z_Construct_UScriptStruct_FAnimNode_WheelController_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_WheelController_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_WheelController_Hash() { return 2938858869U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
