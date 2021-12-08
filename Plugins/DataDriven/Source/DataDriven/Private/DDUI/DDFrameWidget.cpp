// Fill out your copyright notice in the Description page of Project Settings.


#include "DDUI/DDFrameWidget.h"
#include <Components/CanvasPanel.h>
#include <Components/CanvasPanelSlot.h>
#include <Components/Image.h>
#include <Blueprint/WidgetTree.h>

bool UDDFrameWidget::Initialize()
{
	if (!Super::Initialize()) return false;
	// 获取根节点
	RootCanvas = Cast<UCanvasPanel>(GetRootWidget());
	// 设置其碰撞方式为自己不被鼠标点击检测到，但是其子节点可以被检测到
	RootCanvas->SetVisibility(ESlateVisibility::SelfHitTestInvisible);

	// 生成遮罩
	MaskPanel = WidgetTree->ConstructWidget<UImage>(UImage::StaticClass());

	// 设置透明度
	NormalLucency = FLinearColor(1.0f, 1.0f, 1.0f, 0.f);
	TranslucenceLucency = FLinearColor(0.0f, 0.0f, 0.0f, 0.6f);
	ImPenetrableLucency = FLinearColor(0.0f, 0.0f, 0.0f, 0.3f);

	return true;
}
