// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DDUI/DDFrameWidget.h"
#include "RCGameUIFrame.generated.h"

/**
 * 
 */
UCLASS()
class RACECARFRAME_API URCGameUIFrame : public UDDFrameWidget
{
	GENERATED_BODY()
	
public:
	virtual void DDInit() override;

	// 同级别隐藏测试函数
	DDCoroTask* UIProcess();
};
