// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DDObject/DDActor.h"
#include "CoroActor.generated.h"


// Э�̲��Ե��� Coroutines
// Э�̽ṹ�ڵ�
struct CoroNode
{
	// ����״̬
	bool IsActive;
	// ʣ��ʱ�䣬ʣ��֡
	float RemainTime;
	// ����ί��
	FCoroCondition ConditionDele;
	// ���캯��
	CoroNode() : IsActive(false) {}

	// �ӳٶ���֡����ִ��
	bool UpdateOperate(int32 SpaceTick)
	{
		if (!IsActive)
		{
			RemainTime = SpaceTick;
			IsActive = true;
			return true;
		}
		else
		{
			RemainTime -= 1;
			if (RemainTime>0)
				return true;
			else
			{
				IsActive = false;
				return false;
			}
		}
	}

	// �ӳٶ����룬֡���º���,����true,�ͼ�������false��ִ�к�������
	bool UpdateOperate(float DeltaTime, float SpaceTime)
	{
		if (!IsActive)
		{
			RemainTime = SpaceTime;
			IsActive = true;
			return true;
		}
		else
		{
			RemainTime -= DeltaTime;
			if (RemainTime > 0)
				return true;
			else
			{
				IsActive = false;
				return false;
			}
		}
	}
	// bool����ָ����𣬱���Ϊtrue���������Ϊfalse��ִ�к�������
	bool UpdateOperate(bool* Condition)
	{
		if (!IsActive)
		{
			IsActive = true;
			return true;
		}
		else
		{
			if (*Condition)
				return true;
			else
			{
				IsActive = false;
				return false;
			}
		}
	}
	// ί�к�������,��������true��������𣬷���false��ִ�к�������
	template<typename UserClass>
	bool UpdateOperate(UserClass* UserObj, typename FCoroCondition::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod)
	{
		if (!IsActive)
		{
			if (!ConditionDele.IsBound())
				ConditionDele.BindUObject(UserObj, InMethod);
			IsActive = true;
			return true;
		}
		else
		{
			if (ConditionDele.Execute())
				return true;
			else
			{
				IsActive = false;
				return false;
			}
		}
	}

	// lambuda���ʽ����
	bool UpdateOperate(TFunction<bool()> InFunction)
	{
		if (!IsActive)
		{
			IsActive = true;
			return true;
		}
		else
		{
			if (InFunction())
				return true;
			else
			{
				IsActive = false;
				return false;
			}
		}
	}

	// ֹͣЭ��
	bool UpdateOperate()
	{
		IsActive = false;
		return true;
	}
};

struct CoroTask
{
	TArray<CoroNode*> CoroStack;
	// ���캯��
	CoroTask(int32 CoroCount)
	{
		for (int i = 0; i <= CoroCount; ++i)
			CoroStack.Push(new CoroNode());
	}
	// ��������
	virtual ~CoroTask()
	{
		for (int i = 0;i<CoroStack.Num();++i)
			delete CoroStack[i];
	}
	// ʵ�����е�֡����
	virtual void Work(float DeltaTime) {}
	// �Ƿ����״̬
	bool IsFinish()
	{
		bool Flag = true;
		for (int i = 0; i< CoroStack.Num();++i)
		{
			if (CoroStack[i]->IsActive)
			{
				Flag = false;
				break;
			}
		}
		return Flag;
	}
};
/**
 * 
 */
UCLASS()
class RACECARFRAME_API ACoroActor : public ADDActor
{
	GENERATED_BODY()

public:
	ACoroActor();

	virtual void DDEnable() override;

	virtual void DDTick(float DeltaSeconds) override;

protected:

	void CoroTestOne(float DeltaSeconds);

	CoroTask* CoroTestTwo();

	// �궨��Ĳ��Է���
	DDCoroTask* CoroTestThree();

	void StartCoroutine(CoroTask* InTask);
	
	void EchoCoroInfo();

	bool PauseFunPtr();

	bool PauseLambuda();

protected:
	CoroNode TimeNode;

	TArray<CoroTask*> TaskList;

	FString CoroStr;

	bool IsCoroPause;

	int32 TimeCount;
};
