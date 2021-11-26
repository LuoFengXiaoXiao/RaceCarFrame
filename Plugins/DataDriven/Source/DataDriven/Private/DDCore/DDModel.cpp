// Fill out your copyright notice in the Description page of Project Settings.


#include "DDCore/DDModel.h"
#include "DDObject/DDOO.h"


// ����ģ��

void UDDModel::RegisterObject(IDDOO* ObjectInst)
{
	// ������ظ�����ӵ�ģ�����
	if (!ObjectGroup.Contains(ObjectInst->GetObjectName()))
	{
		// ��ӵ�������
		ObjectGroup.Add(ObjectInst->GetObjectName(),ObjectInst);
		// ��ӵ���������
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

		// ��Ӷ��󵽼�������������
		ObjectActiveGroup.Push(ObjectInst);
	}
	else
	{
		// ���ظ�ע�����Debug
		DDH::Debug()<<"Object Repeated --> "<<ObjectInst->GetObjectName()<<DDH::Endl();
	}
}



void UDDModel::ModelTick(float DeltaSeconds)
{
	// ����Tick����,���ڿ�ͷ��֤�����ɵ���һ֡����Tick����
	for (int i = 0; i < ObjectTickGroup.Num(); ++i)
	{
		ObjectTickGroup[i]->DDTick(DeltaSeconds);
	}
	// ÿ֡�����Ѽ��������������Object��Tick����,DDOO��ActiveLife()����
	// ��ʱ�������ĳ�����ڵĶ���
	TArray<IDDOO*> TempObjectGroup;
	// ѭ�����м����������ں���
	for (int i = 0;i<ObjectActiveGroup.Num();i++)
	{
		// �������ɹ�
		if (ObjectActiveGroup[i]->ActiveLife())
		{
			TempObjectGroup.Push(ObjectActiveGroup[i]);
		}
	}
	// ���������������ڵĶ����Ƴ����������飬���ҽ�����Tick���еĶ�����ӵ�Tick��
	for (int i = 0;i<TempObjectGroup.Num();i++)
	{
		ObjectActiveGroup.Remove(TempObjectGroup[i]);
		if (TempObjectGroup[i]->IsAllowTickEvent)
		{
			ObjectTickGroup.Push(TempObjectGroup[i]);
		}
	}

	// Ϊ�ͷŶ�����ִ���ͷź���������ͷź�����
	for (int i = 0; i < ObjectReleaseGroup.Num(); ++i)
		ObjectReleaseGroup[i]->DDRelease();
	ObjectReleaseGroup.Empty();

	// �����ʱ������
	TempObjectGroup.Empty();
	// �������ٶ�����������������ں���
	for (int i = 0; i < ObjectDestoryGroup.Num(); ++i)
	{
		if (ObjectDestoryGroup[i]->DestroyLife())
		{
			// ��Ӷ����ͷŶ�����
			ObjectReleaseGroup.Push(ObjectDestoryGroup[i]);
			// ��Ӷ�����ʱ��
			TempObjectGroup.Push(ObjectDestoryGroup[i]);
			// ����������ٶ���
			ObjectGroup.Remove(ObjectDestoryGroup[i]->GetObjectName());
			ObjectClassGroup.Find(ObjectDestoryGroup[i]->GetClassName())->Remove(ObjectDestoryGroup[i]);
			if (ObjectClassGroup.Find(ObjectDestoryGroup[i]->GetClassName())->Num() == 0)
			{
				ObjectClassGroup.Remove(ObjectDestoryGroup[i]->GetClassName());
			}
		}
	}

	// �����ٵĶ�������ٶ������Ƴ�
	for (int i = 0; i < TempObjectGroup.Num(); ++i)
		ObjectDestoryGroup.Remove(TempObjectGroup[i]);

	// �����ʱ������
	TempObjectGroup.Empty();
	// ���������ٶ����飬�����������ȶ�״̬����ת����ʱ������
	for (int i = 0;i<PreObjectDestoryGroup.Num();++i)
	{
		if (PreObjectDestoryGroup[i]->RunState == EBaseObjectState::Stable)
		{
			// ����ȶ�����״̬�Ķ�����ʱ������
			TempObjectGroup.Push(PreObjectDestoryGroup[i]);
		}
	}
	// �������ٶ���������ȶ�״̬������ӵ����ٶ�����
	for (int i = 0;i<TempObjectGroup.Num();++i)
	{
		PreObjectDestoryGroup.Remove(TempObjectGroup[i]);
		// ��ӵ����ٶ���
		ObjectDestoryGroup.Push(TempObjectGroup[i]);
		// �Ƴ���֡������
		ObjectTickGroup.Remove(TempObjectGroup[i]);
	}

}

void UDDModel::DestoryObject(FName ObjectName)
{
	// ��ȡ��Ҫ���ٵĶ���
	if (ObjectGroup.Contains(ObjectName))
	{
		IDDOO* TargetObject = *ObjectGroup.Find(ObjectName);
		// ������ٶ������Լ������ٶ����鶼û�иö���
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
	// �����ȡ���Ķ�������
	TArray<IDDOO*> TargetObjectGroup;
	
	// ����Э���ȡ�������������
	GetAgreementObject(Agreement,TargetNameGroup,TargetObjectGroup);

	// �������ٶ���
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
	// �����ȡ���Ķ�������
	TArray<IDDOO*> TargetObjectGroup;

	// ����Э���ȡ�������������
	GetAgreementObject(Agreement, TargetNameGroup, TargetObjectGroup);
	
	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		// �������������ȶ���ʧ��״̬���������ļ���״̬����
		if (TargetObjectGroup[i]->RunState == EBaseObjectState::Stable && TargetObjectGroup[i]->LifeState == EBaseObjectLife::Disable)
		{
			TargetObjectGroup[i]->OnEnable();
		}
	}

}

void UDDModel::DisableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup)
{
	// �����ȡ���Ķ�������
	TArray<IDDOO*> TargetObjectGroup;

	// ����Э���ȡ�������������
	GetAgreementObject(Agreement, TargetNameGroup, TargetObjectGroup);

	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		// �������������ȶ���ʧ��״̬���������ļ���״̬����
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
			// ��������Ƿ���ͬ����ͬ������
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
	// ����ȫ�����������
	return ObjectGroup.Num();
}

int32 UDDModel::GetClassOtherObject(TArray<FName> TargetNameGroup, TArray<IDDOO*>& TargetObjectGroup)
{
	if (!ObjectGroup.Contains(TargetNameGroup[0]))
	{
		return 0;
	}
	// �Ȼ�ȡ��������
	FName ObjectClassName = (*ObjectGroup.Find(TargetNameGroup[0]))->GetClassName();
	// ����������ʵ������
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
	// ���ض���������Ӧ�Ķ����������
	return (*ObjectClassGroup.Find(ObjectClassName)).Num();
}

void UDDModel::GetSelfClass(TArray<FName> TargetNameGroup, TArray<IDDOO*>& TargetObjectGroup)
{
	for (int i = 0; i < TargetNameGroup.Num(); i++)
	{
		// �������������࣬������һ��ѭ��
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

