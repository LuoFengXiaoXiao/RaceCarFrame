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
	DDYIELD_RETURN_SECOND(6.f);
		//D->ShowUIPanel("MenuPanel");
	D->HideUIPanel("StatePanel");
#include DDYIELD_READY() 
		DDYIELD_RETURN_SECOND(6.f);
		//D->ShowUIPanel("OptionPanel");
		D->ShowUIPanel("StatePanel");

#include DDYIELD_READY() 
		DDYIELD_RETURN_SECOND(6.f);
		D->ShowUIPanel("BigMapPanel");

#include DDYIELD_READY() 
		DDYIELD_RETURN_SECOND(6.f);
		D->HideUIPanel("BigMapPanel");

#include DDYIELD_READY() 
		DDYIELD_RETURN_SECOND(6.f);
		D->ShowUIPanel("BigMapPanel");

#include DDCORO_END()
}
