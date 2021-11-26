// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "DDCenterModule.h"
#include "DDCommon//DDCommon.h"

#include "DDDriver.generated.h"

class IDDOO;
UCLASS()
class DATADRIVEN_API ADDDriver : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADDDriver();

	virtual void PostInitializeComponents() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// �ṩ����Դ�ǽ���ע��
	bool RegisterToModule(IDDOO* ObjectInst);

#if WITH_EDITOR

	// �����޸ĵķ���
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;


#endif

	// ִ�з����¼�
	void ExecuteFunction(DDModuleAgreement Agreement, DDParam* Param);

	// ִ�з����¼�
	void ExecuteFunction(DDObjectAgreement Agreement, DDParam* Param);

	// ע�᷽���ӿ�
	template<typename RetType, typename... VarTypes>
	DDFunHandle RegisterFunPort(int32 ModIndex, FName CallName, TFunction<RetType(VarTypes...)> InsFun);

public:	

	UPROPERTY(EditAnywhere, NoClear, BlueprintReadOnly, Category = "DataDriven")
		USceneComponent* RootScene;

	UPROPERTY(EditAnywhere, NoClear, BlueprintReadOnly, Category = "DataDriven")
		UDDCenterModule* Center;

	// ģ���Ӧ��ö������
	UPROPERTY(EditDefaultsOnly, Category = "DataDriven")
		FName ModuleType;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// ע��gameplay��ܵ�DataDriver
	void RegisterGamePlay();

protected:

	// �Ƿ��Ѿ�����BeginPlay����
	bool IsBeginPlay;

};

template<typename RetType, typename... VarTypes>
DDFunHandle ADDDriver::RegisterFunPort(int32 ModIndex, FName CallName, TFunction<RetType(VarTypes...)> InsFun)
{
	return Center->AllotRegisterFunPort<RetType,VarTypes...>(ModIndex, CallName, InsFun);
}