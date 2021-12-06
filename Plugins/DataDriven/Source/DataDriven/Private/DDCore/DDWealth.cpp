// Fill out your copyright notice in the Description page of Project Settings.


#include "DDCore/DDWealth.h"
#include "DDObject/DDOO.h"
#include "DDCore/DDMM.h"
#include <Blueprint/UserWidget.h>
#include "DDObject/DDPawn.h"

// 资源模块

struct ObjectSingleLoadNode
{
	// 加载句柄
	TSharedPtr<FStreamableHandle> WealthHandle;
	// 资源结构体
	FObjectWealthEntry* WealthEntry;
	// 请求对象名
	FName ObjectName;
	// 回调方法名
	FName FunName;
	// 构造函数
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
	// 加载句柄
	TSharedPtr<FStreamableHandle> WealthHandle;
	// 没有加载的资源
	TArray<FObjectWealthEntry*> UnLoadWealthEntry;
	// 已经加载的资源
	TArray<FObjectWealthEntry*> LoadWealthEntry;
	// 请求对象名
	FName ObjectName;
	// 回调方法名
	FName FunName;
	// 构造函数
	ObjectKindLoadNode(TSharedPtr<FStreamableHandle> InWealthHandle, TArray<FObjectWealthEntry*>& InUnLoadWealthEntry, TArray<FObjectWealthEntry*>& InLoadWealthEntry, FName InObjectName, FName InFunName)
	{
		WealthHandle = InWealthHandle;
		UnLoadWealthEntry = InUnLoadWealthEntry;
		LoadWealthEntry = InLoadWealthEntry;
		ObjectName = InObjectName;
		FunName = InFunName;
	}
};

