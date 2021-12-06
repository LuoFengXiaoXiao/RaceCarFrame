// Fill out your copyright notice in the Description page of Project Settings.


#include "DDObject/DDOO.h"

// Add default functionality here for any IDDOO functions that are not pure virtual.

void IDDOO::RegisterToModule(FName ModName, FName ObjName /*= FName()*/, FName ClsName /*= FName()*/)
{
	// �ж��Ƿ��Ѿ�ע�ᵽ�����
	if (IDriver && IModule)	return;
	if (ModName.IsNone())	return;

	// ָ��������������
	if(!ObjName.IsNone()) IObjectName = ObjName;
	if(!ClsName.IsNone()) IClassName = ClsName;

	// ��ȡUObject������
	IBody = Cast<UObject>(this);

	// ��ȡ������
	IDriver = UDDCommon::Get()->GetDriver();

	// ע�ᵽģ��
	if (IDriver)
	{
		// �����ȡ��IDΪ����ֱ�ӷ���
		ModuleIndex = DDH::GetEnumIndexFromName(IDriver->ModuleType.ToString(),ModName);
		if (ModuleIndex<0)
		{
			DDH::Debug() << GetObjectName() << "  Get " << ModName << " ModuleIndex Failed!!!" << DDH::Endl();
			return;
		}
		// ���ע�᲻�ɹ�˵����û��ʵ������Ӧ��Module
		if (!IDriver->RegisterToModule(this))
			DDH::Debug()<<GetObjectName()<<" Register To "<<ModName<<" Failed!"<<DDH::Endl();
	}
	else 
		DDH::Debug()<<GetObjectName()<<"  Get DDDriver Failed!!!"<<DDH::Endl();
}

void IDDOO::RegisterToModule(int32 ModIndex, FName ObjName /*= FName()*/, FName ClsName /*= FName()*/)
{
	// �ж��Ƿ��Ѿ�ע�ᵽ�����
	if (IDriver && IModule)	return;

	//if (ModName.IsNone())	return;

	// ָ��������������
	if (!ObjName.IsNone()) IObjectName = ObjName;
	if (!ClsName.IsNone()) IClassName = ClsName;

	// ��ȡUObject������
	IBody = Cast<UObject>(this);

	// ��ȡ������
	IDriver = UDDCommon::Get()->GetDriver();

	// ע�ᵽģ��
	if (IDriver)
	{
		// �����ȡ��IDΪ����ֱ�ӷ���
		ModuleIndex = ModIndex;
		if (ModuleIndex < 0)
		{
			DDH::Debug() << GetObjectName() << "  Get ModIndex " << ModIndex << " ModuleIndex Failed!!!" << DDH::Endl();
			return;
		}
		// ���ע�᲻�ɹ�˵����û��ʵ������Ӧ��Module
		if (!IDriver->RegisterToModule(this))
			DDH::Debug() << GetObjectName() << " Register To ModIndex " << ModIndex << " Failed!" << DDH::Endl();
	}
	else
		DDH::Debug() << GetObjectName() << "  Get DDDriver Failed!!!" << DDH::Endl();
}

FName IDDOO::GetObjectName()
{
	if(!IObjectName.IsNone()) return IObjectName;
	IObjectName = IBody->GetFName();
	return IObjectName;
}

FName IDDOO::GetClassName()
{
	if(!IClassName.IsNone()) return IClassName;
	// �ϵϽ̳�4.20ʱ���ǲ��Եģ�������UE5�����߷��صĶ�������ͬ��
	//IClassName = IBody->StaticClass()->GetFName();
	IClassName = IBody->GetClass()->GetFName();
	return IClassName;
}

int32 IDDOO::GetModuleIndex() const
{
	return ModuleIndex;
}

UObject* IDDOO::GetObjectBody() const
{
	return IBody;
}

UWorld* IDDOO::GetDDWorld() const
{
	if (IDriver)
	{
		return IDriver->GetWorld();
	}
	return NULL;
}

void IDDOO::AssignModule(UDDModule* Mod)
{
	IModule = Mod;
}

bool IDDOO::ActiveLife()
{
	// ͨ��switchʵ��˳������,����֮������м��Ϊһ֡
	switch (LifeState)
	{
	case EBaseObjectLife::None:
		DDInit();
		LifeState = EBaseObjectLife::Init;
		break;
	case EBaseObjectLife::Init:
		DDLoading();
		LifeState = EBaseObjectLife::Loading;
		break;
	case EBaseObjectLife::Loading:
		DDRegister();
		LifeState = EBaseObjectLife::Register;
		break;
	case EBaseObjectLife::Register:
		DDEnable();
		LifeState = EBaseObjectLife::Enable;
		// ��������״̬Ϊ�ȶ�
		RunState = EBaseObjectState::Stable;
		// ����true,ֹͣ���м���״̬����
		return true;
	}
	return false;
}

