// Fill out your copyright notice in the Description page of Project Settings.


#include "RCGameUIFrame.h"

void URCGameUIFrame::DDInit()
{
	Super::DDInit();
	AddToViewport();

	StartCoroutine("UIProcess", UIProcess());
}

DDCoroTask* URCGameUIFrame::UIProcess()
{
	DDCORO_PARAM(URCGameUIFrame);

#include DDCORO_BEGIN()

	D->ShowUIPanel("StatePanel");
	D->ShowUIPanel("MiniMapPanel");

#include DDYIELD_READY() 
	DDYIELD_RETURN_SECOND(10);
		D->ShowUIPanel("MenuPanel");

#include DDYIELD_READY() 
		DDYIELD_RETURN_SECOND(10);
		D->ShowUIPanel("OptionPanel");

#include DDCORO_END()
}
