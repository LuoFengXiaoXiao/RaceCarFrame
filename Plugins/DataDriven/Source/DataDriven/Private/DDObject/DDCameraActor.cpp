// Fill out your copyright notice in the Description page of Project Settings.


#include "DDObject/DDCameraActor.h"

ADDCameraActor::ADDCameraActor()
{
	PrimaryActorTick.bCanEverTick = false;

}

void ADDCameraActor::DDRelease()
{
	IDDOO::DDRelease();
	// ��֤�ܵ��ø÷��������Ѿ�ע�ᵽ���磬����ʱ����һ����Ϊ��
	GetDDWorld()->DestroyActor(this);

}

void ADDCameraActor::BeginPlay()
{
	Super::BeginPlay();
	// �Զ�ע��
	RegisterToModule(ModuleName, ObjectName, ClassName);
}
