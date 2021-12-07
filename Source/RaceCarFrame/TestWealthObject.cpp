// Fill out your copyright notice in the Description page of Project Settings.


#include "TestWealthObject.h"

void UTestWealthObject::DDLoading()
{
	Super::DDLoading();

	//LoadClassWealth("ViewActor1", "LoadActorClass");
	//LoadClassWealthKind("ViewActor", "LoadKindClass");
}

void UTestWealthObject::LoadActorClass(FName BackName, UClass* BackWealth)
{
	//FActorSpawnParameters SpawnParams;
	//SpawnParams.bNoFail = true;
	//SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	GetDDWorld()->SpawnActor<AActor>(BackWealth, ViewTrans);
}

void UTestWealthObject::LoadKindClass(TArray<FName> BackNames, TArray<UClass*> BackWealths)
{
	for (int i = 0;i<BackWealths.Num();++i)
	{
		DDH::Debug() << BackNames[i] << DDH::Endl();
		GetDDWorld()->SpawnActor<AActor>(BackWealths[i], ViewTrans.GetLocation()+FVector(offsetValue*i,0.f,0.f),FQuat::Identity.Rotator());
	}
}
