// Fill out your copyright notice in the Description page of Project Settings.


#include "DDCore/DDDriver.h"
#include <Kismet/GameplayStatics.h>
#include "DDObject/DDOO.h"


// Sets default values
ADDDriver::ADDDriver()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	// 初始化自己创建的模组
	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
	RootComponent = RootScene;

	Center = CreateDefaultSubobject<UDDCenterModule>(TEXT("Center"));
	Center->SetupAttachment(RootComponent);
}

void ADDDriver::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	
	// 注册世界和Driver到UDDCommon
	UDDCommon::Get()->InitDriver(this);

	// 在游戏运行之前必须进行一次模组ID的设定，在这里会注册子模组到数组
	Center->IterChangeModuleType(Center, ModuleType);
	Center->TotalGatherModule(ModuleType);

	// 创建所有模组的模块
	Center->IterCreateManeger(Center);
}

// Called when the game starts or when spawned
void ADDDriver::BeginPlay()
{
	Super::BeginPlay();
	
	// 注册Gameplay到框架
	RegisterGamePlay();

	// 迭代调用Init函数
	Center->IterModuleInit(Center);
}

void ADDDriver::RegisterGamePlay()
{
	// 获取GameInstance
	UGameInstance* GameInstance = UGameplayStatics::GetGameInstance(GetWorld());
	// 如果存在并继承自IDDOO，就注册进Center，类名和对象名都是GameInstance
	if (GameInstance && Cast<IDDOO>(GameInstance))
	{
		Cast<IDDOO>(GameInstance)->RegisterToModule("Center","GameInstance","GameInstance");
	}

	// 获取playercontroller并注册到DDCommon
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(),0);
	// 注册到Common
	if(!PlayerController) DDH::Debug()<<"No PlayerController!!!"<<DDH::Endl();
	else UDDCommon::Get()->InitController(PlayerController);
}

// Called every frame
void ADDDriver::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!IsBeginPlay)
	{
		// 迭代调用Begin函数
		Center->IterModuleBeginPlay(Center);
		// 只执行一次
		IsBeginPlay = true;
	}
	else
		Center->IterModuleTick(Center, DeltaTime);

}

bool ADDDriver::RegisterToModule(IDDOO* ObjectInst)
{
	// 调用中央模组进行注册
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

