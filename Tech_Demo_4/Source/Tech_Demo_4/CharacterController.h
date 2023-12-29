// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterAnimationController.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "CharacterController.generated.h"

class UCharacterWidget;

UCLASS()
class TECH_DEMO_4_API ACharacterController : public ACharacter
{
	GENERATED_BODY()

public:
	ACharacterController();
	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	
	virtual void BeginPlay() override;

public:	
	void TakeDamage(int Damage);
	void Heal(int HealAmount);
	void IncrementAmmo(int IncrementAmount);
	void Respawn();
	void ActivateDoubleDamage();
	bool GetIsDead() const { return IsDead; }
	bool GetIsAimedIn() const;
	
	UAnimMontage* GetAimMontage() const { return AimMontage; }
	UAnimMontage* GetShootMontage() const { return ShootMontage; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerStats")
	FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerStats")
	int Kills;
	UPROPERTY(EditAnywhere, Category = "PlayerStats")
	float MaxHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerStats")
	float Health;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerStats")
	float HealthPercentage;
	UPROPERTY(EditAnywhere, Category = "PlayerStats")
	int ClipSize;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerStats")
	int Ammo;
	UPROPERTY(EditAnywhere, Category = "PlayerStats")
	int MaxClips;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerStats")
	int Clips;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerStats")
	float RemainingAmmo;		

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "States")
	ESlateVisibility CrosshairVisible;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "States")
	ESlateVisibility ReloadVisible;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Widget")
	UCharacterWidget* CharacterWidget;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Buffs")
	bool IsDoubleDamageActive;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Buffs")
	ESlateVisibility DoubleDamageVisible;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Buffs")	
	int DoubleDamageTimeRemaining;
	UPROPERTY(EditAnywhere, Category = "Buffs")
	int DamageMultiplier;

	FTransform Origin;

	UPROPERTY(EditAnywhere, Category = "Camera")
	UCameraComponent* Camera;		

private:
	
	UPROPERTY()
	UCharacterMovementComponent* PlayerMove;
	bool IsDead;
	bool IsShooting;
	bool IsAiming;	
	bool IsReloading;
	bool JustShot;	

	UPROPERTY(EditAnywhere, Category = "Timers")
	float ShootTime;
	float ShotDelay;
	float ReloadDuration;
	float ReloadDelay;

	UPROPERTY(EditAnywhere, Category = "Buffs")
	float DoubleDamageDuration;
	float CurrentDoubleDamageTime;	
	
	void MoveForward(float Value);
	void MoveRight(float Value);	
	void LookUp(float Value);
	void LookRight(float Value);	
	virtual void Jump() override;
	void Shoot();
	void StopShoot();
	void Reload();
	void Aim();	
	void AimIn();
	void AimOut();
	
	UPROPERTY(EditAnywhere, Category = "Spring Arm")
	USpringArmComponent* SpringArm;
	UPROPERTY(EditAnywhere, Category = "Animation Controller")
	UCharacterAnimationController* AnimationController;
	UPROPERTY(EditAnywhere, Category = "Skeletal Mesh")
	USkeletalMeshComponent* SkeletalMesh;

	UPROPERTY(EditAnywhere, Category = "Weapon")
	TSubclassOf<class AWeaponController> WeaponAsset;

	UPROPERTY(EditAnywhere, Category = "Montages")
	UAnimMontage* AimMontage;
	UPROPERTY(EditAnywhere, Category = "Montages")
	UAnimMontage* ReloadMontage;
	UPROPERTY(EditAnywhere, Category = "Montages")
	UAnimMontage* ShootMontage;

	UPROPERTY(EditAnywhere, Category = "SFX")
	USoundBase* ShotSFX;
	UPROPERTY(EditAnywhere, Category = "SFX")
	USoundBase* DeathSFX;
	UPROPERTY(EditAnywhere, Category = "SFX")
	USoundBase* ReloadSFX;
	UPROPERTY(EditAnywhere, Category = "SFX")
	USoundBase* RoundStartSFX;
};
