// Fill out your copyright notice in the Description page of Project Settings.


#include "DDUI/DDPanelWidget.h"

FName UDDPanelWidget::PanelHiddenName(TEXT("PanelHiddenTask"));


void UDDPanelWidget::PanelEnter()
{
	SetVisibility(ESlateVisibility::Visible);
	// 调用进入界面动画
	DisplayEnterMovie();
}

void UDDPanelWidget::PanelDisplay()
{
	SetVisibility(ESlateVisibility::Visible);
	// 调用进入界面动画
	DisplayEnterMovie();
}

void UDDPanelWidget::PanelHidden()
{
	// 运行完移除界面后调用隐藏函数
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