void UDDWealth::WealthBeginPlay()
{
	// 遍历自动生成对象
	for (int i = 0;i<WealthData.Num();++i)
	{
		// 生成Object对象
		for (int j =0;j<WealthData[i]->AutoObjectData.Num();++j)
		{
			// 根据获取到的UClass生成指定的对象
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
		// 生成AActor对象,注意生成Actor的限制，普通模式是有碰撞检测的，如果位置不够则会生成失败
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
		// 生成Widget对象
		for (int j = 0; j < WealthData[i]->AutoWidgetData.Num(); ++j)
		{
			UUserWidget* NewWidget = CreateWidget(GetDDWorld(), WealthData[i]->AutoWidgetData[j].WealthClass);
			// 避免回收
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
	DealObjectKindLoadStack();
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
	// 获取资源结构体
	FObjectWealthEntry* WealthEntry = GetObjectSingleEntry(WealthName);
	if (!WealthEntry)
	{
		DDH::Debug() << ObjectName << " Get Null Wealth: " << WealthName << DDH::Endl();
		return;
	}
	// 如果资源不可用
	if (!WealthEntry->WealthPath.IsValid())
	{
		DDH::Debug() << ObjectName << " Get UnValid Wealth: " << WealthName << DDH::Endl();
		return;
	}
	// 如果资源已经加载--此处有bug，切换了资源之后，还是会读取以前的图片，未清理内存
	// 直接异步加载会修复该bug，但是会影像性能，想办法判断path是否是正确的即可
	if (WealthEntry->WealthObject)
	{
		// 直接返回已经存在的资源给对象
		DDH::Debug() << "Current Object:" << WealthEntry->WealthObject->GetFName() << DDH::Endl();
		BackObjectWealth(ModuleIndex, ObjectName, FunName, WealthName, WealthEntry->WealthObject);
	}
	else
	{
		// 进行异步加载
		TSharedPtr<FStreamableHandle> WealthHandle = WealthLoader.RequestAsyncLoad(WealthEntry->WealthPath);
		// 添加新节点到加载序列
		ObjectSingleLoadStack.Push(new ObjectSingleLoadNode(WealthHandle,WealthEntry,ObjectName,FunName));
		DDH::Debug() << "New Object:" << WealthEntry->WealthObject->GetFName() << DDH::Endl();
	}

	//// 进行异步加载
	//TSharedPtr<FStreamableHandle> WealthHandle = WealthLoader.RequestAsyncLoad(WealthEntry->WealthPath);
	//// 添加新节点到加载序列
	//ObjectSingleLoadStack.Push(new ObjectSingleLoadNode(WealthHandle, WealthEntry, ObjectName, FunName));
}

void UDDWealth::LoadObjectWealthKind(FName WealthKind, FName ObjectName, FName FunName)
{
	TArray<FObjectWealthEntry*> WealthEntryGroup = GetObjectKindEntry(WealthKind);
	// 如果数量为0
	if (WealthEntryGroup.Num() == 0)
	{
		DDH::Debug() << ObjectName << " Get Null Wealth: " << WealthKind << DDH::Endl();
		return;
	}
	// 判断资源可用性
	for (int i = 0;i < WealthEntryGroup.Num();++i)
	{
		if (!WealthEntryGroup[i]->WealthPath.IsValid())
		{
			DDH::Debug() << ObjectName << " Get Not Valid in kind: " << WealthKind << " For Name : " << WealthEntryGroup[i]->WealthName <<DDH::Endl();
			return;
		}
	}
	// 还没有加载的资源
	TArray<FObjectWealthEntry*> UnLoadWealthEntry;
	// 已经加载的资源
	TArray<FObjectWealthEntry*> LoadWealthEntry;
	// 资源加载与否归类
	for (int i = 0;i < WealthEntryGroup.Num();++i)
	{
		if (WealthEntryGroup[i]->WealthObject)
			LoadWealthEntry.Push(WealthEntryGroup[i]);
		else
			UnLoadWealthEntry.Push(WealthEntryGroup[i]);
	}
	// 如果未加载的资源为0
	if (UnLoadWealthEntry.Num() == 0)
	{
		// 直接获取所有资源给请求对象
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
		// 获取资源路径
		TArray<FSoftObjectPath> WealthPaths;
		for (int i = 0; i < UnLoadWealthEntry.Num(); ++i)
			WealthPaths.Push(UnLoadWealthEntry[i]->WealthPath);
		// 进行异步加载获取句柄
		TSharedPtr<FStreamableHandle> WealthHandle = WealthLoader.RequestAsyncLoad(WealthPaths);
		// 添加新节点到加载序列
		ObjectKindLoadStack.Push(new ObjectKindLoadNode(WealthHandle,UnLoadWealthEntry,LoadWealthEntry,ObjectName,FunName));
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

void UDDWealth::DealObjectSingleLoadStack()
{
	// 定义加载完成的序列
	TArray<ObjectSingleLoadNode*> CompleteStack;
	for (int i = 0; i < ObjectSingleLoadStack.Num();++i)
	{
		// 判断是否已经加载完成
		if (ObjectSingleLoadStack[i]->WealthHandle->HasLoadCompleted())
		{
			// 设置对应的资源完成,此处也可以通过句柄的方式获取资源
			ObjectSingleLoadStack[i]->WealthEntry->WealthObject = ObjectSingleLoadStack[i]->WealthEntry->WealthPath.ResolveObject();
			//ObjectSingleLoadStack[i]->WealthEntry->WealthObject = ObjectSingleLoadStack[i]->WealthHandle->GetLoadedAsset();
			// 返回资源给对象
			BackObjectWealth(ModuleIndex, ObjectSingleLoadStack[i]->ObjectName, ObjectSingleLoadStack[i]->FunName, ObjectSingleLoadStack[i]->WealthEntry->WealthName, ObjectSingleLoadStack[i]->WealthEntry->WealthObject);
			// 添加到已经完成的节点序列中
			CompleteStack.Push(ObjectSingleLoadStack[i]);
		}
	}
	// 销毁已经完成的节点
	for (int i = 0; i < CompleteStack.Num(); ++i)
	{
		ObjectSingleLoadStack.Remove(CompleteStack[i]);
		delete CompleteStack[i];
	}
}

void UDDWealth::DealObjectKindLoadStack()
{
	// 定义加载完成的序列
	TArray<ObjectKindLoadNode*> CompleteStack;
	for (int i = 0;i < ObjectKindLoadStack.Num();++i)
	{
		// 判断是否已经加载完成
		if (ObjectKindLoadStack[i]->WealthHandle->HasLoadCompleted())
		{
			// 返回资源参数
			TArray<FName> NameGroup;
			TArray<UObject*> WealthGroup;
			// 填充已经加载的资源
			for (int j = 0; j < ObjectKindLoadStack[i]->LoadWealthEntry.Num(); ++j)
			{
				NameGroup.Push(ObjectKindLoadStack[i]->LoadWealthEntry[j]->WealthName);
				WealthGroup.Push(ObjectKindLoadStack[i]->LoadWealthEntry[j]->WealthObject);
			}
			// 遍历设置所有未加载资源结构体为已加载状态
			for (int j = 0;j < ObjectKindLoadStack[i]->UnLoadWealthEntry.Num();++j)
			{
				ObjectKindLoadStack[i]->UnLoadWealthEntry[j]->WealthObject = ObjectKindLoadStack[i]->UnLoadWealthEntry[j]->WealthPath.ResolveObject();
				// 填充未加载的资源
				NameGroup.Push(ObjectKindLoadStack[i]->UnLoadWealthEntry[j]->WealthName);
				WealthGroup.Push(ObjectKindLoadStack[i]->UnLoadWealthEntry[j]->WealthObject);
			}
			// 返回数据给请求对象
			BackObjectWealthKind(ModuleIndex, ObjectKindLoadStack[i]->ObjectName, ObjectKindLoadStack[i]->FunName, NameGroup, WealthGroup);
			// 添加当前节点到已完成序列
			CompleteStack.Push(ObjectKindLoadStack[i]);
		}
	}
	// 销毁已经完成的节点
	for (int i = 0; i < CompleteStack.Num(); ++i)
	{
		ObjectKindLoadStack.Remove(CompleteStack[i]);
		delete CompleteStack[i];
	}
}
