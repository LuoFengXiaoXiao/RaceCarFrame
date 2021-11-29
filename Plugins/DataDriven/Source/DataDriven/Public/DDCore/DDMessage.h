// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DDMM.h"
#include "DDMessage.generated.h"

/**
 * 
 */
UCLASS()
class DATADRIVEN_API UDDMessage
	: public UObject,
	  public IDDMM
{
	GENERATED_BODY()
	

public:

	UDDMessage();

	virtual void MessageInit();

	virtual void MessageBeginPlay();

	virtual void MessageTick(float DeltaSeconds);

	// ע����ýӿ�
	template<typename RetType,typename... VarTypes>
	DDCallHandle<RetType, VarTypes...> RegisterCallPort(FName CallName);

	// ע�᷽���ӿ�
	template<typename RetType, typename... VarTypes>
	DDFunHandle RegisterFunPort(FName CallName,TFunction<RetType(VarTypes...)> InsFun);

	// ����һ��Э�̣�����true˵�������ɹ�������false˵���Ѿ���ͬ����ͬ��Э����������Э�̴���
	bool StartCoroutine(FName ObjectName, FName CoroName, DDCoroTask* CoroTask);

	// ֹͣһ��Э��,����true˵��Э��ֹͣ�ɹ�������false˵��Э�����Ѿ�ֹͣ(Э�����񲻴���)
	bool StopCoroutine(FName ObjectName, FName CoroName);

	// ֹͣ����Э�̣������µ�����Э�̣�
	void StopAllCoroutine(FName ObjectName);

	// ��ʼһ����ʱ����������true˵���ɹ�������false˵���Ѿ�����ͬ������ͬ������������
	bool StartInvoke(FName ObjectName, FName InvokeName, DDInvokeTask* InvokeTask);
	// ֹͣһ����ʱ
	bool StopInvoke(FName ObjectName, FName InvokeName);
	// ֹͣ�����µ�������ʱ����
	void StopAllInvoke(FName ObjectName);

protected:

	// �¼�����
	DDMsgQuene* MsgQuene;

	// Э�����У���1�����������ֵ�ļ�FName��Ӧ��ʱЭ�����������
	TMap<FName, TMap<FName, DDCoroTask*>> CoroStack;

	// ��ʱ����
	TMap<FName, TMap<FName, DDInvokeTask*>> InvokeStack;

};

template<typename RetType, typename... VarTypes>
DDCallHandle<RetType, VarTypes...>
UDDMessage::RegisterCallPort(FName CallName)
{
	return MsgQuene->RegisterCallPort<RetType,VarTypes...>(CallName);
}

template<typename RetType, typename... VarTypes>
DDFunHandle
UDDMessage::RegisterFunPort(FName CallName, TFunction<RetType(VarTypes...)> InsFun)
{
	return MsgQuene->RegisterFunPort<RetType, VarTypes...>(CallName, InsFun);
}
