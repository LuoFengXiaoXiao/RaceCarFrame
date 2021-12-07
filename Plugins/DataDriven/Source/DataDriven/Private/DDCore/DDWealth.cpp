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
	// ���������
	FName ObjectName;
	// �ص�������
	FName FunName;
	// ���캯��
	ObjectSingleLoadNode(TSharedPtr<FStreamableHandle> InWealthHandle, FObjectWealthEntry* InWealthEntry, FName InObjectName, FName InFunName)
	{
		WealthHandle = InWealthHandle;
		WealthEntry = InWealthEntry;
		ObjectName = InObjectName;
		FunName = InFunName;
	}
};

struct ObjectKindLoadNode
{
	// ���ؾ��
	TSharedPtr<FStreamableHandle> WealthHandle;
	// û�м��ص���Դ
	TArray<FObjectWealthEntry*> UnLoadWealthEntry;
	// �Ѿ����ص���Դ
	TArray<FObjectWealthEntry*> LoadWealthEntry;
	// ���������
	FName ObjectName;
	// �ص�������
	FName FunName;
	// ���캯��
	ObjectKindLoadNode(TSharedPtr<FStreamableHandle> InWealthHandle, TArray<FObjectWealthEntry*>& InUnLoadWealthEntry, TArray<FObjectWealthEntry*>& InLoadWealthEntry, FName InObjectName, FName InFunName)
	{
		WealthHandle = InWealthHandle;
		UnLoadWealthEntry = InUnLoadWealthEntry;
		LoadWealthEntry = InLoadWealthEntry;
		ObjectName = InObjectName;
		FunName = InFunName;
	}
};

struct ClassSingleLoadNode
{
	// ���ؾ��
	TSharedPtr<FStreamableHandle> WealthHandle;
	// ��Դ�ṹ��
	FClassWealthEntry* WealthEntry;
	// ���������
	FName ObjectName;
	// �ص�������
	FName FunName;
	// ����λ��
	FTransform SpawnTransform;
	// �Ƿ�ֻ����UClass
	bool IsLoadClass;
	// ���캯��
	ClassSingleLoadNode(TSharedPtr<FStreamableHandle> InWealthHandle, FClassWealthEntry* InWealthEntry, FName InObjectName, FName InFunName)
	{
		WealthHandle = InWealthHandle;
		WealthEntry = InWealthEntry;
		ObjectName = InObjectName;
		FunName = InFunName;
		IsLoadClass = true;
	}
	// ���캯��
	ClassSingleLoadNode(TSharedPtr<FStreamableHandle> InWealthHandle, FClassWealthEntry* InWealthEntry, FName InObjectName, FName InFunName, FTransform InSpawnTransform)
	{
		WealthHandle = InWealthHandle;
		WealthEntry = InWealthEntry;
		ObjectName = InObjectName;
		FunName = InFunName;
		SpawnTransform = InSpawnTransform;
		IsLoadClass = false;
	}
};

struct ClassKindLoadNode
{
	// ���ؾ��
	TSharedPtr<FStreamableHandle> WealthHandle;
	// û�м��ص���Դ
	TArray<FClassWealthEntry*> UnLoadWealthEntry;
	// �Ѿ����ص���Դ
	TArray<FClassWealthEntry*> LoadWealthEntry;
	// ���������
	FName ObjectName;
	// �ص�������
	FName FunName;
	// ����λ��
	TArray<FTransform> SpawnTransforms;
	// �Ƿ�ֻ����UClass
	bool IsLoadClass;
	// �������ɵĶ���������
	TArray<FName> NameGroup;
	TArray<UObject*> ObjectGroup;
	TArray<AActor*> ActorGroup;
	TArray<UUserWidget*> WidgetGroup;
	// ���캯��
	ClassKindLoadNode(TSharedPtr<FStreamableHandle> InWealthHandle, TArray<FClassWealthEntry*>& InUnLoadWealthEntry, TArray<FClassWealthEntry*>& InLoadWealthEntry, FName InObjectName, FName InFunName)
	{
		WealthHandle = InWealthHandle;
		UnLoadWealthEntry = InUnLoadWealthEntry;
		LoadWealthEntry = InLoadWealthEntry;
		ObjectName = InObjectName;
		FunName = InFunName;
		IsLoadClass = true;
	}
	// ���캯��
	ClassKindLoadNode(TSharedPtr<FStreamableHandle> InWealthHandle, TArray<FClassWealthEntry*>& InUnLoadWealthEntry, TArray<FClassWealthEntry*>& InLoadWealthEntry, FName InObjectName, FName InFunName, TArray<FTransform>& InSpawnTransforms)
	{
		WealthHandle = InWealthHandle;
		UnLoadWealthEntry = InUnLoadWealthEntry;
		LoadWealthEntry = InLoadWealthEntry;
		ObjectName = InObjectName;
		FunName = InFunName;
		SpawnTransforms = InSpawnTransforms;
		IsLoadClass = false;
	}
};

