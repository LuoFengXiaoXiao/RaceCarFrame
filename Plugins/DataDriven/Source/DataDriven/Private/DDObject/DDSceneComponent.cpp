// Fill out your copyright notice in the Description page of Project Settings.


#include "DDObject/DDSceneComponent.h"

// Sets default values for this component's properties
UDDSceneComponent::UDDSceneComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	// ������������
	bAllowAnyoneToDestroyMe = true;

	// ...
}


void UDDSceneComponent::DDRelease()
{
	IDDOO::DDRelease();

	// �Զ�ע��
	RegisterToModule(ModuleName,ObjectName,ClassName);
}

// Called when the game starts
void UDDSceneComponent::BeginPlay()
{
	Super::BeginPlay();
	// ������Ƴ��������Ϊ����
	DestroyComponent();

	// ...
	
}


