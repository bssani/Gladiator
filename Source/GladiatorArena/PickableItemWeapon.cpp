// Fill out your copyright notice in the Description page of Project Settings.


#include "PickableItemWeapon.h"
#include "Components/SphereComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/BoxComponent.h"

APickableItemWeapon::APickableItemWeapon()
{
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	MySphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	MySphere->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	MySkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Skeletal Mesh Hammer"));
	MySkeletalMesh->AttachToComponent(MySphere, FAttachmentTransformRules::KeepRelativeTransform);

	DamageBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Damage Box"));
	DamageBox->AttachToComponent(MySphere, FAttachmentTransformRules::KeepRelativeTransform);
}
void APickableItemWeapon::BeginPlay()
{
}

UBoxComponent* APickableItemWeapon::GetDamageBox() const
{
	return DamageBox;
}
