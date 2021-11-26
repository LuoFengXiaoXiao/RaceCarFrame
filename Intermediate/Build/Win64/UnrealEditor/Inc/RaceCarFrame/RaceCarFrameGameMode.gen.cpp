// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaceCarFrame/RaceCarFrameGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRaceCarFrameGameMode() {}
// Cross Module References
	RACECARFRAME_API UClass* Z_Construct_UClass_ARaceCarFrameGameMode_NoRegister();
	RACECARFRAME_API UClass* Z_Construct_UClass_ARaceCarFrameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RaceCarFrame();
// End Cross Module References
	void ARaceCarFrameGameMode::StaticRegisterNativesARaceCarFrameGameMode()
	{
	}
	UClass* Z_Construct_UClass_ARaceCarFrameGameMode_NoRegister()
	{
		return ARaceCarFrameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARaceCarFrameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARaceCarFrameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RaceCarFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaceCarFrameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering LOD WorldPartition DataLayers Utilities|Transformation" },
		{ "IncludePath", "RaceCarFrameGameMode.h" },
		{ "ModuleRelativePath", "RaceCarFrameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARaceCarFrameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARaceCarFrameGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARaceCarFrameGameMode_Statics::ClassParams = {
		&ARaceCarFrameGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARaceCarFrameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARaceCarFrameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARaceCarFrameGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARaceCarFrameGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARaceCarFrameGameMode, 1641416844);
	template<> RACECARFRAME_API UClass* StaticClass<ARaceCarFrameGameMode>()
	{
		return ARaceCarFrameGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARaceCarFrameGameMode(Z_Construct_UClass_ARaceCarFrameGameMode, &ARaceCarFrameGameMode::StaticClass, TEXT("/Script/RaceCarFrame"), TEXT("ARaceCarFrameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARaceCarFrameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
