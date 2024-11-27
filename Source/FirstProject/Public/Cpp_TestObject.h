// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Cpp_TestObject.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable, DefaultToInstanced, EditInlineNew, CollapseCategories)
class FIRSTPROJECT_API UCpp_TestObject : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
		float FloatValue;
	
};
