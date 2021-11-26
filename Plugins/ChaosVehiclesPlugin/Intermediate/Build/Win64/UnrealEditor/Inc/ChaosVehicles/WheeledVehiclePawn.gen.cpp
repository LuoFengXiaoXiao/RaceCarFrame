// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosVehicles/Public/WheeledVehiclePawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWheeledVehiclePawn() {}
// Cross Module References
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn_NoRegister();
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_ChaosVehicles();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleMovementComponent_NoRegister();
// End Cross Module References
	void AWheeledVehiclePawn::StaticRegisterNativesAWheeledVehiclePawn()
	{
	}
	UClass* Z_Construct_UClass_AWheeledVehiclePawn_NoRegister()
	{
		return AWheeledVehiclePawn::StaticClass();
	}
	struct Z_Construct_UClass_AWheeledVehiclePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleMovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleMovementComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWheeledVehiclePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWheeledVehiclePawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ChaosWheeledVehicle is the base wheeled vehicle pawn actor.\n * By default it uses UChaosWheeledVehicleMovementComponent for its simulation, but this can be overridden by inheriting from the class and modifying its constructor like so:\n * Super(ObjectInitializer.SetDefaultSubobjectClass<UMyMovement>(VehicleComponentName))\n * Where UMyMovement is the new movement type that inherits from UChaosVehicleMovementComponent\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "WheeledVehiclePawn.h" },
		{ "ModuleRelativePath", "Public/WheeledVehiclePawn.h" },
		{ "ToolTip", "ChaosWheeledVehicle is the base wheeled vehicle pawn actor.\nBy default it uses UChaosWheeledVehicleMovementComponent for its simulation, but this can be overridden by inheriting from the class and modifying its constructor like so:\nSuper(ObjectInitializer.SetDefaultSubobjectClass<UMyMovement>(VehicleComponentName))\nWhere UMyMovement is the new movement type that inherits from UChaosVehicleMovementComponent" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWheeledVehiclePawn_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Vehicle" },
		{ "Comment", "/**  The main skeletal mesh associated with this Vehicle */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WheeledVehiclePawn.h" },
		{ "ToolTip", "The main skeletal mesh associated with this Vehicle" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWheeledVehiclePawn_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWheeledVehiclePawn, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWheeledVehiclePawn_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWheeledVehiclePawn_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWheeledVehiclePawn_Statics::NewProp_VehicleMovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Vehicle" },
		{ "Comment", "/** vehicle simulation component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WheeledVehiclePawn.h" },
		{ "ToolTip", "vehicle simulation component" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWheeledVehiclePawn_Statics::NewProp_VehicleMovementComponent = { "VehicleMovementComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWheeledVehiclePawn, VehicleMovementComponent), Z_Construct_UClass_UChaosVehicleMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWheeledVehiclePawn_Statics::NewProp_VehicleMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWheeledVehiclePawn_Statics::NewProp_VehicleMovementComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWheeledVehiclePawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWheeledVehiclePawn_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWheeledVehiclePawn_Statics::NewProp_VehicleMovementComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWheeledVehiclePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWheeledVehiclePawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWheeledVehiclePawn_Statics::ClassParams = {
		&AWheeledVehiclePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWheeledVehiclePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWheeledVehiclePawn_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AWheeledVehiclePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWheeledVehiclePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWheeledVehiclePawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWheeledVehiclePawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWheeledVehiclePawn, 2992334417);
	template<> CHAOSVEHICLES_API UClass* StaticClass<AWheeledVehiclePawn>()
	{
		return AWheeledVehiclePawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWheeledVehiclePawn(Z_Construct_UClass_AWheeledVehiclePawn, &AWheeledVehiclePawn::StaticClass, TEXT("/Script/ChaosVehicles"), TEXT("AWheeledVehiclePawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWheeledVehiclePawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
