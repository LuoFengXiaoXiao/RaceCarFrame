// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "DDCommon/DDDefine.h"
#include "DDGame/DGCommon.h"

#include "DDCommon.generated.h"


// 声明一个DDDrive
class ADDDriver;
class APlayerController;

// 定义一个namespace来调用打印函数
// use：DDH::Debug(float InTime /* = 3000.f */, FColor InColor /* = FColor::Purple */) << FString << int << bool << DDH::Endl();
namespace DDH
{
	FORCEINLINE DDRecord& Debug(float InTime/* = 3000.f*/, FColor InColor/* = FColor::Purple*/)
	{
		DDRecord::Get()->PatternID = 0;
		DDRecord::Get()->InitParam(InTime, InColor);
		return *DDRecord::Get();
	}

	FORCEINLINE DDRecord& Debug(float InTime/* = 3000.f*/)
	{
		DDRecord::Get()->PatternID = 0;
		DDRecord::Get()->InitParam(InTime, FColor::Purple);
		return *DDRecord::Get();
	}

	FORCEINLINE DDRecord& Debug(FColor InColor/* = FColor::Purple*/)
	{
		DDRecord::Get()->PatternID = 0;
		DDRecord::Get()->InitParam(3000.f, InColor);
		return *DDRecord::Get();
	}

	FORCEINLINE DDRecord& Debug()
	{
		DDRecord::Get()->PatternID = 0;
		DDRecord::Get()->InitParam(3000.f, FColor::Purple);
		return *DDRecord::Get();
	}

	FORCEINLINE DDRecord& Log()
	{
		DDRecord::Get()->PatternID = 1;
		return *DDRecord::Get();
	}

	FORCEINLINE DDRecord& Error()
	{
		DDRecord::Get()->PatternID = 3;
		return *DDRecord::Get();
	}

	FORCEINLINE DDRecord& Endl()
	{
		return *DDRecord::Get();
	}

	// 将传入的Enum值对应的FString/FName输出，直接输出Value对应的值
	template<typename TEnum>
	FORCEINLINE FString GetEnumValueAsString(const FString& Name, TEnum Value)
	{
		const UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, *Name, true);
		if (!EnumPtr) return FString("InValid");
		return EnumPtr->GetNameStringByIndex((int32)Value);
	}

	template<typename TEnum>
	FORCEINLINE FName GetEnumValueAsName(const FString& Name, TEnum Value)
	{
		const UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, *Name, true);
		if (!EnumPtr) return FName("InValid");
		return FName(EnumPtr->GetNameStringByIndex((int32)Value));
	}

	// 将传入的FName对应的Enum输出
	template<typename TEnum>
	FORCEINLINE TEnum GetEnumValueFromName(const FString& Name, FName Value)
	{
		const UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, *Name, true);
		if (!EnumPtr) return TEnum(0);
		return (TEnum)EnumPtr->GetIndexByName(Value);
	}

	// 将传入的FName对应的Enum的序号输出
	FORCEINLINE int32 GetEnumIndexFromName(const FString& Name, FName Value)
	{
		const UEnum* EnumPtr = FindObject<UEnum>((UObject*)ANY_PACKAGE, *Name, true);
		if (!EnumPtr) return -1;
		return EnumPtr->GetIndexByName(Value);
	}

	// 获取反射方法调用
	FORCEINLINE FString GetCallResult(ECallResult Value)
	{
		const UEnum* EnumPtr = FindObject<UEnum>((UObject*)ANY_PACKAGE, *FString("ECallResult"), true);
		return EnumPtr->GetNameStringByValue((int32)Value);
	}
}

/**
 * 
 */
UCLASS()
class DATADRIVEN_API UDDCommon : public UObject
{
	GENERATED_BODY()

	// 将自己写成一个单例，使其可以初始化Drive
	// 可以注册世界和Driver到UDDCommon单例
public:

	static UDDCommon* Get();

	void InitDriver(ADDDriver* InDriver);

	ADDDriver* GetDriver();

	void InitController(APlayerController* InController);

	APlayerController* GetController();

	// 暂停游戏
	void SetPauseGame(bool IsPause);

	// 获取是否暂停了游戏
	const bool IsPauseGame() const;

private:

	static UDDCommon* DDInst;
	
	ADDDriver* Driver;

	// 在单例类中注册一个全局的PlayerController
	APlayerController* PlayerController;
};
