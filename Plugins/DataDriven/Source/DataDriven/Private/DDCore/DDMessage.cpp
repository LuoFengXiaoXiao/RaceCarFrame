// Fill out your copyright notice in the Description page of Project Settings.


#include "DDCore/DDMessage.h"

UDDInputBinder::UDDInputBinder()
{
	InputCount = 0;
	bExecuteWhenPause = false;
}

void UDDInputBinder::PressEvent()
{
	InputCount++;
	// 如果CurrentCount与InputCount相等，说明所有按键都按下了
	if (InputCount == TotalCount)
	{
		// 如果允许在暂停时执行
		if (bExecuteWhenPause)
			InputDele.ExecuteIfBound();
		else if (!bExecuteWhenPause && !UDDCommon::Get()->IsPauseGame())
			InputDele.ExecuteIfBound();
	}
}

void UDDInputBinder::ReleaseEvent()
{
	InputCount--;
}


UDDMessage::UDDMessage()
{
	MsgQuene = new DDMsgQuene();
}

// 消息模组

void UDDMessage::MessageInit()
{

}


void UDDMessage::MessageBeginPlay()
{
	// 从UDDCommon获取PlayerController
	PlayerController = UDDCommon::Get()->GetController();
}

void UDDMessage::MessageTick(float DeltaSeconds)
{
	// 处理协程
	TArray<FName> CompleteTask;
	for (TMap<FName,TMap<FName,DDCoroTask*>>::TIterator It(CoroStack);It;++It)
	{
		TArray<FName> CompleteNode;
		for (TMap<FName, DDCoroTask*>::TIterator Ih(It->Value);Ih;++Ih)
		{
			Ih->Value->Work(DeltaSeconds);
			if (Ih->Value->IsFinish() || Ih->Value->IsDestory)
			{
				delete Ih->Value;
				CompleteNode.Push(Ih->Key);
			}
		}
		for (int i = 0; i < CompleteNode.Num(); ++i)
			It->Value.Remove(CompleteNode[i]);
		if (It->Value.Num() == 0)
			CompleteTask.Push(It->Key);
	}
	for (int i = 0; i < CompleteTask.Num(); ++i)
		CoroStack.Remove(CompleteTask[i]);

	// 处理延时
	CompleteTask.Empty();
	for (TMap<FName, TMap<FName, DDInvokeTask*>>::TIterator It(InvokeStack); It; ++It)
	{
		TArray<FName> CompleteNode;
		for (TMap<FName, DDInvokeTask*>::TIterator Ih(It->Value); Ih; ++Ih)
		{
			if (Ih->Value->UpdateOperate(DeltaSeconds) || Ih->Value->IsDestory)
			{
				delete Ih->Value;
				CompleteNode.Push(Ih->Key);
			}
		}
		for (int i = 0; i < CompleteNode.Num(); ++i)
			It->Value.Remove(CompleteNode[i]);
		if (It->Value.Num() == 0)
			CompleteTask.Push(It->Key);
	}
	for (int i = 0; i < CompleteTask.Num(); ++i)
		InvokeStack.Remove(CompleteTask[i]);
}

bool UDDMessage::StartCoroutine(FName ObjectName, FName CoroName, DDCoroTask* CoroTask)
{
	if (!CoroStack.Contains(ObjectName))
	{
		TMap<FName, DDCoroTask*> NewTaskStack;
		CoroStack.Add(ObjectName,NewTaskStack);
	}
	if (!(CoroStack.Find(ObjectName)->Contains(CoroName)))
	{
		CoroStack.Find(ObjectName)->Add(CoroName, CoroTask);
		return true;
	}
	delete CoroTask;
	return false;
}

bool UDDMessage::StopCoroutine(FName ObjectName, FName CoroName)
{
	if (CoroStack.Contains(ObjectName) && CoroStack.Find(ObjectName)->Find(CoroName))
	{
		//DDCoroTask* CoroTask = *(CoroStack.Find(ObjectName)->Find(CoroName));
		//CoroStack.Find(ObjectName)->Remove(CoroName);
		//if (CoroStack.Find(ObjectName)->Num() == 0)
		//	CoroStack.Remove(ObjectName);
		//delete CoroTask;
		(*(CoroStack.Find(ObjectName)->Find(CoroName)))->IsDestory = true;
		return true;
	}
	return false;
}

void UDDMessage::StopAllCoroutine(FName ObjectName)
{
	if (CoroStack.Contains(ObjectName))
		for (TMap<FName, DDCoroTask*>::TIterator It(*CoroStack.Find(ObjectName)); It;++It)
			It->Value->IsDestory = true;
}

bool UDDMessage::StartInvoke(FName ObjectName, FName InvokeName, DDInvokeTask* InvokeTask)
{
	if (!InvokeStack.Contains(ObjectName))
	{
		TMap<FName, DDInvokeTask*> NewTaskStack;
		InvokeStack.Add(ObjectName, NewTaskStack);
	}
	if (!(InvokeStack.Find(ObjectName)->Contains(InvokeName)))
	{
		InvokeStack.Find(ObjectName)->Add(InvokeName, InvokeTask);
		return true;
	}
	delete InvokeTask;
	return false;
}

bool UDDMessage::StopInvoke(FName ObjectName, FName InvokeName)
{
	if (InvokeStack.Contains(ObjectName) && InvokeStack.Find(ObjectName)->Find(InvokeName))
	{
		(*(InvokeStack.Find(ObjectName)->Find(InvokeName)))->IsDestory = true;
		return true;
	}
	return false;
}

void UDDMessage::StopAllInvoke(FName ObjectName)
{
	if (InvokeStack.Contains(ObjectName))
		for (TMap<FName, DDInvokeTask*>::TIterator It(*InvokeStack.Find(ObjectName)); It; ++It)
			It->Value->IsDestory = true;
}

void UDDMessage::UnBindInput(FName ObjectName)
{
	if (!BinderGroup.Contains(ObjectName))
		return;
	TArray<UDDInputBinder*> BinderList = *BinderGroup.Find(ObjectName);
	for (int i = 0;i<BinderList.Num();++i)
	{
		BinderList[i]->RemoveFromRoot();
		BinderList[i]->ConditionalBeginDestroy();
	}
	BinderGroup.Remove(ObjectName);
}

