// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DGTypes.generated.h"


#pragma region GamePart

// 开发的游戏内容存放的位置

// 模组约定，如果要使用DataDriven本身的UI框架，请一定要把HUD模组放在第二位，UIFrame框架管理器始终在HUD模组下
UENUM()
enum class ERCGameModule :uint8
{
	Center = 0,  // 中央模组
	HUD,        // 自己规定的模组顺序，也就是创建的Component必须得按照这个顺序来创建
	Player,    // 玩家模组
};

// 对应的不同场景的Module定义,比如此处是菜单关卡的模组
UENUM()
enum class ERCMenuModule:uint8
{
	Center,
	HUD,
};

#pragma  endregion

/**
 * 
 */
UCLASS()
class DATADRIVEN_API UDGTypes : public UObject
{
	GENERATED_BODY()
	
};
