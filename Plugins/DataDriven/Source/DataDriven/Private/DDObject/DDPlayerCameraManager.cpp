// Fill out your copyright notice in the Description page of Project Settings.


#include "DDObject/DDPlayerCameraManager.h"

ADDPlayerCameraManager::ADDPlayerCameraManager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

void ADDPlayerCameraManager::DDRelease()
{
	IDDOO::DDRelease();
	// ��֤�ܵ��ø÷��������Ѿ�ע�ᵽ���磬����ʱ����һ����Ϊ��
	GetDDWorld()->DestroyActor(this);
}

void ADDPlayerCameraManager::BeginPlay()
{
	Super::BeginPlay();

	// �Զ�ע�ᵽ���
	RegisterToModule(ModuleName, ObjectName, ClassName);
}