// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TestFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTPROJECT_API UTestFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, BlueprintPure)
	static int BitUp(int num, int bits);
	UFUNCTION(BlueprintCallable, BlueprintPure)
	static int BitDown(int num, int bits);
};
