// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DDObject/DDObject.h"
#include "ViewObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable,BlueprintType)
class RACECARFRAME_API UViewObject : public UDDObject
{
	GENERATED_BODY()
	
public:
	virtual void DDEnable() override;

protected:
	DDOBJFUNC(EchoSelfInfo);
};
