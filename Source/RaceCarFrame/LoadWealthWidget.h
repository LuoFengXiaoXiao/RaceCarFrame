// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DDObject/DDUserWidget.h"
#include "LoadWealthWidget.generated.h"

class UImage;
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

public:

	// ��ȡ��ͼ�д����ı���--ViewImage
	UPROPERTY(meta = (BindWidget))
		UImage* ViewImage;
};
