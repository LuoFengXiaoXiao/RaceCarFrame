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

	// ����һ��Э�̣�����true˵�������ɹ�������false˵���Ѿ���ͬ����ͬ��Э����������Э�̴���
	bool StartCoroutine(FName CoroName, DDCoroTask* CoroTask);

	// ֹͣһ��Э��,����true˵��Э��ֹͣ�ɹ�������false˵��Э�����Ѿ�ֹͣ(Э�����񲻴���)
	bool StopCoroutine(FName CoroName);

	// ֹͣ����Э�̣������µ�����Э�̣�
	void StopAllCoroutine();

	//��ʱ����
	template<class UserClass>
	bool InvokeDelay(FName InvokeName, float DelayTime, UserClass* UserObj, typename FDDInvokeEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod);

	//��ʱѭ������
	template<class UserClass>
	bool InvokeRepeat(FName InvokeName, float DelayTime, float RepeatTime, UserClass* UserObj, typename FDDInvokeEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod);

	//�ر���ʱ����
	bool StopInvoke(FName InvokeName);

	//�رն�����������ʱ����
	void StopAllInvoke();

	// ��Axis�����¼�
	template<class UserClass>
	FInputAxisBinding& BindAxis(UserClass* UserObj, typename FInputAxisHandlerSignature::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, const FName AxisName);

	// �󶨴����¼�
	template<class UserClass>
	FInputTouchBinding& BindTouch(UserClass* UserObj, typename FInputTouchHandlerSignature::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, const EInputEvent KeyEvent);

	// ��Action�����¼�
	template<class UserClass>
	FInputActionBinding& BindAction(UserClass* UserObj, typename FInputActionHandlerSignature::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, const FName ActionName, const EInputEvent KeyEvent);

	// �󶨵��������¼�
	template<class UserClass>
	FInputKeyBinding& BindInput(UserClass* UserObj, typename FInputActionHandlerSignature::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, const FKey Key, const EInputEvent KeyEvent);

	// �󶨶������
	template<class UserClass>
	UDDInputBinder& BindInput(UserClass* UserObj, typename FDDInputEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod,FKey Key_I,FKey Key_II);
	template<class UserClass>
	UDDInputBinder& BindInput(UserClass* UserObj, typename FDDInputEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, FKey Key_I, FKey Key_II, FKey Key_III);
	template<class UserClass>
	UDDInputBinder& BindInput(UserClass* UserObj, typename FDDInputEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, FKey Key_I, FKey Key_II, FKey Key_III, FKey Key_IV);
	template<class UserClass>
	UDDInputBinder& BindInput(UserClass* UserObj, typename FDDInputEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, FKey Key_I, FKey Key_II, FKey Key_III, FKey Key_IV, FKey Key_V);

	void UnBindInput();

	// �ⲿ����������ȡ��Դ����
	FWealthUrl* GainWealthUrl(FName WealthName);
	void GainWealthUrl(FName WealthKind, TArray<FWealthUrl*>& OutUrl);

	// ����Object������Դ
	void LoadObjectWealth(FName WealthName, FName FunName);
	void LoadObjectWealthKind(FName WealthKind, FName FunName);

	// ����Class������Դ
	void LoadClassWealth(FName WealthName, FName FunName);
	void LoadClassWealthKind(FName WealthKind, FName FunName);

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

template<class UserClass>
bool IDDOO::InvokeDelay(FName InvokeName, float DelayTime, UserClass* UserObj, typename FDDInvokeEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod)
{
	DDInvokeTask* InvokeTask = new DDInvokeTask(DelayTime, false, 0.f);
	InvokeTask->InvokeEvent.BindUObject(UserObj, InMethod);
	return IModule->StartInvoke(GetObjectName(), InvokeName, InvokeTask);
}

template<class UserClass>
bool IDDOO::InvokeRepeat(FName InvokeName, float DelayTime, float RepeatTime, UserClass* UserObj, typename FDDInvokeEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod)
{
	DDInvokeTask* InvokeTask = new DDInvokeTask(DelayTime, true, RepeatTime);
	InvokeTask->InvokeEvent.BindUObject(UserObj, InMethod);
	return IModule->StartInvoke(GetObjectName(), InvokeName, InvokeTask);
}

template<class UserClass>
FInputAxisBinding& IDDOO::BindAxis(UserClass* UserObj, typename FInputAxisHandlerSignature::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, const FName AxisName)
{
	return IModule->BindAxis(UserObj, InMethod, AxisName);
}

template<class UserClass>
FInputTouchBinding& IDDOO::BindTouch(UserClass* UserObj, typename FInputTouchHandlerSignature::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, const EInputEvent KeyEvent)
{
	return IModule->BindTouch(UserObj, InMethod, KeyEvent);
}

template<class UserClass>
FInputActionBinding& IDDOO::BindAction(UserClass* UserObj, typename FInputActionHandlerSignature::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, const FName ActionName, const EInputEvent KeyEvent)
{
	return IModule->BindAction(UserObj, InMethod, ActionName, KeyEvent);
}

template<class UserClass>
FInputKeyBinding& IDDOO::BindInput(UserClass* UserObj, typename FInputActionHandlerSignature::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, const FKey Key, const EInputEvent KeyEvent)
{
	return IModule->BindInput(UserObj, InMethod, Key, KeyEvent);
}

template<class UserClass>
UDDInputBinder& IDDOO::BindInput(UserClass* UserObj, typename FDDInputEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, FKey Key_I, FKey Key_II)
{
	TArray<FKey> KeyGroup;
	KeyGroup.Push(Key_I);
	KeyGroup.Push(Key_II);
	return IModule->BindInput(UserObj, InMethod, KeyGroup, GetObjectName());
}

template<class UserClass>
UDDInputBinder& IDDOO::BindInput(UserClass* UserObj, typename FDDInputEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, FKey Key_I, FKey Key_II, FKey Key_III)
{
	TArray<FKey> KeyGroup;
	KeyGroup.Push(Key_I);
	KeyGroup.Push(Key_II);
	KeyGroup.Push(Key_III);
	return IModule->BindInput(UserObj, InMethod, KeyGroup, GetObjectName());
}

template<class UserClass>
UDDInputBinder& IDDOO::BindInput(UserClass* UserObj, typename FDDInputEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, FKey Key_I, FKey Key_II, FKey Key_III, FKey Key_IV)
{
	TArray<FKey> KeyGroup;
	KeyGroup.Push(Key_I);
	KeyGroup.Push(Key_II);
	KeyGroup.Push(Key_III);
	KeyGroup.Push(Key_IV);
	return IModule->BindInput(UserObj, InMethod, KeyGroup, GetObjectName());
}

template<class UserClass>
UDDInputBinder& IDDOO::BindInput(UserClass* UserObj, typename FDDInputEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, FKey Key_I, FKey Key_II, FKey Key_III, FKey Key_IV, FKey Key_V)
{
	TArray<FKey> KeyGroup;
	KeyGroup.Push(Key_I);
	KeyGroup.Push(Key_II);
	KeyGroup.Push(Key_III);
	KeyGroup.Push(Key_IV);
	KeyGroup.Push(Key_V);
	return IModule->BindInput(UserObj, InMethod, KeyGroup, GetObjectName());
}
