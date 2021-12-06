// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DDMM.h"
#include <Engine/StreamableManager.h>
#include "DDWealth.generated.h"


// 加载Object节点
struct ObjectSingleLoadNode;
/**
 * 
 */
UCLASS()
class DATADRIVEN_API UDDWealth 
	: public UObject,
	  public IDDMM
{
	GENERATED_BODY()

public:

	virtual void WealthInit() {}

	virtual void WealthBeginPlay();

	virtual void WealthTick(float DeltaSeconds);

	// 注册资源组
	void AssignData(TArray<UWealthData*>& InWealthData);

	// 外部方法单纯获取资源链接
	FWealthUrl* GainWealthUrl(FName WealthName);
	void GainWealthUrl(FName WealthKind, TArray<FWealthUrl*>& OutUrl);

	// 加载Object类型资源
	void LoadObjectWealth(FName WealthName, FName ObjectName, FName FunName);
	void LoadObjectWealthKind(FName WealthKind, FName ObjectName, FName FunName);

protected:
	// 加载器
	FStreamableManager WealthLoader;

	// 资源组
	TArray<UWealthData*> WealthData;

	UPROPERTY()
		TArray<UUserWidget*> GCWidgetGroup;

	// 加载节点队列
	TArray<ObjectSingleLoadNode*> ObjectSingleLoadStack;

protected:
	// 获取Object资源结构体
	FObjectWealthEntry* GetObjectSingleEntry(FName WealthName);
	TArray<FObjectWealthEntry*> GetObjectKindEntry(FName WealthKind);

	// 帧处理加载单个Object节点的方法
	void DealObjectSingleLoadStack();

	// 加载UObject反射回调函数
	DDOBJFUNC_TWO(BackObjectWealth, FName, BackName, UObject*, BackWealth);
	DDOBJFUNC_TWO(BackObjectWealthKind, TArray<FName>, BackNames, TArray<UObject*>, BackWealths);

};
