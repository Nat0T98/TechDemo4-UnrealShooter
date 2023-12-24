// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuWidget.h"

#include "Kismet/GameplayStatics.h"

void UMainMenuWidget::PlayGame() const
{
	UGameplayStatics::OpenLevel(GetWorld(), "Level1");
}
