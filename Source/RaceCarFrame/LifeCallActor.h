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

	virtual void DDDisable() override; // ʧ�����
	virtual void DDUnRegister() override; // ע�����ݻ����¼�
	virtual void DDunLoading() override; // ���ٰ���Դ
	virtual void DDRelease() override; // �ͷ��Լ�

	// ����ʱ��Ҫ�����õķ���
	UFUNCTION()
		void AcceptCall(FString InfoStr);

	// ����
	int32 RegTest(FString InfoStr);

protected:
	int32 TimeCounter;

	DDFunHandle RegFunHandle;
	// ������Դ���
	//DDMODFUNC_THREE(TestReflect, int32, Counter, FString, InfoStr, bool, BackResult);
	//DDMODFUNC(TestReflectNoParam);
	
};
