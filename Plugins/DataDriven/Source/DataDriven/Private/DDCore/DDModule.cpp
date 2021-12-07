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
	// 实例化组件，这里用NewObject实例化组件时不能在括号内填this，否则编辑器运行游戏退出时会崩溃
	Model = NewObject<UDDModel>();
	Message = NewObject<UDDMessage>();
	Wealth = NewObject<UDDWealth>();

	// 避免被垃圾回收
	Model->AddToRoot();
	Message->AddToRoot();
	Wealth->AddToRoot();

	//指定模组
	Model->AssignModule(this);
	Message->AssignModule(this);
	Wealth->AssignModule(this);
}

void UDDModule::ModuleInit()
{
	// 调用Init函数
	Model->ModelInit();
	Message->MessageInit();
	Wealth->WealthInit();

}

void UDDModule::ModuleBeginPlay()
{
	// 给Wealth指定资源
	Wealth->AssignData(WealthData);
	// 调用BeginPlay函数
	Model->ModelBeginPlay();
	Message->MessageBeginPlay();
	Wealth->WealthBeginPlay();

}

void UDDModule::ModuleTick(float DeltaSeconds)
{
	// 调用Tick函数
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
	// 注册对象到数据组件
	Model->RegisterObject(ObjectInst);
	// 把自己注册到对象模组
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
	// 调用模组的UFUNCTION
	UFunction* ExeFunc = FindFunction(Agreement.FunctionName);

	// 如果方法存在，设置调用成功
	if (ExeFunc)
	{
		Param->CallResult = ECallResult::Succeed;
		// 调用方法
		ProcessEvent(ExeFunc,Param->ParamPtr);
	}
	else
	{
		Param->CallResult = ECallResult::NoFunction;
	}
}


void UDDModule::ExecuteFunction(DDObjectAgreement Agreement, DDParam* Param)
{
	// 区分执行类型调用方法
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
	// 定义存储目标的组
	TArray<IDDOO*> TargetObjectGroup;
	// 从数据模组获取对象组
	Model->GetSelfObject(Agreement.ObjectGroup,TargetObjectGroup);
	// 循环调用反射事件
	for (int i = 0;i<TargetObjectGroup.Num();++i)
	{
		// 获取反射方法
		UFunction* ExeFunc = TargetObjectGroup[i]->GetObjectBody()->FindFunction(Agreement.FunctionName);
		if (ExeFunc)
		{
			// 如果存在，设置调用成功
			Param->CallResult = ECallResult::Succeed;
			// 执行方法
			TargetObjectGroup[i]->GetObjectBody()->ProcessEvent(ExeFunc,Param->ParamPtr);
		}
		else
		{
			// 如果不存在，设置找不到方法
			Param->CallResult = ECallResult::NoFunction;
		}
	}
	// 对象是否缺失的判定，如果对象有缺失，设置结果为对象缺失，该结果的优先级最高
	if (TargetObjectGroup.Num() != Agreement.ObjectGroup.Num())
	{
		Param->CallResult = ECallResult::LackObject;
	}

}

void UDDModule::ExecuteOtherObject(DDObjectAgreement Agreement, DDParam* Param)
{
	// 定义存储目标的组
	TArray<IDDOO*> TargetObjectGroup;
	// 从数据模组获取对象组
	int32 TotalObjectNum = Model->GetOtherObject(Agreement.ObjectGroup, TargetObjectGroup);
	// 循环调用反射事件
	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		// 获取反射方法
		UFunction* ExeFunc = TargetObjectGroup[i]->GetObjectBody()->FindFunction(Agreement.FunctionName);
		if (ExeFunc)
		{
			// 如果存在，设置调用成功
			Param->CallResult = ECallResult::Succeed;
			// 执行方法
			TargetObjectGroup[i]->GetObjectBody()->ProcessEvent(ExeFunc, Param->ParamPtr);
		}
		else
		{
			// 如果不存在，设置找不到方法
			Param->CallResult = ECallResult::NoFunction;
		}
	}
	// 对象是否缺失的判定，如果对象有缺失，设置结果为对象缺失，该结果的优先级最高
	if (TargetObjectGroup.Num()+Agreement.ObjectGroup.Num() != TotalObjectNum)
	{
		Param->CallResult = ECallResult::LackObject;
	}
}

