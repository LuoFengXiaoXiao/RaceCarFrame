// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaceCarFrame/CoroActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoroActor() {}
// Cross Module References
	RACECARFRAME_API UClass* Z_Construct_UClass_ACoroActor_NoRegister();
	RACECARFRAME_API UClass* Z_Construct_UClass_ACoroActor();
	DATADRIVEN_API UClass* Z_Construct_UClass_ADDActor();
	UPackage* Z_Construct_UPackage__Script_RaceCarFrame();
// End Cross Module References
	void ACoroActor::StaticRegisterNativesACoroActor()
	{
	}
	UClass* Z_Construct_UClass_ACoroActor_NoRegister()
	{
		return ACoroActor::StaticClass();
	}
	struct Z_Construct_UClass_ACoroActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACoroActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADDActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RaceCarFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoroActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CoroActor.h" },
		{ "ModuleRelativePath", "CoroActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoroActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoroActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoroActor_Statics::ClassParams = {
		&ACoroActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACoroActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACoroActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACoroActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACoroActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACoroActor, 3823958368);
	template<> RACECARFRAME_API UClass* StaticClass<ACoroActor>()
	{
		return ACoroActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACoroActor(Z_Construct_UClass_ACoroActor, &ACoroActor::StaticClass, TEXT("/Script/RaceCarFrame"), TEXT("ACoroActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoroActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
