// Fill out your copyright notice in the Description page of Project Settings.


#include "TestWealthObject.h"

void UTestWealthObject::DDLoading()
{
	Super::DDLoading();
	IsAllowTickEvent = true;

	//LoadClassWealth("ViewActor1", "LoadActorClass");
	//LoadClassWealthKind("ViewActor", "LoadKindClass");
	//BuildSingleClassWealth(EWealthType::Actor, "ViewActor1", "BuildActor", ViewTrans);

	//TArray<FTransform> SpawnTransforms;
	//for (int i = 0;i<3;++i)
	//{
	//	SpawnTransforms.Push(FTransform(ViewTrans.GetLocation() + FVector(0.f, offsetValue * i, 0.f)));
	//}
	//BuildKindClassWealth(EWealthType::Actor, "ViewActor", "BuildActorKind", SpawnTransforms);
}

void UTestWealthObject::DDTick(float DeltaSeconds)
{
	Super::DDTick(DeltaSeconds);

	if (SingleActor)
	{
		SingleActor->AddActorWorldRotation(FRotator(1.0f, 0.f, 0.f));
	}

	for (int i = 0;i<KindActors.Num();++i)
		if(KindActors[i])
			KindActors[i]->AddActorWorldRotation(FRotator(1.0f, 0.f, 0.f));
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

void UTestWealthObject::BuildActor(FName BackName, AActor* BackActor)
{
	DDH::Debug() << BackName << DDH::Endl();
	SingleActor = BackActor;
}

void UTestWealthObject::BuildActorKind(TArray<FName> BackNames, TArray<AActor*> BackActors)
{
	for (int i = 0;i<BackNames.Num();++i)
		DDH::Debug() << BackNames[i] << DDH::Endl();
	KindActors = BackActors;
}
