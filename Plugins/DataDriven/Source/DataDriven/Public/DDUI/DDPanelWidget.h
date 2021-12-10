// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DDObject/DDUserWidget.h"
#include "DDPanelWidget.generated.h"

/**
 * 
 */
UCLASS()
class DATADRIVEN_API UDDPanelWidget : public UDDUserWidget
{
	GENERATED_BODY()

public:
	// UI������������
	virtual void PanelEnter(); // ��һ�ν��뺯����ֻ��ִ��һ�Σ��ڴ�᲻��ը
	virtual void PanelDisplay(); // �ڶ����Լ��Ժ�n����ʾ�ڽ���
	virtual void PanelHidden(); // ����
	virtual void PanelFreeze(); // ����
	virtual void PanelResume(); // �ⶳ��
	virtual void PanelExit(); // ����

	// �����ص�����
	UFUNCTION(BlueprintImplementableEvent)
		float DisplayEnterMovie();

	UFUNCTION(BlueprintImplementableEvent)
		float DisplayLeaveMovie();

protected:

	// ����UI���
	void SetSelfHidden();

	// ���ٶ����ص�����
	void RemoveCallBack();

	DDOBJFUNC_TWO(ExitCallBack, ELayoutType, LayoutType, UPanelWidget*, WorkLayout);

public:
	UPROPERTY(EditAnywhere)
		FUINature UINature;
	
protected:

	// ��������̫���ڴ�,����ÿ�δ�������Ҫ���´���,���ض���������
	static FName PanelHiddenName;
	// UIFrame���������ڵ�ģ��ID��Լ����HUD�£���ֵ��1
	static int32 UIFrameModuleIndex;
	// UIFrame�������Ķ�������Լ����UIFrame
	static FName UIFrameName;
	// ���ٻص���������
	static FName ExitCallBackName;

};
