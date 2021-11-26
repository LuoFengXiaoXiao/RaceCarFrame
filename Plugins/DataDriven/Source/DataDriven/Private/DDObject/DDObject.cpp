// Fill out your copyright notice in the Description page of Project Settings.


#include "DDObject/DDObject.h"

void UDDObject::DDRelease()
{
	IDDOO::DDRelease();
	// 销毁UObject类型
	// 从root移除
	RemoveFromRoot();
	// 准备回收资源
	ConditionalBeginDestroy();
}
