// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DDObject/DDActor.h"
#include "ReflectActor.generated.h"

struct AnyElement
{
	// Ԫ�ظ��ṹ��
	struct BaseElement
	{
	public:
		virtual ~BaseElement(){}
	};
	// ʵ�ʴ洢ֵ�Ľṹ��
	template<typename T>
	struct ValueElement : public BaseElement
	{
	public:
		T Value;
		ValueElement(const T& InValue):Value(InValue){}
	};
	// ���ṹ��ָ�룬���ڴ洢ʵ�������ӽṹ��ĵ�ַ
	BaseElement* ElementPtr;

public:
	AnyElement():ElementPtr(NULL){}
	// ���캯������ֵ����ʵ�����ӽṹ��洢�ڸ��ṹ��ָ��
	template<typename T>
	AnyElement(const T& InValue):ElementPtr(new ValueElement<T>(InValue)){}
	~AnyElement(){delete ElementPtr;}
	// ��ȡ����ı���
	template<typename T>
	T& Get()
	{
		// ͨ��������ָ��ǿתΪ����ָ������ȡ����ָ���ڱ����ֵ
		ValueElement<T>* SubPtr = static_cast<ValueElement<T>*>(ElementPtr);
		return SubPtr->Value;
	}
};

/**
 * 
 */
UCLASS()
class RACECARFRAME_API AReflectActor : public ADDActor
{
	GENERATED_BODY()
	

public:

	AReflectActor();

	// �¼���ע�ᣬ��ʱ�ķ����İ�
	virtual void DDRegister() override;

	virtual void DDEnable() override;

	virtual void DDTick(float DeltaSeconds) override;

	// ����ʱ��Ҫ�����õķ���
	UFUNCTION()
		void AcceptCall(FString InfoStr);

	// ����DDMM�µķ��䷽��
	UFUNCTION()
		int32 WealthCall(int32 Counter,FString InfoStr,bool InFlag);

	// ������ת��ΪTFunction��������ע�ᵽ�ṹ����
	template<typename RetType,typename... VarTypes>
	void ReFunList(TFunction<RetType(VarTypes...)> InsertFun);

protected:
	
	TArray<AnyElement*> ElementList;
	TArray<DDAnyFun*> FunList;

	DDCallHandle<int32, FString> RegCallHandle;

protected:
	int32 TimeCounter;

	DDOBJFUNC_ONE(AcceptCall,FString,InfoStr);

	//struct AcceptCallParam:DDParam
	//{
	//	struct  
	//	{
	//		FString InfoStr;
	//	} Parameter;

	//	FString InfoStr() {return Parameter.InfoStr;}
	//	AcceptCallParam() {ParamPtr = &Parameter;}
	//};

	//AcceptCallParam* AcceptCallRT(int32 modIndex,EAgreementType AgreementType,TArray<FName> ObjectGroup,FName FunctionName, FString InfoStr)
	//{
	//	DDObjectAgreement Agreement;
	//	Agreement.ModuleIndex = modIndex;
	//	Agreement.AgreementType = AgreementType;
	//	Agreement.ObjectGroup = ObjectGroup;
	//	Agreement.FunctionName = FunctionName;
	//	AcceptCallParam* Param = new AcceptCallParam();
	//	Param->Parameter.InfoStr = InfoStr;
	//	ExecuteFunction(Agreement,Param);
	//	return Param;
	//}

	//AcceptCallParam* AcceptCallRT(int32 modIndex, EAgreementType AgreementType,FName ObjName, FName FunctionName, FString InfoStr)
	//{
	//	DDObjectAgreement Agreement;
	//	Agreement.ModuleIndex = modIndex;
	//	Agreement.AgreementType = AgreementType;
	//	Agreement.ObjectGroup.Push(ObjName);
	//	Agreement.FunctionName = FunctionName;
	//	AcceptCallParam* Param = new AcceptCallParam();
	//	Param->Parameter.InfoStr = InfoStr;
	//	ExecuteFunction(Agreement, Param);
	//	return Param;
	//}

	//AcceptCallParam* AcceptCallRT(int32 modIndex,FName ObjName, FName FunctionName, FString InfoStr)
	//{
	//	DDObjectAgreement Agreement;
	//	Agreement.ModuleIndex = modIndex;
	//	Agreement.AgreementType = EAgreementType::SelfObject;
	//	Agreement.ObjectGroup.Push(ObjName);
	//	Agreement.FunctionName = FunctionName;
	//	AcceptCallParam* Param = new AcceptCallParam();
	//	Param->Parameter.InfoStr = InfoStr;
	//	ExecuteFunction(Agreement, Param);
	//	return Param;
	//}

	//void AcceptCall(int32 modIndex, EAgreementType AgreementType, TArray<FName> ObjectGroup, FName FunctionName, FString InfoStr)
	//{
	//	DDObjectAgreement Agreement;
	//	Agreement.ModuleIndex = modIndex;
	//	Agreement.AgreementType = AgreementType;
	//	Agreement.ObjectGroup = ObjectGroup;
	//	Agreement.FunctionName = FunctionName;
	//	AcceptCallParam* Param = new AcceptCallParam();
	//	Param->Parameter.InfoStr = InfoStr;
	//	ExecuteFunction(Agreement, Param);
	//	delete Param;
	//}

	//void AcceptCall(int32 modIndex, EAgreementType AgreementType, FName ObjName, FName FunctionName, FString InfoStr)
	//{
	//	DDObjectAgreement Agreement;
	//	Agreement.ModuleIndex = modIndex;
	//	Agreement.AgreementType = AgreementType;
	//	Agreement.ObjectGroup.Push(ObjName);
	//	Agreement.FunctionName = FunctionName;
	//	AcceptCallParam* Param = new AcceptCallParam();
	//	Param->Parameter.InfoStr = InfoStr;
	//	ExecuteFunction(Agreement, Param);
	//	delete Param;
	//}

	//void AcceptCall(int32 modIndex, FName ObjName, FName FunctionName, FString InfoStr)
	//{
	//	DDObjectAgreement Agreement;
	//	Agreement.ModuleIndex = modIndex;
	//	Agreement.AgreementType = EAgreementType::SelfObject;
	//	Agreement.ObjectGroup.Push(ObjName);
	//	Agreement.FunctionName = FunctionName;
	//	AcceptCallParam* Param = new AcceptCallParam();
	//	Param->Parameter.InfoStr = InfoStr;
	//	ExecuteFunction(Agreement, Param);
	//	delete Param;
	//}
};

template<typename RetType, typename... VarTypes>
void AReflectActor::ReFunList(TFunction<RetType(VarTypes...)> InsertFun)
{
	FunList.Push(new DDAnyFun(InsertFun));
}