struct ClassMultiLoadNode
{
	// ���ؾ��
	TSharedPtr<FStreamableHandle> WealthHandle;
	// ��Դ�ṹ��
	FClassWealthEntry* WealthEntry;
	// ���������
	FName ObjectName;
	// �ص�������
	FName FunName;
	// ��������
	int32 Amount;
	// ����λ��
	TArray<FTransform> SpawnTransforms;
	// �������ɵĶ���������
	TArray<UObject*> ObjectGroup;
	TArray<AActor*> ActorGroup;
	TArray<UUserWidget*> WidgetGroup;
	// ���캯����δ����ʱʹ��
	ClassMultiLoadNode(TSharedPtr<FStreamableHandle> InWealthHandle, FClassWealthEntry* InWealthEntry,int32 InAmount, FName InObjectName, FName InFunName, TArray<FTransform>& InSpawnTransforms)
	{
		WealthHandle = InWealthHandle;
		WealthEntry = InWealthEntry;
		Amount = InAmount;
		ObjectName = InObjectName;
		FunName = InFunName;
		SpawnTransforms = InSpawnTransforms;
	}

	// ���캯�����Ѽ���ʱʹ��
	ClassMultiLoadNode(FClassWealthEntry* InWealthEntry, int32 InAmount, FName InObjectName, FName InFunName, TArray<FTransform>& InSpawnTransforms)
	{
		WealthEntry = InWealthEntry;
		Amount = InAmount;
		ObjectName = InObjectName;
		FunName = InFunName;
		SpawnTransforms = InSpawnTransforms;
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
#if WITH_EDITOR
		// ѭ������WealthObject��WealthClassΪ��,Ŀ������ÿ�δӱ༭��������Ϸʱ��ԴAsset��״̬������
		for (int j = 0; j < WealthData[i]->ObjectWealthData.Num(); ++j)
			WealthData[i]->ObjectWealthData[j].WealthObject = NULL;
		for (int j = 0; j < WealthData[i]->ClassWealthData.Num(); ++j)
			WealthData[i]->ClassWealthData[j].WealthClass = NULL;
#endif
	}
}

void UDDWealth::WealthTick(float DeltaSeconds)
{
	DealObjectSingleLoadStack();
	DealObjectKindLoadStack();
	DealClassSingleLoadStack();
	DealClassKindLoadStack();
	DealClassMultiLoadStack();
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
	// �����Դ�Ѿ�����--�˴���bug���л�����Դ֮�󣬻��ǻ��ȡ��ǰ��ͼƬ��δ�����ڴ�
	// ֱ���첽���ػ��޸���bug�����ǻ�Ӱ�����ܣ���취�ж�path�Ƿ�����ȷ�ļ���
	if (WealthEntry->WealthObject)
	{
		// ֱ�ӷ����Ѿ����ڵ���Դ������
		DDH::Debug() << "Current Object:" << WealthEntry->WealthObject->GetFName() << DDH::Endl();
		BackObjectWealth(ModuleIndex, ObjectName, FunName, WealthName, WealthEntry->WealthObject);
	}
	else
	{
		// �����첽����
		TSharedPtr<FStreamableHandle> WealthHandle = WealthLoader.RequestAsyncLoad(WealthEntry->WealthPath);
		// ����½ڵ㵽��������
		ObjectSingleLoadStack.Push(new ObjectSingleLoadNode(WealthHandle,WealthEntry,ObjectName,FunName));
		DDH::Debug() << "New Object:" << WealthEntry->WealthObject->GetFName() << DDH::Endl();
	}

	//// �����첽����
	//TSharedPtr<FStreamableHandle> WealthHandle = WealthLoader.RequestAsyncLoad(WealthEntry->WealthPath);
	//// ����½ڵ㵽��������
	//ObjectSingleLoadStack.Push(new ObjectSingleLoadNode(WealthHandle, WealthEntry, ObjectName, FunName));
}

void UDDWealth::LoadObjectWealthKind(FName WealthKind, FName ObjectName, FName FunName)
{
	TArray<FObjectWealthEntry*> WealthEntryGroup = GetObjectKindEntry(WealthKind);
	// �������Ϊ0
	if (WealthEntryGroup.Num() == 0)
	{
		DDH::Debug() << ObjectName << " Get Null Wealth: " << WealthKind << DDH::Endl();
		return;
	}
	// �ж���Դ������
	for (int i = 0;i < WealthEntryGroup.Num();++i)
	{
		if (!WealthEntryGroup[i]->WealthPath.IsValid())
		{
			DDH::Debug() << ObjectName << " Get Not Valid in kind: " << WealthKind << " For Name : " << WealthEntryGroup[i]->WealthName <<DDH::Endl();
			return;
		}
	}
	// ��û�м��ص���Դ
	TArray<FObjectWealthEntry*> UnLoadWealthEntry;
	// �Ѿ����ص���Դ
	TArray<FObjectWealthEntry*> LoadWealthEntry;
	// ��Դ����������
	for (int i = 0;i < WealthEntryGroup.Num();++i)
	{
		if (WealthEntryGroup[i]->WealthObject)
			LoadWealthEntry.Push(WealthEntryGroup[i]);
		else
			UnLoadWealthEntry.Push(WealthEntryGroup[i]);
	}
	// ���δ���ص���ԴΪ0
	if (UnLoadWealthEntry.Num() == 0)
	{
		// ֱ�ӻ�ȡ������Դ���������
		TArray<FName> NameGroup;
		TArray<UObject*> WealthGroup;
		for (int i = 0;i < LoadWealthEntry.Num();++i)
		{
			NameGroup.Push(LoadWealthEntry[i]->WealthName);
			WealthGroup.Push(LoadWealthEntry[i]->WealthObject);
		}
		BackObjectWealthKind(ModuleIndex, ObjectName, FunName, NameGroup, WealthGroup);
	}
	else
	{
		// ��ȡ��Դ·��
		TArray<FSoftObjectPath> WealthPaths;
		for (int i = 0; i < UnLoadWealthEntry.Num(); ++i)
			WealthPaths.Push(UnLoadWealthEntry[i]->WealthPath);
		// �����첽���ػ�ȡ���
		TSharedPtr<FStreamableHandle> WealthHandle = WealthLoader.RequestAsyncLoad(WealthPaths);
		// ����½ڵ㵽��������
		ObjectKindLoadStack.Push(new ObjectKindLoadNode(WealthHandle,UnLoadWealthEntry,LoadWealthEntry,ObjectName,FunName));
	}
}

