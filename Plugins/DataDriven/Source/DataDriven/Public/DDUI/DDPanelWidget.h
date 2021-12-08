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

public:
	UPROPERTY(EditAnywhere)
		FUINature UINature;
	
};
