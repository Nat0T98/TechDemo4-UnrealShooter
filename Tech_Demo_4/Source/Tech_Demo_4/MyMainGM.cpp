// Fill out your copyright notice in the Description page of Project Settings.


#include "MyMainGM.h"
#include "CharacterWidget.h"
#include "CountdownWidget.h"
#include "EngineUtils.h"
#include "Blueprint/UserWidget.h"
#include "Components/AudioComponent.h"
#include "GameFramework/PlayerStart.h"

AMyMainGM::AMyMainGM()
{
	BlueTeam = nullptr;
	RedTeam = nullptr;
	PlayerHUD = nullptr;
	CountdownTimer = nullptr;
	GameMusic = nullptr;
	Audio = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));
	Minutes = 3;
	Seconds = 0;
	MaxRounds = 5;
	Round = 1;
	PickupsSpawned = 0;
	WinnerVisibility = ESlateVisibility::Hidden;
}


void AMyMainGM::StartPlay()
{
	Super::StartPlay();

	Audio->SetVolumeMultiplier(0.5f);

	if (GameMusic != nullptr)
	{
		Audio->SetSound(GameMusic);
	}

	Audio->Play();

	GetWorldTimerManager().SetTimer(TimerMins, this, &AMyMainGM::Countdown, 1.0f, true, 0.0f);
	GetWorldTimerManager().SetTimer(TimerSecs, this, &AMyMainGM::SpawnPickup, 15.0f, true, 0.0f);

	if (CountdownTimer_Asset)
	{
		CountdownTimer = CreateWidget<UUserWidget>(GetWorld(), CountdownTimer_Asset);
	}

	if (CountdownTimer != nullptr)
	{
		CountdownTimer->AddToViewport();
		CountdownTimer->SetVisibility(ESlateVisibility::Visible);
		Cast<UCountdownWidget>(CountdownTimer)->GameModeBase = this;
	}

	for (TActorIterator<APickupLocationController> ActorIterator(GetWorld()); ActorIterator; ++ActorIterator)
	{
		APickupLocationController* PickupLocationController = *ActorIterator;

		if (PickupLocationController != nullptr)
		{
			PickupLocations.Emplace(PickupLocationController);
		}
	}

	for (TActorIterator<ACharacterController> ActorIterator(GetWorld()); ActorIterator; ++ActorIterator)
	{
		ACharacterController* CharacterController = *ActorIterator;

		if (CharacterController != nullptr && CharacterController->ActorHasTag(TEXT("Player")))
		{
			Players.Emplace(CharacterController);

			if (CharacterController->GetController())
			{
				if (PlayerHUD_Asset)
				{
					PlayerHUD = CreateWidget<UUserWidget>(Cast<APlayerController>(CharacterController->GetController()), PlayerHUD_Asset);
				}

				if (PlayerHUD != nullptr)
				{
					Cast<UCharacterWidget>(PlayerHUD)->CharacterPawn = CharacterController->GetController()->GetPawn();
					Cast<UCharacterWidget>(PlayerHUD)->CharacterController = CharacterController;
					CharacterController->CharacterWidget = Cast<UCharacterWidget>(PlayerHUD);
					PlayerHUD->AddToPlayerScreen();
					PlayerHUD->SetVisibility(ESlateVisibility::Visible);
				}
			}
		}
	}

	TArray<APlayerStart*> PlayerStarts;

	for (TActorIterator<APlayerStart> ActorIterator(GetWorld()); ActorIterator; ++ActorIterator)
	{
		APlayerStart* PlayerStart = *ActorIterator;
		PlayerStarts.Emplace(PlayerStart);
	}

	for (uint8 Index = 0; Index < PlayerStarts.Num(); ++Index)
	{
		Players[Index]->SetActorTransform(PlayerStarts[Index]->GetActorTransform());
	}

	for (uint8 Index = 0; Index != Players.Num(); ++Index)
	{
		Players[Index]->FindComponentByClass<USkeletalMeshComponent>()->SetMaterial(0, Materials[Index]);

		if (Materials[Index] == RedTeam)
		{
			Cast<ACharacterController>(Players[Index])->Name = "Red";
		}
		else if (Materials[Index] == BlueTeam)
		{
			Cast<ACharacterController>(Players[Index])->Name = "Blue";
		}
	}
}

FText AMyMainGM::GetMinutes() const
{
	FNumberFormattingOptions FormattingOptions;
	FormattingOptions.MinimumIntegralDigits = 2;
	FormattingOptions.MaximumIntegralDigits = 2;

	return FText::AsNumber(Minutes, &FormattingOptions);
}

FText AMyMainGM::GetSeconds() const
{
	FNumberFormattingOptions FormattingOptions;
	FormattingOptions.MinimumIntegralDigits = 2;
	FormattingOptions.MaximumIntegralDigits = 2;

	return FText::AsNumber(Seconds, &FormattingOptions);
}

