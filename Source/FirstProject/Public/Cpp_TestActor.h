// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cpp_TestActor.generated.h"

USTRUCT(BlueprintType)
struct FCppTestStruct {
	GENERATED_USTRUCT_BODY()

};

UENUM(BlueprintType)
enum ECppEnum {
	FirstElement,
	SecondElement,
	ThirdElement
};

UCLASS(Abstract)
class FIRSTPROJECT_API ACpp_TestActor : public AActor
{
	GENERATED_BODY()
	
public:	

	UPROPERTY(EditAnywhere)
	//UPROPERTY(VisibleAnywhere)
	float FloatValue_Anywhere;
	UPROPERTY(EditDefaultsOnly)
	//UPROPERTY(VisibleDefaultsOnly)
	float FloatValue_Default;
	UPROPERTY(EditInstanceOnly)
	//UPROPERTY(VisibleInstanceOnly)
	float FloatValue_Instance;

	UPROPERTY(BlueprintReadWrite)
	float FloatValue_RW;
	UPROPERTY(BlueprintReadOnly)
	float FloatValue_R;

	UPROPERTY()
	AActor* Actor;
	UPROPERTY()
	TArray<float> FloatArray;


	ACpp_TestActor();

	UFUNCTION(BlueprintCallable)
	void TestFunction();
	UFUNCTION(BlueprintNativeEvent)
	void NativeEvent();
	UFUNCTION(BlueprintCallable, BlueprintPure)
	int IntFunction();
	UFUNCTION(CallInEditor)
	void InEditor();
};
