// Fill out your copyright notice in the Description page of Project Settings.


#include "TestFunctionLibrary.h"

int UTestFunctionLibrary::BitUp(int num, int bits){
	return num<<bits;
}

int UTestFunctionLibrary::BitDown(int num, int bits){
	return num >> bits;
}
