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
	// ��֤�ܵ��ø÷��������Ѿ�ע�ᵽ���磬����ʱ����һ����Ϊ��
	GetDDWorld()->DestroyActor(this);
}

// Called when the game starts or when spawned
void ADDPawn::BeginPlay()
{
	Super::BeginPlay();

	// �Զ�ע�ᵽ���
	RegisterToModule(ModuleName, ObjectName, ClassName);
	
}



