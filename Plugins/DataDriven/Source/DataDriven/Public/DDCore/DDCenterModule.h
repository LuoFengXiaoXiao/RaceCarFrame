// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DDCore/DDModule.h"
#include "DDCenterModule.generated.h"

class IDDOO;
/**
 * 
 */
UCLASS()
class DATADRIVEN_API UDDCenterModule : public UDDModule
{
	GENERATED_BODY()

public:

	// ����ģ���С���ǽ��в���
	

	// �������ñ�ģ���Լ���ģ���EditChangeModuleType����
	void IterChangeModuleType(UDDModule* Module,FName ModType);
	// �ݹ鴴��ģ��
	void IterCreateManeger(UDDModule* Module);
	// �ݹ���ó�ʼ������
	void IterModuleInit(UDDModule* Module);
	// �ݹ���ÿ�ʼ����
	void IterModuleBeginPlay(UDDModule* Module);
	// �ݹ����Tick����
	void IterModuleTick(UDDModule* Module, float DeltaSeconds);
	// ��ȡ����ģ�鵽ģ�����飬����ö������
	void TotalGatherModule(FName ModType);
	// ��ȡ����ģ�鵽����
	void IterGatherModule(UDDModule* Module, TArray<UDDModule*>& GatherGroup);
	// ע�����ģ��
	bool RegisterToModule(IDDOO* ObjectIndex);

	// ִ�з���
	void AllotExecuteFunction(DDModuleAgreement Agreement,DDParam* Param);

	// ִ�з���
	void AllotExecuteFunction(DDObjectAgreement Agreement, DDParam* Param);

	// ע�᷽���ӿ�,Allot:����
	template<typename RetType, typename... VarTypes>
	DDFunHandle AllotRegisterFunPort(int32 ModIndex, FName CallName, TFunction<RetType(VarTypes...)> InsFun);

protected:

	// ����ģ������飬˳����ö����ͬ
	TArray<UDDModule*> ModuleGroup;
};

template<typename RetType, typename... VarTypes>
DDFunHandle UDDCenterModule::AllotRegisterFunPort(int32 ModIndex, FName CallName, TFunction<RetType(VarTypes...)> InsFun)
{
	if (ModuleGroup[ModIndex])
		return ModuleGroup[ModIndex]->RegisterFunPort(CallName, InsFun);
	return DDFunHandle();
}
