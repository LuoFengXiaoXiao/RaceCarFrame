// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "DDCommon/DDDefine.h"
#include "DDGame/DGCommon.h"

#include "DDCommon.generated.h"


// ����һ��DDDrive
class ADDDriver;
class APlayerController;

// ����һ��namespace�����ô�ӡ����
// use��DDH::Debug(float InTime /* = 3000.f */, FColor InColor /* = FColor::Purple */) << FString << int << bool << DDH::Endl();
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

	// �������Enumֵ��Ӧ��FString/FName�����ֱ�����Value��Ӧ��ֵ
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

	// �������FName��Ӧ��Enum���
	template<typename TEnum>
	FORCEINLINE TEnum GetEnumValueFromName(const FString& Name, FName Value)
	{
		const UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, *Name, true);
		if (!EnumPtr) return TEnum(0);
		return (TEnum)EnumPtr->GetIndexByName(Value);
	}

	// �������FName��Ӧ��Enum��������
	FORCEINLINE int32 GetEnumIndexFromName(const FString& Name, FName Value)
	{
		const UEnum* EnumPtr = FindObject<UEnum>((UObject*)ANY_PACKAGE, *Name, true);
		if (!EnumPtr) return -1;
		return EnumPtr->GetIndexByName(Value);
	}

	// ��ȡ���䷽������
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

	// ���Լ�д��һ��������ʹ����Գ�ʼ��Drive
	// ����ע�������Driver��UDDCommon����
public:

	static UDDCommon* Get();

	void InitDriver(ADDDriver* InDriver);

	ADDDriver* GetDriver();

	void InitController(APlayerController* InController);

	APlayerController* GetController();

	// ��ͣ��Ϸ
	void SetPauseGame(bool IsPause);

	// ��ȡ�Ƿ���ͣ����Ϸ
	const bool IsPauseGame() const;

private:

	static UDDCommon* DDInst;
	
	ADDDriver* Driver;

	// �ڵ�������ע��һ��ȫ�ֵ�PlayerController
	APlayerController* PlayerController;
};
