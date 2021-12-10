// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DDObject/DDUserWidget.h"
#include "DDPanelWidget.generated.h"

/**
 * 
 */
UCLASS()
class DATADRIVEN_API UDDPanelWidget : public UDDUserWidget
{
	GENERATED_BODY()

public:
	// UI面板的生命周期
	virtual void PanelEnter(); // 第一次进入函数，只会执行一次，内存会不会炸
	virtual void PanelDisplay(); // 第二次以及以后n次显示在界面
	virtual void PanelHidden(); // 隐藏
	virtual void PanelFreeze(); // 冻结
	virtual void PanelResume(); // 解冻结
	virtual void PanelExit(); // 销毁

	// 动画回调函数
	UFUNCTION(BlueprintImplementableEvent)
		float DisplayEnterMovie();

	UFUNCTION(BlueprintImplementableEvent)
		float DisplayLeaveMovie();

protected:

	// 隐藏UI面板
	void SetSelfHidden();

	// 销毁动画回调函数
	void RemoveCallBack();

	DDOBJFUNC_TWO(ExitCallBack, ELayoutType, LayoutType, UPanelWidget*, WorkLayout);

public:
	UPROPERTY(EditAnywhere)
		FUINature UINature;
	
protected:

	// 避免消耗太多内存,不用每次创建都需要重新创建,隐藏动画任务名
	static FName PanelHiddenName;
	// UIFrame管理器所在的模组ID，约定在HUD下，数值是1
	static int32 UIFrameModuleIndex;
	// UIFrame管理器的对象名，约定是UIFrame
	static FName UIFrameName;
	// 销毁回调函数名字
	static FName ExitCallBackName;

};
