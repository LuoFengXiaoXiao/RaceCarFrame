// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosVehiclesEditor/Public/AnimGraphNode_WheelController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_WheelController() {}
// Cross Module References
	CHAOSVEHICLESEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_WheelController_NoRegister();
	CHAOSVEHICLESEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_WheelController();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_ChaosVehiclesEditor();
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_WheelController();
// End Cross Module References
	void UAnimGraphNode_WheelController::StaticRegisterNativesUAnimGraphNode_WheelController()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_WheelController_NoRegister()
	{
		return UAnimGraphNode_WheelController::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_WheelController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_WheelController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehiclesEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_WheelController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_WheelController.h" },
		{ "Keywords", "Modify Wheel Vehicle" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_WheelController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_WheelController_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_WheelController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_WheelController_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_WheelController, Node), Z_Construct_UScriptStruct_FAnimNode_WheelController, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_WheelController_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_WheelController_Statics::NewProp_Node_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_WheelController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_WheelController_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_WheelController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_WheelController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_WheelController_Statics::ClassParams = {
		&UAnimGraphNode_WheelController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_WheelController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_WheelController_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_WheelController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_WheelController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_WheelController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_WheelController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_WheelController, 1599547593);
	template<> CHAOSVEHICLESEDITOR_API UClass* StaticClass<UAnimGraphNode_WheelController>()
	{
		return UAnimGraphNode_WheelController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_WheelController(Z_Construct_UClass_UAnimGraphNode_WheelController, &UAnimGraphNode_WheelController::StaticClass, TEXT("/Script/ChaosVehiclesEditor"), TEXT("UAnimGraphNode_WheelController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_WheelController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
