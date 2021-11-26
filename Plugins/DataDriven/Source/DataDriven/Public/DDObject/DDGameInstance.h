// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "DDOO.h"
#include "DDGameInstance.generated.h"

// 需要手动获取Instance并注册到框架，该方式需要在驱动器下完成


/**
 * 
 */
UCLASS()
class DATADRIVEN_API UDDGameInstance : public UGameInstance,public IDDOO
{
	GENERATED_BODY()
	

};