void UDDWealth::LoadClassWealth(FName WealthName, FName ObjectName, FName FunName)
{
	// ��ȡ��Դ�ṹ��
	FClassWealthEntry* WealthEntry = GetClassSingleEntry(WealthName);
	if (!WealthEntry)
	{
		DDH::Debug() << ObjectName << " Get Null Wealth: " << WealthName << DDH::Endl();
		return;
	}
	// �����Դ������
	// ��Դ·��û���⣬��ʱ�����ʧЧ����
	if (!WealthEntry->WealthPtr.ToSoftObjectPath().IsValid())
	{
		DDH::Debug() << ObjectName << " Get UnValid Wealth: " << WealthName << DDH::Endl();
		return;
	}
	// �����Դ�Ѿ�����--�˴���bug���л�����Դ֮�󣬻��ǻ��ȡ��ǰ��ͼƬ��δ�����ڴ�
	// ֱ���첽���ػ��޸���bug�����ǻ�Ӱ�����ܣ���취�ж�path�Ƿ�����ȷ�ļ���
	// �����µĽ��������д��BeginPlay��,�����������
	/*
	#if WITH_EDITOR
		// ѭ������WealthObject��WealthClassΪ��,Ŀ������ÿ�δӱ༭��������Ϸʱ��ԴAsset��״̬������
		for (int j = 0; j < WealthData[i]->ObjectWealthData.Num(); ++j)
			WealthData[i]->ObjectWealthData[j].WealthObject = NULL;
		for (int j = 0; j < WealthData[i]->ClassWealthData.Num(); ++j)
			WealthData[i]->ClassWealthData[j].WealthClass = NULL;
	#endif
	*/
	if (WealthEntry->WealthClass)
	{
		// ֱ�ӷ����Ѿ����ڵ���Դ������
		//DDH::Debug() << "Current Object:" << WealthEntry->WealthClass->GetFName() << DDH::Endl();
		BackClassWealth(ModuleIndex, ObjectName, FunName, WealthName, WealthEntry->WealthClass);
	}
	else
	{
		// �����첽����
		TSharedPtr<FStreamableHandle> WealthHandle = WealthLoader.RequestAsyncLoad(WealthEntry->WealthPtr.ToSoftObjectPath());
		// ����½ڵ㵽��������
		ClassSingleLoadStack.Push(new ClassSingleLoadNode(WealthHandle, WealthEntry, ObjectName, FunName));
		//DDH::Debug() << "New Class:" << WealthEntry->WealthClass->GetFName() << DDH::Endl();
	}
}

void UDDWealth::LoadClassWealthKind(FName WealthKind, FName ObjectName, FName FunName)
{
	TArray<FClassWealthEntry*> WealthEntryGroup = GetClassKindEntry(WealthKind);
	// �������Ϊ0
	if (WealthEntryGroup.Num() == 0)
	{
		DDH::Debug() << ObjectName << " Get Null Wealth: " << WealthKind << DDH::Endl();
		return;
	}
	// �ж���Դ������
	for (int i = 0; i < WealthEntryGroup.Num(); ++i)
	{
		if (!WealthEntryGroup[i]->WealthPtr.ToSoftObjectPath().IsValid())
		{
			DDH::Debug() << ObjectName << " Get Not Valid in kind: " << WealthKind << " For Name : " << WealthEntryGroup[i]->WealthName << DDH::Endl();
			return;
		}
	}
	// ��û�м��ص���Դ
	TArray<FClassWealthEntry*> UnLoadWealthEntry;
	// �Ѿ����ص���Դ
	TArray<FClassWealthEntry*> LoadWealthEntry;
	// ��Դ����������
	for (int i = 0; i < WealthEntryGroup.Num(); ++i)
	{
		if (WealthEntryGroup[i]->WealthClass)
			LoadWealthEntry.Push(WealthEntryGroup[i]);
		else
			UnLoadWealthEntry.Push(WealthEntryGroup[i]);
	}
	// ���δ���ص���ԴΪ0
	if (UnLoadWealthEntry.Num() == 0)
	{
		// ֱ�ӻ�ȡ������Դ���������
		TArray<FName> NameGroup;
		TArray<UClass*> WealthGroup;
		for (int i = 0; i < LoadWealthEntry.Num(); ++i)
		{
			NameGroup.Push(LoadWealthEntry[i]->WealthName);
			WealthGroup.Push(LoadWealthEntry[i]->WealthClass);
		}
		BackClassWealthKind(ModuleIndex, ObjectName, FunName, NameGroup, WealthGroup);
	}
	else
	{
		// ��ȡδ������Դ·��
		TArray<FSoftObjectPath> WealthPaths;
		for (int i = 0; i < UnLoadWealthEntry.Num(); ++i)
			WealthPaths.Push(UnLoadWealthEntry[i]->WealthPtr.ToSoftObjectPath());
		// �����첽���ػ�ȡ���
		TSharedPtr<FStreamableHandle> WealthHandle = WealthLoader.RequestAsyncLoad(WealthPaths);
		// ����½ڵ㵽��������
		ClassKindLoadStack.Push(new ClassKindLoadNode(WealthHandle, UnLoadWealthEntry, LoadWealthEntry, ObjectName, FunName));
	}
}

