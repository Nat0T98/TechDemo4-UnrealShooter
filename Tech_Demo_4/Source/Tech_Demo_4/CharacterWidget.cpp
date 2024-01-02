// Fill out your copyright notice in the Description page of Project Settings.

#include "CharacterWidget.h"
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

void UCharacterWidget::NativeConstruct()
{
	Super::NativeConstruct();
	Splatter();
}

void UCharacterWidget::Splatter()
{
	if (SplatterEffect != nullptr)
	{
		PlayAnimation(SplatterEffect, 0.0f, 1, EUMGSequencePlayMode::Forward, 1.0f);
	}
}
