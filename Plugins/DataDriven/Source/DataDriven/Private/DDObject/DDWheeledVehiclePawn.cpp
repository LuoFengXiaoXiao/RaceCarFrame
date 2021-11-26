// Fill out your copyright notice in the Description page of Project Settings.


#include "DDObject/DDWheeledVehiclePawn.h"

ADDWheeledVehiclePawn::ADDWheeledVehiclePawn()
{
	PrimaryActorTick.bCanEverTick = false;
}


void ADDWheeledVehiclePawn::BeginPlay()
{
	Super::BeginPlay();

	// �Զ�ע��
	RegisterToModule(ModuleName, ObjectName, ClassName);
}

void ADDWheeledVehiclePawn::DDRelease()
{
	IDDOO::DDRelease();

	// �ܵ��ø÷�����һ����ע�ᵽ�˿�ܣ�GetWorldһ����Ϊ��
	GetDDWorld()->DestroyActor(this);
}

