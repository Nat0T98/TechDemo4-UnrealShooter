// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyMainGM.h"
#include "Blueprint/UserWidget.h"
#include "CountdownWidget.generated.h"

UCLASS()
class TECH_DEMO_4_API UCountdownWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gamemode Base")
	AMyMainGM* GameModeBase;
};
