// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickableItemBase.h"
#include "PickableItemWeapon.generated.h"

class UBoxComponent;
class USphereComponent;
class USkeletalMeshComponent;

UCLASS()
class GLADIATORARENA_API APickableItemWeapon : public APickableItemBase
{
	GENERATED_BODY()
	
public:

	APickableItemWeapon();

	virtual void BeginPlay() override;

	UBoxComponent* GetDamageBox() const;

protected:

	UPROPERTY(EditAnywhere)
	USphereComponent* MySphere;

	UPROPERTY(EditAnywhere)
	USkeletalMeshComponent* MySkeletalMesh;

	UPROPERTY(EditAnywhere)
	UBoxComponent* DamageBox;
};
