// Fill out your copyright notice in the Description page of Project Settings.


#include "DDCore/DDModel.h"
#include "DDObject/DDOO.h"


// 数据模组

void UDDModel::RegisterObject(IDDOO* ObjectInst)
{
	// 如果不重复就添加到模组对象
	if (!ObjectGroup.Contains(ObjectInst->GetObjectName()))
	{
		// 添加到对象组
		ObjectGroup.Add(ObjectInst->GetObjectName(),ObjectInst);
		// 添加到对象类组
		FName ObjectClassName = ObjectInst->GetClassName();
		if (ObjectClassGroup.Contains(ObjectClassName))
		{
			ObjectClassGroup.Find(ObjectClassName)->Push(ObjectInst);
		}
		else
		{
			TArray<IDDOO*> ObjectArray;
			ObjectClassGroup.Add(ObjectClassName,ObjectArray);
			ObjectClassGroup.Find(ObjectClassName)->Push(ObjectInst);
		}

		// 添加对象到激活生命周期组
		ObjectActiveGroup.Push(ObjectInst);
	}
	else
	{
		// 有重复注册进行Debug
		DDH::Debug()<<"Object Repeated --> "<<ObjectInst->GetObjectName()<<DDH::Endl();
	}
}



void UDDModel::ModelTick(float DeltaSeconds)
{
	// 运行Tick函数,放在开头保证添加完成的下一帧运行Tick函数
	for (int i = 0; i < ObjectTickGroup.Num(); ++i)
	{
		ObjectTickGroup[i]->DDTick(DeltaSeconds);
	}
	// 每帧运行已激活生命周期组的Object的Tick函数,DDOO的ActiveLife()函数
	// 临时保存完成某个周期的对象
	TArray<IDDOO*> TempObjectGroup;
	// 循环运行激活生命周期函数
	for (int i = 0;i<ObjectActiveGroup.Num();i++)
	{
		// 如果激活成功
		if (ObjectActiveGroup[i]->ActiveLife())
		{
			TempObjectGroup.Push(ObjectActiveGroup[i]);
		}
	}
	// 将运行完生命周期的对象移出生命周期组，并且将运行Tick运行的对象添加到Tick组
	for (int i = 0;i<TempObjectGroup.Num();i++)
	{
		ObjectActiveGroup.Remove(TempObjectGroup[i]);
		if (TempObjectGroup[i]->IsAllowTickEvent)
		{
			ObjectTickGroup.Push(TempObjectGroup[i]);
		}
	}

	// 为释放对象组执行释放函数，清空释放函数组
	for (int i = 0; i < ObjectReleaseGroup.Num(); ++i)
		ObjectReleaseGroup[i]->DDRelease();
	ObjectReleaseGroup.Empty();

	// 清空临时对象组
	TempObjectGroup.Empty();
	// 运行销毁对象组的销毁生命周期函数
	for (int i = 0; i < ObjectDestoryGroup.Num(); ++i)
	{
		if (ObjectDestoryGroup[i]->DestroyLife())
		{
			// 添加对象到释放对象组
			ObjectReleaseGroup.Push(ObjectDestoryGroup[i]);
			// 添加对象到临时组
			TempObjectGroup.Push(ObjectDestoryGroup[i]);
			// 清除掉该销毁对象
			ObjectGroup.Remove(ObjectDestoryGroup[i]->GetObjectName());
			ObjectClassGroup.Find(ObjectDestoryGroup[i]->GetClassName())->Remove(ObjectDestoryGroup[i]);
			if (ObjectClassGroup.Find(ObjectDestoryGroup[i]->GetClassName())->Num() == 0)
			{
				ObjectClassGroup.Remove(ObjectDestoryGroup[i]->GetClassName());
			}
		}
	}

	// 把销毁的对象从销毁对象组移除
	for (int i = 0; i < TempObjectGroup.Num(); ++i)
		ObjectDestoryGroup.Remove(TempObjectGroup[i]);

	// 清空临时对象组
	TempObjectGroup.Empty();
	// 处理欲销毁对象组，如果对象进入稳定状态，就转到临时对象组
	for (int i = 0;i<PreObjectDestoryGroup.Num();++i)
	{
		if (PreObjectDestoryGroup[i]->RunState == EBaseObjectState::Stable)
		{
			// 添加稳定运行状态的对象到临时对象组
			TempObjectGroup.Push(PreObjectDestoryGroup[i]);
		}
	}
	// 从欲销毁对象中清除稳定状态对象，添加到销毁对象组
	for (int i = 0;i<TempObjectGroup.Num();++i)
	{
		PreObjectDestoryGroup.Remove(TempObjectGroup[i]);
		// 添加到销毁对象
		ObjectDestoryGroup.Push(TempObjectGroup[i]);
		// 移除出帧函数组
		ObjectTickGroup.Remove(TempObjectGroup[i]);
	}

}

