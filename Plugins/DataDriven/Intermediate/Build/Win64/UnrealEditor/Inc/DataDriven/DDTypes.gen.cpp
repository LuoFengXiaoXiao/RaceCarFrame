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
	DATADRIVEN_API UEnum* Z_Construct_UEnum_DataDriven_EWealthType();
	UPackage* Z_Construct_UPackage__Script_DataDriven();
	DATADRIVEN_API UEnum* Z_Construct_UEnum_DataDriven_ECallResult();
	DATADRIVEN_API UEnum* Z_Construct_UEnum_DataDriven_EAgreementType();
	DATADRIVEN_API UEnum* Z_Construct_UEnum_DataDriven_EBaseObjectState();
	DATADRIVEN_API UEnum* Z_Construct_UEnum_DataDriven_EBaseObjectLife();
	DATADRIVEN_API UScriptStruct* Z_Construct_UScriptStruct_FWealthUrl();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DATADRIVEN_API UScriptStruct* Z_Construct_UScriptStruct_FClassWealthEntry();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DATADRIVEN_API UScriptStruct* Z_Construct_UScriptStruct_FObjectWealthEntry();
	DATADRIVEN_API UScriptStruct* Z_Construct_UScriptStruct_FWealthWidget();
	DATADRIVEN_API UScriptStruct* Z_Construct_UScriptStruct_FWealthItem();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	DATADRIVEN_API UScriptStruct* Z_Construct_UScriptStruct_FWealthActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	DATADRIVEN_API UScriptStruct* Z_Construct_UScriptStruct_FWealthObject();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDTypes_NoRegister();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDTypes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DATADRIVEN_API UClass* Z_Construct_UClass_UWealthData_NoRegister();
	DATADRIVEN_API UClass* Z_Construct_UClass_UWealthData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
