// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDriven/Public/DDObject/DDOO.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDDOO() {}
// Cross Module References
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDOO_NoRegister();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDOO();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DataDriven();
// End Cross Module References
	void UDDOO::StaticRegisterNativesUDDOO()
	{
	}
	UClass* Z_Construct_UClass_UDDOO_NoRegister()
	{
		return UDDOO::StaticClass();
	}
	struct Z_Construct_UClass_UDDOO_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDDOO_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDOO_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DDObject/DDOO.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDDOO_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDDOO>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDDOO_Statics::ClassParams = {
		&UDDOO::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDDOO_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDDOO_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDDOO()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDDOO_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDDOO, 2932336910);
	template<> DATADRIVEN_API UClass* StaticClass<UDDOO>()
	{
		return UDDOO::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDDOO(Z_Construct_UClass_UDDOO, &UDDOO::StaticClass, TEXT("/Script/DataDriven"), TEXT("UDDOO"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDDOO);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