void AMyMainGM::Countdown()
{
	for (uint8 Index = 0; Index < Players.Num(); ++Index)
	{
		if (Players[Index]->GetIsDead())
		{
			NewRound();
		}
	}

	if (Seconds != 0)
	{
		Seconds--;
	}
	else
	{
		if (Minutes != 0)
		{
			Minutes--;
			Seconds = 59;
		}
		else
		{
			NewRound();
		}
	}
}

void AMyMainGM::Respawn()
{
	GetWorldTimerManager().ClearTimer(TimerMins);
	Audio->Play();
	
	for (uint8 Index = 0; Index < Players.Num(); ++Index)
	{
		Players[Index]->Respawn();
	}

	for (uint8 Index = 0; Index < PickupLocations.Num(); ++Index)
	{
		if (PickupLocations[Index]->IsUsed)
		{
			PickupLocations[Index]->ActiveLoc->Destroy();
			PickupLocations[Index]->ActiveLoc = nullptr;
			PickupLocations[Index]->IsUsed = false;
		}
	}

	Minutes = 3;
	Seconds = 0;
	PickupsSpawned = 0;
	GetWorldTimerManager().SetTimer(TimerMins, this, &AMyMainGM::Countdown, 1.0f, true, 0.0f);
	GetWorldTimerManager().SetTimer(TimerSecs, this, &AMyMainGM::SpawnPickup, 15.0f, true, 0.0f);
}

void AMyMainGM::NewRound()
{
	GetWorldTimerManager().ClearTimer(TimerMins);
	GetWorldTimerManager().ClearTimer(TimerSecs);
	Audio->AdjustVolume(4.0f, 0.0f, EAudioFaderCurve::Linear);
		
	Round++;

	if (Players.Num() == 2)
	{
		if (Players[0]->Health > Players[1]->Health)
		{
			Players[0]->Kills++;
		}
		else if (Players[0]->Health < Players[1]->Health)
		{
			Players[1]->Kills++;
		}
	}

	if (Round > MaxRounds)
	{
		if (Players[0]->Kills > Players[1]->Kills)
		{
			WinnerName = Players[0]->Name;
		}
		else if (Players[0]->Kills < Players[1]->Kills)
		{
			WinnerName = Players[1]->Name;
		}
		else
		{
			WinnerName = "None";
		}

		WinnerVisibility = ESlateVisibility::Visible;

		GetWorldTimerManager().SetTimer(TimerMins, this, &AMyMainGM::RestartLevel, 5.0f, false);
		return;
	}

	GetWorldTimerManager().SetTimer(TimerMins, this, &AMyMainGM::Respawn, 5.0f, false);
}

void AMyMainGM::RestartLevel()
{
	Round = 1;
	WinnerVisibility = ESlateVisibility::Hidden;

	for (uint8 Index = 0; Index < Players.Num(); ++Index)
	{
		Players[Index]->Kills = 0;
	}

	Respawn();
}


void AMyMainGM::SpawnPickup()
{
	if (PickupsSpawned < 4)
	{
		bool IsLocationSet = false;

		while (!IsLocationSet)
		{
			const int Random = FMath::RandRange(0, PickupLocations.Num() - 1);

			if (!PickupLocations[Random]->IsUsed && PickupObject != nullptr)
			{
				IsLocationSet = true;

				const FActorSpawnParameters SpawnParameters;
				PickupLocations[Random]->IsUsed = true;
				APickupController* PickupObj = GetWorld()->SpawnActor<APickupController>(PickupObject, PickupLocations[Random]->GetActorLocation(), FRotator(0), SpawnParameters);
				PickupsSpawned++;

				PickupObj->PickupLocationController = PickupLocations[Random];
				PickupLocations[Random]->ActiveLoc = PickupObj;
				PickupObj->GameModeBase = this;

				UStaticMeshComponent* CubeObj = PickupObj->FindComponentByClass<UStaticMeshComponent>();

				switch (FMath::RandRange(0, 2))
				{
				case 0:
					PickupObj->PickupType = EPickups::DoubleDamage;
					if (CubeObj)
					{
						CubeObj->SetMaterial(0, DoubleDamageMaterial);
					}
					break;
				case 1:
					PickupObj->PickupType = EPickups::Health;
					if (CubeObj)
					{
						CubeObj->SetMaterial(0, HealthGainMaterial);
					}
					break;
				case 2:
					PickupObj->PickupType = EPickups::Ammo;
					if (CubeObj)
					{
						CubeObj->SetMaterial(0, AmmoMaterial);
					}
					break;
				default:
					break;
				}
			}
		}
	}
}

