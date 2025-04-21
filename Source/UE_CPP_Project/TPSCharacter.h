// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterInterface.h"
#include "PlayMontageParameters.h"
#include "TPSCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class IActable;
class AWeapon;
class ASkill;

enum class ECharacterState : uint8;

UCLASS(Abstract)
class UE_CPP_PROJECT_API ATPSCharacter 
	: public ACharacter
	, public ICharacterInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATPSCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void AttachActorToMesh(AActor* InActor, FName InSocketName);
	void EquipWeapon(TObjectPtr<AWeapon> InWeapon);
	void UnEquipWeapon(TObjectPtr<AWeapon> InWeapon);
	float SetLifeNow(float InLifeNow);
	float GetLifeNow() const;
	float GetLifeMax() const;
	void SetSkillEnabled(bool InSkillEnabled);
	bool IsHostileActor(AActor* InActor) const;
	void SetMaterialEmissiveColor(FLinearColor InColor);

#pragma region ICharacterInterface
	void Dodge() override;
	bool IsState(ECharacterState InState) override;
	bool IsArmed() override;
	void WeaponA() override;
	void WeaponB() override;
	void BeginActionA() override;
	void BeginActionB() override;
	void EndActionA() override;
	void EndActionB() override;
	void EnableAttack() override;
	void DisableAttack() override;
	bool IsSkillActivated() override;
	void ZoomIn() override;
	void ZoomOut() override;
	void SkillA() override;
	void SkillB() override;
	void TopZoomIn() override;
	void TopZoomOut() override;
	AWeapon* GetWeaponNow() override;
	virtual UCharacterMovementComponent* GetCharacterMovement() const override { return Super::GetCharacterMovement(); }
#pragma endregion

protected:

	float LifeNow;
	float LIfeMax;

	TMap<ECharacterState, FPlayMontageParameters> MontageData;

	bool bAttackEnabled;
	bool bAttackTransited;
	int8 AttackIndex;

	
	bool bSkillEnabled;
	int8 Team;
	int8 Alias;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<USpringArmComponent> SpringArm;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UCameraComponent> Camera;

	UPROPERTY(EditDefaultsOnly)
	TArray<TScriptInterface<IActable>> Weapons;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<AWeapon>> WeaponTypes;

	UPROPERTY(EditDefaultsOnly)
	TScriptInterface<IActable> WeaponNow;

	UPROPERTY(EditDefaultsOnly)
	TArray<TScriptInterface<IActable>> Skills;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<ASkill>> SkillTypes;

	UPROPERTY(EditDefaultsOnly)
	TScriptInterface<IActable> SkillNow;


	UPROPERTY(EditDefaultsOnly)
	TArray<TObjectPtr<ASkill>> ActableSkillSets;

};
