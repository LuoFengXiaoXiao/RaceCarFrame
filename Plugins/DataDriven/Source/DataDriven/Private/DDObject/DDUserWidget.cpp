// Fill out your copyright notice in the Description page of Project Settings.


#include "DDObject/DDUserWidget.h"

void UDDUserWidget::DDRelease()
{
	IDDOO::DDRelease();

	// �ټ��һ�´Ӹ����Ƴ�
	RemoveFromParent();
	// ��root�Ƴ�
	RemoveFromRoot();
	// ׼��������Դ
	ConditionalBeginDestroy();
}
