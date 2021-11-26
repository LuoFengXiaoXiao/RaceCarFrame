// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DDCore/DDModule.h"
#include "DDCore/DDDriver.h"
#include "DDOO.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UDDOO : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DATADRIVEN_API IDDOO
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	// ע�ᵽ���
	void RegisterToModule(FName ModName,FName ObjName = FName(),FName ClsName = FName());

	// ͬ�ϣ�ֻ����ģ��Index
	void RegisterToModule(int32 ModIndex, FName ObjName = FName(), FName ClsName = FName());

	// ��ȡ������
	FName GetObjectName();

	// ��ȡ����
	FName GetClassName();

	// ��ȡModuleIndex
	int32 GetModuleIndex() const;

	// ��ȡ�����ָ��
	UObject* GetObjectBody() const;

	// ��ܻ�ȡ���纯��
	UWorld* GetDDWorld() const;

	// ���ⲿָ��ģ��
	void AssignModule(UDDModule* Mod);

	// �����������ڣ�����ɹ��󷵻�true��ֹͣ����
	bool ActiveLife();

	// �����������ں��������ٳɹ��󷵻�true��������ģ��ע��
	bool DestroyLife();

	// �������ڣ���ģ�����������
	virtual void DDInit(); // ��ʼ��
	virtual void DDLoading(); // ���ذ󶨵���Դ
	virtual void DDRegister(); // ע�����ݻ����¼�
	virtual void DDEnable(); // �������

	virtual void DDTick(float DeltaSeconds); // ֡����

	virtual void DDDisable(); // ʧ�����
	virtual void DDUnRegister(); // ע�����ݻ����¼�
	virtual void DDunLoading(); // ���ٰ���Դ
	virtual void DDRelease(); // �ͷ��Լ�

	// �������
	virtual void OnEnable();

	// ʧ�����
	virtual void OnDisable();

	// �����Լ�
	void DDDestroy();



public:
	// �Ƿ�����֡���У����Ҫ����֡������Ҫ�ڹ��캯������BeginPlay���ã���UE4��Ĭ��Ϊfalse
	bool IsAllowTickEvent;

	// ��������״̬
	EBaseObjectLife LifeState;

	// ��������״̬
	EBaseObjectState RunState;

protected:

	// ִ�з����¼�
	void ExecuteFunction(DDModuleAgreement Agreement,DDParam* Param);

	// ִ�з����¼�
	void ExecuteFunction(DDObjectAgreement Agreement, DDParam* Param);

	// ע����ýӿ�
	template<typename RetType, typename... VarTypes>
	DDCallHandle<RetType, VarTypes...> RegisterCallPort(FName CallName);

	// ע�᷽���ӿ�
	template<typename RetType, typename... VarTypes>
	DDFunHandle RegisterFunPort(int32 ModIndex,FName CallName, TFunction<RetType(VarTypes...)> InsFun);

protected:

	// ���������UObject
	UObject* IBody;

	// �����Ӧ��ģ��
	UDDModule* IModule;

	// ����������
	ADDDriver* IDriver;

	// ��������
	FName IObjectName;

	// ����������
	FName IClassName;

	// ��Ӧģ������
	int32 ModuleIndex;

};

template<typename RetType, typename... VarTypes>
DDCallHandle<RetType, VarTypes...>
IDDOO::RegisterCallPort(FName CallName)
{
	return IModule->RegisterCallPort<RetType, VarTypes...>(CallName);
}

template<typename RetType, typename... VarTypes>
DDFunHandle IDDOO::RegisterFunPort(int32 ModIndex,FName CallName, TFunction<RetType(VarTypes...)> InsFun)
{
	if (ModuleIndex == ModIndex)
		return IModule->RegisterFunPort<RetType, VarTypes...>(CallName, InsFun);
	else
		return IDriver->RegisterFunPort<RetType, VarTypes...>(ModIndex, CallName, InsFun);
}
