// Fill out your copyright notice in the Description page of Project Settings.


#include "DDCore/DDModule.h"

#include "DDCore/DDModel.h"
#include "DDCore/DDWealth.h"
#include "DDObject/DDOO.h"
//#include "../../Public/DDCommon/DDCommon.h"

// Sets default values for this component's properties
UDDModule::UDDModule()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


void UDDModule::CreateManager()
{
	// ʵ���������������NewObjectʵ�������ʱ��������������this������༭��������Ϸ�˳�ʱ�����
	Model = NewObject<UDDModel>();
	Message = NewObject<UDDMessage>();
	Wealth = NewObject<UDDWealth>();

	// ���ⱻ��������
	Model->AddToRoot();
	Message->AddToRoot();
	Wealth->AddToRoot();

	//ָ��ģ��
	Model->AssignModule(this);
	Message->AssignModule(this);
	Wealth->AssignModule(this);
}

void UDDModule::ModuleInit()
{
	// ����Init����
	Model->ModelInit();
	Message->MessageInit();
	Wealth->WealthInit();

}

void UDDModule::ModuleBeginPlay()
{
	// ��Wealthָ����Դ
	Wealth->AssignData(WealthData);
	// ����BeginPlay����
	Model->ModelBeginPlay();
	Message->MessageBeginPlay();
	Wealth->WealthBeginPlay();

}

void UDDModule::ModuleTick(float DeltaSeconds)
{
	// ����Tick����
	Model->ModelTick(DeltaSeconds);
	Message->MessageTick(DeltaSeconds);
	Wealth->WealthTick(DeltaSeconds);

}

void UDDModule::ChangeModuleType(FName ModuleType)
{
	ModuleIndex = DDH::GetEnumIndexFromName(ModuleType.ToString(), GetFName());

	if (ModuleIndex < 0) DDH::Debug() << "Generate Module Index Error -->" << GetFName()<<DDH::Endl();
}

void UDDModule::RegisterObject(IDDOO* ObjectInst)
{
	// ע������������
	Model->RegisterObject(ObjectInst);
	// ���Լ�ע�ᵽ����ģ��
	ObjectInst->AssignModule(this);
}

void UDDModule::ChildDestory(FName ObjectName)
{
	Model->DestoryObject(ObjectName);
}

void UDDModule::DestoryObject(EAgreementType Agreement, TArray<FName> TargetNameGroup)
{
	Model->DestoryObject(Agreement,TargetNameGroup);
}

void UDDModule::EnableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup)
{
	Model->EnableObject(Agreement, TargetNameGroup);
}

void UDDModule::DisableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup)
{
	Model->DisableObject(Agreement, TargetNameGroup);
}

void UDDModule::ExecuteFunction(DDModuleAgreement Agreement, DDParam* Param)
{
	// ����ģ���UFUNCTION
	UFunction* ExeFunc = FindFunction(Agreement.FunctionName);

	// ����������ڣ����õ��óɹ�
	if (ExeFunc)
	{
		Param->CallResult = ECallResult::Succeed;
		// ���÷���
		ProcessEvent(ExeFunc,Param->ParamPtr);
	}
	else
	{
		Param->CallResult = ECallResult::NoFunction;
	}
}


void UDDModule::ExecuteFunction(DDObjectAgreement Agreement, DDParam* Param)
{
	// ����ִ�����͵��÷���
	switch (Agreement.AgreementType)
	{
	case EAgreementType::SelfObject:
		ExecuteSelfObject(Agreement, Param);
		break;
	case EAgreementType::OtherObject:
		ExecuteOtherObject(Agreement, Param);
		break;	
	case EAgreementType::SelfClass:
		ExecuteSelfClass(Agreement, Param);
		break;
	case EAgreementType::OtherClass:
		ExecuteOtherClass(Agreement, Param);
		break;	
	case EAgreementType::ClassOtherObject:
		ExecuteClassOtherObject(Agreement, Param);
		break;
	case EAgreementType::All:
		ExcuteAll(Agreement,Param);
		break;
	}
}


bool UDDModule::StartCoroutine(FName ObjectName, FName CoroName, DDCoroTask* CoroTask)
{
	return Message->StartCoroutine(ObjectName, CoroName, CoroTask);
}

bool UDDModule::StopCoroutine(FName ObjectName, FName CoroName)
{
	return Message->StopCoroutine(ObjectName, CoroName);
}

void UDDModule::StopAllCoroutine(FName ObjectName)
{
	Message->StopAllCoroutine(ObjectName);
}

bool UDDModule::StartInvoke(FName ObjectName, FName InvokeName, DDInvokeTask* InvokeTask)
{
	return Message->StartInvoke(ObjectName, InvokeName, InvokeTask);
}

bool UDDModule::StopInvoke(FName ObjectName, FName InvokeName)
{
	return Message->StopInvoke(ObjectName, InvokeName);
}

