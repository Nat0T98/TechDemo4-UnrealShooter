#include "CharacterController.h"
#include "CharacterWidget.h"
#include "WeaponController.h"
#include "Components/SlateWrapperTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"


ACharacterController::ACharacterController()
{ 	
	PrimaryActorTick.bCanEverTick = true;
	bUseControllerRotationYaw = false;

#pragma region Components
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetRelativeLocation(FVector(0, 20, 0));
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	SpringArm->TargetArmLength = 150.0f;
	SpringArm->SetRelativeLocation(FVector(0, 25, 75));
	SpringArm->SetRelativeRotation((FRotator(0.0f, 0.0f, 0.0f)));
	Camera->AttachToComponent(SpringArm, FAttachmentTransformRules::KeepRelativeTransform, USpringArmComponent::SocketName);
#pragma endregion

#pragma region Variables
	PlayerMove = GetCharacterMovement();
	IsAiming = false;
	IsDead = false;
	JustShot = false;
	IsShooting = false;
	
	MaxHealth = 200.0f;
	Health = MaxHealth;
	HealthPercentage = Health / MaxHealth;
	Kills = 0;
	ClipSize = 10;
	Ammo = ClipSize;
	MaxClips = 2;
	Clips = MaxClips;
	RemainingAmmo = 1.0f;
	
	ShootTime = 0.6f;
	ShotDelay = 0.0f;
	ReloadDuration = 3.3f;
	ReloadDelay = 0.0f;

	CrosshairVisible = ESlateVisibility::Hidden;
	ReloadVisible = ESlateVisibility::Hidden;
	
	IsDoubleDamageActive = false;
	DoubleDamageDuration = 10.0f;	
	DoubleDamageTimeRemaining = 0.0f;
	DamageMultiplier = 1;
	DoubleDamageVisible = ESlateVisibility::Hidden;
#pragma endregion	
}

void ACharacterController::BeginPlay()
{
	Super::BeginPlay();

	Origin = GetActorTransform();
	
	if (USkeletalMeshComponent* MeshComponent = FindComponentByClass<USkeletalMeshComponent>())
    {
		SkeletalMesh = MeshComponent;
		
		if (WeaponAsset)
		{
			FActorSpawnParameters SpawnParameters;
			SpawnParameters.Owner = this;
			SpawnParameters.Instigator = this;

			AWeaponController* Weapon = GetWorld()->SpawnActor<AWeaponController>(WeaponAsset, FVector(0,0,0), FRotator(0), SpawnParameters);

			if (Weapon)
			{
				Weapon->SetActorTransform(MeshComponent->GetSocketTransform(TEXT("WeaponSocket")));
				Weapon->AttachToComponent(MeshComponent, FAttachmentTransformRules::SnapToTargetIncludingScale, TEXT("WeaponSocket"));
				Cast<AWeaponController>(Weapon)->Player = this;
			}
		}
		
    	if (UAnimInstance* AnimInstance = MeshComponent->GetAnimInstance())
    	{
    		AnimationController = Cast<UCharacterAnimationController>(AnimInstance);
    	}
    }
}

