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

	virtual void DDTick(float DeltaSeconds) override;

	UFUNCTION()
		void LoadActorClass(FName BackName,UClass* BackWealth);

	UFUNCTION()
		void LoadKindClass(TArray<FName> BackNames,TArray<UClass*> BackWealths);

	UFUNCTION()
		void BuildActor(FName BackName,AActor* BackActor);

	UFUNCTION()
		void BuildActorKind(TArray<FName> BackNames,TArray<AActor*> BackActors);

	UFUNCTION()
		void BuildActorMulti(FName BackName, TArray<AActor*> BackActors);

	UFUNCTION()
		void BuildSingleObject(FName BackName, UObject* BackObject);
	UFUNCTION()
		void BuildKindObject(TArray<FName> BackNames, TArray<UObject*> BackObjects);
	UFUNCTION()
		void BuildMultiObject(FName BackName, TArray<UObject*> BackObjects);

	DDCoroTask* BuildObjectTest();

public:

	UPROPERTY(EditAnywhere)
		FTransform ViewTrans;

	UPROPERTY(EditAnywhere)
		float offsetValue;

	AActor* SingleActor;
	TArray<AActor*> KindActors;
};
