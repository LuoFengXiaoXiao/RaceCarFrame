// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DDMM.h"
#include <Engine/StreamableManager.h>
#include "DDWealth.generated.h"


// 加载Object节点
struct ObjectSingleLoadNode;
struct ObjectKindLoadNode;

// 加载Class节点
struct ClassSingleLoadNode;
struct ClassKindLoadNode;

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

	// 加载Class类型资源
	void LoadClassWealth(FName WealthName, FName ObjectName, FName FunName);
	void LoadClassWealthKind(FName WealthKind, FName ObjectName, FName FunName);

protected:
	// 加载器
	FStreamableManager WealthLoader;

	// 资源组
	TArray<UWealthData*> WealthData;

	UPROPERTY()
		TArray<UUserWidget*> GCWidgetGroup;

	// 加载节点队列
	TArray<ObjectSingleLoadNode*> ObjectSingleLoadStack;
	// 批量加载节点队列
	TArray<ObjectKindLoadNode*> ObjectKindLoadStack;
	TArray<ClassSingleLoadNode*> ClassSingleLoadStack;
	TArray<ClassKindLoadNode*> ClassKindLoadStack;

protected:
	// 获取Object资源结构体
	FObjectWealthEntry* GetObjectSingleEntry(FName WealthName);
	TArray<FObjectWealthEntry*> GetObjectKindEntry(FName WealthKind);

	// 获取cLASS资源结构体
	FClassWealthEntry* GetClassSingleEntry(FName WealthName);
	TArray<FClassWealthEntry*> GetClassKindEntry(FName WealthKind);

	// 帧处理加载单个Object节点的方法
	void DealObjectSingleLoadStack();
	// 处理批量加载Object的方法
	void DealObjectKindLoadStack();
	// 帧处理加载单个Class节点的方法
	void DealClassSingleLoadStack();
	// 处理批量加载Class的方法
	void DealClassKindLoadStack();

	// 加载UObject反射回调函数
	DDOBJFUNC_TWO(BackObjectWealth, FName, BackName, UObject*, BackWealth);
	DDOBJFUNC_TWO(BackObjectWealthKind, TArray<FName>, BackNames, TArray<UObject*>, BackWealths);

	// 加载UClass反射回调函数
	DDOBJFUNC_TWO(BackClassWealth, FName, BackName, UClass*, BackWealth);
	DDOBJFUNC_TWO(BackClassWealthKind, TArray<FName>, BackNames, TArray<UClass*>, BackWealths);

};
