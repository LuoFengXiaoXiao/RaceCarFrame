// Fill out your copyright notice in the Description page of Project Settings.


#include "DDObject/DDObject.h"

void UDDObject::DDRelease()
{
	IDDOO::DDRelease();
	// ����UObject����
	// ��root�Ƴ�
	RemoveFromRoot();
	// ׼��������Դ
	ConditionalBeginDestroy();
}
