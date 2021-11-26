// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehiclePawn.h"
#include "DDOO.h"
#include "DDWheeledVehiclePawn.generated.h"

/**
 * 
 */



UCLASS()
class DATADRIVEN_API ADDWheeledVehiclePawn : public AWheeledVehiclePawn,public IDDOO
{
	GENERATED_BODY()

public:
	ADDWheeledVehiclePawn();

	// ��д�ͷ���Դ����
	virtual void DDRelease() override;

public:
	// ģ�����֣����Ϊ�գ�˵��Ҫ�ֶ�ָ������Ϊ�վ����Զ�ָ��
	UPROPERTY(EditAnywhere, Category = "DataDriven")
		FName ModuleName;

	// ģ�����֣����Ϊ�գ�˵��Ҫ�ֶ�ָ������Ϊ�վ����Զ�ָ��
	UPROPERTY(EditAnywhere, Category = "DataDriven")
		FName ObjectName;

	// ģ�����֣����Ϊ�գ�˵��Ҫ�ֶ�ָ������Ϊ�վ����Զ�ָ��
	UPROPERTY(EditAnywhere, Category = "DataDriven")
		FName ClassName;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
};