bool IDDOO::DestroyLife()
{
	switch (LifeState)
	{
	case EBaseObjectLife::Enable:
		DDDisable();
		LifeState = EBaseObjectLife::Disable;
		// ����״̬Ϊ����
		RunState = EBaseObjectState::Destory;
		break;
	case EBaseObjectLife::Disable:
		DDUnRegister();
		LifeState = EBaseObjectLife::UnRegister;
		// ����״̬Ϊ����,��ֹ��Disable״̬�����еĶ���û���޸�RunStateΪ����
		RunState = EBaseObjectState::Destory;
		break;
	case EBaseObjectLife::UnRegister:
		DDunLoading();
		LifeState = EBaseObjectLife::UnLoading;
		// ����true,ֹͣ��������״̬����
		return true;
	}
	return false;
}

void IDDOO::DDInit(){}

void IDDOO::DDLoading(){}

void IDDOO::DDRegister(){}

void IDDOO::DDEnable(){}

void IDDOO::DDTick(float DeltaSeconds){}

void IDDOO::DDDisable(){}

void IDDOO::DDUnRegister(){}

void IDDOO::DDunLoading(){}

void IDDOO::DDRelease()
{
	// ע������Э�̣���ʱ�������¼�
	StopAllCoroutine();
	StopAllInvoke();
	UnBindInput();
}

void IDDOO::OnEnable()
{
	// ����״̬Ϊ����״̬
	LifeState = EBaseObjectLife::Enable;
}

void IDDOO::OnDisable()
{
	// ����״̬Ϊʧ��״̬
	LifeState = EBaseObjectLife::Disable;
}

void IDDOO::DDDestroy()
{
	IModule->ChildDestory(GetObjectName());
}

void IDDOO::ExecuteFunction(DDModuleAgreement Agreement, DDParam* Param)
{
	// �����ж��Ƿ��ǵ���ģ���Լ��ķ���
	if (Agreement.ModuleIndex == ModuleIndex)
	{
		IModule->ExecuteFunction(Agreement,Param);
	}
	// ������Ǿ���ҪDDDriverȥ��������ģ��ķ���
	else
	{
		IDriver->ExecuteFunction(Agreement,Param);
	}
}

void IDDOO::ExecuteFunction(DDObjectAgreement Agreement, DDParam* Param)
{
	// �����ж��Ƿ��ǵ���ģ���Լ��ķ���
	if (Agreement.ModuleIndex == ModuleIndex)
	{
		IModule->ExecuteFunction(Agreement, Param);
	}
	// ������Ǿ���ҪDDDriverȥ��������ģ��ķ���
	else
	{
		IDriver->ExecuteFunction(Agreement, Param);
	}
}

bool IDDOO::StartCoroutine(FName CoroName, DDCoroTask* CoroTask)
{
	return IModule->StartCoroutine(GetObjectName(), CoroName, CoroTask);
}

bool IDDOO::StopCoroutine(FName CoroName)
{
	return IModule->StopCoroutine(GetObjectName(), CoroName);
}

void IDDOO::StopAllCoroutine()
{
	IModule->StopAllCoroutine(GetObjectName());
}

bool IDDOO::StopInvoke(FName InvokeName)
{
	return IModule->StopInvoke(GetObjectName(), InvokeName);
}

void IDDOO::StopAllInvoke()
{
	IModule->StopAllInvoke(GetObjectName());
}

void IDDOO::UnBindInput()
{
	IModule->UnBindInput(GetObjectName());
}

FWealthUrl* IDDOO::GainWealthUrl(FName WealthName)
{
	return IModule->GainWealthUrl(WealthName);
}

void IDDOO::GainWealthUrl(FName WealthKind, TArray<FWealthUrl*>& OutUrl)
{
	IModule->GainWealthUrl(WealthKind, OutUrl);
}

void IDDOO::LoadObjectWealth(FName WealthName, FName FunName)
{
	IModule->LoadObjectWealth(WealthName, GetObjectName(), FunName);
}

void IDDOO::LoadObjectWealthKind(FName WealthKind, FName FunName)
{
	IModule->LoadObjectWealthKind(WealthKind, GetObjectName(), FunName);
}
