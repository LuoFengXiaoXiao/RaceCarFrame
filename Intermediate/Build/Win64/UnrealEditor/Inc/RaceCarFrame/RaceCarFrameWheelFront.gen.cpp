// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaceCarFrame/RaceCarFrameWheelFront.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRaceCarFrameWheelFront() {}
// Cross Module References
	RACECARFRAME_API UClass* Z_Construct_UClass_URaceCarFrameWheelFront_NoRegister();
	RACECARFRAME_API UClass* Z_Construct_UClass_URaceCarFrameWheelFront();
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_RaceCarFrame();
// End Cross Module References
	void URaceCarFrameWheelFront::StaticRegisterNativesURaceCarFrameWheelFront()
	{
	}
	UClass* Z_Construct_UClass_URaceCarFrameWheelFront_NoRegister()
	{
		return URaceCarFrameWheelFront::StaticClass();
	}
	struct Z_Construct_UClass_URaceCarFrameWheelFront_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URaceCarFrameWheelFront_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChaosVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_RaceCarFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URaceCarFrameWheelFront_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RaceCarFrameWheelFront.h" },
		{ "ModuleRelativePath", "RaceCarFrameWheelFront.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URaceCarFrameWheelFront_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URaceCarFrameWheelFront>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URaceCarFrameWheelFront_Statics::ClassParams = {
		&URaceCarFrameWheelFront::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URaceCarFrameWheelFront_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URaceCarFrameWheelFront_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URaceCarFrameWheelFront()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URaceCarFrameWheelFront_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URaceCarFrameWheelFront, 2830246355);
	template<> RACECARFRAME_API UClass* StaticClass<URaceCarFrameWheelFront>()
	{
		return URaceCarFrameWheelFront::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URaceCarFrameWheelFront(Z_Construct_UClass_URaceCarFrameWheelFront, &URaceCarFrameWheelFront::StaticClass, TEXT("/Script/RaceCarFrame"), TEXT("URaceCarFrameWheelFront"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URaceCarFrameWheelFront);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
