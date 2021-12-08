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
	// ���ڵ�
	UCanvasPanel* RootCanvas;

	// ����Overlay�Ŀؼ�
	TArray<UOverlay*> ActiveOverlay;
	TArray<UOverlay*> UnActiveOverlay;

	// ����Cavnas�Ŀؼ�
	TArray<UCanvasPanel*> ActivePanel;
	TArray<UCanvasPanel*> UnActivePanel;

	// ����UI��壬��FName����ʱ�����ע�ᵽ��ܵ�ObjectName
	TMap<FName, UDDPanelWidget*> AllPanelGroup;

	// �Ѿ���ʾ��UI
	TMap<FName, UDDPanelWidget*> ShowPanelGroup;

	// ����ջ
	TMap<FName, UDDPanelWidget*> PopPanelStack;

	// �Ѿ����ع���UI��������,�����ظ�����
	TArray<FName> LoadedPanelName;


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

};
