// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDriven/Public/DDCommon/DDTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDDTypes() {}
// Cross Module References
	DATADRIVEN_API UEnum* Z_Construct_UEnum_DataDriven_EAgreementType();
	UPackage* Z_Construct_UPackage__Script_DataDriven();
	DATADRIVEN_API UEnum* Z_Construct_UEnum_DataDriven_EBaseObjectState();
	DATADRIVEN_API UEnum* Z_Construct_UEnum_DataDriven_EBaseObjectLife();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDTypes_NoRegister();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDTypes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EAgreementType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DataDriven_EAgreementType, Z_Construct_UPackage__Script_DataDriven(), TEXT("EAgreementType"));
		}
		return Singleton;
	}
	template<> DATADRIVEN_API UEnum* StaticEnum<EAgreementType>()
	{
		return EAgreementType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAgreementType(EAgreementType_StaticEnum, TEXT("/Script/DataDriven"), TEXT("EAgreementType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DataDriven_EAgreementType_Hash() { return 2495792609U; }
	UEnum* Z_Construct_UEnum_DataDriven_EAgreementType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAgreementType"), 0, Get_Z_Construct_UEnum_DataDriven_EAgreementType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAgreementType::SelfObject", (int64)EAgreementType::SelfObject },
				{ "EAgreementType::OtherObject", (int64)EAgreementType::OtherObject },
				{ "EAgreementType::ClassOtherObject", (int64)EAgreementType::ClassOtherObject },
				{ "EAgreementType::SelfClass", (int64)EAgreementType::SelfClass },
				{ "EAgreementType::OtherClass", (int64)EAgreementType::OtherClass },
				{ "EAgreementType::All", (int64)EAgreementType::All },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Comment", "// \xe7\xbb\x99\xe8\xbf\x99\xe4\xb8\xaa\xe7\xb1\xbb\xe4\xb9\x8b\xe5\xa4\x96\xe7\x9a\x84\xe7\xb1\xbb\xe9\x80\x9a\xe4\xbf\xa1\n" },
				{ "All.Name", "EAgreementType::All" },
				{ "All.ToolTip", "\xe7\xbb\x99\xe8\xbf\x99\xe4\xb8\xaa\xe7\xb1\xbb\xe4\xb9\x8b\xe5\xa4\x96\xe7\x9a\x84\xe7\xb1\xbb\xe9\x80\x9a\xe4\xbf\xa1" },
				{ "ClassOtherObject.Comment", "// \xe7\xbb\x99\xe4\xbc\xa0\xe5\x85\xa5\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe4\xb9\x8b\xe5\xa4\x96\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe9\x80\x9a\xe4\xbf\xa1\n" },
				{ "ClassOtherObject.Name", "EAgreementType::ClassOtherObject" },
				{ "ClassOtherObject.ToolTip", "\xe7\xbb\x99\xe4\xbc\xa0\xe5\x85\xa5\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe4\xb9\x8b\xe5\xa4\x96\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe9\x80\x9a\xe4\xbf\xa1" },
				{ "Comment", "// \xe5\xaf\xb9\xe8\xb1\xa1\xe6\x9f\xa5\xe6\x89\xbe\xe5\x8d\x8f\xe8\xae\xae\n" },
				{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
				{ "OtherClass.Comment", "// \xe7\xbb\x99\xe8\xbf\x99\xe4\xb8\xaa\xe7\xb1\xbb\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe9\x80\x9a\xe4\xbf\xa1\n" },
				{ "OtherClass.Name", "EAgreementType::OtherClass" },
				{ "OtherClass.ToolTip", "\xe7\xbb\x99\xe8\xbf\x99\xe4\xb8\xaa\xe7\xb1\xbb\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe9\x80\x9a\xe4\xbf\xa1" },
				{ "OtherObject.Comment", "// \xe7\xbb\x99\xe4\xbc\xa0\xe5\x85\xa5\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe9\x80\x9a\xe4\xbf\xa1\n" },
				{ "OtherObject.Name", "EAgreementType::OtherObject" },
				{ "OtherObject.ToolTip", "\xe7\xbb\x99\xe4\xbc\xa0\xe5\x85\xa5\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe9\x80\x9a\xe4\xbf\xa1" },
				{ "SelfClass.Comment", "// \xe7\xbb\x99\xe4\xbc\xa0\xe5\x85\xa5\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe7\x9a\x84\xe7\x9b\xb8\xe5\x90\x8c\xe7\xb1\xbb\xe7\x9a\x84\xe5\x85\xb6\xe4\xbb\x96\xe5\xaf\xb9\xe8\xb1\xa1\xe9\x80\x9a\xe4\xbf\xa1\xef\xbc\x8c\xe8\xb0\x83\xe7\x94\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe6\x96\xb9\xe6\xb3\x95\xe8\xa6\x81\xe7\xa1\xae\xe4\xbf\x9d\xe4\xbc\xa0\xe8\xbf\x87\xe6\x9d\xa5\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe9\x83\xbd\xe6\x98\xaf\xe5\x90\x8c\xe4\xb8\x80\xe7\xb1\xbb\xe7\x9a\x84\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\x8d\xe5\x90\x8c\xe7\xb1\xbb\xe5\xb0\xb1\xe5\xa4\x9a\xe6\xac\xa1\xe9\x80\x9a\xe4\xbf\xa1\n" },
				{ "SelfClass.Name", "EAgreementType::SelfClass" },
				{ "SelfClass.ToolTip", "\xe7\xbb\x99\xe4\xbc\xa0\xe5\x85\xa5\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe7\x9a\x84\xe7\x9b\xb8\xe5\x90\x8c\xe7\xb1\xbb\xe7\x9a\x84\xe5\x85\xb6\xe4\xbb\x96\xe5\xaf\xb9\xe8\xb1\xa1\xe9\x80\x9a\xe4\xbf\xa1\xef\xbc\x8c\xe8\xb0\x83\xe7\x94\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe6\x96\xb9\xe6\xb3\x95\xe8\xa6\x81\xe7\xa1\xae\xe4\xbf\x9d\xe4\xbc\xa0\xe8\xbf\x87\xe6\x9d\xa5\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe9\x83\xbd\xe6\x98\xaf\xe5\x90\x8c\xe4\xb8\x80\xe7\xb1\xbb\xe7\x9a\x84\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\x8d\xe5\x90\x8c\xe7\xb1\xbb\xe5\xb0\xb1\xe5\xa4\x9a\xe6\xac\xa1\xe9\x80\x9a\xe4\xbf\xa1" },
				{ "SelfObject.Name", "EAgreementType::SelfObject" },
				{ "ToolTip", "\xe5\xaf\xb9\xe8\xb1\xa1\xe6\x9f\xa5\xe6\x89\xbe\xe5\x8d\x8f\xe8\xae\xae" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DataDriven,
				nullptr,
				"EAgreementType",
				"EAgreementType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBaseObjectState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DataDriven_EBaseObjectState, Z_Construct_UPackage__Script_DataDriven(), TEXT("EBaseObjectState"));
		}
		return Singleton;
	}
	template<> DATADRIVEN_API UEnum* StaticEnum<EBaseObjectState>()
	{
		return EBaseObjectState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBaseObjectState(EBaseObjectState_StaticEnum, TEXT("/Script/DataDriven"), TEXT("EBaseObjectState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DataDriven_EBaseObjectState_Hash() { return 406486665U; }
	UEnum* Z_Construct_UEnum_DataDriven_EBaseObjectState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBaseObjectState"), 0, Get_Z_Construct_UEnum_DataDriven_EBaseObjectState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBaseObjectState::Active", (int64)EBaseObjectState::Active },
				{ "EBaseObjectState::Stable", (int64)EBaseObjectState::Stable },
				{ "EBaseObjectState::Destory", (int64)EBaseObjectState::Destory },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Active.Name", "EBaseObjectState::Active" },
				{ "Comment", "// BaseObject\xe7\x94\x9f\xe5\x91\xbd\xe5\x91\xa8\xe6\x9c\x9f\xe7\x8a\xb6\xe6\x80\x81\n" },
				{ "Destory.Comment", "// \xe7\xa8\xb3\xe5\xae\x9a\n" },
				{ "Destory.Name", "EBaseObjectState::Destory" },
				{ "Destory.ToolTip", "\xe7\xa8\xb3\xe5\xae\x9a" },
				{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
				{ "Stable.Comment", "//\xe6\xbf\x80\xe6\xb4\xbb\n" },
				{ "Stable.Name", "EBaseObjectState::Stable" },
				{ "Stable.ToolTip", "\xe6\xbf\x80\xe6\xb4\xbb" },
				{ "ToolTip", "BaseObject\xe7\x94\x9f\xe5\x91\xbd\xe5\x91\xa8\xe6\x9c\x9f\xe7\x8a\xb6\xe6\x80\x81" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DataDriven,
				nullptr,
				"EBaseObjectState",
				"EBaseObjectState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBaseObjectLife_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DataDriven_EBaseObjectLife, Z_Construct_UPackage__Script_DataDriven(), TEXT("EBaseObjectLife"));
		}
		return Singleton;
	}
	template<> DATADRIVEN_API UEnum* StaticEnum<EBaseObjectLife>()
	{
		return EBaseObjectLife_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBaseObjectLife(EBaseObjectLife_StaticEnum, TEXT("/Script/DataDriven"), TEXT("EBaseObjectLife"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DataDriven_EBaseObjectLife_Hash() { return 775883525U; }
	UEnum* Z_Construct_UEnum_DataDriven_EBaseObjectLife()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBaseObjectLife"), 0, Get_Z_Construct_UEnum_DataDriven_EBaseObjectLife_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBaseObjectLife::None", (int64)EBaseObjectLife::None },
				{ "EBaseObjectLife::Init", (int64)EBaseObjectLife::Init },
				{ "EBaseObjectLife::Loading", (int64)EBaseObjectLife::Loading },
				{ "EBaseObjectLife::Register", (int64)EBaseObjectLife::Register },
				{ "EBaseObjectLife::Enable", (int64)EBaseObjectLife::Enable },
				{ "EBaseObjectLife::Disable", (int64)EBaseObjectLife::Disable },
				{ "EBaseObjectLife::UnRegister", (int64)EBaseObjectLife::UnRegister },
				{ "EBaseObjectLife::UnLoading", (int64)EBaseObjectLife::UnLoading },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// BaseObject\xe7\x94\x9f\xe5\x91\xbd\xe5\x91\xa8\xe6\x9c\x9f\n" },
				{ "Disable.Name", "EBaseObjectLife::Disable" },
				{ "Enable.Name", "EBaseObjectLife::Enable" },
				{ "Init.Comment", "// \xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe7\x8a\xb6\xe6\x80\x81\n" },
				{ "Init.Name", "EBaseObjectLife::Init" },
				{ "Init.ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe7\x8a\xb6\xe6\x80\x81" },
				{ "Loading.Name", "EBaseObjectLife::Loading" },
				{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
				{ "None.Name", "EBaseObjectLife::None" },
				{ "Register.Name", "EBaseObjectLife::Register" },
				{ "ToolTip", "BaseObject\xe7\x94\x9f\xe5\x91\xbd\xe5\x91\xa8\xe6\x9c\x9f" },
				{ "UnLoading.Name", "EBaseObjectLife::UnLoading" },
				{ "UnRegister.Name", "EBaseObjectLife::UnRegister" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DataDriven,
				nullptr,
				"EBaseObjectLife",
				"EBaseObjectLife",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UDDTypes::StaticRegisterNativesUDDTypes()
	{
	}
	UClass* Z_Construct_UClass_UDDTypes_NoRegister()
	{
		return UDDTypes::StaticClass();
	}
	struct Z_Construct_UClass_UDDTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDDTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDTypes_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DDCommon/DDTypes.h" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDDTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDDTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDDTypes_Statics::ClassParams = {
		&UDDTypes::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDDTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDDTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDDTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDDTypes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDDTypes, 3235163449);
	template<> DATADRIVEN_API UClass* StaticClass<UDDTypes>()
	{
		return UDDTypes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDDTypes(Z_Construct_UClass_UDDTypes, &UDDTypes::StaticClass, TEXT("/Script/DataDriven"), TEXT("UDDTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDDTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
