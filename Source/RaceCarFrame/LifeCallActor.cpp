// Fill out your copyright notice in the Description page of Project Settings.


#include "LifeCallActor.h"

void ALifeCallActor::DDInit()
{
	Super::DDInit();

	TimeCounter = 0;

	IsAllowTickEvent = true;

	//DDH::Debug()<<"DDInit"<<DDH::Endl();
}

void ALifeCallActor::DDLoading()
{
	Super::DDLoading();
	//DDH::Debug() << "DDLoading" << DDH::Endl();

}


void ALifeCallActor::DDRegister()
{
	Super::DDRegister();
	//DDH::Debug() << "DDRegister" << DDH::Endl();

	RegFunHandle = RegisterFunPort<int32, FString>((int32)ERCGameModule::Player, "RegCall", [this](FString InfoStr) {
		return RegTest(InfoStr);
		});
}

void ALifeCallActor::DDEnable()
{
	Super::DDEnable();
	//DDH::Debug() << "DDEnable" << DDH::Endl();

	//TestReflect(ModuleIndex,"TestReflect",50,"Happy Halloween!!!",true);
	//TestReflectParam* ResultParam =  TestReflectRT(ModuleIndex,"TestReflect",50,"Happy Halloween!!!",true);
	
	// 调用其他模组的方法,需要IDriver去执行
	//TestReflectParam* ResultParam = TestReflectRT((int32)ERCGameModule::HUD, "TestReflect", 50, "Happy Halloween!!!", true);
	//DDH::Debug() << "ResultParam--> "<< ResultParam->BackResult() << DDH::Endl();
	//delete ResultParam;

	//TestReflectNoParam((int32)ERCGameModule::HUD,"TestReflectNoParam");
}

void ALifeCallActor::DDTick(float DeltaSeconds)
{
	Super::DDTick(DeltaSeconds);
	//DDH::Debug(0.f) << "DDTick" << DDH::Endl();

	TimeCounter++;

	if (TimeCounter<3)
	{
		//DDH::Debug() << "DDTick --> " << TimeCounter << DDH::Endl();
	}
	else if(TimeCounter==450)
	{
		//DDDestroy();
		//DDH::Debug() << "DDDestroy" << DDH::Endl();
		// 下边这种方式会崩溃,修改其代码，防止传入野指针
		//RegFunHandle.Unregister();
	}
}

void ALifeCallActor::DDDisable()
{
	Super::DDDisable();
	//DDH::Debug() << "DDDisable" << DDH::Endl();

}

void ALifeCallActor::DDUnRegister()
{
	Super::DDUnRegister();
	//DDH::Debug() << "DDUnRegister" << DDH::Endl();
	// 如果有设置调用接口与方法接口，建议在DDUnRegister也写上注销方法
	//RegFunHandle.Unregister();
}

void ALifeCallActor::DDunLoading()
{
	Super::DDunLoading();
	//DDH::Debug() << "DDunLoading" << DDH::Endl();

}

void ALifeCallActor::DDRelease()
{
	Super::DDRelease();
	//DDH::Debug() << "DDRelease" << DDH::Endl();

}

void ALifeCallActor::AcceptCall(FString InfoStr)
{
	DDH::Debug()<<GetObjectName()<<"-->"<<InfoStr<<DDH::Endl();
}

int32 ALifeCallActor::RegTest(FString InfoStr)
{
	DDH::Debug(0.f) << "RegCall --> " << InfoStr << DDH::Endl();
	return 123;
}
