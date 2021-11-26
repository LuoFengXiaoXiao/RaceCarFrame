// Fill out your copyright notice in the Description page of Project Settings.


#include "DDObject/DDLevelScriptActor.h"

ADDLevelScriptActor::ADDLevelScriptActor()
{

	PrimaryActorTick.bCanEverTick = false;
}

void ADDLevelScriptActor::BeginPlay()
{
	Super::BeginPlay();

	// ×Ô¶¯×¢²áµ½¿ò¼Ü
	RegisterToModule(ModuleName, ObjectName, ClassName);
}
