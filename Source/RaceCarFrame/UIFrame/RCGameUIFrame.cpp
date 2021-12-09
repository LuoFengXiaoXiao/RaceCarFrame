// Fill out your copyright notice in the Description page of Project Settings.


#include "RCGameUIFrame.h"

void URCGameUIFrame::DDInit()
{
	Super::DDInit();
	AddToViewport();
	ShowUIPanel("StatePanel");
	ShowUIPanel("MiniMapPanel");
}
