// Fill out your copyright notice in the Description page of Project Settings.


#include "DDUI/DDPanelWidget.h"

FName UDDPanelWidget::PanelHiddenName(TEXT("PanelHiddenTask"));


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

}

void UDDPanelWidget::SetSelfHidden()
{
	SetVisibility(ESlateVisibility::Hidden);
}

