// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaceCarFrame/ReflectActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReflectActor() {}
// Cross Module References
	RACECARFRAME_API UClass* Z_Construct_UClass_AReflectActor_NoRegister();
	RACECARFRAME_API UClass* Z_Construct_UClass_AReflectActor();
	DATADRIVEN_API UClass* Z_Construct_UClass_ADDActor();
	UPackage* Z_Construct_UPackage__Script_RaceCarFrame();
// End Cross Module References
	DEFINE_FUNCTION(AReflectActor::execWealthCall)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Counter);
		P_GET_PROPERTY(FStrProperty,Z_Param_InfoStr);
		P_GET_UBOOL(Z_Param_InFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->WealthCall(Z_Param_Counter,Z_Param_InfoStr,Z_Param_InFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReflectActor::execAcceptCall)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InfoStr);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AcceptCall(Z_Param_InfoStr);
		P_NATIVE_END;
	}
	void AReflectActor::StaticRegisterNativesAReflectActor()
	{
		UClass* Class = AReflectActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcceptCall", &AReflectActor::execAcceptCall },
			{ "WealthCall", &AReflectActor::execWealthCall },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AReflectActor_AcceptCall_Statics
	{
		struct ReflectActor_eventAcceptCall_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AReflectActor_AcceptCall_Statics::NewProp_InfoStr = { "InfoStr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReflectActor_eventAcceptCall_Parms, InfoStr), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReflectActor_AcceptCall_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReflectActor_AcceptCall_Statics::NewProp_InfoStr,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReflectActor_AcceptCall_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ????\xca\xb1??\xd2\xaa?????\xc3\xb5\xc4\xb7???\n" },
		{ "ModuleRelativePath", "ReflectActor.h" },
		{ "ToolTip", "????\xca\xb1??\xd2\xaa?????\xc3\xb5\xc4\xb7???" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AReflectActor_AcceptCall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReflectActor, nullptr, "AcceptCall", nullptr, nullptr, sizeof(ReflectActor_eventAcceptCall_Parms), Z_Construct_UFunction_AReflectActor_AcceptCall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReflectActor_AcceptCall_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReflectActor_AcceptCall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReflectActor_AcceptCall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReflectActor_AcceptCall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReflectActor_AcceptCall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReflectActor_WealthCall_Statics
	{
		struct ReflectActor_eventWealthCall_Parms
		{
			int32 Counter;
			FString InfoStr;
			bool InFlag;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Counter;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InfoStr;
		static void NewProp_InFlag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InFlag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AReflectActor_WealthCall_Statics::NewProp_Counter = { "Counter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReflectActor_eventWealthCall_Parms, Counter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AReflectActor_WealthCall_Statics::NewProp_InfoStr = { "InfoStr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReflectActor_eventWealthCall_Parms, InfoStr), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AReflectActor_WealthCall_Statics::NewProp_InFlag_SetBit(void* Obj)
	{
		((ReflectActor_eventWealthCall_Parms*)Obj)->InFlag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AReflectActor_WealthCall_Statics::NewProp_InFlag = { "InFlag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ReflectActor_eventWealthCall_Parms), &Z_Construct_UFunction_AReflectActor_WealthCall_Statics::NewProp_InFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AReflectActor_WealthCall_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReflectActor_eventWealthCall_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReflectActor_WealthCall_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReflectActor_WealthCall_Statics::NewProp_Counter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReflectActor_WealthCall_Statics::NewProp_InfoStr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReflectActor_WealthCall_Statics::NewProp_InFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReflectActor_WealthCall_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReflectActor_WealthCall_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ????DDMM?\xc2\xb5\xc4\xb7??\xe4\xb7\xbd??\n" },
		{ "ModuleRelativePath", "ReflectActor.h" },
		{ "ToolTip", "????DDMM?\xc2\xb5\xc4\xb7??\xe4\xb7\xbd??" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AReflectActor_WealthCall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReflectActor, nullptr, "WealthCall", nullptr, nullptr, sizeof(ReflectActor_eventWealthCall_Parms), Z_Construct_UFunction_AReflectActor_WealthCall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReflectActor_WealthCall_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReflectActor_WealthCall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReflectActor_WealthCall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReflectActor_WealthCall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReflectActor_WealthCall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AReflectActor_NoRegister()
	{
		return AReflectActor::StaticClass();
	}
	struct Z_Construct_UClass_AReflectActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AReflectActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADDActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RaceCarFrame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AReflectActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AReflectActor_AcceptCall, "AcceptCall" }, // 2063264055
		{ &Z_Construct_UFunction_AReflectActor_WealthCall, "WealthCall" }, // 528414802
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReflectActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ReflectActor.h" },
		{ "ModuleRelativePath", "ReflectActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReflectActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReflectActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AReflectActor_Statics::ClassParams = {
		&AReflectActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AReflectActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AReflectActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AReflectActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AReflectActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AReflectActor, 3281562019);
	template<> RACECARFRAME_API UClass* StaticClass<AReflectActor>()
	{
		return AReflectActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AReflectActor(Z_Construct_UClass_AReflectActor, &AReflectActor::StaticClass, TEXT("/Script/RaceCarFrame"), TEXT("AReflectActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReflectActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
