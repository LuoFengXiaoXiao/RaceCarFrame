// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DGTypes.generated.h"


#pragma region GamePart

// ��������Ϸ���ݴ�ŵ�λ��

// ģ��Լ�������Ҫʹ��DataDriven�����UI��ܣ���һ��Ҫ��HUDģ����ڵڶ�λ��UIFrame��ܹ�����ʼ����HUDģ����
UENUM()
enum class ERCGameModule :uint8
{
	Center = 0,  // ����ģ��
	HUD,        // �Լ��涨��ģ��˳��Ҳ���Ǵ�����Component����ð������˳��������
	Player,    // ���ģ��
};

// ��Ӧ�Ĳ�ͬ������Module����,����˴��ǲ˵��ؿ���ģ��
UENUM()
enum class ERCMenuModule:uint8
{
	Center,
	HUD,
};

#pragma  endregion

/**
 * 
 */
UCLASS()
class DATADRIVEN_API UDGTypes : public UObject
{
	GENERATED_BODY()
	
};
