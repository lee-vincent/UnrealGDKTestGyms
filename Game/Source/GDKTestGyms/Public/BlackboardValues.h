// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlackboardValues.generated.h"

USTRUCT()
struct GDKTESTGYMS_API FBlackboardValues 
{
	GENERATED_BODY()

	UPROPERTY()
	FVector TargetAValue; // Points to run betweeen
	UPROPERTY()
	FVector TargetBValue;

	static FName TargetAName; // Bindings to the AI blackboard values
	static FName TargetBName;
};