void UDDModule::StopAllInvoke(FName ObjectName)
{
	Message->StopAllInvoke(ObjectName);
}

void UDDModule::UnBindInput(FName ObjectName)
{
	Message->UnBindInput(ObjectName);
}

FWealthUrl* UDDModule::GainWealthUrl(FName WealthName)
{
	return Wealth->GainWealthUrl(WealthName);
}

void UDDModule::GainWealthUrl(FName WealthKind, TArray<FWealthUrl*>& OutUrl)
{
	Wealth->GainWealthUrl(WealthKind, OutUrl);
}

void UDDModule::LoadObjectWealth(FName WealthName, FName ObjectName, FName FunName)
{
	Wealth->LoadObjectWealth(WealthName, ObjectName, FunName);
}

void UDDModule::LoadObjectWealthKind(FName WealthKind, FName ObjectName, FName FunName)
{
	Wealth->LoadObjectWealthKind(WealthKind, ObjectName, FunName);
}

void UDDModule::LoadClassWealth(FName WealthName, FName ObjectName, FName FunName)
{
	Wealth->LoadClassWealth(WealthName, ObjectName, FunName);
}

void UDDModule::LoadClassWealthKind(FName WealthKind, FName ObjectName, FName FunName)
{
	Wealth->LoadClassWealthKind(WealthKind, ObjectName, FunName);
}

void UDDModule::BuildSingleClassWealth(EWealthType WealthType, FName WealthName, FName ObjectName, FName FunName, FTransform SpawnTransform)
{
	Wealth->BuildSingleClassWealth(WealthType, WealthName, ObjectName, FunName, SpawnTransform);
}

void UDDModule::ExecuteSelfObject(DDObjectAgreement Agreement, DDParam* Param)
{
	// ����洢Ŀ�����
	TArray<IDDOO*> TargetObjectGroup;
	// ������ģ���ȡ������
	Model->GetSelfObject(Agreement.ObjectGroup,TargetObjectGroup);
	// ѭ�����÷����¼�
	for (int i = 0;i<TargetObjectGroup.Num();++i)
	{
		// ��ȡ���䷽��
		UFunction* ExeFunc = TargetObjectGroup[i]->GetObjectBody()->FindFunction(Agreement.FunctionName);
		if (ExeFunc)
		{
			// ������ڣ����õ��óɹ�
			Param->CallResult = ECallResult::Succeed;
			// ִ�з���
			TargetObjectGroup[i]->GetObjectBody()->ProcessEvent(ExeFunc,Param->ParamPtr);
		}
		else
		{
			// ��������ڣ������Ҳ�������
			Param->CallResult = ECallResult::NoFunction;
		}
	}
	// �����Ƿ�ȱʧ���ж������������ȱʧ�����ý��Ϊ����ȱʧ���ý�������ȼ����
	if (TargetObjectGroup.Num() != Agreement.ObjectGroup.Num())
	{
		Param->CallResult = ECallResult::LackObject;
	}

}

void UDDModule::ExecuteOtherObject(DDObjectAgreement Agreement, DDParam* Param)
{
	// ����洢Ŀ�����
	TArray<IDDOO*> TargetObjectGroup;
	// ������ģ���ȡ������
	int32 TotalObjectNum = Model->GetOtherObject(Agreement.ObjectGroup, TargetObjectGroup);
	// ѭ�����÷����¼�
	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		// ��ȡ���䷽��
		UFunction* ExeFunc = TargetObjectGroup[i]->GetObjectBody()->FindFunction(Agreement.FunctionName);
		if (ExeFunc)
		{
			// ������ڣ����õ��óɹ�
			Param->CallResult = ECallResult::Succeed;
			// ִ�з���
			TargetObjectGroup[i]->GetObjectBody()->ProcessEvent(ExeFunc, Param->ParamPtr);
		}
		else
		{
			// ��������ڣ������Ҳ�������
			Param->CallResult = ECallResult::NoFunction;
		}
	}
	// �����Ƿ�ȱʧ���ж������������ȱʧ�����ý��Ϊ����ȱʧ���ý�������ȼ����
	if (TargetObjectGroup.Num()+Agreement.ObjectGroup.Num() != TotalObjectNum)
	{
		Param->CallResult = ECallResult::LackObject;
	}
}

