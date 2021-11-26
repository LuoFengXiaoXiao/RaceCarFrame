// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaceCarFrame/RaceCarFramePawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRaceCarFramePawn() {}
// Cross Module References
	RACECARFRAME_API UClass* Z_Construct_UClass_ARaceCarFramePawn_NoRegister();
	RACECARFRAME_API UClass* Z_Construct_UClass_ARaceCarFramePawn();
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn();
	UPackage* Z_Construct_UPackage__Script_RaceCarFrame();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	void ARaceCarFramePawn::StaticRegisterNativesARaceCarFramePawn()
	{
	}
	UClass* Z_Construct_UClass_ARaceCarFramePawn_NoRegister()
	{
		return ARaceCarFramePawn::StaticClass();
	}
	struct Z_Construct_UClass_ARaceCarFramePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternalCameraBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InternalCameraBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternalCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InternalCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCarSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCarSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCarGear_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCarGear;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineSoundComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EngineSoundComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedDisplayString_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_SpeedDisplayString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GearDisplayString_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_GearDisplayString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GearDisplayColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GearDisplayColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GearDisplayReverseColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GearDisplayReverseColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInCarCameraActive_MetaData[];
#endif
		static void NewProp_bInCarCameraActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInCarCameraActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInReverseGear_MetaData[];
#endif
		static void NewProp_bInReverseGear_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInReverseGear;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARaceCarFramePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWheeledVehiclePawn,
		(UObject* (*)())Z_Construct_UPackage__Script_RaceCarFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaceCarFramePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RaceCarFramePawn.h" },
		{ "ModuleRelativePath", "RaceCarFramePawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Spring arm that will offset the camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RaceCarFramePawn.h" },
		{ "ToolTip", "Spring arm that will offset the camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaceCarFramePawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera component that will be our viewpoint */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RaceCarFramePawn.h" },
		{ "ToolTip", "Camera component that will be our viewpoint" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaceCarFramePawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_InternalCameraBase_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** SCene component for the In-Car view origin */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RaceCarFramePawn.h" },
		{ "ToolTip", "SCene component for the In-Car view origin" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_InternalCameraBase = { "InternalCameraBase", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaceCarFramePawn, InternalCameraBase), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_InternalCameraBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_InternalCameraBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_InternalCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera component for the In-Car view */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RaceCarFramePawn.h" },
		{ "ToolTip", "Camera component for the In-Car view" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_InternalCamera = { "InternalCamera", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaceCarFramePawn, InternalCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_InternalCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_InternalCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_InCarSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Display" },
		{ "Comment", "/** Text component for the In-Car speed */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RaceCarFramePawn.h" },
		{ "ToolTip", "Text component for the In-Car speed" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_InCarSpeed = { "InCarSpeed", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaceCarFramePawn, InCarSpeed), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_InCarSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_InCarSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_InCarGear_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Display" },
		{ "Comment", "/** Text component for the In-Car gear */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RaceCarFramePawn.h" },
		{ "ToolTip", "Text component for the In-Car gear" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_InCarGear = { "InCarGear", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaceCarFramePawn, InCarGear), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_InCarGear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_InCarGear_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_EngineSoundComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Display" },
		{ "Comment", "/** Audio component for the engine sound */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RaceCarFramePawn.h" },
		{ "ToolTip", "Audio component for the engine sound" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_EngineSoundComponent = { "EngineSoundComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaceCarFramePawn, EngineSoundComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_EngineSoundComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_EngineSoundComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_SpeedDisplayString_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** The current speed as a string eg 10 km/h */" },
		{ "ModuleRelativePath", "RaceCarFramePawn.h" },
		{ "ToolTip", "The current speed as a string eg 10 km/h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_SpeedDisplayString = { "SpeedDisplayString", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaceCarFramePawn, SpeedDisplayString), METADATA_PARAMS(Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_SpeedDisplayString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_SpeedDisplayString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_GearDisplayString_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** The current gear as a string (R,N, 1,2 etc) */" },
		{ "ModuleRelativePath", "RaceCarFramePawn.h" },
		{ "ToolTip", "The current gear as a string (R,N, 1,2 etc)" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_GearDisplayString = { "GearDisplayString", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaceCarFramePawn, GearDisplayString), METADATA_PARAMS(Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_GearDisplayString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_GearDisplayString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_GearDisplayColor_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** The color of the incar gear text in forward gears */" },
		{ "ModuleRelativePath", "RaceCarFramePawn.h" },
		{ "ToolTip", "The color of the incar gear text in forward gears" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_GearDisplayColor = { "GearDisplayColor", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaceCarFramePawn, GearDisplayColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_GearDisplayColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_GearDisplayColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_GearDisplayReverseColor_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** The color of the incar gear text when in reverse */" },
		{ "ModuleRelativePath", "RaceCarFramePawn.h" },
		{ "ToolTip", "The color of the incar gear text when in reverse" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_GearDisplayReverseColor = { "GearDisplayReverseColor", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaceCarFramePawn, GearDisplayReverseColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_GearDisplayReverseColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_GearDisplayReverseColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_bInCarCameraActive_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Are we using incar camera */" },
		{ "ModuleRelativePath", "RaceCarFramePawn.h" },
		{ "ToolTip", "Are we using incar camera" },
	};
#endif
	void Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_bInCarCameraActive_SetBit(void* Obj)
	{
		((ARaceCarFramePawn*)Obj)->bInCarCameraActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_bInCarCameraActive = { "bInCarCameraActive", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARaceCarFramePawn), &Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_bInCarCameraActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_bInCarCameraActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_bInCarCameraActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_bInReverseGear_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Are we in reverse gear */" },
		{ "ModuleRelativePath", "RaceCarFramePawn.h" },
		{ "ToolTip", "Are we in reverse gear" },
	};
#endif
	void Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_bInReverseGear_SetBit(void* Obj)
	{
		((ARaceCarFramePawn*)Obj)->bInReverseGear = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_bInReverseGear = { "bInReverseGear", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARaceCarFramePawn), &Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_bInReverseGear_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_bInReverseGear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_bInReverseGear_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARaceCarFramePawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_InternalCameraBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_InternalCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_InCarSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_InCarGear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_EngineSoundComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_SpeedDisplayString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_GearDisplayString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_GearDisplayColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_GearDisplayReverseColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_bInCarCameraActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaceCarFramePawn_Statics::NewProp_bInReverseGear,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARaceCarFramePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARaceCarFramePawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARaceCarFramePawn_Statics::ClassParams = {
		&ARaceCarFramePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARaceCarFramePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARaceCarFramePawn_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARaceCarFramePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARaceCarFramePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARaceCarFramePawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARaceCarFramePawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARaceCarFramePawn, 3676770625);
	template<> RACECARFRAME_API UClass* StaticClass<ARaceCarFramePawn>()
	{
		return ARaceCarFramePawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARaceCarFramePawn(Z_Construct_UClass_ARaceCarFramePawn, &ARaceCarFramePawn::StaticClass, TEXT("/Script/RaceCarFrame"), TEXT("ARaceCarFramePawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARaceCarFramePawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
