// Fill out your copyright notice in the Description page of Project Settings.


#include "DDCore/DDWealth.h"
#include "DDObject/DDOO.h"
#include "DDCore/DDMM.h"
#include <Blueprint/UserWidget.h>
#include "DDObject/DDPawn.h"

// ��Դģ��

struct ObjectSingleLoadNode
{
	// ���ؾ��
	TSharedPtr<FStreamableHandle> WealthHandle;
	// ��Դ�ṹ��
	FObjectWealthEntry* WealthEntry;
	// Ŀ�������
	FName ObjectName;
	// �ص�������
	FName FunName;
	// ���캯��
	ObjectSingleLoadNode(TSharedPtr<FStreamableHandle> InWealthHandle, FObjectWealthEntry* InWealthEntry, FName InObjectName, FName InFunName)
	{
		WealthHandle = InWealthHandle;
		WealthEntry = InWealthEntry;
		ObjectName = InObjectName;
		FunName = InObjectName;
	}
};

void UDDWealth::WealthBeginPlay()
{
	// �����Զ����ɶ���
	for (int i = 0;i<WealthData.Num();++i)
	{
		// ����Object����
		for (int j =0;j<WealthData[i]->AutoObjectData.Num();++j)
		{
			// ���ݻ�ȡ����UClass����ָ���Ķ���
			UObject* NewObj = NewObject<UObject>(this, WealthData[i]->AutoObjectData[j].WealthClass);
			NewObj->AddToRoot();
			IDDOO* InstPtr = Cast<IDDOO>(NewObj);
			if (InstPtr)
			{
				InstPtr->RegisterToModule(
					WealthData[i]->ModuleName.IsNone() ? IModule->GetFName() : WealthData[i]->ModuleName,
					WealthData[i]->AutoObjectData[j].ObjcetName,
					WealthData[i]->AutoObjectData[j].ClassName
				);
			}
		}
		// ����AActor����,ע������Actor�����ƣ���ͨģʽ������ײ���ģ����λ�ò����������ʧ��
		for (int j = 0;j<WealthData[i]->AutoActorData.Num();++j)
		{
			AActor* NewAct = GetDDWorld()->SpawnActor<AActor>(WealthData[i]->AutoActorData[j].WealthClass, WealthData[i]->AutoActorData[j].Transform);
			if (!NewAct)
				DDH::Debug()<< WealthData[i]->AutoActorData[j].WealthClass->GetFName() <<" spawn failed, Check the Transform!!!" << DDH::Endl();

			IDDOO* InstPtr = Cast<IDDOO>(NewAct);
			if (InstPtr)
			{
				InstPtr->RegisterToModule(
					WealthData[i]->ModuleName.IsNone() ? IModule->GetFName() : WealthData[i]->ModuleName,
					WealthData[i]->AutoActorData[j].ObjcetName,
					WealthData[i]->AutoActorData[j].ClassName
				);
			}
		}
		// ����Widget����
		for (int j = 0; j < WealthData[i]->AutoWidgetData.Num(); ++j)
		{
			UUserWidget* NewWidget = CreateWidget(GetDDWorld(), WealthData[i]->AutoWidgetData[j].WealthClass);
			// �������
			GCWidgetGroup.Push(NewWidget);
			IDDOO* InstPtr = Cast<IDDOO>(NewWidget);
			if (InstPtr)
			{
				InstPtr->RegisterToModule(
					WealthData[i]->ModuleName.IsNone() ? IModule->GetFName() : WealthData[i]->ModuleName,
					WealthData[i]->AutoWidgetData[j].ObjcetName,
					WealthData[i]->AutoWidgetData[j].ClassName
				);
			}
		}
	}
}

void UDDWealth::WealthTick(float DeltaSeconds)
{
	DealObjectSingleLoadStack();
}

void UDDWealth::AssignData(TArray<UWealthData*>& InWealthData)
{
	WealthData = InWealthData;
}

FWealthUrl* UDDWealth::GainWealthUrl(FName WealthName)
{
	for (int i = 0; i < WealthData.Num(); ++i)
		for (int j = 0; j < WealthData[i]->WealthUrl.Num(); ++j)
			if (WealthData[i]->WealthUrl[j].WealthName.IsEqual(WealthName))
				return &WealthData[i]->WealthUrl[j];
	return NULL;
}

