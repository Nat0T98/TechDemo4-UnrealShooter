// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponController.h"
#include "Components/ArrowComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"

AWeaponController::AWeaponController()
{	
	PrimaryActorTick.bCanEverTick = true;
	isLaserOn = false;	
	Player = nullptr;
	LaserAsset = nullptr;
	Arrow = nullptr;
	Laser = nullptr;
}

void AWeaponController::BeginPlay()
{
	Super::BeginPlay();

	if (UArrowComponent* ArrowComponent = FindComponentByClass<UArrowComponent>())
	{
		Arrow = ArrowComponent;
	}
}

void AWeaponController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (!isLaserOn)
	{
		Laser = UGameplayStatics::SpawnEmitterAttached(LaserAsset, Arrow);
		isLaserOn = true;
	}
	else
	{
		FVector StartPos = Arrow->GetComponentLocation();
		FVector LaserDir = Player->Camera->GetForwardVector();
		FVector EndPos = StartPos + (LaserDir * 5000.0f);
		Laser->SetBeamSourcePoint(0, StartPos, 0);

		FHitResult Hit;
		FCollisionQueryParams Col;
		Col.AddIgnoredActor(this->GetOwner());
		if (Player)
		{
			Col.AddIgnoredActor(Player->GetOwner());
		}

		bool isHit = GetWorld()->LineTraceSingleByChannel(Hit, StartPos, EndPos, ECC_Visibility, Col);
    
		if (isHit)
		{
			Laser->SetBeamTargetPoint(0, Hit.Location, 0);
		}
		else
		{
			Laser->SetBeamTargetPoint(0, Hit.TraceEnd, 0);
		}
	}

	if (Player->GetIsAimedIn())	
	{
		Laser->SetVisibility(true);
	}
	else
	{
		Laser->SetVisibility(false);
	}
}

