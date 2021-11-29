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

	// 创建模块的方法
	void CreateManager();

	// Module的Init函数
	virtual void ModuleInit();

	// Moudle的BeginPlay函数
	virtual void ModuleBeginPlay();

	// Module的Tick函数
	virtual void ModuleTick(float DeltaSeconds);

	// 修改模组的ModuleIndex
	void ChangeModuleType(FName ModuleType);

	// 注册对象到数据模块
	void RegisterObject(IDDOO* ObjectInst);

	// 模组所属对象销毁自身
	void ChildDestory(FName ObjectName);

	// 反射事件--批量销毁对象
	UFUNCTION()
		void DestoryObject(EAgreementType Agreement, TArray<FName> TargetNameGroup);

	// 反射事件--批量激活对象
	UFUNCTION()
		void EnableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup);

	// 反射事件--批量失活对象
	UFUNCTION()
		void DisableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup);

	//调用模组方法
	void ExecuteFunction(DDModuleAgreement Agreement,DDParam* Param);

	// 调用对象的反射方法
	void ExecuteFunction(DDObjectAgreement Agreement, DDParam* Param);

	// 临时方法，测试反射事件系统
	//UFUNCTION()
	//	void TestReflect(int32 Counter,FString InfoStr,bool& BackResult);
	//UFUNCTION()
	//	void TestReflectNoParam();

	// 注册调用接口
	template<typename RetType, typename... VarTypes>
	DDCallHandle<RetType, VarTypes...> RegisterCallPort(FName CallName);

	// 注册方法接口
	template<typename RetType, typename... VarTypes>
	DDFunHandle RegisterFunPort(FName CallName, TFunction<RetType(VarTypes...)> InsFun);

	// 开启一个协程，返回true说明开启成功，返回false说明已经有同对象同名协程任务名的协程存在
	bool StartCoroutine(FName ObjectName, FName CoroName, DDCoroTask* CoroTask);

	// 停止一个协程,返回true说明协程停止成功，返回false说明协程早已经停止(协程任务不存在)
	bool StopCoroutine(FName ObjectName, FName CoroName);

	// 停止所有协程（对象下的所有协程）
	void StopAllCoroutine(FName ObjectName);

	// 开始一个延时方法，返回true说明成功，返回false说明已经存在同对象名同任务名的任务
	bool StartInvoke(FName ObjectName, FName InvokeName, DDInvokeTask* InvokeTask);
	// 停止一个延时
	bool StopInvoke(FName ObjectName, FName InvokeName);
	// 停止对象下的所有延时方法
	void StopAllInvoke(FName ObjectName);

public:

	TArray<UDDModule*> ChildrenModule;

	UPROPERTY(VisibleAnywhere,Category = "DataDriven")
		int32 ModuleIndex;

protected:

	// 执行单个对象方法
	void ExecuteSelfObject(DDObjectAgreement Agreement,DDParam* Param);

	// 执行其余对象的方法
	void ExecuteOtherObject(DDObjectAgreement Agreement, DDParam* Param);

	// 支持相同类的区域对象方法
	void ExecuteClassOtherObject(DDObjectAgreement Agreement, DDParam* Param);

	// 执行类对象的方法
	void ExecuteSelfClass(DDObjectAgreement Agreement, DDParam* Param);

	// 执行其他类对象的方法
	void ExecuteOtherClass(DDObjectAgreement Agreement, DDParam* Param);

	// 执行所有对象的方法
	void ExcuteAll(DDObjectAgreement Agreement, DDParam* Param);


		
protected:

	// 数据模块指针
	UDDModel* Model;
	// 消息模块指针
	UDDMessage* Message;
	// 资源模块指针
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
