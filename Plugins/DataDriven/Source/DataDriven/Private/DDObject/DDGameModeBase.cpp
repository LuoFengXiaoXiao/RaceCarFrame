// Fill out your copyright notice in the Description page of Project Settings.


#include "DDObject/DDGameModeBase.h"

ADDGameModeBase::ADDGameModeBase()
{
	PrimaryActorTick.bCanEverTick = false;

}

void ADDGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	// �Զ�ע�ᵽ���
	RegisterToModule(ModuleName, ObjectName, ClassName);
}
