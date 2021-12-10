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

	// ��ǰ���ص��ڴ�,���ǲ���ʾ
	UFUNCTION()
		void AdvanceLoadPanel(FName PanelName);
	// ֱ����ʾUI
	UFUNCTION()
		void ShowUIPanel(FName PanelName);

	// ����UI
	UFUNCTION()
		void HideUIPanel(FName PanelName);

	// ��ǰ�������ص�����
	UFUNCTION()
		void AcceptAdvancePanel(FName BackName,UUserWidget* BackWidget);
	// ��ʾʱ���ػص�����,ֱ����ʾ
	UFUNCTION()
		void AcceptPanelWidget(FName BackName,UUserWidget* BackWidget);

protected:

	// ִ�н���UI
	void DoEnterUIPanel(FName PanelName);

	// ִ����ʾUI
	void DoShowUIPanel(FName PanelName);

	// �ȴ���ʾ���,����Ԥ���ص����յ���ʾ����������ʱ������ѭ������Ƿ������ϣ���������������ʾ
	void WaitShowPanel();

	// ������棬��һ��
	void EnterPanelDoNothing(UCanvasPanel* WorkLayout, UDDPanelWidget* PanelWidget);
	void EnterPanelDoNothing(UOverlay* WorkLayout, UDDPanelWidget* PanelWidget);

	void EnterPanelHideOther(UCanvasPanel* WorkLayout, UDDPanelWidget* PanelWidget);
	void EnterPanelHideOther(UOverlay* WorkLayout, UDDPanelWidget* PanelWidget);

	void EnterPanelReverse(UCanvasPanel* WorkLayout, UDDPanelWidget* PanelWidget);
	void EnterPanelReverse(UOverlay* WorkLayout, UDDPanelWidget* PanelWidget);

	// ��ʾUI
	void ShowPanelDoNothing(UDDPanelWidget* PanelWidget);
	void ShowPanelHideOther(UDDPanelWidget* PanelWidget);
	void ShowPanelReverse(UDDPanelWidget* PanelWidget);

	// ����UI
	void HidePanelDoNothing(UDDPanelWidget* PanelWidget);
	void HidePanelHideOther(UDDPanelWidget* PanelWidget);
	void HidePanelReverse(UDDPanelWidget* PanelWidget);

	// ��������
	void ActiveMask(UCanvasPanel* WorkLayout, EPanelLucenyType LucenyType);
	void ActiveMask(UOverlay* WorkLayout, EPanelLucenyType LucenyType);

	// ת������,�����ַ����ڴ����UI������һ��
	void TransferMask(UDDPanelWidget* PanelWidget);

	// ��MaskPanel�Ƴ��������layout�����Ϊ�գ�˵��MaskPanel׼����ӵ����Layout
	// UPanelWidget��UOverlay��UCanvasPanel��ͬ�ĸ���
	void RemoveMaskPanel(UPanelWidget* WorkLayout = NULL);

protected:
	// ���ڵ�
	UCanvasPanel* RootCanvas;

	// ����Overlay�Ŀؼ�
	UPROPERTY()
		TArray<UOverlay*> ActiveOverlay;
	UPROPERTY()
		TArray<UOverlay*> UnActiveOverlay;

	// ����Cavnas�Ŀؼ�
	UPROPERTY()
		TArray<UCanvasPanel*> ActiveCanvas;
	UPROPERTY()
		TArray<UCanvasPanel*> UnActiveCanvas;

	// ����UI��壬��FName����ʱ�����ע�ᵽ��ܵ�ObjectName
	TMap<FName, UDDPanelWidget*> AllPanelGroup;

	// �Ѿ���ʾ��UI
	TMap<FName, UDDPanelWidget*> ShowPanelGroup;

	// ����ջ
	TMap<FName, UDDPanelWidget*> PopPanelStack;

	// �Ѿ����ع���UI��������,�����ظ�����
	TArray<FName> LoadedPanelName;

	// ������ǰ���ص����Ѿ��յ���ʾ����Ľ����������Ԥ��ʾ��
	TArray<FName> WaitShowPanelName;

	// ����ͼƬ,����ΪUPROPERTYҲ���Ա�����Դ����
	UPROPERTY()
		UImage* MaskPanel;

	// ͸����ֵ
	// ȫ͸�������ܴ�͸
	FLinearColor NormalLucency;
	// ��͸��
	FLinearColor TranslucenceLucency;
	// ��͸��
	FLinearColor ImPenetrableLucency;

	// ����ѭ���������������ʾ��������ʱѭ����������
	FName WaitShowTaskName;
};
