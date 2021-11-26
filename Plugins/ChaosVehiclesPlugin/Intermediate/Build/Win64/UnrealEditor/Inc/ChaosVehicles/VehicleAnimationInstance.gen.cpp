// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosVehicles/Public/VehicleAnimationInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleAnimationInstance() {}
// Cross Module References
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleAnimationInstanceProxy();
	UPackage* Z_Construct_UPackage__Script_ChaosVehicles();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_UVehicleAnimationInstance_NoRegister();
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_UVehicleAnimationInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn_NoRegister();
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FVehicleAnimationInstanceProxy>() == std::is_polymorphic<FAnimInstanceProxy>(), "USTRUCT FVehicleAnimationInstanceProxy cannot be polymorphic unless super FAnimInstanceProxy is polymorphic");

class UScriptStruct* FVehicleAnimationInstanceProxy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CHAOSVEHICLES_API uint32 Get_Z_Construct_UScriptStruct_FVehicleAnimationInstanceProxy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleAnimationInstanceProxy, Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("VehicleAnimationInstanceProxy"), sizeof(FVehicleAnimationInstanceProxy), Get_Z_Construct_UScriptStruct_FVehicleAnimationInstanceProxy_Hash());
	}
	return Singleton;
}
template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<FVehicleAnimationInstanceProxy>()
{
	return FVehicleAnimationInstanceProxy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehicleAnimationInstanceProxy(FVehicleAnimationInstanceProxy::StaticStruct, TEXT("/Script/ChaosVehicles"), TEXT("VehicleAnimationInstanceProxy"), false, nullptr, nullptr);
static struct FScriptStruct_ChaosVehicles_StaticRegisterNativesFVehicleAnimationInstanceProxy
{
	FScriptStruct_ChaosVehicles_StaticRegisterNativesFVehicleAnimationInstanceProxy()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VehicleAnimationInstanceProxy")),new UScriptStruct::TCppStructOps<FVehicleAnimationInstanceProxy>);
	}
} ScriptStruct_ChaosVehicles_StaticRegisterNativesFVehicleAnimationInstanceProxy;
	struct Z_Construct_UScriptStruct_FVehicleAnimationInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAnimationInstanceProxy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Proxy override for this UAnimInstance-derived class */" },
		{ "ModuleRelativePath", "Public/VehicleAnimationInstance.h" },
		{ "ToolTip", "Proxy override for this UAnimInstance-derived class" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleAnimationInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleAnimationInstanceProxy>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleAnimationInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
		Z_Construct_UScriptStruct_FAnimInstanceProxy,
		&NewStructOps,
		"VehicleAnimationInstanceProxy",
		sizeof(FVehicleAnimationInstanceProxy),
		alignof(FVehicleAnimationInstanceProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleAnimationInstanceProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimationInstanceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleAnimationInstanceProxy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehicleAnimationInstanceProxy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ChaosVehicles();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehicleAnimationInstanceProxy"), sizeof(FVehicleAnimationInstanceProxy), Get_Z_Construct_UScriptStruct_FVehicleAnimationInstanceProxy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehicleAnimationInstanceProxy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehicleAnimationInstanceProxy_Hash() { return 1493285488U; }
	DEFINE_FUNCTION(UVehicleAnimationInstance::execGetVehicle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWheeledVehiclePawn**)Z_Param__Result=P_THIS->GetVehicle();
		P_NATIVE_END;
	}
	void UVehicleAnimationInstance::StaticRegisterNativesUVehicleAnimationInstance()
	{
		UClass* Class = UVehicleAnimationInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVehicle", &UVehicleAnimationInstance::execGetVehicle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVehicleAnimationInstance_GetVehicle_Statics
	{
		struct VehicleAnimationInstance_eventGetVehicle_Parms
		{
			AWheeledVehiclePawn* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleAnimationInstance_GetVehicle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAnimationInstance_eventGetVehicle_Parms, ReturnValue), Z_Construct_UClass_AWheeledVehiclePawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleAnimationInstance_GetVehicle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAnimationInstance_GetVehicle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleAnimationInstance_GetVehicle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Makes a montage jump to the end of a named section. */" },
		{ "ModuleRelativePath", "Public/VehicleAnimationInstance.h" },
		{ "ToolTip", "Makes a montage jump to the end of a named section." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleAnimationInstance_GetVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleAnimationInstance, nullptr, "GetVehicle", nullptr, nullptr, sizeof(VehicleAnimationInstance_eventGetVehicle_Parms), Z_Construct_UFunction_UVehicleAnimationInstance_GetVehicle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleAnimationInstance_GetVehicle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicleAnimationInstance_GetVehicle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleAnimationInstance_GetVehicle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicleAnimationInstance_GetVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicleAnimationInstance_GetVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVehicleAnimationInstance_NoRegister()
	{
		return UVehicleAnimationInstance::StaticClass();
	}
	struct Z_Construct_UClass_UVehicleAnimationInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheeledVehicleComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WheeledVehicleComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVehicleAnimationInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVehicleAnimationInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVehicleAnimationInstance_GetVehicle, "GetVehicle" }, // 2906377744
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleAnimationInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "VehicleAnimationInstance.h" },
		{ "ModuleRelativePath", "Public/VehicleAnimationInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleAnimationInstance_Statics::NewProp_WheeledVehicleComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VehicleAnimationInstance.h" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVehicleAnimationInstance_Statics::NewProp_WheeledVehicleComponent = { "WheeledVehicleComponent", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehicleAnimationInstance, WheeledVehicleComponent), Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVehicleAnimationInstance_Statics::NewProp_WheeledVehicleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleAnimationInstance_Statics::NewProp_WheeledVehicleComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVehicleAnimationInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleAnimationInstance_Statics::NewProp_WheeledVehicleComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVehicleAnimationInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVehicleAnimationInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVehicleAnimationInstance_Statics::ClassParams = {
		&UVehicleAnimationInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVehicleAnimationInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleAnimationInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UVehicleAnimationInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleAnimationInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVehicleAnimationInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVehicleAnimationInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVehicleAnimationInstance, 1145058493);
	template<> CHAOSVEHICLES_API UClass* StaticClass<UVehicleAnimationInstance>()
	{
		return UVehicleAnimationInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVehicleAnimationInstance(Z_Construct_UClass_UVehicleAnimationInstance, &UVehicleAnimationInstance::StaticClass, TEXT("/Script/ChaosVehicles"), TEXT("UVehicleAnimationInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVehicleAnimationInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
