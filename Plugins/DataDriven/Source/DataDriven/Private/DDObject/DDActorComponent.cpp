// Fill out your copyright notice in the Description page of Project Settings.


#include "DDObject/DDActorComponent.h"

// Sets default values for this component's properties
UDDActorComponent::UDDActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	// ������������
	bAllowAnyoneToDestroyMe = true;
}


void UDDActorComponent::DDRelease()
{
	IDDOO::DDRelease();
	// �������ɾ���Լ��������Ϊ׼����gc����
	DestroyComponent();
}

// Called when the game starts
void UDDActorComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}




