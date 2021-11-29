// Fill out your copyright notice in the Description page of Project Settings.


#include "CoroActor.h"

ACoroActor::ACoroActor()
{
	IsAllowTickEvent = true;
}

void ACoroActor::DDEnable()
{
	Super::DDEnable();

	CoroStr = FString("CoroStr");

	IsCoroPause = true;

	InvokeRepeat("EchoInfo", 3.f, 2.f,this, &ACoroActor::EchoCoroInfo);

	//TempStartCoroutine(CoroTestTwo());
	//DDH::Debug()<<"StartCoroutine-->" << StartCoroutine("CoroTestThree", CoroTestThree())<<DDH::Endl();

	//DDStartCoroutine(CoroTestThree());
}

void ACoroActor::DDTick(float DeltaSeconds)
{
	Super::DDTick(DeltaSeconds);

	//CoroTestOne(DeltaSeconds);

	// 协程帧循环逻辑
	//TArray<CoroTask*> TempTask;
	//for (int i = 0;i<TaskList.Num();++i)
	//{
	//	TaskList[i]->Work(DeltaSeconds);
	//	if (TaskList[i]->IsFinish())
	//		TempTask.Push(TaskList[i]);
	//}
	//for (int i = 0;i<TempTask.Num();++i)
	//{
	//	TaskList.Remove(TempTask[i]);
	//	delete TempTask[i];
	//}

	TArray<DDCoroTask*> TempTask;
	for (int i = 0; i < DDTaskList.Num(); ++i)
	{
		DDTaskList[i]->Work(DeltaSeconds);
		if (DDTaskList[i]->IsFinish())
			TempTask.Push(DDTaskList[i]);
	}
	for (int i = 0; i < TempTask.Num(); ++i)
	{
		DDTaskList.Remove(TempTask[i]);
		delete TempTask[i];
	}

	TimeCount++;
	if (TimeCount == 500)
		IsCoroPause = false;
}

void ACoroActor::CoroTestOne(float DeltaSeconds)
{
	// 帧函数中运行，但是是没隔3秒运行一次
	if (TimeNode.UpdateOperate(DeltaSeconds, 3.f))
		goto LABEL_END;
	// 运行逻辑代码
	DDH::Debug() << "CoroTestOne" << DDH::Endl();

LABEL_END:
	;
}

CoroTask* ACoroActor::CoroTestTwo()
{
	struct ValueTask:public CoroTask
	{
		ACoroActor* D;
		ValueTask(ACoroActor* Data, int32 CoroCount) :CoroTask(CoroCount) { D = Data; }
		// 所有需要保存状态的变量都需要定义成类变量
		// 所有循环判断的变量都需要定义成类变量

		int32 i;
		int32 j;

		virtual void Work(float DeltaTime) override
		{
			goto LABEL_PICKER;

		LABEL_START:
			DDH::Debug() << "LABEL_START-->0" << DDH::Endl();

		LABEL_0:
			if (CoroStack[0]->UpdateOperate(&(D->IsCoroPause)))
				goto LABEL_END;
			DDH::Debug() << "LABEL_0-->1" << DDH::Endl();

		LABEL_1:
			if (CoroStack[1]->UpdateOperate())
				goto LABEL_END;
			DDH::Debug() << "LABEL_1-->2" << DDH::Endl();


		LABEL_2:
			if (CoroStack[2]->UpdateOperate([this]() {return D->PauseLambuda(); }))
				goto LABEL_END;
			DDH::Debug() << "LABEL_2-->3" << DDH::Endl();


			goto LABEL_END;

		LABEL_PICKER:
			if (CoroStack[0]->IsActive) goto LABEL_0;
			if (CoroStack[1]->IsActive) goto LABEL_1;
			if (CoroStack[2]->IsActive) goto LABEL_2;
			goto LABEL_START;

		LABEL_END:
			;
		}
	};
	return new ValueTask(this,2);
}