void UDDModel::DestoryObject(FName ObjectName)
{
	// 获取需要销毁的对象
	if (ObjectGroup.Contains(ObjectName))
	{
		IDDOO* TargetObject = *ObjectGroup.Find(ObjectName);
		// 如果销毁对象组以及欲销毁对象组都没有该对象
		if (!ObjectDestoryGroup.Contains(TargetObject) && !PreObjectDestoryGroup.Contains(TargetObject))
		{
			switch (TargetObject->RunState)
			{
			case EBaseObjectState::Active:
				PreObjectDestoryGroup.Push(TargetObject);
				break;
			case EBaseObjectState::Stable:
				ObjectDestoryGroup.Push(TargetObject);
				ObjectTickGroup.Remove(TargetObject);
				break;
			}
		}
	}
}



void UDDModel::DestoryObject(EAgreementType Agreement, TArray<FName> TargetNameGroup)
{
	// 定义获取到的对象数组
	TArray<IDDOO*> TargetObjectGroup;
	
	// 根据协议获取符合需求的数组
	GetAgreementObject(Agreement,TargetNameGroup,TargetObjectGroup);

	// 批量销毁对象
	for (int i = 0;i<TargetObjectGroup.Num();++i)
	{
		if (!ObjectDestoryGroup.Contains(TargetObjectGroup[i]) && !PreObjectDestoryGroup.Contains(TargetObjectGroup[i]))
		{
			switch (TargetObjectGroup[i]->RunState)
			{
			case EBaseObjectState::Active:
				PreObjectDestoryGroup.Push(TargetObjectGroup[i]);
				break;
			case EBaseObjectState::Stable:
				ObjectDestoryGroup.Push(TargetObjectGroup[i]);
				ObjectTickGroup.Remove(TargetObjectGroup[i]);
				break;
			}
		}
	}
}

void UDDModel::EnableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup)
{
	// 定义获取到的对象数组
	TArray<IDDOO*> TargetObjectGroup;

	// 根据协议获取符合需求的数组
	GetAgreementObject(Agreement, TargetNameGroup, TargetObjectGroup);
	
	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		// 如果这个对象处于稳定与失活状态就运行他的激活状态函数
		if (TargetObjectGroup[i]->RunState == EBaseObjectState::Stable && TargetObjectGroup[i]->LifeState == EBaseObjectLife::Disable)
		{
			TargetObjectGroup[i]->OnEnable();
		}
	}

}

void UDDModel::DisableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup)
{
	// 定义获取到的对象数组
	TArray<IDDOO*> TargetObjectGroup;

	// 根据协议获取符合需求的数组
	GetAgreementObject(Agreement, TargetNameGroup, TargetObjectGroup);

	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		// 如果这个对象处于稳定与失活状态就运行他的激活状态函数
		if (TargetObjectGroup[i]->RunState == EBaseObjectState::Stable && TargetObjectGroup[i]->LifeState == EBaseObjectLife::Enable)
		{
			TargetObjectGroup[i]->OnDisable();
		}
	}
}