void UDDModule::ExecuteClassOtherObject(DDObjectAgreement Agreement, DDParam* Param)
{
	// 定义存储目标的组
	TArray<IDDOO*> TargetObjectGroup;
	// 从数据模组获取对象组
	int32 TotalClassNum = Model->GetClassOtherObject(Agreement.ObjectGroup, TargetObjectGroup);
	// 循环调用反射事件
	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		// 获取反射方法
		UFunction* ExeFunc = TargetObjectGroup[i]->GetObjectBody()->FindFunction(Agreement.FunctionName);
		if (ExeFunc)
		{
			// 如果存在，设置调用成功
			Param->CallResult = ECallResult::Succeed;
			// 执行方法
			TargetObjectGroup[i]->GetObjectBody()->ProcessEvent(ExeFunc, Param->ParamPtr);
		}
		else
		{
			// 如果不存在，设置找不到方法
			Param->CallResult = ECallResult::NoFunction;
		}
	}
	// 对象是否缺失的判定，如果对象有缺失，设置结果为对象缺失，该结果的优先级最高
	if (TargetObjectGroup.Num() + Agreement.ObjectGroup.Num() != TotalClassNum)
	{
		Param->CallResult = ECallResult::LackObject;
	}
}

void UDDModule::ExecuteSelfClass(DDObjectAgreement Agreement, DDParam* Param)
{
	// 定义存储目标的组
	TArray<IDDOO*> TargetObjectGroup;
	// 从数据模组获取对象组
	Model->GetSelfClass(Agreement.ObjectGroup, TargetObjectGroup);
	// 循环调用反射事件
	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		// 获取反射方法
		UFunction* ExeFunc = TargetObjectGroup[i]->GetObjectBody()->FindFunction(Agreement.FunctionName);
		if (ExeFunc)
		{
			// 如果存在，设置调用成功
			Param->CallResult = ECallResult::Succeed;
			// 执行方法
			TargetObjectGroup[i]->GetObjectBody()->ProcessEvent(ExeFunc, Param->ParamPtr);
		}
		else
		{
			// 如果不存在，设置找不到方法
			Param->CallResult = ECallResult::NoFunction;
		}
	}
	// 对象是否缺失的判定，如果对象有缺失，设置结果为对象缺失，该结果的优先级最高
	if (TargetObjectGroup.Num() == 0)
	{
		Param->CallResult = ECallResult::LackObject;
	}
}

void UDDModule::ExecuteOtherClass(DDObjectAgreement Agreement, DDParam* Param)
{
	// 定义存储目标的组
	TArray<IDDOO*> TargetObjectGroup;
	// 从数据模组获取对象组
	Model->GetOtherClass(Agreement.ObjectGroup, TargetObjectGroup);
	// 循环调用反射事件
	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		// 获取反射方法
		UFunction* ExeFunc = TargetObjectGroup[i]->GetObjectBody()->FindFunction(Agreement.FunctionName);
		if (ExeFunc)
		{
			// 如果存在，设置调用成功
			Param->CallResult = ECallResult::Succeed;
			// 执行方法
			TargetObjectGroup[i]->GetObjectBody()->ProcessEvent(ExeFunc, Param->ParamPtr);
		}
		else
		{
			// 如果不存在，设置找不到方法
			Param->CallResult = ECallResult::NoFunction;
		}
	}
	// 对象是否缺失的判定，如果对象有缺失，设置结果为对象缺失，该结果的优先级最高
	if (TargetObjectGroup.Num() == 0)
	{
		Param->CallResult = ECallResult::LackObject;
	}
}

void UDDModule::ExcuteAll(DDObjectAgreement Agreement, DDParam* Param)
{
	// 定义存储目标的组
	TArray<IDDOO*> TargetObjectGroup;
	// 从数据模组获取对象组
	Model->GetAll(TargetObjectGroup);
	// 循环调用反射事件
	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		// 获取反射方法
		UFunction* ExeFunc = TargetObjectGroup[i]->GetObjectBody()->FindFunction(Agreement.FunctionName);
		if (ExeFunc)
		{
			// 如果存在，设置调用成功
			Param->CallResult = ECallResult::Succeed;
			// 执行方法
			TargetObjectGroup[i]->GetObjectBody()->ProcessEvent(ExeFunc, Param->ParamPtr);
		}
		else
		{
			// 如果不存在，设置找不到方法
			Param->CallResult = ECallResult::NoFunction;
		}
	}
	// 对象是否缺失的判定，如果对象有缺失，设置结果为对象缺失，该结果的优先级最高
	if (TargetObjectGroup.Num() == 0)
	{
		Param->CallResult = ECallResult::LackObject;
	}
}

//void UDDModule::TestReflect(int32 Counter, FString InfoStr, bool& BackResult)
//{
//	DDH::Debug()<<Counter<<" ; "<<InfoStr<<" ; "<<GetFName()<<DDH::Endl();
//
//	// bool值的作用是实现反射的返回值
//	BackResult = false;
//}
//
//void UDDModule::TestReflectNoParam()
//{
//	DDH::Debug() << "NoParam" << " ; " << GetFName() << DDH::Endl();
//}