void UDDWealth::BuildSingleClassWealth(EWealthType WealthType, FName WealthName, FName ObjectName, FName FunName, FTransform SpawnTransform)
{
	// ��ȡ��Ӧ����Դ�ṹ��
	FClassWealthEntry* WealthEntry = GetClassSingleEntry(WealthName);
	if (!WealthEntry)
	{
		DDH::Debug() << ObjectName << " Get Null Wealth : " << WealthName << DDH::Endl();
		return;
	}
	if (!WealthEntry->WealthPtr.ToSoftObjectPath().IsValid())
	{
		DDH::Debug() << ObjectName << " Get UnValid Wealth: " << WealthName << DDH::Endl();
		return;
	}
	// ��Դ�����Ƿ�ƥ��
	if (WealthEntry->WealthType != WealthType)
	{
		DDH::Debug() << ObjectName << " Get Error Type : " << WealthName << DDH::Endl();
		return;
	}
	// �����Դ�Ѿ�����
	if (WealthEntry->WealthClass)
	{
		// ���ɲ����ݶ���������
		if (WealthType == EWealthType::Object)
		{
			UObject* InstObject = NewObject<UObject>(this, WealthEntry->WealthClass);
			InstObject->AddToRoot();
			BackObjectSingle(ModuleIndex, ObjectName, FunName, WealthName, InstObject);
		}
		else if (WealthType == EWealthType::Actor)
		{
			AActor* InstActor = GetDDWorld()->SpawnActor<AActor>(WealthEntry->WealthClass, SpawnTransform);
			BackActorSingle(ModuleIndex,ObjectName,FunName,WealthName,InstActor);
		}
		else if (WealthType == EWealthType::Widget)
		{
			UUserWidget* InstWidget = CreateWidget<UUserWidget>(GetDDWorld(), WealthEntry->WealthClass);
			// �������
			GCWidgetGroup.Push(InstWidget);
			BackWidgetSingle(ModuleIndex, ObjectName, FunName, WealthName, InstWidget);
		}
	}
	else
	{
		// �첽���أ���ȡ���ؾ��
		TSharedPtr<FStreamableHandle> WealthHandle = WealthLoader.RequestAsyncLoad(WealthEntry->WealthPtr.ToSoftObjectPath());
		// �����¼��غ���
		ClassSingleLoadStack.Push(new ClassSingleLoadNode(WealthHandle, WealthEntry, ObjectName, FunName, SpawnTransform));
	}
}

void UDDWealth::BuildKindClassWealth(EWealthType WealthType, FName WealthKind, FName ObjectName, FName FunName, TArray<FTransform> SpawnTransforms)
{
	TArray<FClassWealthEntry*> WealthEntryGroup = GetClassKindEntry(WealthKind);
	// �ж�Ϊ0
	if (WealthEntryGroup.Num() == 0)
	{
		DDH::Debug() << ObjectName << " Get Null WealthKind : " << WealthKind << DDH::Endl();
		return;
	}
	// 
	for (int i = 0;i<WealthEntryGroup.Num();++i)
	{
		// ��Դ������
		if (!WealthEntryGroup[i]->WealthPtr.ToSoftObjectPath().IsValid())
		{
			DDH::Debug() << ObjectName << " Get Not Valid In Kind : " << WealthKind << " For Name : " << WealthEntryGroup[i]->WealthName << DDH::Endl();
			return;
		}
		// ��Դ����ƥ��
		if (WealthEntryGroup[i]->WealthType != WealthType)
		{
			DDH::Debug() << ObjectName << " Get Error Type In Kind : " << WealthKind << " For Name : " << WealthEntryGroup[i]->WealthName << DDH::Endl();
			return;
		}
	}
	// �ж�Transfor�����Ƿ�Ϊ1�����Ƿ�ΪWealthEntryGroup������
	if (WealthType == EWealthType::Actor && SpawnTransforms.Num() != 1 && SpawnTransforms.Num() != WealthEntryGroup.Num())
	{
		DDH::Debug() << ObjectName << " Send Error Spawn Count : " << WealthKind << DDH::Endl();
		return;
	}
	// δ���ص���Դ����
	TArray<FClassWealthEntry*> UnLoadWealthEntry;
	// δ���ص���Դ
	TArray<FClassWealthEntry*> LoadWealthEntry;
	// ��Դ����
	for (int i = 0;i<WealthEntryGroup.Num();++i)
	{
		if (WealthEntryGroup[i]->WealthClass)
			LoadWealthEntry.Push(WealthEntryGroup[i]);
		else
			UnLoadWealthEntry.Push(WealthEntryGroup[i]);
	}
	// ����һ�����ؾ��
	TSharedPtr<FStreamableHandle> WealthHandle;
	// �����δ���ص���Դ
	if (UnLoadWealthEntry.Num()>0)
	{
		// ��ȡδ���ص���Դ·��
		TArray<FSoftObjectPath> WealthPaths;
		for(int i = 0;i<UnLoadWealthEntry.Num();++i)
			WealthPaths.Push(UnLoadWealthEntry[i]->WealthPtr.ToSoftObjectPath());
		// ��ȡ���ؾ��
		WealthHandle = WealthLoader.RequestAsyncLoad(WealthPaths);
	}
	// ����ÿ֡����Ľڵ�
	ClassKindLoadStack.Push(new ClassKindLoadNode(WealthHandle, UnLoadWealthEntry, LoadWealthEntry, ObjectName, FunName, SpawnTransforms));
}

