// Fill out your copyright notice in the Description page of Project Settings.


#include "DDCore/DDDriver.h"
#include <Kismet/GameplayStatics.h>
#include "DDObject/DDOO.h"


// Sets default values
ADDDriver::ADDDriver()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	// ��ʼ���Լ�������ģ��
	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
	RootComponent = RootScene;

	Center = CreateDefaultSubobject<UDDCenterModule>(TEXT("Center"));
	Center->SetupAttachment(RootComponent);
}

void ADDDriver::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	
	// ע�������Driver��UDDCommon
	UDDCommon::Get()->InitDriver(this);

	// ����Ϸ����֮ǰ�������һ��ģ��ID���趨���������ע����ģ�鵽����
	Center->IterChangeModuleType(Center, ModuleType);
	Center->TotalGatherModule(ModuleType);

	// ��������ģ���ģ��
	Center->IterCreateManeger(Center);
}

// Called when the game starts or when spawned
void ADDDriver::BeginPlay()
{
	Super::BeginPlay();
	
	// ע��Gameplay�����
	RegisterGamePlay();

	// ��������Init����
	Center->IterModuleInit(Center);
}

void ADDDriver::RegisterGamePlay()
{
	// ��ȡGameInstance
	UGameInstance* GameInstance = UGameplayStatics::GetGameInstance(GetWorld());
	// ������ڲ��̳���IDDOO����ע���Center�������Ͷ���������GameInstance
	if (GameInstance && Cast<IDDOO>(GameInstance))
	{
		Cast<IDDOO>(GameInstance)->RegisterToModule("Center","GameInstance","GameInstance");
	}

	// ��ȡplayercontroller��ע�ᵽDDCommon
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(),0);
	// ע�ᵽCommon
	if(!PlayerController) DDH::Debug()<<"No PlayerController!!!"<<DDH::Endl();
	else UDDCommon::Get()->InitController(PlayerController);
}

// Called every frame
void ADDDriver::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!IsBeginPlay)
	{
		// ��������Begin����
		Center->IterModuleBeginPlay(Center);
		// ִֻ��һ��
		IsBeginPlay = true;
	}
	else
		Center->IterModuleTick(Center, DeltaTime);

}

bool ADDDriver::RegisterToModule(IDDOO* ObjectInst)
{
	// ��������ģ�����ע��
	return Center->RegisterToModule(ObjectInst);
}

#if WITH_EDITOR
void ADDDriver::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	if (PropertyChangedEvent.Property && PropertyChangedEvent.Property->GetFName() == GET_MEMBER_NAME_CHECKED(ADDDriver,ModuleType))
	{
		Center->IterChangeModuleType(Center, ModuleType);
	}
}

#endif

void ADDDriver::ExecuteFunction(DDModuleAgreement Agreement, DDParam* Param)
{
	Center->AllotExecuteFunction(Agreement,Param);
}

void ADDDriver::ExecuteFunction(DDObjectAgreement Agreement, DDParam* Param)
{
	Center->AllotExecuteFunction(Agreement, Param);
}

