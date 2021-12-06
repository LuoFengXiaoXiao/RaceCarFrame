// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DDMM.h"
#include <Engine/StreamableManager.h>
#include "DDWealth.generated.h"


// ����Object�ڵ�
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

	// ע����Դ��
	void AssignData(TArray<UWealthData*>& InWealthData);

	// �ⲿ����������ȡ��Դ����
	FWealthUrl* GainWealthUrl(FName WealthName);
	void GainWealthUrl(FName WealthKind, TArray<FWealthUrl*>& OutUrl);

	// ����Object������Դ
	void LoadObjectWealth(FName WealthName, FName ObjectName, FName FunName);
	void LoadObjectWealthKind(FName WealthKind, FName ObjectName, FName FunName);

protected:
	// ������
	FStreamableManager WealthLoader;

	// ��Դ��
	TArray<UWealthData*> WealthData;

	UPROPERTY()
		TArray<UUserWidget*> GCWidgetGroup;

	// ���ؽڵ����
	TArray<ObjectSingleLoadNode*> ObjectSingleLoadStack;

protected:
	// ��ȡObject��Դ�ṹ��
	FObjectWealthEntry* GetObjectSingleEntry(FName WealthName);
	TArray<FObjectWealthEntry*> GetObjectKindEntry(FName WealthKind);

	// ֡������ص���Object�ڵ�ķ���
	void DealObjectSingleLoadStack();

	// ����UObject����ص�����
	DDOBJFUNC_TWO(BackObjectWealth, FName, BackName, UObject*, BackWealth);
	DDOBJFUNC_TWO(BackObjectWealthKind, TArray<FName>, BackNames, TArray<UObject*>, BackWealths);

};
