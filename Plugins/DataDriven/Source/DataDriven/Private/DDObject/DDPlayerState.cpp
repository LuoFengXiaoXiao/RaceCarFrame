// Fill out your copyright notice in the Description page of Project Settings.


#include "DDObject/DDPlayerState.h"

ADDPlayerState::ADDPlayerState()
{
	PrimaryActorTick.bCanEverTick = false;

}

void ADDPlayerState::BeginPlay()
{
	Super::BeginPlay();

	// �Զ�ע�ᵽ���
	RegisterToModule(ModuleName, ObjectName, ClassName);
}
