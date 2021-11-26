// Fill out your copyright notice in the Description page of Project Settings.


#include "DDObject/DDPlayerController.h"

ADDPlayerController::ADDPlayerController()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	// 特殊的地方，必须开启Controller或者Character的帧函数才能检测按键，此框架只开启Controller的
	PrimaryActorTick.bCanEverTick = true;
}


void ADDPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// 自动注册到框架
	RegisterToModule(ModuleName, ObjectName, ClassName);
}
