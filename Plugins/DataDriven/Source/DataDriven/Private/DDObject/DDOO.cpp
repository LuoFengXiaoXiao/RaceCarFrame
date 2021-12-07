// Fill out your copyright notice in the Description page of Project Settings.


#include "DDObject/DDOO.h"

// Add default functionality here for any IDDOO functions that are not pure virtual.

void IDDOO::RegisterToModule(FName ModName, FName ObjName /*= FName()*/, FName ClsName /*= FName()*/)
{
	// 判断是否已经注册到框架了
	if (IDriver && IModule)	return;
	if (ModName.IsNone())	return;

	// 指定对象名和类名
	if(!ObjName.IsNone()) IObjectName = ObjName;
	if(!ClsName.IsNone()) IClassName = ClsName;

	// 获取UObject的主体
	IBody = Cast<UObject>(this);

	// 获取驱动器
	IDriver = UDDCommon::Get()->GetDriver();

	// 注册到模组
	if (IDriver)
	{
		// 如果获取的ID为负则直接返回
		ModuleIndex = DDH::GetEnumIndexFromName(IDriver->ModuleType.ToString(),ModName);
		if (ModuleIndex<0)
		{
			DDH::Debug() << GetObjectName() << "  Get " << ModName << " ModuleIndex Failed!!!" << DDH::Endl();
			return;
		}
		// 如果注册不成功说明还没有实例化对应的Module
		if (!IDriver->RegisterToModule(this))
			DDH::Debug()<<GetObjectName()<<" Register To "<<ModName<<" Failed!"<<DDH::Endl();
	}
	else 
		DDH::Debug()<<GetObjectName()<<"  Get DDDriver Failed!!!"<<DDH::Endl();
}

void IDDOO::RegisterToModule(int32 ModIndex, FName ObjName /*= FName()*/, FName ClsName /*= FName()*/)
{
	// 判断是否已经注册到框架了
	if (IDriver && IModule)	return;

	//if (ModName.IsNone())	return;

	// 指定对象名和类名
	if (!ObjName.IsNone()) IObjectName = ObjName;
	if (!ClsName.IsNone()) IClassName = ClsName;

	// 获取UObject的主体
	IBody = Cast<UObject>(this);

	// 获取驱动器
	IDriver = UDDCommon::Get()->GetDriver();

	// 注册到模组
	if (IDriver)
	{
		// 如果获取的ID为负则直接返回
		ModuleIndex = ModIndex;
		if (ModuleIndex < 0)
		{
			DDH::Debug() << GetObjectName() << "  Get ModIndex " << ModIndex << " ModuleIndex Failed!!!" << DDH::Endl();
			return;
		}
		// 如果注册不成功说明还没有实例化对应的Module
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
	// 迪迪教程4.20时候是不对的，但是在UE5中两者返回的东西是相同的
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
	// 通过switch实现顺序运行,函数之间的运行间隔为一帧
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
		// 设置运行状态为稳定
		RunState = EBaseObjectState::Stable;
		// 返回true,停止运行激活状态函数
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
		// 设置状态为销毁
		RunState = EBaseObjectState::Destory;
		break;
	case EBaseObjectLife::Disable:
		DDUnRegister();
		LifeState = EBaseObjectLife::UnRegister;
		// 设置状态为销毁,防止从Disable状态下运行的对象没有修改RunState为销毁
		RunState = EBaseObjectState::Destory;
		break;
	case EBaseObjectLife::UnRegister:
		DDunLoading();
		LifeState = EBaseObjectLife::UnLoading;
		// 返回true,停止运行销毁状态函数
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
	// 注销所有协程，延时及按键事件
	StopAllCoroutine();
	StopAllInvoke();
	UnBindInput();
}

void IDDOO::OnEnable()
{
	// 设置状态为激活状态
	LifeState = EBaseObjectLife::Enable;
}

void IDDOO::OnDisable()
{
	// 设置状态为失活状态
	LifeState = EBaseObjectLife::Disable;
}

void IDDOO::DDDestroy()
{
	IModule->ChildDestory(GetObjectName());
}

void IDDOO::ExecuteFunction(DDModuleAgreement Agreement, DDParam* Param)
{
	// 首先判断是否是调用模组自己的方法
	if (Agreement.ModuleIndex == ModuleIndex)
	{
		IModule->ExecuteFunction(Agreement,Param);
	}
	// 如果不是就需要DDDriver去调用其他模组的方法
	else
	{
		IDriver->ExecuteFunction(Agreement,Param);
	}
}

void IDDOO::ExecuteFunction(DDObjectAgreement Agreement, DDParam* Param)
{
	// 首先判断是否是调用模组自己的方法
	if (Agreement.ModuleIndex == ModuleIndex)
	{
		IModule->ExecuteFunction(Agreement, Param);
	}
	// 如果不是就需要DDDriver去调用其他模组的方法
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

void IDDOO::LoadClassWealth(FName WealthName, FName FunName)
{
	IModule->LoadClassWealth(WealthName, GetObjectName(), FunName);
}

void IDDOO::LoadClassWealthKind(FName WealthKind, FName FunName)
{
	IModule->LoadClassWealthKind(WealthKind, GetObjectName(), FunName);
}
