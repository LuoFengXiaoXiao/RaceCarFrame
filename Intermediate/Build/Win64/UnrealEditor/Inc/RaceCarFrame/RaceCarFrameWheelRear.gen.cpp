// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaceCarFrame/RaceCarFrameWheelRear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRaceCarFrameWheelRear() {}
// Cross Module References
	RACECARFRAME_API UClass* Z_Construct_UClass_URaceCarFrameWheelRear_NoRegister();
	RACECARFRAME_API UClass* Z_Construct_UClass_URaceCarFrameWheelRear();
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_RaceCarFrame();
// End Cross Module References
	void URaceCarFrameWheelRear::StaticRegisterNativesURaceCarFrameWheelRear()
	{
	}
	UClass* Z_Construct_UClass_URaceCarFrameWheelRear_NoRegister()
	{
		return URaceCarFrameWheelRear::StaticClass();
	}
	struct Z_Construct_UClass_URaceCarFrameWheelRear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URaceCarFrameWheelRear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChaosVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_RaceCarFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URaceCarFrameWheelRear_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RaceCarFrameWheelRear.h" },
		{ "ModuleRelativePath", "RaceCarFrameWheelRear.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URaceCarFrameWheelRear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URaceCarFrameWheelRear>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URaceCarFrameWheelRear_Statics::ClassParams = {
		&URaceCarFrameWheelRear::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URaceCarFrameWheelRear_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URaceCarFrameWheelRear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URaceCarFrameWheelRear()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URaceCarFrameWheelRear_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URaceCarFrameWheelRear, 873337265);
	template<> RACECARFRAME_API UClass* StaticClass<URaceCarFrameWheelRear>()
	{
		return URaceCarFrameWheelRear::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URaceCarFrameWheelRear(Z_Construct_UClass_URaceCarFrameWheelRear, &URaceCarFrameWheelRear::StaticClass, TEXT("/Script/RaceCarFrame"), TEXT("URaceCarFrameWheelRear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URaceCarFrameWheelRear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
