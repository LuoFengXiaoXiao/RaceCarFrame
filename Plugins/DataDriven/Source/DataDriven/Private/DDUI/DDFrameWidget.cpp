// Fill out your copyright notice in the Description page of Project Settings.


#include "DDUI/DDFrameWidget.h"
#include <Components/CanvasPanel.h>
#include <Components/CanvasPanelSlot.h>
#include <Components/Image.h>
#include <Blueprint/WidgetTree.h>
#include "DDUI/DDPanelWidget.h"
#include <Components/OverlaySlot.h>
#include <Components/Overlay.h>

bool UDDFrameWidget::Initialize()
{
	if (!Super::Initialize()) return false;
	// ��ȡ���ڵ�
	RootCanvas = Cast<UCanvasPanel>(GetRootWidget());
	// ��������ײ��ʽΪ�Լ������������⵽���������ӽڵ���Ա���⵽
	RootCanvas->SetVisibility(ESlateVisibility::SelfHitTestInvisible);

	// ��������
	MaskPanel = WidgetTree->ConstructWidget<UImage>(UImage::StaticClass());

	// ����͸����
	NormalLucency = FLinearColor(1.0f, 1.0f, 1.0f, 0.f);
	TranslucenceLucency = FLinearColor(0.0f, 0.0f, 0.0f, 0.6f);
	ImPenetrableLucency = FLinearColor(0.0f, 0.0f, 0.0f, 0.3f);

	WaitShowTaskName = FName("WaitShowTaskName");

	return true;
}

void UDDFrameWidget::AdvanceLoadPanel(FName PanelName)
{
	// ����Ѿ�ȫ�����ڸ���壬�����Ѿ��������������ڸ������
	if (AllPanelGroup.Contains(PanelName) || LoadedPanelName.Contains(PanelName))
		return;
	// �����첽����
	BuildSingleClassWealth(EWealthType::Widget, PanelName, "AcceptAdvancePanel");
	// �����������Ѿ�����������
	LoadedPanelName.Push(PanelName);
}

void UDDFrameWidget::ShowUIPanel(FName PanelName)
{
	// �������Ѿ���ʾ�ڽ�����
	if (ShowPanelGroup.Contains(PanelName) || PopPanelStack.Contains(PanelName))
		return;
	// ����ж��Ƿ��Ѿ����ظ����
	if (!AllPanelGroup.Contains(PanelName) && !LoadedPanelName.Contains(PanelName))
	{
		BuildSingleClassWealth(EWealthType::Widget, PanelName, "AcceptPanelWidget");
		LoadedPanelName.Push(PanelName);
		return;
	}

	// ���Ԥ����δ��ɣ��͵�����ʾ�������ѭ����⺯������⵽Ԥ������ɵ�ʱ����ʾUI���
	if (!AllPanelGroup.Contains(PanelName) && !LoadedPanelName.Contains(PanelName) && !WaitShowPanelName.Contains(PanelName))
	{
		// ������ֵ�Ԥ��ʾ��
		WaitShowPanelName.Push(PanelName);
		// ����ѭ�������غ����������������ʾ������ÿ0.3s���һ��
		InvokeRepeat(WaitShowTaskName, 0.3f, 0.3f, this, &UDDFrameWidget::WaitShowPanel);
		return;
	}

	// �������UI���
	if (AllPanelGroup.Contains(PanelName))
	{
		// �ж��Ƿ��ǵ�һ����ʾ�ڽ�����
		UDDPanelWidget* PanelWidget = *AllPanelGroup.Find(PanelName);
		// ���û�и��ؼ���˵��û�н��������
		if (PanelWidget->GetParent())
			DoShowUIPanel(PanelName);
		else
			DoEnterUIPanel(PanelName);
	}
}

void UDDFrameWidget::AcceptAdvancePanel(FName BackName, UUserWidget* BackWidget)
{
	UDDPanelWidget* PanelWidget = Cast<UDDPanelWidget>(BackWidget);
	// ������Ǽ̳�PanelWidget
	if (!PanelWidget)
	{
		DDH::Debug() << " Load UI Panel : " << BackName << " is Not DDPanelWidget " << DDH::Endl();
		return;
	}
	// ע�ᵽ���,��ע������,BackName������������Լ�ObjectName
	PanelWidget->RegisterToModule(ModuleIndex, BackName);
	// ��ӵ�ȫ����
	AllPanelGroup.Add(BackName, PanelWidget);
}

void UDDFrameWidget::AcceptPanelWidget(FName BackName, UUserWidget* BackWidget)
{
	UDDPanelWidget* PanelWidget = Cast<UDDPanelWidget>(BackWidget);
	// ������Ǽ̳�PanelWidget
	if (!PanelWidget)
	{
		DDH::Debug() << " Load UI Panel : " << BackName << " is Not DDPanelWidget " << DDH::Endl();
		return;
	}
	// ע�ᵽ���,��ע������,BackName������������Լ�ObjectName
	PanelWidget->RegisterToModule(ModuleIndex, BackName);
	// ��ӵ�ȫ����
	AllPanelGroup.Add(BackName, PanelWidget);
	// ���е�һ����ʾ��ִ�н�����淽��
	DoEnterUIPanel(BackName);
}

