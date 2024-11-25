// Fill out your copyright notice in the Description page of Project Settings.


#include "Cpp_TestActor.h"

ACpp_TestActor::ACpp_TestActor(){
	PrimaryActorTick.bCanEverTick = true;
	FloatValue_Anywhere = 10;
	FloatValue_Default = 5;
	FloatValue_Instance = 15;
}

void ACpp_TestActor::TestFunction(){

}

int ACpp_TestActor::IntFunction()
{
	return 0;
}

void ACpp_TestActor::InEditor()
{
}

void ACpp_TestActor::NativeEvent_Implementation(){
}