void UDDWealth::GainWealthUrl(FName WealthKind, TArray<FWealthUrl*>& OutUrl)
{
	for (int i = 0; i < WealthData.Num(); ++i)
		for (int j = 0; j < WealthData[i]->WealthUrl.Num(); ++j)
			if (WealthData[i]->WealthUrl[j].WealthKind.IsEqual(WealthKind))
				OutUrl.Push(&WealthData[i]->WealthUrl[j]);
}

void UDDWealth::LoadObjectWealth(FName WealthName, FName ObjectName, FName FunName)
{
	// ��ȡ��Դ�ṹ��
	FObjectWealthEntry* WealthEntry = GetObjectSingleEntry(WealthName);
	if (!WealthEntry)
	{
		DDH::Debug() << ObjectName << " Get Null Wealth: " << WealthName << DDH::Endl();
		return;
	}
	// �����Դ������
	if (!WealthEntry->WealthPath.IsValid())
	{
		DDH::Debug() << ObjectName << " Get UnValid Wealth: " << WealthName << DDH::Endl();
		return;
	}
	// �����Դ�Ѿ�����
	if (WealthEntry->WealthObject)
	{
		// ֱ�ӷ����Ѿ����ڵ���Դ������
		BackObjectWealth(ModuleIndex, ObjectName, FunName, WealthName, WealthEntry->WealthObject);
	}
	else
	{
		// �����첽����
		TSharedPtr<FStreamableHandle> WealthHandle = WealthLoader.RequestAsyncLoad(WealthEntry->WealthPath);
		// ����½ڵ㵽��������
		ObjectSingleLoadStack.Push(new ObjectSingleLoadNode(WealthHandle,WealthEntry,ObjectName,FunName));
	}
}

void UDDWealth::LoadObjectWealthKind(FName WealthKind, FName ObjectName, FName FunName)
{

}

FObjectWealthEntry* UDDWealth::GetObjectSingleEntry(FName WealthName)
{
	for (int i = 0; i < WealthData.Num(); ++i)
		for (int j = 0; j < WealthData[i]->ObjectWealthData.Num(); ++j)
			if (WealthData[i]->ObjectWealthData[j].WealthName.IsEqual(WealthName))
				return &WealthData[i]->ObjectWealthData[j];
	return NULL;
}

TArray<FObjectWealthEntry*> UDDWealth::GetObjectKindEntry(FName WealthKind)
{
	TArray<FObjectWealthEntry*> WealthGroup;
	for (int i = 0; i < WealthData.Num(); ++i)
		for (int j = 0; j < WealthData[i]->ObjectWealthData.Num(); ++j)
			if (WealthData[i]->ObjectWealthData[j].WealthKind.IsEqual(WealthKind))
				WealthGroup.Push(&WealthData[i]->ObjectWealthData[j]);
	return WealthGroup;
}

void UDDWealth::DealObjectSingleLoadStack()
{
	// ���������ɵ�����
	TArray<ObjectSingleLoadNode*> CompleteStack;
	for (int i = 0; i < ObjectSingleLoadStack.Num();++i)
	{
		// �ж��Ƿ��Ѿ��������
		if (ObjectSingleLoadStack[i]->WealthHandle->HasLoadCompleted())
		{
			// ���ö�Ӧ����Դ���,�˴�Ҳ����ͨ������ķ�ʽ��ȡ��Դ
			ObjectSingleLoadStack[i]->WealthEntry->WealthObject = ObjectSingleLoadStack[i]->WealthEntry->WealthPath.ResolveObject();
			//ObjectSingleLoadStack[i]->WealthEntry->WealthObject = ObjectSingleLoadStack[i]->WealthHandle->GetLoadedAsset();
			// ������Դ������
			BackObjectWealth(ModuleIndex, ObjectSingleLoadStack[i]->ObjectName, ObjectSingleLoadStack[i]->FunName, ObjectSingleLoadStack[i]->WealthEntry->WealthName, ObjectSingleLoadStack[i]->WealthEntry->WealthObject);
			// ��ӵ��Ѿ���ɵĽڵ�������
			CompleteStack.Push(ObjectSingleLoadStack[i]);
		}
	}
	// �����Ѿ���ɵĽڵ�
	for (int i = 0;i < CompleteStack.Num();++i)
	{
		ObjectSingleLoadStack.Remove(CompleteStack[i]);
		delete CompleteStack[i];
	}
}