// End Cross Module References
	static UEnum* EWealthType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DataDriven_EWealthType, Z_Construct_UPackage__Script_DataDriven(), TEXT("EWealthType"));
		}
		return Singleton;
	}
	template<> DATADRIVEN_API UEnum* StaticEnum<EWealthType>()
	{
		return EWealthType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWealthType(EWealthType_StaticEnum, TEXT("/Script/DataDriven"), TEXT("EWealthType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DataDriven_EWealthType_Hash() { return 3462422694U; }
	UEnum* Z_Construct_UEnum_DataDriven_EWealthType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWealthType"), 0, Get_Z_Construct_UEnum_DataDriven_EWealthType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWealthType::Object", (int64)EWealthType::Object },
				{ "EWealthType::Actor", (int64)EWealthType::Actor },
				{ "EWealthType::Widget", (int64)EWealthType::Widget },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Actor.Name", "EWealthType::Actor" },
				{ "Comment", "// UClass \xe7\xb1\xbb\xe5\x9e\x8b\xe6\x9e\x9a\xe4\xb8\xbe\n" },
				{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
				{ "Object.Name", "EWealthType::Object" },
				{ "ToolTip", "UClass \xe7\xb1\xbb\xe5\x9e\x8b\xe6\x9e\x9a\xe4\xb8\xbe" },
				{ "Widget.Name", "EWealthType::Widget" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DataDriven,
				nullptr,
				"EWealthType",
				"EWealthType",
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
	static UEnum* ECallResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DataDriven_ECallResult, Z_Construct_UPackage__Script_DataDriven(), TEXT("ECallResult"));
		}
		return Singleton;
	}
	template<> DATADRIVEN_API UEnum* StaticEnum<ECallResult>()
	{
		return ECallResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECallResult(ECallResult_StaticEnum, TEXT("/Script/DataDriven"), TEXT("ECallResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DataDriven_ECallResult_Hash() { return 3431654622U; }
	UEnum* Z_Construct_UEnum_DataDriven_ECallResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECallResult"), 0, Get_Z_Construct_UEnum_DataDriven_ECallResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECallResult::NoModule", (int64)ECallResult::NoModule },
				{ "ECallResult::LackObject", (int64)ECallResult::LackObject },
				{ "ECallResult::NoFunction", (int64)ECallResult::NoFunction },
				{ "ECallResult::Succeed", (int64)ECallResult::Succeed },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// \xe5\x8f\x8d\xe5\xb0\x84\xe6\x96\xb9\xe6\xb3\x95\xe5\x9b\x9e\xe8\xb0\x83\xef\xbc\x8c\xe9\xa1\xb9\xe7\x9b\xae\xe5\xbc\x80\xe5\x8f\x91\xe6\x97\xb6\xe8\xaf\xb7\xe7\xa1\xae\xe4\xbf\x9d\xe6\xaf\x8f\xe6\xac\xa1\xe8\xb0\x83\xe7\x94\xa8\xe9\x83\xbd\xe8\x83\xbd\xe6\x88\x90\xe5\x8a\x9f\n" },
				{ "LackObject.Comment", "// \xe7\xbc\xba\xe5\xa4\xb1\xe6\xa8\xa1\xe7\xbb\x84\n" },
				{ "LackObject.Name", "ECallResult::LackObject" },
				{ "LackObject.ToolTip", "\xe7\xbc\xba\xe5\xa4\xb1\xe6\xa8\xa1\xe7\xbb\x84" },
				{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
				{ "NoFunction.Comment", "// \xe7\xbc\xba\xe5\xa4\xb1\xe9\x83\xa8\xe5\x88\x86\xe5\xaf\xb9\xe8\xb1\xa1\n" },
				{ "NoFunction.Name", "ECallResult::NoFunction" },
				{ "NoFunction.ToolTip", "\xe7\xbc\xba\xe5\xa4\xb1\xe9\x83\xa8\xe5\x88\x86\xe5\xaf\xb9\xe8\xb1\xa1" },
				{ "NoModule.Name", "ECallResult::NoModule" },
				{ "Succeed.Comment", "// \xe7\xbc\xba\xe5\xa4\xb1\xe6\x96\xb9\xe6\xb3\x95\n" },
				{ "Succeed.Name", "ECallResult::Succeed" },
				{ "Succeed.ToolTip", "\xe7\xbc\xba\xe5\xa4\xb1\xe6\x96\xb9\xe6\xb3\x95" },
				{ "ToolTip", "\xe5\x8f\x8d\xe5\xb0\x84\xe6\x96\xb9\xe6\xb3\x95\xe5\x9b\x9e\xe8\xb0\x83\xef\xbc\x8c\xe9\xa1\xb9\xe7\x9b\xae\xe5\xbc\x80\xe5\x8f\x91\xe6\x97\xb6\xe8\xaf\xb7\xe7\xa1\xae\xe4\xbf\x9d\xe6\xaf\x8f\xe6\xac\xa1\xe8\xb0\x83\xe7\x94\xa8\xe9\x83\xbd\xe8\x83\xbd\xe6\x88\x90\xe5\x8a\x9f" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DataDriven,
				nullptr,
				"ECallResult",
				"ECallResult",
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
class UScriptStruct* FWealthUrl::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATADRIVEN_API uint32 Get_Z_Construct_UScriptStruct_FWealthUrl_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWealthUrl, Z_Construct_UPackage__Script_DataDriven(), TEXT("WealthUrl"), sizeof(FWealthUrl), Get_Z_Construct_UScriptStruct_FWealthUrl_Hash());
	}
	return Singleton;
}
template<> DATADRIVEN_API UScriptStruct* StaticStruct<FWealthUrl>()
{
	return FWealthUrl::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWealthUrl(FWealthUrl::StaticStruct, TEXT("/Script/DataDriven"), TEXT("WealthUrl"), false, nullptr, nullptr);
static struct FScriptStruct_DataDriven_StaticRegisterNativesFWealthUrl
{
	FScriptStruct_DataDriven_StaticRegisterNativesFWealthUrl()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WealthUrl")),new UScriptStruct::TCppStructOps<FWealthUrl>);
	}
} ScriptStruct_DataDriven_StaticRegisterNativesFWealthUrl;
	struct Z_Construct_UScriptStruct_FWealthUrl_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WealthName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthKind_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WealthKind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WealthPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthPtr_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_WealthPtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthUrl_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// \xe7\xba\xaf\xe8\x8e\xb7\xe5\x8f\x96\xe8\xb5\x84\xe6\xba\x90\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\xef\xbc\x8c\xe4\xb8\x8d\xe5\x8f\x82\xe4\xb8\x8e\xe5\x90\x8c\xe5\xbc\x82\xe6\xad\xa5\xe5\x8a\xa0\xe8\xbd\xbd\n" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "\xe7\xba\xaf\xe8\x8e\xb7\xe5\x8f\x96\xe8\xb5\x84\xe6\xba\x90\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\xef\xbc\x8c\xe4\xb8\x8d\xe5\x8f\x82\xe4\xb8\x8e\xe5\x90\x8c\xe5\xbc\x82\xe6\xad\xa5\xe5\x8a\xa0\xe8\xbd\xbd" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWealthUrl_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWealthUrl>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthUrl_Statics::NewProp_WealthName_MetaData[] = {
		{ "Category", "WealthUrl" },
		{ "Comment", "// \xe8\xb5\x84\xe6\xba\x90\xe5\x90\x8d\n" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe5\x90\x8d" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWealthUrl_Statics::NewProp_WealthName = { "WealthName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWealthUrl, WealthName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthUrl_Statics::NewProp_WealthName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthUrl_Statics::NewProp_WealthName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthUrl_Statics::NewProp_WealthKind_MetaData[] = {
		{ "Category", "WealthUrl" },
		{ "Comment", "// \xe8\xb5\x84\xe6\xba\x90\xe7\xa7\x8d\xe7\xb1\xbb\xe5\x90\x8d\n" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe7\xa7\x8d\xe7\xb1\xbb\xe5\x90\x8d" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWealthUrl_Statics::NewProp_WealthKind = { "WealthKind", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWealthUrl, WealthKind), METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthUrl_Statics::NewProp_WealthKind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthUrl_Statics::NewProp_WealthKind_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthUrl_Statics::NewProp_WealthPath_MetaData[] = {
		{ "Category", "WealthUrl" },
		{ "Comment", "// \xe8\xb5\x84\xe6\xba\x90\xe8\xb7\xaf\xe5\xbe\x84\n" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe8\xb7\xaf\xe5\xbe\x84" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWealthUrl_Statics::NewProp_WealthPath = { "WealthPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWealthUrl, WealthPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthUrl_Statics::NewProp_WealthPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthUrl_Statics::NewProp_WealthPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthUrl_Statics::NewProp_WealthPtr_MetaData[] = {
		{ "Category", "WealthUrl" },
		{ "Comment", "// \xe8\xb5\x84\xe6\xba\x90\xe9\x93\xbe\xe6\x8e\xa5\n" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe9\x93\xbe\xe6\x8e\xa5" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FWealthUrl_Statics::NewProp_WealthPtr = { "WealthPtr", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWealthUrl, WealthPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthUrl_Statics::NewProp_WealthPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthUrl_Statics::NewProp_WealthPtr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWealthUrl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWealthUrl_Statics::NewProp_WealthName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWealthUrl_Statics::NewProp_WealthKind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWealthUrl_Statics::NewProp_WealthPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWealthUrl_Statics::NewProp_WealthPtr,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWealthUrl_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
		nullptr,
		&NewStructOps,
		"WealthUrl",
		sizeof(FWealthUrl),
		alignof(FWealthUrl),
		Z_Construct_UScriptStruct_FWealthUrl_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthUrl_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthUrl_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthUrl_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWealthUrl()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWealthUrl_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WealthUrl"), sizeof(FWealthUrl), Get_Z_Construct_UScriptStruct_FWealthUrl_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWealthUrl_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWealthUrl_Hash() { return 1707573187U; }
class UScriptStruct* FClassWealthEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATADRIVEN_API uint32 Get_Z_Construct_UScriptStruct_FClassWealthEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClassWealthEntry, Z_Construct_UPackage__Script_DataDriven(), TEXT("ClassWealthEntry"), sizeof(FClassWealthEntry), Get_Z_Construct_UScriptStruct_FClassWealthEntry_Hash());
	}
	return Singleton;
}
template<> DATADRIVEN_API UScriptStruct* StaticStruct<FClassWealthEntry>()
{
	return FClassWealthEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClassWealthEntry(FClassWealthEntry::StaticStruct, TEXT("/Script/DataDriven"), TEXT("ClassWealthEntry"), false, nullptr, nullptr);
static struct FScriptStruct_DataDriven_StaticRegisterNativesFClassWealthEntry
{
	FScriptStruct_DataDriven_StaticRegisterNativesFClassWealthEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClassWealthEntry")),new UScriptStruct::TCppStructOps<FClassWealthEntry>);
	}
} ScriptStruct_DataDriven_StaticRegisterNativesFClassWealthEntry;
	struct Z_Construct_UScriptStruct_FClassWealthEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_WealthType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WealthType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WealthName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthKind_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WealthKind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthPtr_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_WealthPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WealthClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassWealthEntry_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// UClass\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\n" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "UClass\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassWealthEntry>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthType_MetaData[] = {
		{ "Category", "ClassWealthEntry" },
		{ "Comment", "// \xe8\xb5\x84\xe6\xba\x90\xe7\xb1\xbb\xe5\x88\xab\n" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe7\xb1\xbb\xe5\x88\xab" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthType = { "WealthType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassWealthEntry, WealthType), Z_Construct_UEnum_DataDriven_EWealthType, METADATA_PARAMS(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthName_MetaData[] = {
		{ "Category", "ClassWealthEntry" },
		{ "Comment", "// \xe8\xb5\x84\xe6\xba\x90\xe5\x90\x8d\n" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe5\x90\x8d" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthName = { "WealthName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassWealthEntry, WealthName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthKind_MetaData[] = {
		{ "Category", "ClassWealthEntry" },
		{ "Comment", "// \xe8\xb5\x84\xe6\xba\x90\xe7\xa7\x8d\xe7\xb1\xbb\xe5\x90\x8d\n" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe7\xa7\x8d\xe7\xb1\xbb\xe5\x90\x8d" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthKind = { "WealthKind", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassWealthEntry, WealthKind), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthKind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthKind_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthPtr_MetaData[] = {
		{ "Category", "ClassWealthEntry" },
		{ "Comment", "// \xe8\xb5\x84\xe6\xba\x90\xe9\x93\xbe\xe6\x8e\xa5\n" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe9\x93\xbe\xe6\x8e\xa5" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthPtr = { "WealthPtr", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassWealthEntry, WealthPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthPtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthClass_MetaData[] = {
		{ "Comment", "// \xe5\x8a\xa0\xe8\xbd\xbd\xe5\x87\xba\xe6\x9d\xa5\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\n" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "\xe5\x8a\xa0\xe8\xbd\xbd\xe5\x87\xba\xe6\x9d\xa5\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthClass = { "WealthClass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassWealthEntry, WealthClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassWealthEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthKind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassWealthEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
		nullptr,
		&NewStructOps,
		"ClassWealthEntry",
		sizeof(FClassWealthEntry),
		alignof(FClassWealthEntry),
		Z_Construct_UScriptStruct_FClassWealthEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClassWealthEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClassWealthEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClassWealthEntry"), sizeof(FClassWealthEntry), Get_Z_Construct_UScriptStruct_FClassWealthEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClassWealthEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClassWealthEntry_Hash() { return 1687890214U; }
class UScriptStruct* FObjectWealthEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATADRIVEN_API uint32 Get_Z_Construct_UScriptStruct_FObjectWealthEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectWealthEntry, Z_Construct_UPackage__Script_DataDriven(), TEXT("ObjectWealthEntry"), sizeof(FObjectWealthEntry), Get_Z_Construct_UScriptStruct_FObjectWealthEntry_Hash());
	}
	return Singleton;
}
template<> DATADRIVEN_API UScriptStruct* StaticStruct<FObjectWealthEntry>()
{
	return FObjectWealthEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FObjectWealthEntry(FObjectWealthEntry::StaticStruct, TEXT("/Script/DataDriven"), TEXT("ObjectWealthEntry"), false, nullptr, nullptr);
static struct FScriptStruct_DataDriven_StaticRegisterNativesFObjectWealthEntry
{
	FScriptStruct_DataDriven_StaticRegisterNativesFObjectWealthEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ObjectWealthEntry")),new UScriptStruct::TCppStructOps<FObjectWealthEntry>);
	}
} ScriptStruct_DataDriven_StaticRegisterNativesFObjectWealthEntry;
	struct Z_Construct_UScriptStruct_FObjectWealthEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WealthName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthKind_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WealthKind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WealthPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WealthObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Object\xe8\xb5\x84\xe6\xba\x90\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\n" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "Object\xe8\xb5\x84\xe6\xba\x90\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectWealthEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthName_MetaData[] = {
		{ "Category", "ObjectWealthEntry" },
		{ "Comment", "// \xe8\xb5\x84\xe6\xba\x90\xe5\x90\x8d\n" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe5\x90\x8d" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthName = { "WealthName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectWealthEntry, WealthName), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthKind_MetaData[] = {
		{ "Category", "ObjectWealthEntry" },
		{ "Comment", "// \xe8\xb5\x84\xe6\xba\x90\xe7\xa7\x8d\xe7\xb1\xbb\xe5\x90\x8d\n" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe7\xa7\x8d\xe7\xb1\xbb\xe5\x90\x8d" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthKind = { "WealthKind", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectWealthEntry, WealthKind), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthKind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthKind_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthPath_MetaData[] = {
		{ "Category", "ObjectWealthEntry" },
		{ "Comment", "// \xe8\xb5\x84\xe6\xba\x90\xe8\xb7\xaf\xe5\xbe\x84\n// FStringAssetReference was renamed to FSoftObjectPath\n" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe8\xb7\xaf\xe5\xbe\x84\nFStringAssetReference was renamed to FSoftObjectPath" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthPath = { "WealthPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectWealthEntry, WealthPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthObject_MetaData[] = {
		{ "Comment", "// \xe5\x8a\xa0\xe8\xbd\xbd\xe5\x87\xba\xe6\x9d\xa5\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\n" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "\xe5\x8a\xa0\xe8\xbd\xbd\xe5\x87\xba\xe6\x9d\xa5\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthObject = { "WealthObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectWealthEntry, WealthObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthKind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
		nullptr,
		&NewStructOps,
		"ObjectWealthEntry",
		sizeof(FObjectWealthEntry),
		alignof(FObjectWealthEntry),
		Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObjectWealthEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FObjectWealthEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ObjectWealthEntry"), sizeof(FObjectWealthEntry), Get_Z_Construct_UScriptStruct_FObjectWealthEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FObjectWealthEntry_Hash() { return 2286565761U; }

static_assert(std::is_polymorphic<FWealthWidget>() == std::is_polymorphic<FWealthItem>(), "USTRUCT FWealthWidget cannot be polymorphic unless super FWealthItem is polymorphic");

class UScriptStruct* FWealthWidget::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATADRIVEN_API uint32 Get_Z_Construct_UScriptStruct_FWealthWidget_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWealthWidget, Z_Construct_UPackage__Script_DataDriven(), TEXT("WealthWidget"), sizeof(FWealthWidget), Get_Z_Construct_UScriptStruct_FWealthWidget_Hash());
	}
	return Singleton;
}
template<> DATADRIVEN_API UScriptStruct* StaticStruct<FWealthWidget>()
{
	return FWealthWidget::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWealthWidget(FWealthWidget::StaticStruct, TEXT("/Script/DataDriven"), TEXT("WealthWidget"), false, nullptr, nullptr);
static struct FScriptStruct_DataDriven_StaticRegisterNativesFWealthWidget
{
	FScriptStruct_DataDriven_StaticRegisterNativesFWealthWidget()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WealthWidget")),new UScriptStruct::TCppStructOps<FWealthWidget>);
	}
} ScriptStruct_DataDriven_StaticRegisterNativesFWealthWidget;
	struct Z_Construct_UScriptStruct_FWealthWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WealthClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthWidget_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWealthWidget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWealthWidget>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthWidget_Statics::NewProp_WealthClass_MetaData[] = {
		{ "Category", "WealthWidget" },
		{ "Comment", "// \xe8\xaf\xa5\xe7\xa7\x8d\xe6\x8c\x87\xe5\xae\x9a\xe6\x96\xb9\xe5\xbc\x8f\xe5\x8f\xaf\xe4\xbb\xa5\xe5\x8f\xaa\xe8\x83\xbd\xe6\x8c\x87\xe5\xae\x9a\xe7\xbb\xa7\xe6\x89\xbf\xe8\x87\xaa""AActor\xe7\x9a\x84\xe5\xad\x90\xe7\xb1\xbb\n" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "\xe8\xaf\xa5\xe7\xa7\x8d\xe6\x8c\x87\xe5\xae\x9a\xe6\x96\xb9\xe5\xbc\x8f\xe5\x8f\xaf\xe4\xbb\xa5\xe5\x8f\xaa\xe8\x83\xbd\xe6\x8c\x87\xe5\xae\x9a\xe7\xbb\xa7\xe6\x89\xbf\xe8\x87\xaa""AActor\xe7\x9a\x84\xe5\xad\x90\xe7\xb1\xbb" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWealthWidget_Statics::NewProp_WealthClass = { "WealthClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWealthWidget, WealthClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthWidget_Statics::NewProp_WealthClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthWidget_Statics::NewProp_WealthClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWealthWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWealthWidget_Statics::NewProp_WealthClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWealthWidget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
		Z_Construct_UScriptStruct_FWealthItem,
		&NewStructOps,
		"WealthWidget",
		sizeof(FWealthWidget),
		alignof(FWealthWidget),
		Z_Construct_UScriptStruct_FWealthWidget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthWidget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthWidget_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthWidget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWealthWidget()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWealthWidget_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WealthWidget"), sizeof(FWealthWidget), Get_Z_Construct_UScriptStruct_FWealthWidget_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWealthWidget_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWealthWidget_Hash() { return 1323193458U; }

static_assert(std::is_polymorphic<FWealthActor>() == std::is_polymorphic<FWealthItem>(), "USTRUCT FWealthActor cannot be polymorphic unless super FWealthItem is polymorphic");

class UScriptStruct* FWealthActor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATADRIVEN_API uint32 Get_Z_Construct_UScriptStruct_FWealthActor_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWealthActor, Z_Construct_UPackage__Script_DataDriven(), TEXT("WealthActor"), sizeof(FWealthActor), Get_Z_Construct_UScriptStruct_FWealthActor_Hash());
	}
	return Singleton;
}
template<> DATADRIVEN_API UScriptStruct* StaticStruct<FWealthActor>()
{
	return FWealthActor::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWealthActor(FWealthActor::StaticStruct, TEXT("/Script/DataDriven"), TEXT("WealthActor"), false, nullptr, nullptr);
static struct FScriptStruct_DataDriven_StaticRegisterNativesFWealthActor
{
	FScriptStruct_DataDriven_StaticRegisterNativesFWealthActor()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WealthActor")),new UScriptStruct::TCppStructOps<FWealthActor>);
	}
} ScriptStruct_DataDriven_StaticRegisterNativesFWealthActor;
	struct Z_Construct_UScriptStruct_FWealthActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WealthClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthActor_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWealthActor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWealthActor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthActor_Statics::NewProp_WealthClass_MetaData[] = {
		{ "Category", "WealthActor" },
		{ "Comment", "// \xe8\xaf\xa5\xe7\xa7\x8d\xe6\x8c\x87\xe5\xae\x9a\xe6\x96\xb9\xe5\xbc\x8f\xe5\x8f\xaf\xe4\xbb\xa5\xe5\x8f\xaa\xe8\x83\xbd\xe6\x8c\x87\xe5\xae\x9a\xe7\xbb\xa7\xe6\x89\xbf\xe8\x87\xaa""AActor\xe7\x9a\x84\xe5\xad\x90\xe7\xb1\xbb\n" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "\xe8\xaf\xa5\xe7\xa7\x8d\xe6\x8c\x87\xe5\xae\x9a\xe6\x96\xb9\xe5\xbc\x8f\xe5\x8f\xaf\xe4\xbb\xa5\xe5\x8f\xaa\xe8\x83\xbd\xe6\x8c\x87\xe5\xae\x9a\xe7\xbb\xa7\xe6\x89\xbf\xe8\x87\xaa""AActor\xe7\x9a\x84\xe5\xad\x90\xe7\xb1\xbb" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWealthActor_Statics::NewProp_WealthClass = { "WealthClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWealthActor, WealthClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthActor_Statics::NewProp_WealthClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthActor_Statics::NewProp_WealthClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthActor_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "WealthActor" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWealthActor_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWealthActor, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthActor_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthActor_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWealthActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWealthActor_Statics::NewProp_WealthClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWealthActor_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWealthActor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
		Z_Construct_UScriptStruct_FWealthItem,
		&NewStructOps,
		"WealthActor",
		sizeof(FWealthActor),
		alignof(FWealthActor),
		Z_Construct_UScriptStruct_FWealthActor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthActor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthActor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthActor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWealthActor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWealthActor_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WealthActor"), sizeof(FWealthActor), Get_Z_Construct_UScriptStruct_FWealthActor_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWealthActor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWealthActor_Hash() { return 1656262601U; }

static_assert(std::is_polymorphic<FWealthObject>() == std::is_polymorphic<FWealthItem>(), "USTRUCT FWealthObject cannot be polymorphic unless super FWealthItem is polymorphic");

class UScriptStruct* FWealthObject::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATADRIVEN_API uint32 Get_Z_Construct_UScriptStruct_FWealthObject_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWealthObject, Z_Construct_UPackage__Script_DataDriven(), TEXT("WealthObject"), sizeof(FWealthObject), Get_Z_Construct_UScriptStruct_FWealthObject_Hash());
	}
	return Singleton;
}
template<> DATADRIVEN_API UScriptStruct* StaticStruct<FWealthObject>()
{
	return FWealthObject::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWealthObject(FWealthObject::StaticStruct, TEXT("/Script/DataDriven"), TEXT("WealthObject"), false, nullptr, nullptr);
static struct FScriptStruct_DataDriven_StaticRegisterNativesFWealthObject
{
	FScriptStruct_DataDriven_StaticRegisterNativesFWealthObject()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WealthObject")),new UScriptStruct::TCppStructOps<FWealthObject>);
	}
} ScriptStruct_DataDriven_StaticRegisterNativesFWealthObject;
	struct Z_Construct_UScriptStruct_FWealthObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WealthClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthObject_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWealthObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWealthObject>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthObject_Statics::NewProp_WealthClass_MetaData[] = {
		{ "Category", "WealthObject" },
		{ "Comment", "// \xe8\xaf\xa5\xe7\xa7\x8d\xe6\x8c\x87\xe5\xae\x9a\xe6\x96\xb9\xe5\xbc\x8f\xe5\x8f\xaf\xe4\xbb\xa5\xe5\x8f\xaa\xe8\x83\xbd\xe6\x8c\x87\xe5\xae\x9a\xe7\xbb\xa7\xe6\x89\xbf\xe8\x87\xaaUObject\xe7\x9a\x84\xe5\xad\x90\xe7\xb1\xbb\n" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "\xe8\xaf\xa5\xe7\xa7\x8d\xe6\x8c\x87\xe5\xae\x9a\xe6\x96\xb9\xe5\xbc\x8f\xe5\x8f\xaf\xe4\xbb\xa5\xe5\x8f\xaa\xe8\x83\xbd\xe6\x8c\x87\xe5\xae\x9a\xe7\xbb\xa7\xe6\x89\xbf\xe8\x87\xaaUObject\xe7\x9a\x84\xe5\xad\x90\xe7\xb1\xbb" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWealthObject_Statics::NewProp_WealthClass = { "WealthClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWealthObject, WealthClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthObject_Statics::NewProp_WealthClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthObject_Statics::NewProp_WealthClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWealthObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWealthObject_Statics::NewProp_WealthClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWealthObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
		Z_Construct_UScriptStruct_FWealthItem,
		&NewStructOps,
		"WealthObject",
		sizeof(FWealthObject),
		alignof(FWealthObject),
		Z_Construct_UScriptStruct_FWealthObject_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthObject_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthObject_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWealthObject()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWealthObject_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WealthObject"), sizeof(FWealthObject), Get_Z_Construct_UScriptStruct_FWealthObject_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWealthObject_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWealthObject_Hash() { return 1228149983U; }
class UScriptStruct* FWealthItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATADRIVEN_API uint32 Get_Z_Construct_UScriptStruct_FWealthItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWealthItem, Z_Construct_UPackage__Script_DataDriven(), TEXT("WealthItem"), sizeof(FWealthItem), Get_Z_Construct_UScriptStruct_FWealthItem_Hash());
	}
	return Singleton;
}
template<> DATADRIVEN_API UScriptStruct* StaticStruct<FWealthItem>()
{
	return FWealthItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWealthItem(FWealthItem::StaticStruct, TEXT("/Script/DataDriven"), TEXT("WealthItem"), false, nullptr, nullptr);
static struct FScriptStruct_DataDriven_StaticRegisterNativesFWealthItem
{
	FScriptStruct_DataDriven_StaticRegisterNativesFWealthItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WealthItem")),new UScriptStruct::TCppStructOps<FWealthItem>);
	}
} ScriptStruct_DataDriven_StaticRegisterNativesFWealthItem;
	struct Z_Construct_UScriptStruct_FWealthItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjcetName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ObjcetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWealthItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWealthItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthItem_Statics::NewProp_ObjcetName_MetaData[] = {
		{ "Category", "WealthItem" },
		{ "Comment", "// \xe5\xaf\xb9\xe8\xb1\xa1\xe5\x90\x8d\n" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "\xe5\xaf\xb9\xe8\xb1\xa1\xe5\x90\x8d" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWealthItem_Statics::NewProp_ObjcetName = { "ObjcetName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWealthItem, ObjcetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthItem_Statics::NewProp_ObjcetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthItem_Statics::NewProp_ObjcetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthItem_Statics::NewProp_ClassName_MetaData[] = {
		{ "Category", "WealthItem" },
		{ "Comment", "// \xe7\xb1\xbb\xe5\x90\x8d\n" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "\xe7\xb1\xbb\xe5\x90\x8d" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWealthItem_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWealthItem, ClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthItem_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthItem_Statics::NewProp_ClassName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWealthItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWealthItem_Statics::NewProp_ObjcetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWealthItem_Statics::NewProp_ClassName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWealthItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
		nullptr,
		&NewStructOps,
		"WealthItem",
		sizeof(FWealthItem),
		alignof(FWealthItem),
		Z_Construct_UScriptStruct_FWealthItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWealthItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWealthItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WealthItem"), sizeof(FWealthItem), Get_Z_Construct_UScriptStruct_FWealthItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWealthItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWealthItem_Hash() { return 1422181497U; }
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
	void UWealthData::StaticRegisterNativesUWealthData()
	{
	}
	UClass* Z_Construct_UClass_UWealthData_NoRegister()
	{
		return UWealthData::StaticClass();
	}
	struct Z_Construct_UClass_UWealthData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ModuleName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AutoObjectData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoObjectData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoObjectData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AutoActorData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoActorData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoActorData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AutoWidgetData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoWidgetData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoWidgetData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectWealthData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectWealthData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectWealthData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectClassData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectClassData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectClassData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WealthUrl_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthUrl_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WealthUrl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWealthData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWealthData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DDCommon/DDTypes.h" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWealthData_Statics::NewProp_ModuleName_MetaData[] = {
		{ "Category", "WealthData" },
		{ "Comment", "// \xe6\xa8\xa1\xe7\xbb\x84\xe5\x90\x8d\xe5\xad\x97,\xe8\xbf\x99\xe4\xb8\xaa""DataAsset\xe4\xb8\x8b\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe9\xbb\x98\xe8\xae\xa4\xe6\xb3\xa8\xe5\x86\x8c\xe5\x88\xb0ModuleName\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe6\xa8\xa1\xe7\xbb\x84\n// \xe5\xa6\x82\xe6\x9e\x9c\xe5\x8f\xaf\xe4\xbb\xa5\xe5\x9c\xa8\xe5\xa4\x9a\xe4\xb8\xaa\xe6\xa8\xa1\xe7\xbb\x84\xe4\xb8\x8b\xe4\xbd\xbf\xe7\x94\xa8\xef\xbc\x8c\xe8\xae\xbe\xe7\xbd\xae\xe4\xb8\xba\xe7\xa9\xba\n" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "\xe6\xa8\xa1\xe7\xbb\x84\xe5\x90\x8d\xe5\xad\x97,\xe8\xbf\x99\xe4\xb8\xaa""DataAsset\xe4\xb8\x8b\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe9\xbb\x98\xe8\xae\xa4\xe6\xb3\xa8\xe5\x86\x8c\xe5\x88\xb0ModuleName\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe6\xa8\xa1\xe7\xbb\x84\n\xe5\xa6\x82\xe6\x9e\x9c\xe5\x8f\xaf\xe4\xbb\xa5\xe5\x9c\xa8\xe5\xa4\x9a\xe4\xb8\xaa\xe6\xa8\xa1\xe7\xbb\x84\xe4\xb8\x8b\xe4\xbd\xbf\xe7\x94\xa8\xef\xbc\x8c\xe8\xae\xbe\xe7\xbd\xae\xe4\xb8\xba\xe7\xa9\xba" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_ModuleName = { "ModuleName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWealthData, ModuleName), METADATA_PARAMS(Z_Construct_UClass_UWealthData_Statics::NewProp_ModuleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWealthData_Statics::NewProp_ModuleName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_AutoObjectData_Inner = { "AutoObjectData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWealthObject, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWealthData_Statics::NewProp_AutoObjectData_MetaData[] = {
		{ "Category", "WealthData" },
		{ "Comment", "// \xe8\x87\xaa\xe5\x8a\xa8\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84ObjectData\n" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "\xe8\x87\xaa\xe5\x8a\xa8\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84ObjectData" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_AutoObjectData = { "AutoObjectData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWealthData, AutoObjectData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWealthData_Statics::NewProp_AutoObjectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWealthData_Statics::NewProp_AutoObjectData_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_AutoActorData_Inner = { "AutoActorData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWealthActor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWealthData_Statics::NewProp_AutoActorData_MetaData[] = {
		{ "Category", "WealthData" },
		{ "Comment", "// \xe8\x87\xaa\xe5\x8a\xa8\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84""ActorData\n" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "\xe8\x87\xaa\xe5\x8a\xa8\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84""ActorData" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_AutoActorData = { "AutoActorData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWealthData, AutoActorData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWealthData_Statics::NewProp_AutoActorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWealthData_Statics::NewProp_AutoActorData_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_AutoWidgetData_Inner = { "AutoWidgetData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWealthWidget, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWealthData_Statics::NewProp_AutoWidgetData_MetaData[] = {
		{ "Category", "WealthData" },
		{ "Comment", "// \xe8\x87\xaa\xe5\x8a\xa8\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84WidgetData\n" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "\xe8\x87\xaa\xe5\x8a\xa8\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84WidgetData" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_AutoWidgetData = { "AutoWidgetData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWealthData, AutoWidgetData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWealthData_Statics::NewProp_AutoWidgetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWealthData_Statics::NewProp_AutoWidgetData_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_ObjectWealthData_Inner = { "ObjectWealthData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FObjectWealthEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWealthData_Statics::NewProp_ObjectWealthData_MetaData[] = {
		{ "Category", "WealthData" },
		{ "Comment", "// Object\xe8\xb5\x84\xe6\xba\x90\xe9\x93\xbe\xe6\x8e\xa5\xe9\x9b\x86\xe5\x90\x88\n" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "Object\xe8\xb5\x84\xe6\xba\x90\xe9\x93\xbe\xe6\x8e\xa5\xe9\x9b\x86\xe5\x90\x88" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_ObjectWealthData = { "ObjectWealthData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWealthData, ObjectWealthData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWealthData_Statics::NewProp_ObjectWealthData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWealthData_Statics::NewProp_ObjectWealthData_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_ObjectClassData_Inner = { "ObjectClassData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FClassWealthEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWealthData_Statics::NewProp_ObjectClassData_MetaData[] = {
		{ "Category", "WealthData" },
		{ "Comment", "// Class\xe8\xb5\x84\xe6\xba\x90\xe9\x93\xbe\xe6\x8e\xa5\xe9\x9b\x86\xe5\x90\x88\n" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "Class\xe8\xb5\x84\xe6\xba\x90\xe9\x93\xbe\xe6\x8e\xa5\xe9\x9b\x86\xe5\x90\x88" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_ObjectClassData = { "ObjectClassData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWealthData, ObjectClassData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWealthData_Statics::NewProp_ObjectClassData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWealthData_Statics::NewProp_ObjectClassData_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_WealthUrl_Inner = { "WealthUrl", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWealthUrl, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWealthData_Statics::NewProp_WealthUrl_MetaData[] = {
		{ "Category", "WealthData" },
		{ "Comment", "// \xe8\xb5\x84\xe6\xba\x90\xe9\x93\xbe\xe6\x8e\xa5\xe9\x9b\x86\xe5\x90\x88\n" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe9\x93\xbe\xe6\x8e\xa5\xe9\x9b\x86\xe5\x90\x88" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_WealthUrl = { "WealthUrl", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWealthData, WealthUrl), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWealthData_Statics::NewProp_WealthUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWealthData_Statics::NewProp_WealthUrl_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWealthData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_ModuleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_AutoObjectData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_AutoObjectData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_AutoActorData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_AutoActorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_AutoWidgetData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_AutoWidgetData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_ObjectWealthData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_ObjectWealthData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_ObjectClassData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_ObjectClassData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_WealthUrl_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_WealthUrl,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWealthData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWealthData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWealthData_Statics::ClassParams = {
		&UWealthData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWealthData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWealthData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWealthData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWealthData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWealthData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWealthData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWealthData, 2245324848);
	template<> DATADRIVEN_API UClass* StaticClass<UWealthData>()
	{
		return UWealthData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWealthData(Z_Construct_UClass_UWealthData, &UWealthData::StaticClass, TEXT("/Script/DataDriven"), TEXT("UWealthData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWealthData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
