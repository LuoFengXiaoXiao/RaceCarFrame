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
	DATADRIVEN_API UEnum* Z_Construct_UEnum_DataDriven_EAgreementType();
	DATADRIVEN_API UClass* Z_Construct_UClass_UWealthData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDDModule::execDisableObject)
	{
		P_GET_ENUM(EAgreementType,Z_Param_Agreement);
		P_GET_TARRAY(FName,Z_Param_TargetNameGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableObject(EAgreementType(Z_Param_Agreement),Z_Param_TargetNameGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDDModule::execEnableObject)
	{
		P_GET_ENUM(EAgreementType,Z_Param_Agreement);
		P_GET_TARRAY(FName,Z_Param_TargetNameGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableObject(EAgreementType(Z_Param_Agreement),Z_Param_TargetNameGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDDModule::execDestoryObject)
	{
		P_GET_ENUM(EAgreementType,Z_Param_Agreement);
		P_GET_TARRAY(FName,Z_Param_TargetNameGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestoryObject(EAgreementType(Z_Param_Agreement),Z_Param_TargetNameGroup);
		P_NATIVE_END;
	}
	void UDDModule::StaticRegisterNativesUDDModule()
	{
		UClass* Class = UDDModule::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestoryObject", &UDDModule::execDestoryObject },
			{ "DisableObject", &UDDModule::execDisableObject },
			{ "EnableObject", &UDDModule::execEnableObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDDModule_DestoryObject_Statics
	{
		struct DDModule_eventDestoryObject_Parms
		{
			EAgreementType Agreement;
			TArray<FName> TargetNameGroup;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Agreement_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Agreement;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetNameGroup_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetNameGroup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDDModule_DestoryObject_Statics::NewProp_Agreement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDDModule_DestoryObject_Statics::NewProp_Agreement = { "Agreement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DDModule_eventDestoryObject_Parms, Agreement), Z_Construct_UEnum_DataDriven_EAgreementType, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDDModule_DestoryObject_Statics::NewProp_TargetNameGroup_Inner = { "TargetNameGroup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDDModule_DestoryObject_Statics::NewProp_TargetNameGroup = { "TargetNameGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DDModule_eventDestoryObject_Parms, TargetNameGroup), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDDModule_DestoryObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDModule_DestoryObject_Statics::NewProp_Agreement_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDModule_DestoryObject_Statics::NewProp_Agreement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDModule_DestoryObject_Statics::NewProp_TargetNameGroup_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDModule_DestoryObject_Statics::NewProp_TargetNameGroup,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDDModule_DestoryObject_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ?????\xc2\xbc?--???????\xd9\xb6???\n" },
		{ "ModuleRelativePath", "Public/DDCore/DDModule.h" },
		{ "ToolTip", "?????\xc2\xbc?--???????\xd9\xb6???" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDDModule_DestoryObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDDModule, nullptr, "DestoryObject", nullptr, nullptr, sizeof(DDModule_eventDestoryObject_Parms), Z_Construct_UFunction_UDDModule_DestoryObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDDModule_DestoryObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDDModule_DestoryObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDDModule_DestoryObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDDModule_DestoryObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDDModule_DestoryObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDDModule_DisableObject_Statics
	{
		struct DDModule_eventDisableObject_Parms
		{
			EAgreementType Agreement;
			TArray<FName> TargetNameGroup;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Agreement_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Agreement;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetNameGroup_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetNameGroup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDDModule_DisableObject_Statics::NewProp_Agreement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDDModule_DisableObject_Statics::NewProp_Agreement = { "Agreement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DDModule_eventDisableObject_Parms, Agreement), Z_Construct_UEnum_DataDriven_EAgreementType, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDDModule_DisableObject_Statics::NewProp_TargetNameGroup_Inner = { "TargetNameGroup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDDModule_DisableObject_Statics::NewProp_TargetNameGroup = { "TargetNameGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DDModule_eventDisableObject_Parms, TargetNameGroup), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDDModule_DisableObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDModule_DisableObject_Statics::NewProp_Agreement_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDModule_DisableObject_Statics::NewProp_Agreement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDModule_DisableObject_Statics::NewProp_TargetNameGroup_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDModule_DisableObject_Statics::NewProp_TargetNameGroup,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDDModule_DisableObject_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ?????\xc2\xbc?--????\xca\xa7??????\n" },
		{ "ModuleRelativePath", "Public/DDCore/DDModule.h" },
		{ "ToolTip", "?????\xc2\xbc?--????\xca\xa7??????" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDDModule_DisableObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDDModule, nullptr, "DisableObject", nullptr, nullptr, sizeof(DDModule_eventDisableObject_Parms), Z_Construct_UFunction_UDDModule_DisableObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDDModule_DisableObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDDModule_DisableObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDDModule_DisableObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDDModule_DisableObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDDModule_DisableObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDDModule_EnableObject_Statics
	{
		struct DDModule_eventEnableObject_Parms
		{
			EAgreementType Agreement;
			TArray<FName> TargetNameGroup;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Agreement_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Agreement;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetNameGroup_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetNameGroup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDDModule_EnableObject_Statics::NewProp_Agreement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDDModule_EnableObject_Statics::NewProp_Agreement = { "Agreement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DDModule_eventEnableObject_Parms, Agreement), Z_Construct_UEnum_DataDriven_EAgreementType, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDDModule_EnableObject_Statics::NewProp_TargetNameGroup_Inner = { "TargetNameGroup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDDModule_EnableObject_Statics::NewProp_TargetNameGroup = { "TargetNameGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DDModule_eventEnableObject_Parms, TargetNameGroup), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDDModule_EnableObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDModule_EnableObject_Statics::NewProp_Agreement_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDModule_EnableObject_Statics::NewProp_Agreement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDModule_EnableObject_Statics::NewProp_TargetNameGroup_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDModule_EnableObject_Statics::NewProp_TargetNameGroup,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDDModule_EnableObject_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ?????\xc2\xbc?--????????????\n" },
		{ "ModuleRelativePath", "Public/DDCore/DDModule.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDDModule_EnableObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDDModule, nullptr, "EnableObject", nullptr, nullptr, sizeof(DDModule_eventEnableObject_Parms), Z_Construct_UFunction_UDDModule_EnableObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDDModule_EnableObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDDModule_EnableObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDDModule_EnableObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDDModule_EnableObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDDModule_EnableObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDDModule_NoRegister()
	{
		return UDDModule::StaticClass();
	}
	struct Z_Construct_UClass_UDDModule_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WealthData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WealthData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDDModule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDDModule_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDDModule_DestoryObject, "DestoryObject" }, // 380525070
		{ &Z_Construct_UFunction_UDDModule_DisableObject, "DisableObject" }, // 932233881
		{ &Z_Construct_UFunction_UDDModule_EnableObject, "EnableObject" }, // 2833576657
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDDModule_Statics::NewProp_WealthData_Inner = { "WealthData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWealthData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDModule_Statics::NewProp_WealthData_MetaData[] = {
		{ "Category", "DataDriven" },
		{ "ModuleRelativePath", "Public/DDCore/DDModule.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDDModule_Statics::NewProp_WealthData = { "WealthData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDModule, WealthData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDDModule_Statics::NewProp_WealthData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDModule_Statics::NewProp_WealthData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDDModule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDModule_Statics::NewProp_WealthData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDModule_Statics::NewProp_WealthData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDDModule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDDModule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDDModule_Statics::ClassParams = {
		&UDDModule::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDDModule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UDDModule, 3313321356);
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
