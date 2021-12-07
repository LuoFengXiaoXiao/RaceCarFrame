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
	//LoadObjectWealthKind("ViewImage", "LoadKindTexture");
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
	for (int i = 0; i < BackWealths.Num(); ++i)
	{
		DDH::Debug() << BackNames[i] << DDH::Endl();
		TextureGroup.Push(Cast<UTexture2D>(BackWealths[i]));
	}

	ImageIndex = 0;

	InvokeRepeat("ChangeImage", 1.f, 1.f, this, &ULoadWealthWidget::ChangeImage);
}

void ULoadWealthWidget::ChangeImage()
{
	ViewImage->SetBrushFromTexture(TextureGroup[ImageIndex]);

	ImageIndex = ImageIndex + 1 >= TextureGroup.Num() ? 0 : ImageIndex + 1;
}
