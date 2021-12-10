// Fill out your copyright notice in the Description page of Project Settings.


#include "DDUI/DDPanelWidget.h"

FName UDDPanelWidget::PanelHiddenName(TEXT("PanelHiddenTask"));

int32 UDDPanelWidget::UIFrameModuleIndex(1);

FName UDDPanelWidget::UIFrameName(TEXT("UIFrame"));

FName UDDPanelWidget::ExitCallBackName(TEXT("ExitCallBack"));

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
	// 如果UI面板正在显示
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
	// 判断父控件上是否还有其它控件
	UPanelWidget* WorkLayout = GetParent();
	RemoveFromParent();
	// 告诉UI管理器处理父控件
	ExitCallBack(UIFrameModuleIndex, UIFrameName, ExitCallBackName, UINature.LayoutType, WorkLayout);
	// 执行销毁
	DDDestroy();
}