void UDDModel::GetSelfObject(TArray<FName> TargetNameGroup, TArray<IDDOO*>& TargetObjectGroup)
{
	for (int i = 0;i<TargetNameGroup.Num();++i)
	{
		if (ObjectGroup.Contains(TargetNameGroup[i]))
		{
			TargetObjectGroup.Push(*ObjectGroup.Find(TargetNameGroup[i]));
		}
	}
}

int32 UDDModel::GetOtherObject(TArray<FName> TargetNameGroup, TArray<IDDOO*>& TargetObjectGroup)
{
	for (TMap<FName,IDDOO*>::TIterator It(ObjectGroup);It;++It)
	{
		bool IsSame = false;
		for (int i = 0;i<TargetNameGroup.Num();++i)
		{
			// 监测名字是否相同，相同就跳出
			if (TargetNameGroup[i].IsEqual(It->Key))
			{
				IsSame = true;
				break;
			}
		}
		if (!IsSame)
		{
			TargetObjectGroup.Push(It->Value);
		}
	}
	// 返回全部对象的数量
	return ObjectGroup.Num();
}

int32 UDDModel::GetClassOtherObject(TArray<FName> TargetNameGroup, TArray<IDDOO*>& TargetObjectGroup)
{
	if (!ObjectGroup.Contains(TargetNameGroup[0]))
	{
		return 0;
	}
	// 先获取对象类名
	FName ObjectClassName = (*ObjectGroup.Find(TargetNameGroup[0]))->GetClassName();
	// 迭代对象类实例数组
	for (TArray<IDDOO*>::TIterator It(*ObjectClassGroup.Find(ObjectClassName));It;++It)
	{
		bool IsSame = false;
		for (int i = 0;i<TargetNameGroup.Num();++i)
		{
			if ((*It)->GetObjectName().IsEqual(TargetNameGroup[i]))
			{
				IsSame = true;
				break;
			}
		}
		if (!IsSame)
		{
			TargetObjectGroup.Push(*It);
		}
	}
	// 返回对象类名对应的对象组的数量
	return (*ObjectClassGroup.Find(ObjectClassName)).Num();
}

void UDDModel::GetSelfClass(TArray<FName> TargetNameGroup, TArray<IDDOO*>& TargetObjectGroup)
{
	for (int i = 0; i < TargetNameGroup.Num(); i++)
	{
		// 如果不包含这个类，跳到下一个循环
		if (!ObjectClassGroup.Contains(TargetNameGroup[i]))
		{
			continue;
		}
		TargetObjectGroup.Append(*ObjectClassGroup.Find(TargetNameGroup[i]));
	}
}

void UDDModel::GetOtherClass(TArray<FName> TargetNameGroup, TArray<IDDOO*>& TargetObjectGroup)
{
	for (TMap<FName,TArray<IDDOO*>>::TIterator It(ObjectClassGroup);It;++It)
	{
		if (!TargetNameGroup.Contains(It->Key))
		{
			TargetObjectGroup.Append(It->Value);
		}
	}
}

void UDDModel::GetAll(TArray<IDDOO*>& TargetObjectGroup)
{
	ObjectGroup.GenerateValueArray(TargetObjectGroup);
}

void UDDModel::GetAgreementObject(EAgreementType Agreement, TArray<FName> TargetNameGroup, TArray<IDDOO*>& TargetObjectGroup)
{
	switch (Agreement)
	{
	case EAgreementType::SelfObject:
		GetSelfObject(TargetNameGroup,TargetObjectGroup);
		break;
	case EAgreementType::OtherObject:
		GetOtherObject(TargetNameGroup,TargetObjectGroup);
		break;
	case EAgreementType::ClassOtherObject:
		GetClassOtherObject(TargetNameGroup,TargetObjectGroup);
		break;
	case EAgreementType::SelfClass:
		GetSelfClass(TargetNameGroup,TargetObjectGroup);
		break;
	case EAgreementType::OtherClass:
		GetOtherClass(TargetNameGroup,TargetObjectGroup);
		break;
	case EAgreementType::All:
		GetAll(TargetObjectGroup);
		break;
	}
}

