// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDriven/Public/DDGame/DGTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDGTypes() {}
// Cross Module References
	DATADRIVEN_API UEnum* Z_Construct_UEnum_DataDriven_ERCMenuModule();
	UPackage* Z_Construct_UPackage__Script_DataDriven();
	DATADRIVEN_API UEnum* Z_Construct_UEnum_DataDriven_ERCGameModule();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDGTypes_NoRegister();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDGTypes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ERCMenuModule_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DataDriven_ERCMenuModule, Z_Construct_UPackage__Script_DataDriven(), TEXT("ERCMenuModule"));
		}
		return Singleton;
	}
	template<> DATADRIVEN_API UEnum* StaticEnum<ERCMenuModule>()
	{
		return ERCMenuModule_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERCMenuModule(ERCMenuModule_StaticEnum, TEXT("/Script/DataDriven"), TEXT("ERCMenuModule"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DataDriven_ERCMenuModule_Hash() { return 3115656629U; }
	UEnum* Z_Construct_UEnum_DataDriven_ERCMenuModule()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERCMenuModule"), 0, Get_Z_Construct_UEnum_DataDriven_ERCMenuModule_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERCMenuModule::Center", (int64)ERCMenuModule::Center },
				{ "ERCMenuModule::HUD", (int64)ERCMenuModule::HUD },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Center.Name", "ERCMenuModule::Center" },
				{ "Comment", "// ??\xd3\xa6?\xc4\xb2?\xcd\xac??????Module????,?????\xcb\xb4??\xc7\xb2\xcb\xb5??\xd8\xbf???\xc4\xa3??\n" },
				{ "HUD.Name", "ERCMenuModule::HUD" },
				{ "ModuleRelativePath", "Public/DDGame/DGTypes.h" },
				{ "ToolTip", "??\xd3\xa6?\xc4\xb2?\xcd\xac??????Module????,?????\xcb\xb4??\xc7\xb2\xcb\xb5??\xd8\xbf???\xc4\xa3??" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DataDriven,
				nullptr,
				"ERCMenuModule",
				"ERCMenuModule",
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
	static UEnum* ERCGameModule_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DataDriven_ERCGameModule, Z_Construct_UPackage__Script_DataDriven(), TEXT("ERCGameModule"));
		}
		return Singleton;
	}
	template<> DATADRIVEN_API UEnum* StaticEnum<ERCGameModule>()
	{
		return ERCGameModule_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERCGameModule(ERCGameModule_StaticEnum, TEXT("/Script/DataDriven"), TEXT("ERCGameModule"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DataDriven_ERCGameModule_Hash() { return 1456637586U; }
	UEnum* Z_Construct_UEnum_DataDriven_ERCGameModule()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERCGameModule"), 0, Get_Z_Construct_UEnum_DataDriven_ERCGameModule_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERCGameModule::Center", (int64)ERCGameModule::Center },
				{ "ERCGameModule::HUD", (int64)ERCGameModule::HUD },
				{ "ERCGameModule::Player", (int64)ERCGameModule::Player },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Center.Name", "ERCGameModule::Center" },
				{ "Comment", "// \xc4\xa3??\xd4\xbc????????\xd2\xaa\xca\xb9??DataDriven??????UI???\xdc\xa3???\xd2\xbb??\xd2\xaa??HUD\xc4\xa3?????\xda\xb5\xda\xb6?\xce\xbb??UIFrame???\xdc\xb9?????\xca\xbc????HUD\xc4\xa3????\n" },
				{ "HUD.Comment", "// ????\xc4\xa3??\n" },
				{ "HUD.Name", "ERCGameModule::HUD" },
				{ "HUD.ToolTip", "????\xc4\xa3??" },
				{ "ModuleRelativePath", "Public/DDGame/DGTypes.h" },
				{ "Player.Comment", "// ?\xd4\xbc??\xe6\xb6\xa8??\xc4\xa3??\xcb\xb3????\xd2\xb2???\xc7\xb4?????Component?????\xc3\xb0???????\xcb\xb3????????\n" },
				{ "Player.Name", "ERCGameModule::Player" },
				{ "Player.ToolTip", "?\xd4\xbc??\xe6\xb6\xa8??\xc4\xa3??\xcb\xb3????\xd2\xb2???\xc7\xb4?????Component?????\xc3\xb0???????\xcb\xb3????????" },
				{ "ToolTip", "\xc4\xa3??\xd4\xbc????????\xd2\xaa\xca\xb9??DataDriven??????UI???\xdc\xa3???\xd2\xbb??\xd2\xaa??HUD\xc4\xa3?????\xda\xb5\xda\xb6?\xce\xbb??UIFrame???\xdc\xb9?????\xca\xbc????HUD\xc4\xa3????" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DataDriven,
				nullptr,
				"ERCGameModule",
				"ERCGameModule",
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
	void UDGTypes::StaticRegisterNativesUDGTypes()
	{
	}
	UClass* Z_Construct_UClass_UDGTypes_NoRegister()
	{
		return UDGTypes::StaticClass();
	}
	struct Z_Construct_UClass_UDGTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDGTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDGTypes_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DDGame/DGTypes.h" },
		{ "ModuleRelativePath", "Public/DDGame/DGTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDGTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDGTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDGTypes_Statics::ClassParams = {
		&UDGTypes::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDGTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDGTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDGTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDGTypes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDGTypes, 583091905);
	template<> DATADRIVEN_API UClass* StaticClass<UDGTypes>()
	{
		return UDGTypes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDGTypes(Z_Construct_UClass_UDGTypes, &UDGTypes::StaticClass, TEXT("/Script/DataDriven"), TEXT("UDGTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDGTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
