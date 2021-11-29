// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"

#include "DDMessage.h"

#include "DDModule.generated.h"


class UDDModel;
class UDDWealth;
class IDDOO;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DATADRIVEN_API UDDModule : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDDModule();

	// ����ģ��ķ���
	void CreateManager();

	// Module��Init����
	virtual void ModuleInit();

	// Moudle��BeginPlay����
	virtual void ModuleBeginPlay();

	// Module��Tick����
	virtual void ModuleTick(float DeltaSeconds);

	// �޸�ģ���ModuleIndex
	void ChangeModuleType(FName ModuleType);

	// ע���������ģ��
	void RegisterObject(IDDOO* ObjectInst);

	// ģ������������������
	void ChildDestory(FName ObjectName);

	// �����¼�--�������ٶ���
	UFUNCTION()
		void DestoryObject(EAgreementType Agreement, TArray<FName> TargetNameGroup);

	// �����¼�--�����������
	UFUNCTION()
		void EnableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup);

	// �����¼�--����ʧ�����
	UFUNCTION()
		void DisableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup);

	//����ģ�鷽��
	void ExecuteFunction(DDModuleAgreement Agreement,DDParam* Param);

	// ���ö���ķ��䷽��
	void ExecuteFunction(DDObjectAgreement Agreement, DDParam* Param);

	// ��ʱ���������Է����¼�ϵͳ
	//UFUNCTION()
	//	void TestReflect(int32 Counter,FString InfoStr,bool& BackResult);
	//UFUNCTION()
	//	void TestReflectNoParam();

	// ע����ýӿ�
	template<typename RetType, typename... VarTypes>
	DDCallHandle<RetType, VarTypes...> RegisterCallPort(FName CallName);

	// ע�᷽���ӿ�
	template<typename RetType, typename... VarTypes>
	DDFunHandle RegisterFunPort(FName CallName, TFunction<RetType(VarTypes...)> InsFun);

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

public:

	TArray<UDDModule*> ChildrenModule;

	UPROPERTY(VisibleAnywhere,Category = "DataDriven")
		int32 ModuleIndex;

protected:

	// ִ�е������󷽷�
	void ExecuteSelfObject(DDObjectAgreement Agreement,DDParam* Param);

	// ִ���������ķ���
	void ExecuteOtherObject(DDObjectAgreement Agreement, DDParam* Param);

	// ֧����ͬ���������󷽷�
	void ExecuteClassOtherObject(DDObjectAgreement Agreement, DDParam* Param);

	// ִ�������ķ���
	void ExecuteSelfClass(DDObjectAgreement Agreement, DDParam* Param);

	// ִ�����������ķ���
	void ExecuteOtherClass(DDObjectAgreement Agreement, DDParam* Param);

	// ִ�����ж���ķ���
	void ExcuteAll(DDObjectAgreement Agreement, DDParam* Param);


		
protected:

	// ����ģ��ָ��
	UDDModel* Model;
	// ��Ϣģ��ָ��
	UDDMessage* Message;
	// ��Դģ��ָ��
	UDDWealth* Wealth;
};

template<typename RetType, typename... VarTypes>
DDCallHandle<RetType, VarTypes...>
UDDModule::RegisterCallPort(FName CallName)
{
	return Message->RegisterCallPort<RetType, VarTypes...>(CallName);
}

template<typename RetType, typename... VarTypes>
DDFunHandle UDDModule::RegisterFunPort(FName CallName, TFunction<RetType(VarTypes...)> InsFun)
{
	return Message->RegisterFunPort<RetType, VarTypes...>(CallName, InsFun);
}
