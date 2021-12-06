// Fill out your copyright notice in the Description page of Project Settings.


#include "LoadWealthWidget.h"
#include "Components/Image.h"

void ULoadWealthWidget::DDInit()
{
	Super::DDInit();
	AddToViewport(0);
}

void ULoadWealthWidget::DDLoading()
{
	Super::DDLoading();

	//LoadObjectWealth("ViewImage1", "LoadSingleTexture");
	LoadObjectWealthKind("ViewImage", "LoadKindTexture");
}

void ULoadWealthWidget::LoadSingleTexture(FName BackName, UObject* BackWealth)
{
	UTexture2D* tempTexture = Cast<UTexture2D>(BackWealth);
	if (tempTexture)
		ViewImage->SetBrushFromTexture(tempTexture);
	else
		DDH::Debug()<< BackName << " is not Texture2D" << DDH::Endl();
}

void ULoadWealthWidget::LoadKindTexture(TArray<FName> BackNames, TArray<UObject*> BackWealths)
{

}
