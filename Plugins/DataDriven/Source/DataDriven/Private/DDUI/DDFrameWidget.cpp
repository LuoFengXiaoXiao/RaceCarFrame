// Fill out your copyright notice in the Description page of Project Settings.


#include "DDUI/DDFrameWidget.h"
#include <Components/CanvasPanel.h>
#include <Components/CanvasPanelSlot.h>
#include <Components/Image.h>
#include <Blueprint/WidgetTree.h>

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

	return true;
}
