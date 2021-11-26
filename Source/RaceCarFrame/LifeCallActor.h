// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DDObject/DDActor.h"
#include "LifeCallActor.generated.h"

/**
 * 
 */
UCLASS()
class RACECARFRAME_API ALifeCallActor : public ADDActor
{
	GENERATED_BODY()
	

public:
	
	virtual void DDInit() override;

	virtual void DDLoading() override;

	virtual void DDRegister() override;

	virtual void DDEnable() override;

	virtual void DDTick(float DeltaSeconds) override;

	virtual void DDDisable() override; // 失活对象
	virtual void DDUnRegister() override; // 注销数据或者事件
	virtual void DDunLoading() override; // 销毁绑定资源
	virtual void DDRelease() override; // 释放自己

	// 测试时需要被调用的方法
	UFUNCTION()
		void AcceptCall(FString InfoStr);

	// 测试
	int32 RegTest(FString InfoStr);

protected:
	int32 TimeCounter;

	DDFunHandle RegFunHandle;
	// 反射测试代码
	//DDMODFUNC_THREE(TestReflect, int32, Counter, FString, InfoStr, bool, BackResult);
	//DDMODFUNC(TestReflectNoParam);
	
};
