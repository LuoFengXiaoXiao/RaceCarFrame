// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDriven/Public/DDCore/DDWealth.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDDWealth() {}
// Cross Module References
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDWealth_NoRegister();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDWealth();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DataDriven();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDMM_NoRegister();
// End Cross Module References
	void UDDWealth::StaticRegisterNativesUDDWealth()
	{
	}
	UClass* Z_Construct_UClass_UDDWealth_NoRegister()
	{
		return UDDWealth::StaticClass();
	}
	struct Z_Construct_UClass_UDDWealth_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDDWealth_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDWealth_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DDCore/DDWealth.h" },
		{ "ModuleRelativePath", "Public/DDCore/DDWealth.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDDWealth_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDDMM_NoRegister, (int32)VTABLE_OFFSET(UDDWealth, IDDMM), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDDWealth_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDDWealth>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDDWealth_Statics::ClassParams = {
		&UDDWealth::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDDWealth_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDDWealth_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDDWealth()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDDWealth_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDDWealth, 3055853507);
	template<> DATADRIVEN_API UClass* StaticClass<UDDWealth>()
	{
		return UDDWealth::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDDWealth(Z_Construct_UClass_UDDWealth, &UDDWealth::StaticClass, TEXT("/Script/DataDriven"), TEXT("UDDWealth"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDDWealth);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