void ACharacterController::Tick(const float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsReloading)
	{
		ReloadDelay += DeltaTime;

		if (ReloadDelay > ReloadDuration)
		{
			ReloadDelay = 0.0f;
			Ammo = ClipSize;
			RemainingAmmo = 1.0f;
			Clips--;
			IsReloading = false;
		}
	}

	if (AnimationController->Montage_IsPlaying(ReloadMontage) && ReloadVisible == ESlateVisibility::Hidden)
	{
		ReloadVisible = ESlateVisibility::Visible;
	}
	else if (!AnimationController->Montage_IsPlaying(ReloadMontage) && ReloadVisible != ESlateVisibility::Hidden)
	{
		ReloadVisible = ESlateVisibility::Hidden;
	}
	
	if ((IsAiming || IsDead) && IsReloading)
	{
		ReloadDelay = 0.0f;
		IsReloading = false;
	}

	if (IsShooting || JustShot)
	{
		ShotDelay += DeltaTime;

		if (ShotDelay > ShootTime)
		{
			ShotDelay = 0.0f;
			JustShot = false;
			
			if (IsShooting)
			{
				Shoot();
			}
		}
	}

	if (IsDoubleDamageActive)
	{
		DoubleDamageTimeRemaining = DoubleDamageDuration - (CurrentDoubleDamageTime - 1);
		CurrentDoubleDamageTime += DeltaTime;

		if (CurrentDoubleDamageTime > DoubleDamageDuration)
		{
			CurrentDoubleDamageTime = 0.0f;
			IsDoubleDamageActive = false;
			DoubleDamageVisible = ESlateVisibility::Hidden;
			DamageMultiplier = 1;
		}
	}
		
}

void ACharacterController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	PlayerInputComponent->BindAxis("MoveForward", this, &ACharacterController::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACharacterController::MoveRight);
	PlayerInputComponent->BindAxis("LookUp", this, &ACharacterController::LookUp);
	PlayerInputComponent->BindAxis("LookRight", this, &ACharacterController::LookRight);
		
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacterController::Jump);	
	PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &ACharacterController::Shoot);
	PlayerInputComponent->BindAction("Shoot", IE_Released, this, &ACharacterController::StopShoot);	
	PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &ACharacterController::Aim);
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &ACharacterController::Reload);
}

