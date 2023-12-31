// Fill out your copyright notice in the Description page of Project Settings.

#include "PickupController.h"
#include "CharacterController.h"
#include "Kismet/GameplayStatics.h"


APickupController::APickupController()
{	
	PrimaryActorTick.bCanEverTick = true;
	GameModeBase = nullptr;
	PickupLocationController = nullptr;
	BoxCollider = nullptr;
	PickupSFX = nullptr;

	const int RandomInt = FMath::RandRange(0, 2);
	uint8 RandomByte = static_cast<uint8>(RandomInt);
	PickupType = static_cast<EPickups>(RandomByte);
}

void APickupController::OnBeginOverlapComponentEvent(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Cast<ACharacterController>(OtherActor))
	{
		ACharacterController* CharacterController = Cast<ACharacterController>(OtherActor);		
		GameModeBase->PickupsSpawned--;
		PickupLocationController->IsUsed = false;
		UGameplayStatics::PlaySoundAtLocation(this, PickupSFX, GetActorLocation(), 0.5f);
		
		switch(PickupType)
		{
		case EPickups::DoubleDamage:
			CharacterController->ActivateDoubleDamage();
			break;
		case EPickups::Health:
			CharacterController->Heal(50);
			break;
		case EPickups::Ammo:
			CharacterController->AmmoCounter(20);
			break;
		default:
			break;
		}
		Destroy();
	}
}

void APickupController::BeginPlay()
{
	Super::BeginPlay();
	BoxCollider = FindComponentByClass<UStaticMeshComponent>();
	BoxCollider->OnComponentBeginOverlap.AddDynamic(this, &APickupController::OnBeginOverlapComponentEvent);
}

void APickupController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

