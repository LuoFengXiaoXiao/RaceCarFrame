// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "DDCommon/DDCommon.h"

#include "DDMM.generated.h"


class UDDModule;
// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UDDMM : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DATADRIVEN_API IDDMM
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	// �����Ǹ�Message��Wealth��Modelʹ�õĽӿ�
	// ָ��ģ��
	void AssignModule(UDDModule* Mod);

protected:
	
	// ִ�з��䷽��
	void ExecuteFunction(DDModuleAgreement Agreement,DDParam* Param);

	// ִ�з��䷽��
	void ExecuteFunction(DDObjectAgreement Agreement,DDParam* Param);

protected:

	// �����Ӧ��ģ��
	UDDModule* IModule;

	// ����������
	ADDDriver* IDriver;

	// ��Ӧģ������
	int32 ModuleIndex;
};