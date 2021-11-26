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

	// 中央模组对小弟们进行操作
	

	// 迭代调用本模组以及子模组的EditChangeModuleType方法
	void IterChangeModuleType(UDDModule* Module,FName ModType);
	// 递归创建模块
	void IterCreateManeger(UDDModule* Module);
	// 递归调用初始化函数
	void IterModuleInit(UDDModule* Module);
	// 递归调用开始函数
	void IterModuleBeginPlay(UDDModule* Module);
	// 递归调用Tick函数
	void IterModuleTick(UDDModule* Module, float DeltaSeconds);
	// 提取所有模组到模组数组，传入枚举名字
	void TotalGatherModule(FName ModType);
	// 提取所有模组到数组
	void IterGatherModule(UDDModule* Module, TArray<UDDModule*>& GatherGroup);
	// 注册对象模组
	bool RegisterToModule(IDDOO* ObjectIndex);

	// 执行反射
	void AllotExecuteFunction(DDModuleAgreement Agreement,DDParam* Param);

	// 执行反射
	void AllotExecuteFunction(DDObjectAgreement Agreement, DDParam* Param);

	// 注册方法接口,Allot:分配
	template<typename RetType, typename... VarTypes>
	DDFunHandle AllotRegisterFunPort(int32 ModIndex, FName CallName, TFunction<RetType(VarTypes...)> InsFun);

protected:

	// 保存模组的数组，顺序与枚举相同
	TArray<UDDModule*> ModuleGroup;
};

template<typename RetType, typename... VarTypes>
DDFunHandle UDDCenterModule::AllotRegisterFunPort(int32 ModIndex, FName CallName, TFunction<RetType(VarTypes...)> InsFun)
{
	if (ModuleGroup[ModIndex])
		return ModuleGroup[ModIndex]->RegisterFunPort(CallName, InsFun);
	return DDFunHandle();
}