void UDDModule::ExecuteClassOtherObject(DDObjectAgreement Agreement, DDParam* Param)
{
	// ����洢Ŀ�����
	TArray<IDDOO*> TargetObjectGroup;
	// ������ģ���ȡ������
	int32 TotalClassNum = Model->GetClassOtherObject(Agreement.ObjectGroup, TargetObjectGroup);
	// ѭ�����÷����¼�
	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		// ��ȡ���䷽��
		UFunction* ExeFunc = TargetObjectGroup[i]->GetObjectBody()->FindFunction(Agreement.FunctionName);
		if (ExeFunc)
		{
			// ������ڣ����õ��óɹ�
			Param->CallResult = ECallResult::Succeed;
			// ִ�з���
			TargetObjectGroup[i]->GetObjectBody()->ProcessEvent(ExeFunc, Param->ParamPtr);
		}
		else
		{
			// ��������ڣ������Ҳ�������
			Param->CallResult = ECallResult::NoFunction;
		}
	}
	// �����Ƿ�ȱʧ���ж������������ȱʧ�����ý��Ϊ����ȱʧ���ý�������ȼ����
	if (TargetObjectGroup.Num() + Agreement.ObjectGroup.Num() != TotalClassNum)
	{
		Param->CallResult = ECallResult::LackObject;
	}
}

void UDDModule::ExecuteSelfClass(DDObjectAgreement Agreement, DDParam* Param)
{
	// ����洢Ŀ�����
	TArray<IDDOO*> TargetObjectGroup;
	// ������ģ���ȡ������
	Model->GetSelfClass(Agreement.ObjectGroup, TargetObjectGroup);
	// ѭ�����÷����¼�
	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		// ��ȡ���䷽��
		UFunction* ExeFunc = TargetObjectGroup[i]->GetObjectBody()->FindFunction(Agreement.FunctionName);
		if (ExeFunc)
		{
			// ������ڣ����õ��óɹ�
			Param->CallResult = ECallResult::Succeed;
			// ִ�з���
			TargetObjectGroup[i]->GetObjectBody()->ProcessEvent(ExeFunc, Param->ParamPtr);
		}
		else
		{
			// ��������ڣ������Ҳ�������
			Param->CallResult = ECallResult::NoFunction;
		}
	}
	// �����Ƿ�ȱʧ���ж������������ȱʧ�����ý��Ϊ����ȱʧ���ý�������ȼ����
	if (TargetObjectGroup.Num() == 0)
	{
		Param->CallResult = ECallResult::LackObject;
	}
}

void UDDModule::ExecuteOtherClass(DDObjectAgreement Agreement, DDParam* Param)
{
	// ����洢Ŀ�����
	TArray<IDDOO*> TargetObjectGroup;
	// ������ģ���ȡ������
	Model->GetOtherClass(Agreement.ObjectGroup, TargetObjectGroup);
	// ѭ�����÷����¼�
	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		// ��ȡ���䷽��
		UFunction* ExeFunc = TargetObjectGroup[i]->GetObjectBody()->FindFunction(Agreement.FunctionName);
		if (ExeFunc)
		{
			// ������ڣ����õ��óɹ�
			Param->CallResult = ECallResult::Succeed;
			// ִ�з���
			TargetObjectGroup[i]->GetObjectBody()->ProcessEvent(ExeFunc, Param->ParamPtr);
		}
		else
		{
			// ��������ڣ������Ҳ�������
			Param->CallResult = ECallResult::NoFunction;
		}
	}
	// �����Ƿ�ȱʧ���ж������������ȱʧ�����ý��Ϊ����ȱʧ���ý�������ȼ����
	if (TargetObjectGroup.Num() == 0)
	{
		Param->CallResult = ECallResult::LackObject;
	}
}

void UDDModule::ExcuteAll(DDObjectAgreement Agreement, DDParam* Param)
{
	// ����洢Ŀ�����
	TArray<IDDOO*> TargetObjectGroup;
	// ������ģ���ȡ������
	Model->GetAll(TargetObjectGroup);
	// ѭ�����÷����¼�
	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		// ��ȡ���䷽��
		UFunction* ExeFunc = TargetObjectGroup[i]->GetObjectBody()->FindFunction(Agreement.FunctionName);
		if (ExeFunc)
		{
			// ������ڣ����õ��óɹ�
			Param->CallResult = ECallResult::Succeed;
			// ִ�з���
			TargetObjectGroup[i]->GetObjectBody()->ProcessEvent(ExeFunc, Param->ParamPtr);
		}
		else
		{
			// ��������ڣ������Ҳ�������
			Param->CallResult = ECallResult::NoFunction;
		}
	}
	// �����Ƿ�ȱʧ���ж������������ȱʧ�����ý��Ϊ����ȱʧ���ý�������ȼ����
	if (TargetObjectGroup.Num() == 0)
	{
		Param->CallResult = ECallResult::LackObject;
	}
}

//void UDDModule::TestReflect(int32 Counter, FString InfoStr, bool& BackResult)
//{
//	DDH::Debug()<<Counter<<" ; "<<InfoStr<<" ; "<<GetFName()<<DDH::Endl();
//
//	// boolֵ��������ʵ�ַ���ķ���ֵ
//	BackResult = false;
//}
//
//void UDDModule::TestReflectNoParam()
//{
//	DDH::Debug() << "NoParam" << " ; " << GetFName() << DDH::Endl();
//}

