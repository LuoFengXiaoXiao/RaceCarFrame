// Fill out your copyright notice in the Description page of Project Settings.


#include "DDObject/DDWheeledVehiclePawn.h"

ADDWheeledVehiclePawn::ADDWheeledVehiclePawn()
{
	PrimaryActorTick.bCanEverTick = false;
}


void ADDWheeledVehiclePawn::BeginPlay()
{
	Super::BeginPlay();

	// 自动注册
	RegisterToModule(ModuleName, ObjectName, ClassName);
}

void ADDWheeledVehiclePawn::DDRelease()
{
	IDDOO::DDRelease();

	// 能调用该方法，一定是注册到了框架，GetWorld一定不为空
	GetDDWorld()->DestroyActor(this);
}

