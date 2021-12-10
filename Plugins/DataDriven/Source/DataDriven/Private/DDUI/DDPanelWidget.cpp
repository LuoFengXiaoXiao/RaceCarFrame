// Fill out your copyright notice in the Description page of Project Settings.


#include "DDUI/DDPanelWidget.h"

FName UDDPanelWidget::PanelHiddenName(TEXT("PanelHiddenTask"));

int32 UDDPanelWidget::UIFrameModuleIndex(1);

FName UDDPanelWidget::UIFrameName(TEXT("UIFrame"));

FName UDDPanelWidget::ExitCallBackName(TEXT("ExitCallBack"));

void UDDPanelWidget::PanelEnter()
{
	SetVisibility(ESlateVisibility::Visible);
	// ���ý�����涯��
	DisplayEnterMovie();
}

void UDDPanelWidget::PanelDisplay()
{
	SetVisibility(ESlateVisibility::Visible);
	// ���ý�����涯��
	DisplayEnterMovie();
}

void UDDPanelWidget::PanelHidden()
{
	// �������Ƴ������������غ���
	InvokeDelay(PanelHiddenName,DisplayLeaveMovie(),this,&UDDPanelWidget::SetSelfHidden);
}

void UDDPanelWidget::PanelFreeze()
{

}

void UDDPanelWidget::PanelResume()
{

}

void UDDPanelWidget::PanelExit()
{
	// ���UI���������ʾ
	if (GetVisibility() != ESlateVisibility::Hidden)
		InvokeDelay(PanelHiddenName, DisplayLeaveMovie(), this, &UDDPanelWidget::RemoveCallBack);
	else
		RemoveCallBack();
}

void UDDPanelWidget::SetSelfHidden()
{
	SetVisibility(ESlateVisibility::Hidden);
}

void UDDPanelWidget::RemoveCallBack()
{
	// �жϸ��ؼ����Ƿ��������ؼ�
	UPanelWidget* WorkLayout = GetParent();
	RemoveFromParent();
	// ����UI�����������ؼ�
	ExitCallBack(UIFrameModuleIndex, UIFrameName, ExitCallBackName, UINature.LayoutType, WorkLayout);
	// ִ������
	DDDestroy();
}

