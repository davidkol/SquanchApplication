// Fill out your copyright notice in the Description page of Project Settings.

#include "MyBlueprintFunctionLibrary.h"


static FVector ExtractColor(FVector Color, float LumaMask)
{
// 	float Luma = FVector::DotProduct(Color, 1);
// 	float ColorMask = exp(-Luma * 2 * PI / LumaMask);
// 	Color = FMath::Lerp(Color, Luma, ColorMask);
// 	return Color / (FVector::DotProduct(Color, 2));
}