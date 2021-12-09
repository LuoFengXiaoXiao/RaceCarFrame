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

	// 提前加载到内存,但是不显示
	UFUNCTION()
		void AdvanceLoadPanel(FName PanelName);
	// 直接显示UI
	UFUNCTION()
		void ShowUIPanel(FName PanelName);

	// 提前加载面板回调函数
	UFUNCTION()
		void AcceptAdvancePanel(FName BackName,UUserWidget* BackWidget);
	// 显示时加载回调函数,直接显示
	UFUNCTION()
		void AcceptPanelWidget(FName BackName,UUserWidget* BackWidget);

protected:

	// 执行进入UI
	void DoEnterUIPanel(FName PanelName);

	// 执行显示UI
	void DoShowUIPanel(FName PanelName);

	// 进入界面，第一次
	void EnterPanelDoNothing(UCanvasPanel* WorkLayout, UDDPanelWidget* PanelWidget);
	void EnterPanelDoNothing(UOverlay* WorkLayout, UDDPanelWidget* PanelWidget);

	void EnterPanelHideOther(UCanvasPanel* WorkLayout, UDDPanelWidget* PanelWidget);
	void EnterPanelHideOther(UOverlay* WorkLayout, UDDPanelWidget* PanelWidget);

	void EnterPanelReverse(UCanvasPanel* WorkLayout, UDDPanelWidget* PanelWidget);
	void EnterPanelReverse(UOverlay* WorkLayout, UDDPanelWidget* PanelWidget);

protected:
	// 根节点
	UCanvasPanel* RootCanvas;

	// 保存Overlay的控件
	UPROPERTY()
		TArray<UOverlay*> ActiveOverlay;
	UPROPERTY()
		TArray<UOverlay*> UnActiveOverlay;

	// 保存Cavnas的控件
	UPROPERTY()
		TArray<UCanvasPanel*> ActiveCanvas;
	UPROPERTY()
		TArray<UCanvasPanel*> UnActiveCanvas;

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
