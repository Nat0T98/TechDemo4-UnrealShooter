// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterController.h"
#include "PickupController.h"
#include "PickupLocationController.h"
#include "GameFramework/GameModeBase.h"
#include "Materials/MaterialInstanceConstant.h"
#include "MyMainGM.generated.h"

class UCountdownWidget;
class APickupController;

UCLASS()
class TECH_DEMO_4_API AMyMainGM : public AGameModeBase
{
	GENERATED_BODY()

protected:

	virtual void StartPlay() override;
	void Countdown();
	void Respawn();
	void SpawnPickup();
	void NewRound();
	void RestartLevel();

	UPROPERTY()
	TArray<ACharacterController*> Players;

	UPROPERTY()
	TArray<APickupLocationController*> PickupLocations;

	FTimerHandle TimerMins;
	FTimerHandle TimerSecs;

public:
	AMyMainGM();

	UPROPERTY(EditAnywhere, Category = "Team Colours")
	UMaterialInstanceConstant* BlueTeam;
	UPROPERTY(EditAnywhere, Category = "Team Colours")
	UMaterialInstanceConstant* RedTeam;

	UPROPERTY(EditAnywhere, Category = "Team Colours")
	TArray<UMaterialInstanceConstant*> Materials;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<class UUserWidget> PlayerHUD_Asset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	UUserWidget* PlayerHUD;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<class UUserWidget> CountdownTimer_Asset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	UUserWidget* CountdownTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Timer")
	int Minutes;
	UPROPERTY(BlueprintReadWrite, Category = "Timer");
	int Seconds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rounds")
	int MaxRounds;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rounds")
	int Round;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Winner")
	FString WinnerName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Winner")
	ESlateVisibility WinnerVisibility;

	UPROPERTY(EditAnywhere, Category = "Music")
	USoundBase* GameMusic;

	UPROPERTY(EditAnywhere, Category = "Pickups")
	UMaterialInstance* DoubleDamageMaterial;
	UPROPERTY(EditAnywhere, Category = "Pickups")
	UMaterialInstance* AmmoMaterial;
	UPROPERTY(EditAnywhere, Category = "Pickups")
	UMaterialInstance* HealthGainMaterial;
	UPROPERTY(EditAnywhere, Category = "Pickups")
	TSubclassOf<APickupController> PickupObject;

	int PickupsInLevel;

	UFUNCTION(BlueprintCallable, Category = "Timer")
	FText GetMinutes() const;
	UFUNCTION(BlueprintCallable, Category = "Timer")
	FText GetSeconds() const;

private:
	UPROPERTY(EditAnywhere, Category = "Audio")
	UAudioComponent* Audio;

};