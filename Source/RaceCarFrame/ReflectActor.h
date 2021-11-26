// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DDObject/DDActor.h"
#include "ReflectActor.generated.h"

struct AnyElement
{
	// 元素父结构体
	struct BaseElement
	{
	public:
		virtual ~BaseElement(){}
	};
	// 实际存储值的结构体
	template<typename T>
	struct ValueElement : public BaseElement
	{
	public:
		T Value;
		ValueElement(const T& InValue):Value(InValue){}
	};
	// 父结构体指针，用于存储实例化的子结构体的地址
	BaseElement* ElementPtr;

public:
	AnyElement():ElementPtr(NULL){}
	// 构造函数传入值并且实例化子结构体存储于父结构体指针
	template<typename T>
	AnyElement(const T& InValue):ElementPtr(new ValueElement<T>(InValue)){}
	~AnyElement(){delete ElementPtr;}
	// 获取保存的变量
	template<typename T>
	T& Get()
	{
		// 通过将父类指针强转为子类指针来获取子类指针内保存的值
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

	// 事件的注册，延时的方法的绑定
	virtual void DDRegister() override;

	virtual void DDEnable() override;

	virtual void DDTick(float DeltaSeconds) override;

	// 测试时需要被调用的方法
	UFUNCTION()
		void AcceptCall(FString InfoStr);

	// 测试DDMM下的反射方法
	UFUNCTION()
		int32 WealthCall(int32 Counter,FString InfoStr,bool InFlag);

	// 将函数转换为TFunction，并将其注册到结构体中
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
