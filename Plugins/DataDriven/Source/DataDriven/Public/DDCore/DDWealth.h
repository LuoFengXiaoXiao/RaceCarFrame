// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DDMM.h"
#include <Engine/StreamableManager.h>
#include "DDWealth.generated.h"


// ����Object�ڵ�
struct ObjectSingleLoadNode;
struct ObjectKindLoadNode;

// ����Class�ڵ�
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

	// ע����Դ��
	void AssignData(TArray<UWealthData*>& InWealthData);

	// �ⲿ����������ȡ��Դ����
	FWealthUrl* GainWealthUrl(FName WealthName);
	void GainWealthUrl(FName WealthKind, TArray<FWealthUrl*>& OutUrl);

	// ����Object������Դ
	void LoadObjectWealth(FName WealthName, FName ObjectName, FName FunName);
	void LoadObjectWealthKind(FName WealthKind, FName ObjectName, FName FunName);

	// ����Class������Դ
	void LoadClassWealth(FName WealthName, FName ObjectName, FName FunName);
	void LoadClassWealthKind(FName WealthKind, FName ObjectName, FName FunName);

	//����һ������ʵ��
	void BuildSingleClassWealth(EWealthType WealthType, FName WealthName, FName ObjectName, FName FunName, FTransform SpawnTransform);


protected:
	// ������
	FStreamableManager WealthLoader;

	// ��Դ��
	TArray<UWealthData*> WealthData;

	UPROPERTY()
		TArray<UUserWidget*> GCWidgetGroup;

	// ���ؽڵ����
	TArray<ObjectSingleLoadNode*> ObjectSingleLoadStack;
	// �������ؽڵ����
	TArray<ObjectKindLoadNode*> ObjectKindLoadStack;
	TArray<ClassSingleLoadNode*> ClassSingleLoadStack;
	TArray<ClassKindLoadNode*> ClassKindLoadStack;

protected:
	// ��ȡObject��Դ�ṹ��
	FObjectWealthEntry* GetObjectSingleEntry(FName WealthName);
	TArray<FObjectWealthEntry*> GetObjectKindEntry(FName WealthKind);

	// ��ȡcLASS��Դ�ṹ��
	FClassWealthEntry* GetClassSingleEntry(FName WealthName);
	TArray<FClassWealthEntry*> GetClassKindEntry(FName WealthKind);

	// ֡������ص���Object�ڵ�ķ���
	void DealObjectSingleLoadStack();
	// ������������Object�ķ���
	void DealObjectKindLoadStack();
	// ֡������ص���Class�ڵ�ķ���
	void DealClassSingleLoadStack();
	// ������������Class�ķ���
	void DealClassKindLoadStack();

	// ����UObject����ص�����
	DDOBJFUNC_TWO(BackObjectWealth, FName, BackName, UObject*, BackWealth);
	DDOBJFUNC_TWO(BackObjectWealthKind, TArray<FName>, BackNames, TArray<UObject*>, BackWealths);

	// ����UClass����ص�����
	DDOBJFUNC_TWO(BackClassWealth, FName, BackName, UClass*, BackWealth);
	DDOBJFUNC_TWO(BackClassWealthKind, TArray<FName>, BackNames, TArray<UClass*>, BackWealths);

	// ���ɶ�����ص�����
	DDOBJFUNC_TWO(BackObject, FName, BackName, UObject*, BackObject);
	DDOBJFUNC_TWO(BackActor, FName, BackName, AActor*,BackActor);
	DDOBJFUNC_TWO(BackWidget, FName, BackName, UUserWidget*,BackWidget);

};
