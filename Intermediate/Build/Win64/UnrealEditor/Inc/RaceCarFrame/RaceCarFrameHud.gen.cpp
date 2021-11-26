// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaceCarFrame/RaceCarFrameHud.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRaceCarFrameHud() {}
// Cross Module References
	RACECARFRAME_API UClass* Z_Construct_UClass_ARaceCarFrameHud_NoRegister();
	RACECARFRAME_API UClass* Z_Construct_UClass_ARaceCarFrameHud();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_RaceCarFrame();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
	void ARaceCarFrameHud::StaticRegisterNativesARaceCarFrameHud()
	{
	}
	UClass* Z_Construct_UClass_ARaceCarFrameHud_NoRegister()
	{
		return ARaceCarFrameHud::StaticClass();
	}
	struct Z_Construct_UClass_ARaceCarFrameHud_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDFont_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDFont;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARaceCarFrameHud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_RaceCarFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaceCarFrameHud_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "RaceCarFrameHud.h" },
		{ "ModuleRelativePath", "RaceCarFrameHud.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaceCarFrameHud_Statics::NewProp_HUDFont_MetaData[] = {
		{ "Comment", "/** Font used to render the vehicle info */" },
		{ "ModuleRelativePath", "RaceCarFrameHud.h" },
		{ "ToolTip", "Font used to render the vehicle info" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARaceCarFrameHud_Statics::NewProp_HUDFont = { "HUDFont", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaceCarFrameHud, HUDFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARaceCarFrameHud_Statics::NewProp_HUDFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaceCarFrameHud_Statics::NewProp_HUDFont_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARaceCarFrameHud_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaceCarFrameHud_Statics::NewProp_HUDFont,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARaceCarFrameHud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARaceCarFrameHud>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARaceCarFrameHud_Statics::ClassParams = {
		&ARaceCarFrameHud::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARaceCarFrameHud_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARaceCarFrameHud_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARaceCarFrameHud_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARaceCarFrameHud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARaceCarFrameHud()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARaceCarFrameHud_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARaceCarFrameHud, 994364277);
	template<> RACECARFRAME_API UClass* StaticClass<ARaceCarFrameHud>()
	{
		return ARaceCarFrameHud::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARaceCarFrameHud(Z_Construct_UClass_ARaceCarFrameHud, &ARaceCarFrameHud::StaticClass, TEXT("/Script/RaceCarFrame"), TEXT("ARaceCarFrameHud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARaceCarFrameHud);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
