// Fill out your copyright notice in the Description page of Project Settings.


#include "DDObject/DDPawn.h"

// Sets default values
ADDPawn::ADDPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

void ADDPawn::DDRelease()
{
	IDDOO::DDRelease();
	// 保证能调用该方法的类已经注册到世界，调用时世界一定不为空
	GetDDWorld()->DestroyActor(this);
}

// Called when the game starts or when spawned
void ADDPawn::BeginPlay()
{
	Super::BeginPlay();

	// 自动注册到框架
	RegisterToModule(ModuleName, ObjectName, ClassName);
	
}



