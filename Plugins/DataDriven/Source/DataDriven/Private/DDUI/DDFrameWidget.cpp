// Fill out your copyright notice in the Description page of Project Settings.


#include "DDUI/DDFrameWidget.h"
#include <Components/CanvasPanel.h>
#include <Components/CanvasPanelSlot.h>
#include <Components/Image.h>
#include <Blueprint/WidgetTree.h>
#include "DDUI/DDPanelWidget.h"

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

void UDDFrameWidget::AdvanceLoadPanel(FName PanelName)
{
	// 如果已经全部存在该面板，或者已经加载面板名组存在该面板名
	if (AllPanelGroup.Contains(PanelName) || LoadedPanelName.Contains(PanelName))
		return;
	// 进行异步加载
	BuildSingleClassWealth(EWealthType::Widget, PanelName, "AcceptAdvancePanel");
	// 添加面板名到已经加载名字组
	LoadedPanelName.Push(PanelName);
}

void UDDFrameWidget::ShowUIPanel(FName PanelName)
{
	// 如果面板已经显示在界面上
	if (ShowPanelGroup.Contains(PanelName) || PopPanelStack.Contains(PanelName))
		return;
	// 如果判断是否已经加载该面板
	if (!AllPanelGroup.Contains(PanelName) && !LoadedPanelName.Contains(PanelName))
	{
		BuildSingleClassWealth(EWealthType::Widget, PanelName, "AcceptPanelWidget");
		LoadedPanelName.Push(PanelName);
		return;
	}
	// 如果存在UI面板
	if (AllPanelGroup.Contains(PanelName))
	{
		// 判定是否是第一次显示在界面上
		UDDPanelWidget* PanelWidget = *AllPanelGroup.Find(PanelName);
		// 如果没有父控件，说明没有进入过界面
		if (PanelWidget->GetParent())
			DoShowUIPanel(PanelName);
		else
			DoEnterUIPanel(PanelName);
	}
}

void UDDFrameWidget::AcceptAdvancePanel(FName BackName, UUserWidget* BackWidget)
{
	UDDPanelWidget* PanelWidget = Cast<UDDPanelWidget>(BackWidget);
	// 如果不是继承PanelWidget
	if (!PanelWidget)
	{
		DDH::Debug() << " Load UI Panel : " << BackName << " is Not DDPanelWidget " << DDH::Endl();
		return;
	}
	// 注册到框架,不注册类名,BackName必须是面板名以及ObjectName
	PanelWidget->RegisterToModule(ModuleIndex, BackName);
	// 添加到全部组
	AllPanelGroup.Add(BackName, PanelWidget);
}

void UDDFrameWidget::AcceptPanelWidget(FName BackName, UUserWidget* BackWidget)
{
	UDDPanelWidget* PanelWidget = Cast<UDDPanelWidget>(BackWidget);
	// 如果不是继承PanelWidget
	if (!PanelWidget)
	{
		DDH::Debug() << " Load UI Panel : " << BackName << " is Not DDPanelWidget " << DDH::Endl();
		return;
	}
	// 注册到框架,不注册类名,BackName必须是面板名以及ObjectName
	PanelWidget->RegisterToModule(ModuleIndex, BackName);
	// 添加到全部组
	AllPanelGroup.Add(BackName, PanelWidget);
	// 进行第一次显示，执行进入界面方法
	DoEnterUIPanel(BackName);
}

void UDDFrameWidget::DoEnterUIPanel(FName PanelName)
{
	// 获取面板实例
	UDDPanelWidget* PanelWidget = *AllPanelGroup.Find(PanelName);
	// 区分布局类型进行添加到界面
	if (PanelWidget->UINature.LayoutType == ELayoutType::Canvas)
	{
		// 获取布局控件，父控件
		UCanvasPanel* WorkLayout = NULL;
		if (RootCanvas->GetChildrenCount()>0)
		{
			// 判断最底层的布局控件是否是Canvas
			WorkLayout = Cast<UCanvasPanel>(RootCanvas->GetChildAt(RootCanvas->GetChildrenCount() - 1));
			if (!WorkLayout)
			{
				if (UnActiveCanvas.Num() == 0)
				{
					WorkLayout = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass());
					WorkLayout->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
					UCanvasPanelSlot* FrameCanvasSlot = RootCanvas->AddChildToCanvas(WorkLayout);
					// 设置新增的Canvas的布局为平铺
					FrameCanvasSlot->SetAnchors(FAnchors(0.f, 0.f, 1.f, 1.f));
					FrameCanvasSlot->SetOffsets(FMargin(0.f, 0.f, 0.f, 0.f));
				}
				else
					WorkLayout = UnActiveCanvas.Pop();
				ActiveCanvas.Push(WorkLayout);
			}
		}
		else
		{
			if (UnActiveCanvas.Num() == 0)
			{
				WorkLayout = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass());
				WorkLayout->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
				UCanvasPanelSlot* FrameCanvasSlot = RootCanvas->AddChildToCanvas(WorkLayout);
				// 设置新增的Canvas的布局为平铺
				FrameCanvasSlot->SetAnchors(FAnchors(0.f, 0.f, 1.f, 1.f));
				FrameCanvasSlot->SetOffsets(FMargin(0.f, 0.f, 0.f, 0.f));
			}
			else
				WorkLayout = UnActiveCanvas.Pop();
			ActiveCanvas.Push(WorkLayout);
		}
		switch (PanelWidget->UINature.PanelShowType)
		{
		case EPanelShowType::DoNothing:
			EnterPanelDoNothing(WorkLayout, PanelWidget);
			break;
		case EPanelShowType::HideOther:
			EnterPanelHideOther(WorkLayout, PanelWidget);
			break;
		case EPanelShowType::Reverse:
			EnterPanelReverse(WorkLayout, PanelWidget);
			break;
		}
	}
	else
	{

	}
}

void UDDFrameWidget::DoShowUIPanel(FName PanelName)
{

}

void UDDFrameWidget::EnterPanelDoNothing(UCanvasPanel* WorkLayout, UDDPanelWidget* PanelWidget)
{

}

void UDDFrameWidget::EnterPanelDoNothing(UOverlay* WorkLayout, UDDPanelWidget* PanelWidget)
{

}

void UDDFrameWidget::EnterPanelHideOther(UCanvasPanel* WorkLayout, UDDPanelWidget* PanelWidget)
{

}

void UDDFrameWidget::EnterPanelHideOther(UOverlay* WorkLayout, UDDPanelWidget* PanelWidget)
{

}

void UDDFrameWidget::EnterPanelReverse(UCanvasPanel* WorkLayout, UDDPanelWidget* PanelWidget)
{

}

void UDDFrameWidget::EnterPanelReverse(UOverlay* WorkLayout, UDDPanelWidget* PanelWidget)
{

}
