// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaceCarFrame/LifeCallActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeCallActor() {}
// Cross Module References
	RACECARFRAME_API UClass* Z_Construct_UClass_ALifeCallActor_NoRegister();
	RACECARFRAME_API UClass* Z_Construct_UClass_ALifeCallActor();
	DATADRIVEN_API UClass* Z_Construct_UClass_ADDActor();
	UPackage* Z_Construct_UPackage__Script_RaceCarFrame();
// End Cross Module References
	DEFINE_FUNCTION(ALifeCallActor::execAcceptCall)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InfoStr);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AcceptCall(Z_Param_InfoStr);
		P_NATIVE_END;
	}
	void ALifeCallActor::StaticRegisterNativesALifeCallActor()
	{
		UClass* Class = ALifeCallActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcceptCall", &ALifeCallActor::execAcceptCall },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALifeCallActor_AcceptCall_Statics
	{
		struct LifeCallActor_eventAcceptCall_Parms
		{
			FString InfoStr;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InfoStr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALifeCallActor_AcceptCall_Statics::NewProp_InfoStr = { "InfoStr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeCallActor_eventAcceptCall_Parms, InfoStr), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALifeCallActor_AcceptCall_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifeCallActor_AcceptCall_Statics::NewProp_InfoStr,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifeCallActor_AcceptCall_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ????\xca\xb1??\xd2\xaa?????\xc3\xb5\xc4\xb7???\n" },
		{ "ModuleRelativePath", "LifeCallActor.h" },
		{ "ToolTip", "????\xca\xb1??\xd2\xaa?????\xc3\xb5\xc4\xb7???" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifeCallActor_AcceptCall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifeCallActor, nullptr, "AcceptCall", nullptr, nullptr, sizeof(LifeCallActor_eventAcceptCall_Parms), Z_Construct_UFunction_ALifeCallActor_AcceptCall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifeCallActor_AcceptCall_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifeCallActor_AcceptCall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifeCallActor_AcceptCall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifeCallActor_AcceptCall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALifeCallActor_AcceptCall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALifeCallActor_NoRegister()
	{
		return ALifeCallActor::StaticClass();
	}
	struct Z_Construct_UClass_ALifeCallActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALifeCallActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADDActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RaceCarFrame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALifeCallActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALifeCallActor_AcceptCall, "AcceptCall" }, // 3398971434
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifeCallActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LifeCallActor.h" },
		{ "ModuleRelativePath", "LifeCallActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALifeCallActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALifeCallActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALifeCallActor_Statics::ClassParams = {
		&ALifeCallActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALifeCallActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALifeCallActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALifeCallActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALifeCallActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALifeCallActor, 3679402701);
	template<> RACECARFRAME_API UClass* StaticClass<ALifeCallActor>()
	{
		return ALifeCallActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALifeCallActor(Z_Construct_UClass_ALifeCallActor, &ALifeCallActor::StaticClass, TEXT("/Script/RaceCarFrame"), TEXT("ALifeCallActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALifeCallActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
