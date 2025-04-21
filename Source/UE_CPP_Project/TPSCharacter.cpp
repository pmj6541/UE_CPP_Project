// Fill out your copyright notice in the Description page of Project Settings.


#include "TPSCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "CharacterState.h"
#include "Actable.h"
#include "Weapon.h"
#include "Skill.h"
#include "PlayMontageParameters.h"
#include "UE_CPP_Project.h"

// Sets default values
ATPSCharacter::ATPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	AssignDefaultSubobject(SpringArm)->SetupAttachment(GetRootComponent());

	// 플레이어 컨트롤러의 회전에 따라 SpringArm이 회전하도록 설정
	SpringArm->bUsePawnControlRotation = true;

	AssignDefaultSubobject(Camera)->SetupAttachment(SpringArm);
}

// Called when the game starts or when spawned
void ATPSCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ATPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATPSCharacter::AttachActorToMesh(AActor *InActor, FName InSocketName)
{
}

void ATPSCharacter::EquipWeapon(TObjectPtr<AWeapon> InWeapon)
{
}

void ATPSCharacter::UnEquipWeapon(TObjectPtr<AWeapon> InWeapon)
{
}

float ATPSCharacter::SetLifeNow(float InLifeNow)
{
    return 0.0f;
}

float ATPSCharacter::GetLifeNow() const
{
    return 0.0f;
}

float ATPSCharacter::GetLifeMax() const
{
    return 0.0f;
}

void ATPSCharacter::SetSkillEnabled(bool InSkillEnabled)
{
}

bool ATPSCharacter::IsHostileActor(AActor *InActor) const
{
    return false;
}

void ATPSCharacter::SetMaterialEmissiveColor(FLinearColor InColor)
{
}

void ATPSCharacter::Dodge()
{
}

bool ATPSCharacter::IsState(ECharacterState InState)
{
	return false;
}

bool ATPSCharacter::IsArmed()
{
	return false;
}

void ATPSCharacter::WeaponA()
{
}

void ATPSCharacter::WeaponB()
{
}

void ATPSCharacter::BeginActionA()
{
}

void ATPSCharacter::BeginActionB()
{
}

void ATPSCharacter::EndActionA()
{
}

void ATPSCharacter::EndActionB()
{
}

void ATPSCharacter::EnableAttack()
{
}

void ATPSCharacter::DisableAttack()
{
}

bool ATPSCharacter::IsSkillActivated()
{
	return false;
}

void ATPSCharacter::ZoomIn()
{
}

void ATPSCharacter::ZoomOut()
{
}

void ATPSCharacter::SkillA()
{
}

void ATPSCharacter::SkillB()
{
}

void ATPSCharacter::TopZoomIn()
{
}

void ATPSCharacter::TopZoomOut()
{
}

AWeapon *ATPSCharacter::GetWeaponNow()
{
    return nullptr;
}
