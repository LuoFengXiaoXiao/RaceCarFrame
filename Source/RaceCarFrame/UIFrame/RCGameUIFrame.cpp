// Fill out your copyright notice in the Description page of Project Settings.


#include "RCGameUIFrame.h"

void URCGameUIFrame::DDInit()
{
	Super::DDInit();

	FInputModeGameAndUI InputMode;
	InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	UDDCommon::Get()->GetController()->SetInputMode(InputMode);
	UDDCommon::Get()->GetController()->bShowMouseCursor = true;

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
	DDYIELD_RETURN_SECOND(3.f);
	D->ShowUIPanel("MenuPanel");

#include DDYIELD_READY() 
	DDYIELD_RETURN_SECOND(3.f);
	D->ShowUIPanel("OptionPanel");

#include DDYIELD_READY() 
	DDYIELD_RETURN_SECOND(3.f);
	D->HideUIPanel("MenuPanel");

#include DDYIELD_READY() 
	DDYIELD_RETURN_SECOND(3.f);
	D->HideUIPanel("OptionPanel");

#include DDYIELD_READY() 
	DDYIELD_RETURN_SECOND(3.f);
	D->HideUIPanel("MenuPanel");

#include DDYIELD_READY() 
	DDYIELD_RETURN_SECOND(3.f);
	D->ShowUIPanel("MenuPanel");

#include DDYIELD_READY() 
	DDYIELD_RETURN_SECOND(3.f);
	D->ShowUIPanel("OptionPanel");

#include DDCORO_END()
}
