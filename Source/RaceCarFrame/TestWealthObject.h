// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DDObject/DDObject.h"
#include "TestWealthObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable,BlueprintType)
class RACECARFRAME_API UTestWealthObject : public UDDObject
{
	GENERATED_BODY()
	

public:

	virtual void DDLoading() override;

	UFUNCTION()
		void LoadActorClass(FName BackName,UClass* BackWealth);

	UFUNCTION()
		void LoadKindClass(TArray<FName> BackNames,TArray<UClass*> BackWealths);

public:

	UPROPERTY(EditAnywhere)
		FTransform ViewTrans;

	UPROPERTY(EditAnywhere)
		float offsetValue;
};
