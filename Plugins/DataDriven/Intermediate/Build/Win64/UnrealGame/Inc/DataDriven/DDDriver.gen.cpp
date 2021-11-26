// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDriven/Public/DDCore/DDDriver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDDDriver() {}
// Cross Module References
	DATADRIVEN_API UClass* Z_Construct_UClass_ADDDriver_NoRegister();
	DATADRIVEN_API UClass* Z_Construct_UClass_ADDDriver();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DataDriven();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDCenterModule_NoRegister();
// End Cross Module References
	void ADDDriver::StaticRegisterNativesADDDriver()
	{
	}
	UClass* Z_Construct_UClass_ADDDriver_NoRegister()
	{
		return ADDDriver::StaticClass();
	}
	struct Z_Construct_UClass_ADDDriver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ModuleType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADDDriver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADDDriver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DDCore/DDDriver.h" },
		{ "ModuleRelativePath", "Public/DDCore/DDDriver.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADDDriver_Statics::NewProp_RootScene_MetaData[] = {
		{ "Category", "DataDriven" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DDCore/DDDriver.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADDDriver_Statics::NewProp_RootScene = { "RootScene", nullptr, (EPropertyFlags)0x001000000208001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADDDriver, RootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADDDriver_Statics::NewProp_RootScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADDDriver_Statics::NewProp_RootScene_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADDDriver_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "DataDriven" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DDCore/DDDriver.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADDDriver_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x001000000208001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADDDriver, Center), Z_Construct_UClass_UDDCenterModule_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADDDriver_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADDDriver_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADDDriver_Statics::NewProp_ModuleType_MetaData[] = {
		{ "Category", "DataDriven" },
		{ "Comment", "// \xc4\xa3????\xd3\xa6??\xc3\xb6??????\n" },
		{ "ModuleRelativePath", "Public/DDCore/DDDriver.h" },
		{ "ToolTip", "\xc4\xa3????\xd3\xa6??\xc3\xb6??????" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADDDriver_Statics::NewProp_ModuleType = { "ModuleType", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADDDriver, ModuleType), METADATA_PARAMS(Z_Construct_UClass_ADDDriver_Statics::NewProp_ModuleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADDDriver_Statics::NewProp_ModuleType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADDDriver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADDDriver_Statics::NewProp_RootScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADDDriver_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADDDriver_Statics::NewProp_ModuleType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADDDriver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADDDriver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADDDriver_Statics::ClassParams = {
		&ADDDriver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADDDriver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADDDriver_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADDDriver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADDDriver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADDDriver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADDDriver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADDDriver, 2639364244);
	template<> DATADRIVEN_API UClass* StaticClass<ADDDriver>()
	{
		return ADDDriver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADDDriver(Z_Construct_UClass_ADDDriver, &ADDDriver::StaticClass, TEXT("/Script/DataDriven"), TEXT("ADDDriver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADDDriver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