void UDDWealth::BuildMultiClassWealth(EWealthType WealthType, FName WealthName, int32 Amount, FName ObjectName, FName FunName, TArray<FTransform> SpawnTransforms)
{
	// ��ȡ��Ӧ����Դ�ṹ��
	FClassWealthEntry* WealthEntry = GetClassSingleEntry(WealthName);
	if (!WealthEntry)
	{
		DDH::Debug() << ObjectName << " Get Null Wealth : " << WealthName << DDH::Endl();
		return;
	}
	if (!WealthEntry->WealthPtr.ToSoftObjectPath().IsValid())
	{
		DDH::Debug() << ObjectName << " Get UnValid Wealth: " << WealthName << DDH::Endl();
		return;
	}
	// ��Դ�����Ƿ�ƥ��
	if (WealthEntry->WealthType != WealthType)
	{
		DDH::Debug() << ObjectName << " Get Error Type : " << WealthName << DDH::Endl();
		return;
	}
	// ��֤Tranforms�����������Ƿ�Ϊ1����ΪAmount,����AmountΪ0
	if ((WealthType == EWealthType::Actor && SpawnTransforms.Num() != 1 && SpawnTransforms.Num() != Amount) || Amount == 0)
	{
		DDH::Debug() << ObjectName << " Send Error Spawn Count : " << WealthName << DDH::Endl();
		return;
	}
	// ����Ѿ�������Դ
	if (WealthEntry->WealthClass)
		ClassMultiLoadStack.Push(new ClassMultiLoadNode(WealthEntry, Amount, ObjectName, FunName, SpawnTransforms));
	else
	{
		// �첽����
		TSharedPtr<FStreamableHandle> WealthHandle = WealthLoader.RequestAsyncLoad(WealthEntry->WealthPtr.ToSoftObjectPath());
		// ����½ڵ�
		ClassMultiLoadStack.Push(new ClassMultiLoadNode(WealthHandle,WealthEntry,Amount,ObjectName, FunName, SpawnTransforms));
	}
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

FClassWealthEntry* UDDWealth::GetClassSingleEntry(FName WealthName)
{
	for (int i = 0; i < WealthData.Num(); ++i)
		for (int j = 0; j < WealthData[i]->ClassWealthData.Num(); ++j)
			if (WealthData[i]->ClassWealthData[j].WealthName.IsEqual(WealthName))
				return &WealthData[i]->ClassWealthData[j];
	return NULL;
}

TArray<FClassWealthEntry*> UDDWealth::GetClassKindEntry(FName WealthKind)
{
	TArray<FClassWealthEntry*> WealthGroup;
	for (int i = 0; i < WealthData.Num(); ++i)
		for (int j = 0; j < WealthData[i]->ClassWealthData.Num(); ++j)
			if (WealthData[i]->ClassWealthData[j].WealthKind.IsEqual(WealthKind))
				WealthGroup.Push(&WealthData[i]->ClassWealthData[j]);
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
	for (int i = 0; i < CompleteStack.Num(); ++i)
	{
		ObjectSingleLoadStack.Remove(CompleteStack[i]);
		delete CompleteStack[i];
	}
}

void UDDWealth::DealObjectKindLoadStack()
{
	// ���������ɵ�����
	TArray<ObjectKindLoadNode*> CompleteStack;
	for (int i = 0;i < ObjectKindLoadStack.Num();++i)
	{
		// �ж��Ƿ��Ѿ��������
		if (ObjectKindLoadStack[i]->WealthHandle->HasLoadCompleted())
		{
			// ������Դ����
			TArray<FName> NameGroup;
			TArray<UObject*> WealthGroup;
			// ����Ѿ����ص���Դ
			for (int j = 0; j < ObjectKindLoadStack[i]->LoadWealthEntry.Num(); ++j)
			{
				NameGroup.Push(ObjectKindLoadStack[i]->LoadWealthEntry[j]->WealthName);
				WealthGroup.Push(ObjectKindLoadStack[i]->LoadWealthEntry[j]->WealthObject);
			}
			// ������������δ������Դ�ṹ��Ϊ�Ѽ���״̬
			for (int j = 0;j < ObjectKindLoadStack[i]->UnLoadWealthEntry.Num();++j)
			{
				ObjectKindLoadStack[i]->UnLoadWealthEntry[j]->WealthObject = ObjectKindLoadStack[i]->UnLoadWealthEntry[j]->WealthPath.ResolveObject();
				// ���δ���ص���Դ
				NameGroup.Push(ObjectKindLoadStack[i]->UnLoadWealthEntry[j]->WealthName);
				WealthGroup.Push(ObjectKindLoadStack[i]->UnLoadWealthEntry[j]->WealthObject);
			}
			// �������ݸ��������
			BackObjectWealthKind(ModuleIndex, ObjectKindLoadStack[i]->ObjectName, ObjectKindLoadStack[i]->FunName, NameGroup, WealthGroup);
			// ��ӵ�ǰ�ڵ㵽���������
			CompleteStack.Push(ObjectKindLoadStack[i]);
		}
	}
	// �����Ѿ���ɵĽڵ�
	for (int i = 0; i < CompleteStack.Num(); ++i)
	{
		ObjectKindLoadStack.Remove(CompleteStack[i]);
		delete CompleteStack[i];
	}
}

void UDDWealth::DealClassSingleLoadStack()
{
	// ���������ɵ�����
	TArray<ClassSingleLoadNode*> CompleteStack;
	for (int i = 0; i < ClassSingleLoadStack.Num(); ++i)
	{
		// �ж��Ƿ��Ѿ��������
		if (ClassSingleLoadStack[i]->WealthHandle->HasLoadCompleted())
		{
			// ���ö�Ӧ����Դ���,�˴�Ҳ����ͨ������ķ�ʽ��ȡ��Դ
			//ClassSingleLoadStack[i]->WealthEntry->WealthClass = ClassSingleLoadStack[i]->WealthEntry->WealthPtr.ToSoftObjectPath().ResolveObject()->GetClass();
			ClassSingleLoadStack[i]->WealthEntry->WealthClass =Cast<UClass>(ClassSingleLoadStack[i]->WealthEntry->WealthPtr.ToSoftObjectPath().ResolveObject());
			//ObjectSingleLoadStack[i]->WealthEntry->WealthObject = ObjectSingleLoadStack[i]->WealthHandle->GetLoadedAsset();
			 
			if (ClassSingleLoadStack[i]->IsLoadClass)
			{
				// ������Դ������
				BackClassWealth(ModuleIndex, ClassSingleLoadStack[i]->ObjectName, ClassSingleLoadStack[i]->FunName, ClassSingleLoadStack[i]->WealthEntry->WealthName, ClassSingleLoadStack[i]->WealthEntry->WealthClass);
			}
			else
			{
				// ���ɲ����ݶ���������
				if (ClassSingleLoadStack[i]->WealthEntry->WealthType == EWealthType::Object)
				{
					UObject* InstObject = NewObject<UObject>(this, ClassSingleLoadStack[i]->WealthEntry->WealthClass);
					InstObject->AddToRoot();
					BackObjectSingle(ModuleIndex, ClassSingleLoadStack[i]->ObjectName, ClassSingleLoadStack[i]->FunName, ClassSingleLoadStack[i]->WealthEntry->WealthName, InstObject);
				}
				else if (ClassSingleLoadStack[i]->WealthEntry->WealthType == EWealthType::Actor)
				{
					AActor* InstActor = GetDDWorld()->SpawnActor<AActor>(ClassSingleLoadStack[i]->WealthEntry->WealthClass, ClassSingleLoadStack[i]->SpawnTransform);
					BackActorSingle(ModuleIndex, ClassSingleLoadStack[i]->ObjectName, ClassSingleLoadStack[i]->FunName, ClassSingleLoadStack[i]->WealthEntry->WealthName, InstActor);
				}
				else if (ClassSingleLoadStack[i]->WealthEntry->WealthType == EWealthType::Widget)
				{
					UUserWidget* InstWidget = CreateWidget<UUserWidget>(GetDDWorld(), ClassSingleLoadStack[i]->WealthEntry->WealthClass);
					// �������
					GCWidgetGroup.Push(InstWidget);
					BackWidgetSingle(ModuleIndex, ClassSingleLoadStack[i]->ObjectName, ClassSingleLoadStack[i]->FunName, ClassSingleLoadStack[i]->WealthEntry->WealthName, InstWidget);
				}
			}

			// ��ӵ��Ѿ���ɵĽڵ�������
			CompleteStack.Push(ClassSingleLoadStack[i]);
		}
	}
	// �����Ѿ���ɵĽڵ�
	for (int i = 0; i < CompleteStack.Num(); ++i)
	{
		ClassSingleLoadStack.Remove(CompleteStack[i]);
		delete CompleteStack[i];
	}
}

void UDDWealth::DealClassKindLoadStack()
{
	// ���������ɵ�����
	TArray<ClassKindLoadNode*> CompleteStack;
	for (int i = 0; i < ClassKindLoadStack.Num(); ++i)
	{
		// �жϵ�һ�μ�����ɣ�WealthHandle�Ѿ�������ɣ�UnloadWealthEntry��������0����С�ڰ�Ӧ�ã�
		if (ClassKindLoadStack[i]->WealthHandle.IsValid() && ClassKindLoadStack[i]->WealthHandle->HasLoadCompleted() && ClassKindLoadStack[i]->UnLoadWealthEntry.Num() > 0)
		{
			// ����Ѿ�������ɣ�����δ�������е���Դָ��
			for (int j = 0;j < ClassKindLoadStack[i]->UnLoadWealthEntry.Num();++j)
				ClassKindLoadStack[i]->UnLoadWealthEntry[j]->WealthClass = Cast<UClass>(ClassKindLoadStack[i]->UnLoadWealthEntry[j]->WealthPtr.ToSoftObjectPath().ResolveObject());
			// ��δ������������е�Ԫ����䵽�Ѽ�����Դ����
			ClassKindLoadStack[i]->LoadWealthEntry.Append(ClassKindLoadStack[i]->UnLoadWealthEntry);
			// ���δ������Դ������
			ClassKindLoadStack[i]->UnLoadWealthEntry.Empty();
		}

		// �ж�δ������Դ�Ƿ�Ϊ0��˵���Ѿ��������
		if (ClassKindLoadStack[i]->UnLoadWealthEntry.Num() == 0)
		{
			// ����UClass����ֱ��������Դ�����������
			if (ClassKindLoadStack[i]->IsLoadClass)
			{
				// ���÷��亯��
				TArray<FName> NameGroup;
				TArray<UClass*> WealthGroup;

				// ����Ѿ����ص���Դ
				for (int j = 0; j < ClassKindLoadStack[i]->LoadWealthEntry.Num(); ++j)
				{
					NameGroup.Push(ClassKindLoadStack[i]->LoadWealthEntry[j]->WealthName);
					WealthGroup.Push(ClassKindLoadStack[i]->LoadWealthEntry[j]->WealthClass);
				}
				// �������ݸ��������
				BackClassWealthKind(ModuleIndex, ClassKindLoadStack[i]->ObjectName, ClassKindLoadStack[i]->FunName, NameGroup, WealthGroup);
				// ��ӵ�ǰ�ڵ㵽���������
				CompleteStack.Push(ClassKindLoadStack[i]);
			}
			else // ���Ҫ���ɶ���
			{
				// ÿ֡���Ѽ��ص�������ȡ��һ��
				FClassWealthEntry* WealthEntry = ClassKindLoadStack[i]->LoadWealthEntry[0];
				// �Ƴ�������
				ClassKindLoadStack[i]->LoadWealthEntry.RemoveAt(0);
				// ������Դ���������ɶ���
								// ���ɲ����ݶ���������
				if (WealthEntry->WealthType == EWealthType::Object)
				{
					UObject* InstObject = NewObject<UObject>(this, WealthEntry->WealthClass);
					InstObject->AddToRoot();
					// ��ӵ���������
					ClassKindLoadStack[i]->NameGroup.Push(WealthEntry->WealthName);
					ClassKindLoadStack[i]->ObjectGroup.Push(InstObject);
					// �ж��Ƿ�������ȫ������
					if (ClassKindLoadStack[i]->LoadWealthEntry.Num() == 0)
					{
						// �������ߴ������ɵĶ���
						BackObjectKind(ModuleIndex, ClassKindLoadStack[i]->ObjectName, ClassKindLoadStack[i]->FunName, ClassKindLoadStack[i]->NameGroup, ClassKindLoadStack[i]->ObjectGroup);
						// ��ӵ��������
						CompleteStack.Push(ClassKindLoadStack[i]);
					}
				}
				else if (WealthEntry->WealthType == EWealthType::Actor)
				{
					// ��ȡ���ɵ�λ��
					FTransform SpawnTransform = ClassKindLoadStack[i]->SpawnTransforms.Num() == 1 ? ClassKindLoadStack[i]->SpawnTransforms[0] : ClassKindLoadStack[i]->SpawnTransforms[ClassKindLoadStack[i]->ActorGroup.Num()];
					AActor* InstActor = GetDDWorld()->SpawnActor<AActor>(WealthEntry->WealthClass, SpawnTransform);
					ClassKindLoadStack[i]->NameGroup.Push(WealthEntry->WealthName);
					ClassKindLoadStack[i]->ActorGroup.Push(InstActor);
					// �ж��Ƿ�������ȫ������
					if (ClassKindLoadStack[i]->LoadWealthEntry.Num() == 0)
					{
						// �������ߴ������ɵĶ���
						BackActorKind(ModuleIndex, ClassKindLoadStack[i]->ObjectName, ClassKindLoadStack[i]->FunName, ClassKindLoadStack[i]->NameGroup, ClassKindLoadStack[i]->ActorGroup);
						// ��ӵ��������
						CompleteStack.Push(ClassKindLoadStack[i]);
					}
				}
				else if (WealthEntry->WealthType == EWealthType::Widget)
				{
					UUserWidget* InstWidget = CreateWidget<UUserWidget>(GetDDWorld(), WealthEntry->WealthClass);
					// �������
					GCWidgetGroup.Push(InstWidget);
					ClassKindLoadStack[i]->NameGroup.Push(WealthEntry->WealthName);
					ClassKindLoadStack[i]->WidgetGroup.Push(InstWidget);
					// �ж��Ƿ�������ȫ������
					if (ClassKindLoadStack[i]->LoadWealthEntry.Num() == 0)
					{
						// �������ߴ������ɵĶ���
						BackWidgetKind(ModuleIndex, ClassKindLoadStack[i]->ObjectName, ClassKindLoadStack[i]->FunName, ClassKindLoadStack[i]->NameGroup, ClassKindLoadStack[i]->WidgetGroup);
						// ��ӵ��������
						CompleteStack.Push(ClassKindLoadStack[i]);
					}
				}
			}
		}
	}
	// �����Ѿ���ɵĽڵ�
	for (int i = 0; i < CompleteStack.Num(); ++i)
	{
		ClassKindLoadStack.Remove(CompleteStack[i]);
		delete CompleteStack[i];
	}
}

void UDDWealth::DealClassMultiLoadStack()
{
	// �����Ѿ���ɵĽڵ�
	TArray<ClassMultiLoadNode*> CompleteStack;
	for (int i = 0;i<ClassMultiLoadStack.Num();++i)
	{
		// ���û�м���UClass,˵�����ؾ����Ч
		if (!ClassMultiLoadStack[i]->WealthEntry->WealthClass)
		{
			// ������ؾ���������
			if (!ClassMultiLoadStack[i]->WealthEntry->WealthClass)
			{
				// ������ؾ�����
				if (ClassMultiLoadStack[i]->WealthHandle->HasLoadCompleted())
					ClassMultiLoadStack[i]->WealthEntry->WealthClass = Cast<UClass>(ClassMultiLoadStack[i]->WealthHandle->GetLoadedAsset());
			}
		}
		// �ٴ��ж�WealthClass�Ƿ���ڣ�������ڽ������ɶ���׶�
		if (ClassMultiLoadStack[i]->WealthEntry->WealthClass)
		{
			// �����������ɶ���
			if (ClassMultiLoadStack[i]->WealthEntry->WealthType == EWealthType::Object)
			{
				UObject* InstObject = NewObject<UObject>(this, ClassMultiLoadStack[i]->WealthEntry->WealthClass);
				InstObject->AddToRoot();
				ClassMultiLoadStack[i]->ObjectGroup.Push(InstObject);
				// ��������������
				if (ClassMultiLoadStack[i]->ObjectGroup.Num() >= ClassMultiLoadStack[i]->Amount)
				{
					// ���ض����������
					BackObjectMulti(ModuleIndex, ClassMultiLoadStack[i]->ObjectName, ClassMultiLoadStack[i]->FunName, ClassMultiLoadStack[i]->WealthEntry->WealthName, ClassMultiLoadStack[i]->ObjectGroup);
					// ��ӵ��������
					CompleteStack.Push(ClassMultiLoadStack[i]);
				}
			}
			else if(ClassMultiLoadStack[i]->WealthEntry->WealthType == EWealthType::Actor)
			{
				// ��ȡ���ɵ�λ��
				FTransform SpawnTransform = ClassMultiLoadStack[i]->SpawnTransforms.Num() == 1 ? ClassMultiLoadStack[i]->SpawnTransforms[0] : ClassMultiLoadStack[i]->SpawnTransforms[ClassMultiLoadStack[i]->ActorGroup.Num()];
				AActor* InstActor = GetDDWorld()->SpawnActor<AActor>(ClassMultiLoadStack[i]->WealthEntry->WealthClass, SpawnTransform);
				ClassMultiLoadStack[i]->ActorGroup.Push(InstActor);
				// �ж��Ƿ�������ȫ������
				if (ClassMultiLoadStack[i]->ActorGroup.Num() == ClassMultiLoadStack[i]->Amount)
				{
					// �������ߴ������ɵĶ���
					BackActorMulti(ModuleIndex, ClassMultiLoadStack[i]->ObjectName, ClassMultiLoadStack[i]->FunName, ClassMultiLoadStack[i]->WealthEntry->WealthName, ClassMultiLoadStack[i]->ActorGroup);
					// ��ӵ��������
					CompleteStack.Push(ClassMultiLoadStack[i]);
				}
			}
			else if (ClassMultiLoadStack[i]->WealthEntry->WealthType == EWealthType::Widget)
			{
				UUserWidget* InstWidget = CreateWidget<UUserWidget>(GetDDWorld(), ClassMultiLoadStack[i]->WealthEntry->WealthClass);
				// �������
				GCWidgetGroup.Push(InstWidget);
				ClassMultiLoadStack[i]->WidgetGroup.Push(InstWidget);
				// �ж��Ƿ�������ȫ������
				if (ClassMultiLoadStack[i]->WidgetGroup.Num() == ClassMultiLoadStack[i]->Amount)
				{
					// �������ߴ������ɵĶ���
					BackWidgetMulti(ModuleIndex, ClassMultiLoadStack[i]->ObjectName, ClassMultiLoadStack[i]->FunName, ClassMultiLoadStack[i]->WealthEntry->WealthName, ClassMultiLoadStack[i]->WidgetGroup);
					// ��ӵ��������
					CompleteStack.Push(ClassMultiLoadStack[i]);
				}
			}
		}
	}
	// �����Ѿ���ɵĽڵ�
	for (int i = 0; i < CompleteStack.Num(); ++i)
	{
		ClassMultiLoadStack.Remove(CompleteStack[i]);
		delete CompleteStack[i];
	}
}
