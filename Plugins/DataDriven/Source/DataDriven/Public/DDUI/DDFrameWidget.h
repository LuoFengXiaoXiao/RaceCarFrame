// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DDObject/DDUserWidget.h"

#include "DDFrameWidget.generated.h"

class UCanvasPanel;
class UImage;
class UDDPanelWidget;
class UOverlay;
/**
 * 
 */
UCLASS()
class DATADRIVEN_API UDDFrameWidget : public UDDUserWidget
{
	GENERATED_BODY()
	
public:
	virtual bool Initialize() override;

protected:
	// 根节点
	UCanvasPanel* RootCanvas;

	// 保存Overlay的控件
	TArray<UOverlay*> ActiveOverlay;
	TArray<UOverlay*> UnActiveOverlay;

	// 保存Cavnas的控件
	TArray<UCanvasPanel*> ActivePanel;
	TArray<UCanvasPanel*> UnActivePanel;

	// 所有UI面板，键FName必须时该面板注册到框架的ObjectName
	TMap<FName, UDDPanelWidget*> AllPanelGroup;

	// 已经显示的UI
	TMap<FName, UDDPanelWidget*> ShowPanelGroup;

	// 弹窗栈
	TMap<FName, UDDPanelWidget*> PopPanelStack;

	// 已经加载过的UI面板的名字,避免重复加载
	TArray<FName> LoadedPanelName;


	// 遮罩图片,声明为UPROPERTY也可以避免资源回收
	UPROPERTY()
		UImage* MaskPanel;

	// 透明度值
	// 全透明，不能穿透
	FLinearColor NormalLucency;
	// 半透明
	FLinearColor TranslucenceLucency;
	// 不透明
	FLinearColor ImPenetrableLucency;

};