void ACharacterController::MoveForward(const float Value)
{
	if (Value && !IsDead)
	{
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void ACharacterController::MoveRight(const float Value)
{
	if (Value && !IsDead)
	{
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void ACharacterController::LookUp(const float Value)
{
	if (Value && !IsDead)
	{
		const float Temp = SpringArm->GetRelativeRotation().Pitch + Value;

		if (Temp < 25 && Temp > -50)
		{
			SpringArm->AddLocalRotation(FRotator(Value, 0, 0));
		}
	}
}

void ACharacterController::LookRight(const float Value)
{
	if (Value && !IsDead)
	{
		AddActorLocalRotation(FRotator(0, Value, 0));
	}
}

void ACharacterController::Jump()
{
	if (!IsDead)
	{
		Super::Jump();
	}
}

void ACharacterController::Shoot()
{
	if (IsAiming && !JustShot && !IsDead && Ammo > 0)
	{
		FHitResult Hit;

		FVector Start = Camera->GetComponentLocation();
		FVector ForwardVector = Camera->GetForwardVector();

		Start += (ForwardVector * SpringArm->TargetArmLength);

		FVector End = Start + (ForwardVector * 5000.0f);

		FCollisionQueryParams CollisionParams;
		CollisionParams.bTraceComplex = false;
		CollisionParams.AddIgnoredActor(this->GetOwner());

		bool bHitObject = GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECollisionChannel::ECC_Visibility, CollisionParams);

		if (bHitObject && Cast<ACharacterController>(Hit.Actor) != nullptr)
		{
			float BaseDamage = 0;

			if (Hit.BoneName == "Head")
			{
				BaseDamage = 50;
			}
			else
			{
				BaseDamage = 10;
			}

			float Damage = BaseDamage * DamageMultiplier;

			Cast<ACharacterController>(Hit.Actor)->TakeDamage(Damage);
		}

		UGameplayStatics::PlaySoundAtLocation(this, ShotSFX, GetActorLocation(), 2.0f);
		Ammo--;
		RemainingAmmo = (Ammo * 1.0) / (ClipSize * 1.0);
		IsShooting = true;
		JustShot = true;
		PlayAnimMontage(ShootMontage);
	}
}

void ACharacterController::StopShoot()
{
	IsShooting = false;
}

void ACharacterController::Reload()
{
	if (!IsDead && Clips > 0 && Ammo < ClipSize)
	{
		AimOut();
		ShotDelay = 0;
		IsReloading = true;
		PlayAnimMontage(ReloadMontage);
	}
}

void ACharacterController::Aim()
{
	if (!IsAiming && !IsDead)
	{
		AimIn();
	}
	else if (IsAiming && !IsDead)
	{
		AimOut();
	}
}

bool ACharacterController::GetIsAimedIn() const
{
	return IsAiming;
}

void ACharacterController::AimIn()
{
	IsAiming = true;
	SkeletalMesh->SetRelativeRotation(FRotator(SkeletalMesh->GetComponentRotation().Pitch, -70.0f, SkeletalMesh->GetComponentRotation().Roll));

	if (PlayerMove != nullptr)
	{
		PlayerMove->MaxWalkSpeed = 300.0f;
	}
	SpringArm->TargetArmLength = 75.0f;

	if (AnimationController != nullptr)
	{
		AnimationController->bIsAiming = IsAiming;
	}

	CrosshairVisible = ESlateVisibility::Visible;

	PlayAnimMontage(AimMontage);
}

void ACharacterController::AimOut()
{
	IsAiming = false;
	SkeletalMesh->SetRelativeRotation(FRotator(SkeletalMesh->GetComponentRotation().Pitch, -90.0f, SkeletalMesh->GetComponentRotation().Roll));

	if (PlayerMove != nullptr)
	{
		PlayerMove->MaxWalkSpeed = 600.0f;
	}
	SpringArm->TargetArmLength = 150.0f;

	if (AnimationController != nullptr)
	{
		AnimationController->bIsAiming = IsAiming;
	}

	CrosshairVisible = ESlateVisibility::Hidden;

	StopAnimMontage();
}

void ACharacterController::TakeDamage(const int Damage)
{
	if (Health > 0)
	{
		if (CharacterWidget != nullptr)
		{
			CharacterWidget->Fade();
		}
		Health -= Damage;
		HealthPercentage = Health / MaxHealth;
		
		if (Health <= 0)
		{
			IsDead = true;
			UGameplayStatics::PlaySoundAtLocation(this, DeathSFX, GetActorLocation(), 1.0f);
			AimOut();

			if (AnimationController != nullptr)
			{
				AnimationController->bIsDead = true;
			}

			StopAnimMontage();
		}
	}
}

void ACharacterController::Respawn()
{
	IsDead = false;
	AnimationController->bIsDead = false;
	Health = MaxHealth;
	HealthPercentage = Health / MaxHealth;
	Ammo = ClipSize;
	Clips = MaxClips;
	RemainingAmmo = 1.0f;
	JustShot = false;
	IsShooting = false;

	SetActorTransform(Origin);
	AimOut();
	Camera->SetRelativeLocation(FVector(0, 20, 0));
	SpringArm->SetRelativeLocation(FVector(0, 25, 90));
	SpringArm->SetRelativeRotation((FRotator(0.0f, 0.0f, 0.0f)));
}

void ACharacterController::Heal(const int HealAmount)
{
	Health += HealAmount;

	if (Health > MaxHealth)
	{
		Health = MaxHealth;
	}

	HealthPercentage = Health / MaxHealth;
}

void ACharacterController::IncrementAmmo(int IncrementAmount)
{
	if (Ammo < ClipSize)
	{
		const int Remainder = ClipSize - Ammo;

		if (IncrementAmount >= Remainder)
		{
			IncrementAmount -= Remainder;
			Ammo += Remainder;

			RemainingAmmo = (Ammo * 1.0) / (ClipSize * 1.0);
		}
	}

	if (Clips < MaxClips)
	{
		Clips += (IncrementAmount / ClipSize);

		if (Clips > MaxClips)
		{
			Clips = MaxClips;
		}
	}
}

void ACharacterController::ActivateDoubleDamage()
{
	CurrentDoubleDamageTime = 0.0f;
	IsDoubleDamageActive = true;
	DoubleDamageVisible = ESlateVisibility::Visible;
	DamageMultiplier = 2;
}