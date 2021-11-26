// Fill out your copyright notice in the Description page of Project Settings.


#include "DDObject/DDCameraActor.h"

ADDCameraActor::ADDCameraActor()
{
	PrimaryActorTick.bCanEverTick = false;

}

void ADDCameraActor::DDRelease()
{
	IDDOO::DDRelease();
	// 保证能调用该方法的类已经注册到世界，调用时世界一定不为空
	GetDDWorld()->DestroyActor(this);

}

void ADDCameraActor::BeginPlay()
{
	Super::BeginPlay();
	// 自动注册
	RegisterToModule(ModuleName, ObjectName, ClassName);
}
