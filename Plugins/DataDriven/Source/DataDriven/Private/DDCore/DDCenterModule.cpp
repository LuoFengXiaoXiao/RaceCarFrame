// Fill out your copyright notice in the Description page of Project Settings.


#include "DDCore/DDCenterModule.h"
#include "DDObject/DDOO.h"

void UDDCenterModule::IterChangeModuleType(UDDModule* Module, FName ModType)
{
	Module->ChangeModuleType(ModType);
	for (int i = 0; i < Module->GetAttachChildren().Num(); ++i)
	{
		UDDModule* ChildModule = Cast<UDDModule>(Module->GetAttachChildren()[i]);
		if (ChildModule)
		{
			// ��������������Module��ChildModule
			Module->ChildrenModule.Push(ChildModule);
			IterChangeModuleType(ChildModule, ModType);
		}
	}
}

void UDDCenterModule::IterCreateManeger(UDDModule* Module)
{
	Module->CreateManager();
	for (int i = 0;i<Module->ChildrenModule.Num();++i)
	{
		IterCreateManeger(Module->ChildrenModule[i]);
	}
}

void UDDCenterModule::IterModuleInit(UDDModule* Module)
{
	Module->ModuleInit();
	for (int i = 0; i < Module->ChildrenModule.Num(); ++i)
	{
		IterModuleInit(Module->ChildrenModule[i]);
	}
}

void UDDCenterModule::IterModuleBeginPlay(UDDModule* Module)
{
	Module->ModuleBeginPlay();
	for (int i = 0; i < Module->ChildrenModule.Num(); ++i)
	{
		IterModuleBeginPlay(Module->ChildrenModule[i]);
	}
}

void UDDCenterModule::IterModuleTick(UDDModule* Module, float DeltaSeconds)
{
	Module->ModuleTick(DeltaSeconds);
	for (int i = 0; i < Module->ChildrenModule.Num(); ++i)
	{
		IterModuleTick(Module->ChildrenModule[i], DeltaSeconds);
	}
}

void UDDCenterModule::TotalGatherModule(FName ModType)
{
	if (ModType.IsNone()) return;
	// �Ȼ�ȡ���е�ģ�鵽GatherGroup
	TArray<UDDModule*> GatherGroup;
	IterGatherModule(this, GatherGroup);

	// ��ȡö�ٵ�Ԫ������
	int32 ModuleNum = FindObject<UEnum>((UObject*)ANY_PACKAGE, *(ModType.ToString()), true)->GetMaxEnumValue();
	// ���ն���ModuleGroup
	for (int i = 0;i<ModuleNum;++i)
	{
		ModuleGroup.Push(NULL);
	}
	// ��ģ��ID���ģ�鵽ModuleGroup
	for (int i = 0; i<GatherGroup.Num();++i)
	{
		ModuleGroup[GatherGroup[i]->ModuleIndex] = GatherGroup[i];
	}
}

void UDDCenterModule::IterGatherModule(UDDModule* Module, TArray<UDDModule*>& GatherGroup)
{
	GatherGroup.Push(Module);
	for (int i = 0; i<Module->ChildrenModule.Num();++i)
	{
		IterGatherModule(Module->ChildrenModule[i], GatherGroup);
	}
}

bool UDDCenterModule::RegisterToModule(IDDOO* ObjectInst)
{
	// �ж�ModuleID�Ƿ���Ч����ע��
	if (ObjectInst->GetModuleIndex()<ModuleGroup.Num() && ModuleGroup[ObjectInst->GetModuleIndex()])
	{
		ModuleGroup[ObjectInst->GetModuleIndex()]->RegisterObject(ObjectInst);
		return true;
	}
	return false;
}

void UDDCenterModule::AllotExecuteFunction(DDModuleAgreement Agreement, DDParam* Param)
{
	if (Agreement.ModuleIndex< ModuleGroup.Num() && ModuleGroup[Agreement.ModuleIndex])
	{
		ModuleGroup[Agreement.ModuleIndex]->ExecuteFunction(Agreement,Param);
	}
	else
	{
		Param->CallResult = ECallResult::NoModule;
	}
}

void UDDCenterModule::AllotExecuteFunction(DDObjectAgreement Agreement, DDParam* Param)
{
	if (Agreement.ModuleIndex < ModuleGroup.Num() && ModuleGroup[Agreement.ModuleIndex])
	{
		ModuleGroup[Agreement.ModuleIndex]->ExecuteFunction(Agreement, Param);
	}
	else
	{
		Param->CallResult = ECallResult::NoModule;
	}
}