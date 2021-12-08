// Fill out your copyright notice in the Description page of Project Settings.


#include "DDUI/DDPanelWidget.h"

void UDDPanelWidget::PanelEnter()
{
	SetVisibility(ESlateVisibility::Visible);
}

void UDDPanelWidget::PanelDisplay()
{
	SetVisibility(ESlateVisibility::Visible);
}

void UDDPanelWidget::PanelHidden()
{
	SetVisibility(ESlateVisibility::Hidden);
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
