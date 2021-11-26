// Fill out your copyright notice in the Description page of Project Settings.


#include "DDObject/DDGameStateBase.h"

ADDGameStateBase::ADDGameStateBase()
{
	PrimaryActorTick.bCanEverTick = false;

}

void ADDGameStateBase::BeginPlay()
{
	Super::BeginPlay();

	// ×Ô¶¯×¢²áµ½¿ò¼Ü
	RegisterToModule(ModuleName, ObjectName, ClassName);
}
