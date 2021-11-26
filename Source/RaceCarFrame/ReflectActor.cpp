// Fill out your copyright notice in the Description page of Project Settings.


#include "ReflectActor.h"

AReflectActor::AReflectActor()
{
	IsAllowTickEvent = true;
}

void AReflectActor::DDRegister()
{
	Super::DDRegister();
	RegCallHandle = RegisterCallPort<int32,FString>("RegCall");
}

void AReflectActor::DDEnable()
{
	IDDOO::DDEnable();
	//AcceptCallParam* Param = AcceptCallRT((int32)ERCGameModule::Center,EAgreementType::SelfObject,"LifeCallActor","AcceptCall","Say GoodBye!!!");
	//DDH::Debug()<<DDH::GetCallResult(Param->CallResult) << DDH::Endl();
	//delete Param;

	ElementList.Push(new AnyElement(2333));
	ElementList.Push(new AnyElement(FString("rain day")));
	ElementList.Push(new AnyElement(true));
	ElementList.Push(new AnyElement(FVector(1.0f,200.f,600.f)));

	//DDH::Debug() << ElementList[0]->Get<int32>() << DDH::Endl();
	//DDH::Debug() << ElementList[1]->Get<FString>() << DDH::Endl();
	//DDH::Debug() << ElementList[2]->Get<bool>() << DDH::Endl();
	//DDH::Debug() << ElementList[3]->Get<FVector>() << DDH::Endl();

	ReFunList<void, FString>([this](FString InfoStr) {AcceptCall(InfoStr); });
	ReFunList<int32,int32,FString,bool>([this](int32 Counter, FString InfoStr, bool InFlag) { return WealthCall(Counter,InfoStr,InFlag); });

	//FunList[0]->Excute<void,FString>(FString("it is so diff!!!"));
	//DDH::Debug()<<FunList[1]->Excute<int32,int32,FString,bool>(333,FString("Wealth Call!!!"),true)<<DDH::Endl();
}

void AReflectActor::DDTick(float DeltaSeconds)
{
	Super::DDTick(DeltaSeconds);
	//DDH::Debug(0.f) << RegCallHandle.Execute(FString::FromInt(TimeCounter++)) << DDH::Endl();

	//if (TimeCounter == 450)
	//	RegCallHandle.UnRegister();
}

void AReflectActor::AcceptCall(FString InfoStr)
{
	DDH::Debug() << GetObjectName() << "-->" << InfoStr << DDH::Endl();
}

int32 AReflectActor::WealthCall(int32 Counter, FString InfoStr, bool InFlag)
{
	DDH::Debug() << Counter << "-->" << InfoStr <<"-->"<< InFlag << DDH::Endl();
	return 7744;
}
