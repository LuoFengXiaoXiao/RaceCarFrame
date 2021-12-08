// Fill out your copyright notice in the Description page of Project Settings.


#include "TestWealthObject.h"

void UTestWealthObject::DDLoading()
{
	Super::DDLoading();
	IsAllowTickEvent = true;

	//LoadClassWealth("ViewActor1", "LoadActorClass");
	//LoadClassWealthKind("ViewActor", "LoadKindClass");
	//BuildSingleClassWealth(EWealthType::Actor, "ViewActor1", "BuildActor", ViewTrans);

	TArray<FTransform> SpawnTransforms;
	for (int i = 0; i < 3; ++i)
	{
		SpawnTransforms.Push(FTransform(ViewTrans.GetLocation() + FVector(0.f, offsetValue * i, 0.f)));
	}
	//BuildKindClassWealth(EWealthType::Actor, "ViewActor", "BuildActorKind", SpawnTransforms);
	//BuildMultiClassWealth(EWealthType::Actor, "ViewActor2", 3 , "BuildActorMulti",SpawnTransforms);

	//StartCoroutine("BuildObjectTest", BuildObjectTest());
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

void UTestWealthObject::BuildActorMulti(FName BackName, TArray<AActor*> BackActors)
{
	DDH::Debug() << BackName << DDH::Endl();
	KindActors = BackActors;
}

void UTestWealthObject::BuildSingleObject(FName BackName, UObject* BackObject)
{
	DDH::Debug() << "BuildSingleObject-->" << BackName << DDH::Endl();
	IDDOO* InstPtr = Cast<IDDOO>(BackObject);
	if (InstPtr)
		InstPtr->RegisterToModule(ModuleIndex);
}

void UTestWealthObject::BuildKindObject(TArray<FName> BackNames, TArray<UObject*> BackObjects)
{
	for (int i = 0;i<BackObjects.Num();++i)
	{
		DDH::Debug() << "BuildKindObject-->" << BackNames[i] << DDH::Endl();
		IDDOO* InstPtr = Cast<IDDOO>(BackObjects[i]);
		if (InstPtr)
			InstPtr->RegisterToModule(ModuleIndex);
	}
}

void UTestWealthObject::BuildMultiObject(FName BackName, TArray<UObject*> BackObjects)
{
	DDH::Debug() << "BuildMultiObject-->" << BackName << DDH::Endl();
	for (int i = 0; i < BackObjects.Num(); ++i)
	{
		IDDOO* InstPtr = Cast<IDDOO>(BackObjects[i]);
		if (InstPtr)
			InstPtr->RegisterToModule(ModuleIndex);
	}
}

DDCoroTask* UTestWealthObject::BuildObjectTest()
{
	DDCORO_PARAM(UTestWealthObject)
#include DDCORO_BEGIN()

	D->BuildSingleClassWealth(EWealthType::Object, "ViewObject2", "BuildSingleObject");

#include DDYIELD_READY()
		DDYIELD_RETURN_SECOND(10.f);
		D->BuildKindClassWealth(EWealthType::Object, "ViewObject", "BuildKindObject");
#include DDYIELD_READY()
	DDYIELD_RETURN_SECOND(10.f);
	D->BuildMultiClassWealth(EWealthType::Object, "ViewObject3", 3, "BuildMultiObject");

#include DDCORO_END()
}