DDCoroTask* ACoroActor::CoroTestThree()
{
	// 协程参数区
	DDCORO_PARAM(ACoroActor);
	// 可以保存状态的参数
	int i, j;

	// 协程方法主体开始
#include DDCORO_BEGIN()

	DDH::Debug() <<"YieldStart-->"<< 0 << DDH::Endl();

#include DDYIELD_READY()
	DDYIELD_RETURN_BOOL(&(D->IsCoroPause));

	DDH::Debug() << "BoolYield-->" << 1 << DDH::Endl();

#include DDYIELD_READY()
	DDYIELD_RETURN_LAMB(D->PauseLambuda(););

	DDH::Debug() << "LAMBYield-->" << 2 << DDH::Endl();

#include DDYIELD_READY()

	DDYIELD_RETURN_SECOND(10);

	DDH::Debug() << "SecondYield-->" << 4 << DDH::Endl();

#include DDYIELD_READY()
	DDYIELD_RETURN_FUNC(D, &ACoroActor::PauseFunPtr);

	DDH::Debug() << "FuncYield-->" << 5 << DDH::Endl();

#include DDYIELD_READY()

	DDYIELD_RETURN_TICK(300);

	DDH::Debug() << "TickYield-->" << 3 << DDH::Endl();

	for (i = 0; i < 10; i++)
	{
		for (j = 0;j<5;j++)
		{
#include DDYIELD_READY()
			DDYIELD_RETURN_TICK(20);
			DDH::Debug() << "i = " << i << ",j = " << j << DDH::Endl();

			if (i*10+j>20)
			{
#include DDYIELD_READY()
				DDYIELD_RETURN_STOP();
			}
		}
	}

#include DDYIELD_READY()

	DDYIELD_RETURN_SECOND(10);

	DDH::Debug() << "SecondYield-->" << 6 << DDH::Endl();


	// 协程方法主体结束
#include DDCORO_END()

}

DDCoroTask* ACoroActor::CoroFunc()
{
	// 协程参数区
	DDCORO_PARAM(ACoroActor);
	// 可以保存状态的参数（协程方法变量）

	// 协程方法主体开始
#include DDCORO_BEGIN()
	// 协程方法主体逻辑，至少有一个逻辑代码
#include DDYIELD_READY()

	DDYIELD_RETURN_SECOND(10);

	DDH::Debug() << "SecondYield-->" << 6 << DDH::Endl();

	// 协程方法主体结束
#include DDCORO_END()
}

void ACoroActor::DDStartCoroutine(DDCoroTask* InTask)
{
	DDTaskList.Push(InTask);
}

void ACoroActor::TempStartCoroutine(CoroTask* InTask)
{
	TaskList.Push(InTask);
}

void ACoroActor::EchoCoroInfo()
{
	DDH::Debug() << "EchoCoroInfo" << DDH::Endl();
}

bool ACoroActor::PauseFunPtr()
{
	static int32 FunPtrTime = 0;
	FunPtrTime++;
	if (FunPtrTime == 300)
		return false;
	return true;
}

bool ACoroActor::PauseLambuda()
{
	static int32 LambudaTime = 0;
	LambudaTime++;
	if (LambudaTime == 600)
		return false;
	return true;
}

#if 0
// 协程参数分块
#pragma region DDCORO_PARAM
struct DGCoroTask :public DDCoroTask
{
	ACoroActor* D;
	DGCoroTask(ACoroActor* Data, int32 CoroCount) :DDCoroTask(CoroCount) { D = Data; }
#pragma endregion
	// 用来定义类变量，需要保存状态字变量
#define DDYIELD_COUNT -1

// work方法开头
#pragma region DDCORO_WORK_START
	virtual void Work(float DeltaTime) override
	{
		goto DDCORO_LABEL_PICKER;

	DDCORO_LABEL_START:
#pragma endregion

		// 协程方法逻辑
#pragma region CoroFunCode
#if DDYIELD_COUNT == -1
#define DDYIELD_COUNT 0
		DDCORO_LABEL_0 :
#elif DDYIELD_COUNT == 0
#define DDYIELD_COUNT 1
		DDCORO_LABEL_1 :
#endif
			if (CoroStack[DDYIELD_COUNT]->UpdateOperate(&(D->IsCoroPause)))
				goto DDCORO_LABEL_END;

#if DDYIELD_COUNT == -1
#define DDYIELD_COUNT 0
		DDCORO_LABEL_0 :
#elif DDYIELD_COUNT == 0
#define DDYIELD_COUNT 1
		DDCORO_LABEL_1 :
#endif
			if (CoroStack[DDYIELD_COUNT]->UpdateOperate(10))
				goto DDCORO_LABEL_END;
#pragma endregion

		// work方法中间
#pragma region DDCORO_WORK_MIDDLE
		goto DDCORO_LABEL_END;

	DDCORO_LABEL_PICKER:
#pragma endregion

		// 协程条件跳转代码
#pragma region CoroPicker
#if DDYIELD_COUNT == 0
		if (CoroStack[0]->IsActive) goto DDCORO_LABEL_0;
#elif DDYIELD_COUNT == 1
		if (CoroStack[0]->IsActive) goto DDCORO_LABEL_0;
		if (CoroStack[1]->IsActive) goto DDCORO_LABEL_1;
#endif
#pragma endregion

		// work方法结尾
#pragma region DDCORO_WORK_END
		goto DDCORO_LABEL_START;

	DDCORO_LABEL_END:
		;
	}
};
return new DGCoroTask(this, DDYIELD_COUNT);
#pragma endregion
#endif