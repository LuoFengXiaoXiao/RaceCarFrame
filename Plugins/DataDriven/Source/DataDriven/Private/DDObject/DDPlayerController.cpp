// Fill out your copyright notice in the Description page of Project Settings.


#include "DDObject/DDPlayerController.h"

ADDPlayerController::ADDPlayerController()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	// ����ĵط������뿪��Controller����Character��֡�������ܼ�ⰴ�����˿��ֻ����Controller��
	PrimaryActorTick.bCanEverTick = true;
}


void ADDPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// �Զ�ע�ᵽ���
	RegisterToModule(ModuleName, ObjectName, ClassName);
}
