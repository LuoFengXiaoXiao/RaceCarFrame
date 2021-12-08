// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DDObject/DDUserWidget.h"
#include "LoadWealthWidget.generated.h"

class UImage;
class USizeBox;
/**
 * 
 */
UCLASS()
class RACECARFRAME_API ULoadWealthWidget : public UDDUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void DDInit() override;

	virtual void DDLoading() override;

	UFUNCTION()
		void LoadSingleTexture(FName BackName,UObject* BackWealth);
	UFUNCTION()
		void LoadKindTexture(TArray<FName> BackNames,TArray<UObject*> BackWealths);

	void ChangeImage();

	UFUNCTION()
		void BuildSingleWidget(FName BackName,UUserWidget* BackWidget);
	UFUNCTION()
		void BuildKindWidget(TArray<FName> BackNames,TArray<UUserWidget*> BackWidgets);
	UFUNCTION()
		void BuildMultiWidget(FName BackName, TArray<UUserWidget*> BackWidgets);

	DDCoroTask* BuildWidgetTest();

public:

	// 获取蓝图中创建的变量--ViewImage
	UPROPERTY(meta = (BindWidget))
		UImage* ViewImage;
	UPROPERTY(meta = (BindWidget))
		USizeBox* SizeBox_1;
	UPROPERTY(meta = (BindWidget))
		USizeBox* SizeBox_2;
	UPROPERTY(meta = (BindWidget))
		USizeBox* SizeBox_3;

	int32 ImageIndex;

	TArray<UTexture2D*> TextureGroup;
};
