// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "DDMM.h"

#include "DDModel.generated.h"

class IDDOO;
/**
 * 
 */
UCLASS()
class DATADRIVEN_API UDDModel 
	: public UObject,
	  public IDDMM
{
	GENERATED_BODY()
	
public:

	virtual void ModelInit() {}

	virtual void ModelBeginPlay() {}

	virtual void ModelTick(float DeltaSeconds);

	// ע���������ģ��
	void RegisterObject(IDDOO* ObjectInst);

	// ���ٶ���ֻ���ٶ�����,���ٶ��������
	// �������ֽ�����������ٽ�����
	void DestoryObject(FName ObjectName);

	// ���ٶ���
	void DestoryObject(EAgreementType Agreement,TArray<FName> TargetNameGroup);

	// �������
	void EnableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup);

	// ʧ�����
	void DisableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup);

	// ���ݲ�ͬ��Э���ȡ��ͬ�Ķ���EAgreementType��
	// ���ݴ���Ķ�������ȡ����
	void GetSelfObject(TArray<FName> TargetNameGroup,TArray<IDDOO*>& TargetObjectGroup);

	// ���ݴ���Ķ�������ȡ��Щ��������Ӧ���������������
	int32 GetOtherObject(TArray<FName> TargetNameGroup, TArray<IDDOO*>& TargetObjectGroup);

	// �������������ȡ��ͬ����������󣬷��������Ķ�������
	int32 GetClassOtherObject(TArray<FName> TargetNameGroup, TArray<IDDOO*>& TargetObjectGroup);

	// �������ֻ�ȡ��Ķ���
	void GetSelfClass(TArray<FName> TargetNameGroup, TArray<IDDOO*>& TargetObjectGroup);

	// �������ֻ�ȡ����֮���������
	void GetOtherClass(TArray<FName> TargetNameGroup, TArray<IDDOO*>& TargetObjectGroup);

	// ��ȡ���ж���
	void GetAll(TArray<IDDOO*>& TargetObjectGroup);

	// ����Э���ȡ���󼯺�
	void GetAgreementObject(EAgreementType Agreement, TArray<FName> TargetNameGroup, TArray<IDDOO*>& TargetObjectGroup);


protected:

	// ��ܶ�������,key:ObjectName,Value:*
	TMap<FName,IDDOO*> ObjectGroup;

	// ��ܶ����༯��,key:ClassName,ValueTArray<*>
	TMap<FName,TArray<IDDOO*>> ObjectClassGroup;

	// ��Ҫ�����������ڵĶ���
	TArray<IDDOO*> ObjectActiveGroup;

	// ��Ҫ����Tick�����Ķ��󼯺�
	TArray<IDDOO*> ObjectTickGroup;

	// �����������ڵĶ���
	TArray<IDDOO*> ObjectDestoryGroup;

	// �ͷ����ں�������ļ��ϣ�ִֻ��һ�ξ�ȫ���ͷ�
	TArray<IDDOO*> ObjectReleaseGroup;

	// �����ٶ����飬��Щ���󻹴��ڼ����������ڣ������ڼ�����������û������֮ǰ���Ѿ��趨ΪҪ��������
	TArray<IDDOO*> PreObjectDestoryGroup;

};