void UDDFrameWidget::DoEnterUIPanel(FName PanelName)
{
	// ��ȡ���ʵ��
	UDDPanelWidget* PanelWidget = *AllPanelGroup.Find(PanelName);
	// ���ֲ������ͽ�����ӵ�����
	if (PanelWidget->UINature.LayoutType == ELayoutType::Canvas)
	{
		// ��ȡ���ֿؼ������ؼ�
		UCanvasPanel* WorkLayout = NULL;
		// �ж���ײ�Ĳ��ֿؼ��Ƿ���Canvas
		if (RootCanvas->GetChildrenCount()>0)
			WorkLayout = Cast<UCanvasPanel>(RootCanvas->GetChildAt(RootCanvas->GetChildrenCount() - 1));
		if (!WorkLayout)
		{
			if (UnActiveCanvas.Num() == 0)
			{
				WorkLayout = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass());
				WorkLayout->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
				UCanvasPanelSlot* FrameCanvasSlot = RootCanvas->AddChildToCanvas(WorkLayout);
				// ����������Canvas�Ĳ���Ϊƽ��
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
		UOverlay* WorkLayout = NULL;
		// ������ڲ��ֿؼ�����ͼ�����һ�����ֿؼ�ת����Overlay
		if (RootCanvas->GetChildrenCount()>0)
			WorkLayout = Cast<UOverlay>(RootCanvas->GetChildAt(RootCanvas->GetChildrenCount() - 1));
		if (!WorkLayout)
		{
			if (UnActiveOverlay.Num() == 0)
			{
				WorkLayout = WidgetTree->ConstructWidget<UOverlay>(UOverlay::StaticClass());
				WorkLayout->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
				UCanvasPanelSlot* FrameCanvasSlot = RootCanvas->AddChildToCanvas(WorkLayout);
				// ����������Canvas�Ĳ���Ϊƽ��
				FrameCanvasSlot->SetAnchors(FAnchors(0.f, 0.f, 1.f, 1.f));
				FrameCanvasSlot->SetOffsets(FMargin(0.f, 0.f, 0.f, 0.f));
			}
			else
				WorkLayout = UnActiveOverlay.Pop();
			ActiveOverlay.Push(WorkLayout);
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
}

void UDDFrameWidget::DoShowUIPanel(FName PanelName)
{

}

void UDDFrameWidget::WaitShowPanel()
{
	TArray<FName> CompleteName;
	for (int i = 0;WaitShowPanelName.Num();++i)
	{
		if (AllPanelGroup.Contains(WaitShowPanelName[i]))
		{
			// ִ�н������ķ���
			DoEnterUIPanel(WaitShowPanelName[i]);
			// ��ӵ������
			CompleteName.Push(WaitShowPanelName[i]);
		}
	}
	// �Ƴ���ɵ�UI
	for (int i = 0; i < CompleteName.Num(); ++i)
		WaitShowPanelName.Remove(WaitShowPanelName[i]);
	// ���û�еȴ���ʾ��UI�ˣ�ֹͣ��ѭ��
	if (WaitShowPanelName.Num() == 0)
		StopInvoke(WaitShowTaskName);
}

void UDDFrameWidget::EnterPanelDoNothing(UCanvasPanel* WorkLayout, UDDPanelWidget* PanelWidget)
{
	// ���UI��嵽���ؼ�
	UCanvasPanelSlot* PanelSlot = WorkLayout->AddChildToCanvas(PanelWidget);
	PanelSlot->SetAnchors(PanelWidget->UINature.Anchors);
	PanelSlot->SetOffsets(PanelWidget->UINature.Offsets);

	// ��UI�����ӵ���ʾ��,UI����GetObjectName(),PanelName,��Դϵͳ�µ�WealthName����һ��
	ShowPanelGroup.Add(PanelWidget->GetObjectName(), PanelWidget);
	// ����UI���Ľ��������������
	PanelWidget->PanelEnter();
}

void UDDFrameWidget::EnterPanelDoNothing(UOverlay* WorkLayout, UDDPanelWidget* PanelWidget)
{
	// ���UI��嵽Overlay����
	UOverlaySlot* PanelSlot = WorkLayout->AddChildToOverlay(PanelWidget);
	PanelSlot->SetPadding(PanelWidget->UINature.Offsets);
	PanelSlot->SetHorizontalAlignment(PanelWidget->UINature.HAlign);
	PanelSlot->SetVerticalAlignment(PanelWidget->UINature.VAlign);

	// ��UI�����ӵ���ʾ��,UI����GetObjectName(),PanelName,��Դϵͳ�µ�WealthName����һ��
	ShowPanelGroup.Add(PanelWidget->GetObjectName(), PanelWidget);
	// ����UI���Ľ��������������
	PanelWidget->PanelEnter();
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
