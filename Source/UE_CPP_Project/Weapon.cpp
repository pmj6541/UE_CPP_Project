// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "Fly.h"
#include "UE_CPP_Project.h"

// Sets default values
AWeapon::AWeapon()
{

}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FPlayMontageParameters AWeapon::GetMontageData(ECharacterState State, int8 ComboCount)
{
    return FPlayMontageParameters();
}

TArray<TSubclassOf<ASkill>> AWeapon::GetSkillTypes() const
{
    return TArray<TSubclassOf<ASkill>>();
}


void AWeapon::AddFly(TObjectPtr<AFly> InFly)
{
}

void AWeapon::ClearFlies()
{
}

void AWeapon::ActivateActionA()
{
}

void AWeapon::DeactivateActionA()
{
}

void AWeapon::ActivateActionB()
{
}

void AWeapon::DeactivateActionB()
{
}
