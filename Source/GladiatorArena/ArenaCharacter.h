// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ArenaCharacter.generated.h"

class APickableItemBase;
class APickableItemWeapon;
class UBoxComponent;

UCLASS()
class GLADIATORARENA_API AArenaCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AArenaCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	bool bIsAttacking = false;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	bool bIsAlive = true;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:

	bool PickShield(APickableItemBase* pickedShield);
	bool PickWeapon(APickableItemWeapon* pickedWeapon);

	APickableItemBase* MyShieldActor;
	APickableItemWeapon* MyWeaponActor;

	UBoxComponent* WeaponCollider;

	void Attack();

};
