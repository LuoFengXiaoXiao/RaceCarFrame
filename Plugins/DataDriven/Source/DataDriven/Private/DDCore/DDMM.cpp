// Fill out your copyright notice in the Description page of Project Settings.


#include "DDCore/DDMM.h"
#include "DDCore/DDModule.h"
#include "DDCore/DDDriver.h"

// Add default functionality here for any IDDMM functions that are not pure virtual.

void IDDMM::AssignModule(UDDModule* Mod)
{
	IModule = Mod;
	ModuleIndex = IModule->ModuleIndex;
	IDriver = UDDCommon::Get()->GetDriver();
}

void IDDMM::ExecuteFunction(DDModuleAgreement Agreement, DDParam* Param)
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

void IDDMM::ExecuteFunction(DDObjectAgreement Agreement, DDParam* Param)
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

UWorld* IDDMM::GetDDWorld() const
{
	if (IDriver)
		return IDriver->GetWorld();
	return NULL;
}
