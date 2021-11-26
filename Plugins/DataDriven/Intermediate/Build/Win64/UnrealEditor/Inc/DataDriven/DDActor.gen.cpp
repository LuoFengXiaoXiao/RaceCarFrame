// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDriven/Public/DDObject/DDActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDDActor() {}
// Cross Module References
	DATADRIVEN_API UClass* Z_Construct_UClass_ADDActor_NoRegister();
	DATADRIVEN_API UClass* Z_Construct_UClass_ADDActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DataDriven();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDOO_NoRegister();
// End Cross Module References
	void ADDActor::StaticRegisterNativesADDActor()
	{
	}
	UClass* Z_Construct_UClass_ADDActor_NoRegister()
	{
		return ADDActor::StaticClass();
	}
	struct Z_Construct_UClass_ADDActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ModuleName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADDActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADDActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DDObject/DDActor.h" },
		{ "ModuleRelativePath", "Public/DDObject/DDActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADDActor_Statics::NewProp_ModuleName_MetaData[] = {
		{ "Category", "DataDriven" },
		{ "Comment", "// \xc4\xa3?????\xd6\xa3?????\xce\xaa?\xd5\xa3?\xcb\xb5??\xd2\xaa?\xd6\xb6?\xd6\xb8??????\xce\xaa?\xd5\xbe????\xd4\xb6?\xd6\xb8??\n" },
		{ "ModuleRelativePath", "Public/DDObject/DDActor.h" },
		{ "ToolTip", "\xc4\xa3?????\xd6\xa3?????\xce\xaa?\xd5\xa3?\xcb\xb5??\xd2\xaa?\xd6\xb6?\xd6\xb8??????\xce\xaa?\xd5\xbe????\xd4\xb6?\xd6\xb8??" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADDActor_Statics::NewProp_ModuleName = { "ModuleName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADDActor, ModuleName), METADATA_PARAMS(Z_Construct_UClass_ADDActor_Statics::NewProp_ModuleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADDActor_Statics::NewProp_ModuleName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADDActor_Statics::NewProp_ObjectName_MetaData[] = {
		{ "Category", "DataDriven" },
		{ "Comment", "// \xc4\xa3?????\xd6\xa3?????\xce\xaa?\xd5\xa3?\xcb\xb5??\xd2\xaa?\xd6\xb6?\xd6\xb8??????\xce\xaa?\xd5\xbe????\xd4\xb6?\xd6\xb8??\n" },
		{ "ModuleRelativePath", "Public/DDObject/DDActor.h" },
		{ "ToolTip", "\xc4\xa3?????\xd6\xa3?????\xce\xaa?\xd5\xa3?\xcb\xb5??\xd2\xaa?\xd6\xb6?\xd6\xb8??????\xce\xaa?\xd5\xbe????\xd4\xb6?\xd6\xb8??" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADDActor_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADDActor, ObjectName), METADATA_PARAMS(Z_Construct_UClass_ADDActor_Statics::NewProp_ObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADDActor_Statics::NewProp_ObjectName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADDActor_Statics::NewProp_ClassName_MetaData[] = {
		{ "Category", "DataDriven" },
		{ "Comment", "// \xc4\xa3?????\xd6\xa3?????\xce\xaa?\xd5\xa3?\xcb\xb5??\xd2\xaa?\xd6\xb6?\xd6\xb8??????\xce\xaa?\xd5\xbe????\xd4\xb6?\xd6\xb8??\n" },
		{ "ModuleRelativePath", "Public/DDObject/DDActor.h" },
		{ "ToolTip", "\xc4\xa3?????\xd6\xa3?????\xce\xaa?\xd5\xa3?\xcb\xb5??\xd2\xaa?\xd6\xb6?\xd6\xb8??????\xce\xaa?\xd5\xbe????\xd4\xb6?\xd6\xb8??" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADDActor_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADDActor, ClassName), METADATA_PARAMS(Z_Construct_UClass_ADDActor_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADDActor_Statics::NewProp_ClassName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADDActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADDActor_Statics::NewProp_ModuleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADDActor_Statics::NewProp_ObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADDActor_Statics::NewProp_ClassName,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADDActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDDOO_NoRegister, (int32)VTABLE_OFFSET(ADDActor, IDDOO), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADDActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADDActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADDActor_Statics::ClassParams = {
		&ADDActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADDActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADDActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADDActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADDActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADDActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADDActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADDActor, 1540902595);
	template<> DATADRIVEN_API UClass* StaticClass<ADDActor>()
	{
		return ADDActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADDActor(Z_Construct_UClass_ADDActor, &ADDActor::StaticClass, TEXT("/Script/DataDriven"), TEXT("ADDActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADDActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
