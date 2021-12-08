// Fill out your copyright notice in the Description page of Project Settings.


#include "ViewObject.h"

void UViewObject::DDEnable()
{
	Super::DDEnable();

	EchoSelfInfo(ModuleIndex, GetObjectName(), "EchoInfo");
}
