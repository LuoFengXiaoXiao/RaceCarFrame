// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDriven/Public/DDObject/DDHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDDHUD() {}
// Cross Module References
	DATADRIVEN_API UClass* Z_Construct_UClass_ADDHUD_NoRegister();
	DATADRIVEN_API UClass* Z_Construct_UClass_ADDHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_DataDriven();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDOO_NoRegister();
// End Cross Module References
	void ADDHUD::StaticRegisterNativesADDHUD()
	{
	}
	UClass* Z_Construct_UClass_ADDHUD_NoRegister()
	{
		return ADDHUD::StaticClass();
	}
	struct Z_Construct_UClass_ADDHUD_Statics
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
	UObject* (*const Z_Construct_UClass_ADDHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADDHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "DDObject/DDHUD.h" },
		{ "ModuleRelativePath", "Public/DDObject/DDHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADDHUD_Statics::NewProp_ModuleName_MetaData[] = {
		{ "Category", "DataDriven" },
		{ "Comment", "// \xc4\xa3?????\xd6\xa3?????\xce\xaa?\xd5\xa3?\xcb\xb5??\xd2\xaa?\xd6\xb6?\xd6\xb8??????\xce\xaa?\xd5\xbe????\xd4\xb6?\xd6\xb8??\n" },
		{ "ModuleRelativePath", "Public/DDObject/DDHUD.h" },
		{ "ToolTip", "\xc4\xa3?????\xd6\xa3?????\xce\xaa?\xd5\xa3?\xcb\xb5??\xd2\xaa?\xd6\xb6?\xd6\xb8??????\xce\xaa?\xd5\xbe????\xd4\xb6?\xd6\xb8??" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADDHUD_Statics::NewProp_ModuleName = { "ModuleName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADDHUD, ModuleName), METADATA_PARAMS(Z_Construct_UClass_ADDHUD_Statics::NewProp_ModuleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADDHUD_Statics::NewProp_ModuleName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADDHUD_Statics::NewProp_ObjectName_MetaData[] = {
		{ "Category", "DataDriven" },
		{ "Comment", "// \xc4\xa3?????\xd6\xa3?????\xce\xaa?\xd5\xa3?\xcb\xb5??\xd2\xaa?\xd6\xb6?\xd6\xb8??????\xce\xaa?\xd5\xbe????\xd4\xb6?\xd6\xb8??\n" },
		{ "ModuleRelativePath", "Public/DDObject/DDHUD.h" },
		{ "ToolTip", "\xc4\xa3?????\xd6\xa3?????\xce\xaa?\xd5\xa3?\xcb\xb5??\xd2\xaa?\xd6\xb6?\xd6\xb8??????\xce\xaa?\xd5\xbe????\xd4\xb6?\xd6\xb8??" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADDHUD_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADDHUD, ObjectName), METADATA_PARAMS(Z_Construct_UClass_ADDHUD_Statics::NewProp_ObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADDHUD_Statics::NewProp_ObjectName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADDHUD_Statics::NewProp_ClassName_MetaData[] = {
		{ "Category", "DataDriven" },
		{ "Comment", "// \xc4\xa3?????\xd6\xa3?????\xce\xaa?\xd5\xa3?\xcb\xb5??\xd2\xaa?\xd6\xb6?\xd6\xb8??????\xce\xaa?\xd5\xbe????\xd4\xb6?\xd6\xb8??\n" },
		{ "ModuleRelativePath", "Public/DDObject/DDHUD.h" },
		{ "ToolTip", "\xc4\xa3?????\xd6\xa3?????\xce\xaa?\xd5\xa3?\xcb\xb5??\xd2\xaa?\xd6\xb6?\xd6\xb8??????\xce\xaa?\xd5\xbe????\xd4\xb6?\xd6\xb8??" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADDHUD_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADDHUD, ClassName), METADATA_PARAMS(Z_Construct_UClass_ADDHUD_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADDHUD_Statics::NewProp_ClassName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADDHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADDHUD_Statics::NewProp_ModuleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADDHUD_Statics::NewProp_ObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADDHUD_Statics::NewProp_ClassName,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADDHUD_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDDOO_NoRegister, (int32)VTABLE_OFFSET(ADDHUD, IDDOO), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADDHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADDHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADDHUD_Statics::ClassParams = {
		&ADDHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADDHUD_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADDHUD_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADDHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADDHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADDHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADDHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADDHUD, 847413276);
	template<> DATADRIVEN_API UClass* StaticClass<ADDHUD>()
	{
		return ADDHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADDHUD(Z_Construct_UClass_ADDHUD, &ADDHUD::StaticClass, TEXT("/Script/DataDriven"), TEXT("ADDHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADDHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
