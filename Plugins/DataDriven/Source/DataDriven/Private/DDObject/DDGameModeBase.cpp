// Fill out your copyright notice in the Description page of Project Settings.


#include "DDObject/DDGameModeBase.h"

ADDGameModeBase::ADDGameModeBase()
{
	PrimaryActorTick.bCanEverTick = false;

}

void ADDGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	// ×Ô¶¯×¢²áµ½¿ò¼Ü
	RegisterToModule(ModuleName, ObjectName, ClassName);
}
