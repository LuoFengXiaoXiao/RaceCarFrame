// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDriven/Public/DDCore/DDModule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDDModule() {}
// Cross Module References
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDModule_NoRegister();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDModule();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_DataDriven();
// End Cross Module References
	void UDDModule::StaticRegisterNativesUDDModule()
	{
	}
	UClass* Z_Construct_UClass_UDDModule_NoRegister()
	{
		return UDDModule::StaticClass();
	}
	struct Z_Construct_UClass_UDDModule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ModuleIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDDModule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDModule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "DDCore/DDModule.h" },
		{ "ModuleRelativePath", "Public/DDCore/DDModule.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDModule_Statics::NewProp_ModuleIndex_MetaData[] = {
		{ "Category", "DataDriven" },
		{ "ModuleRelativePath", "Public/DDCore/DDModule.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDDModule_Statics::NewProp_ModuleIndex = { "ModuleIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDModule, ModuleIndex), METADATA_PARAMS(Z_Construct_UClass_UDDModule_Statics::NewProp_ModuleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDModule_Statics::NewProp_ModuleIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDDModule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDModule_Statics::NewProp_ModuleIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDDModule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDDModule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDDModule_Statics::ClassParams = {
		&UDDModule::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDDModule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDDModule_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDDModule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDDModule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDDModule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDDModule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDDModule, 2212810945);
	template<> DATADRIVEN_API UClass* StaticClass<UDDModule>()
	{
		return UDDModule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDDModule(Z_Construct_UClass_UDDModule, &UDDModule::StaticClass, TEXT("/Script/DataDriven"), TEXT("UDDModule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDDModule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
