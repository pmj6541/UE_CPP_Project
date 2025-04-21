// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Actable.h"
#include "PlayMontageParameters.h"
#include "Weapon.generated.h"

class UStaticMeshComponent;
class MontageDataAsset;
class ASkill;
class AFly;

enum class ECharacterState : uint8;

UCLASS(Abstract)
class UE_CPP_PROJECT_API AWeapon 
	: public AActor
	, public IActable
{
	GENERATED_BODY()

public:
	AWeapon();

protected:
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	FPlayMontageParameters GetMontageData(ECharacterState State, int8 ComboCount);

	TArray<TSubclassOf<ASkill>> GetSkillTypes() const;

	TArray<TObjectPtr<AFly>> GetFly() const;

	void AddFly(TObjectPtr<AFly> InFly);

	void ClearFlies();

#pragma region IActable
	virtual void ActivateActionA() override;
	virtual void DeactivateActionA() override;
	virtual void ActivateActionB() override;
	virtual void DeactivateActionB() override;
#pragma endregion
protected:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UStaticMeshComponent> Mesh;
private:
	FName SocketOnEquip;
	TMap<ECharacterState, FPlayMontageParameters> MontageData;
	float Damage;
	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<ASkill>> SkillTypes;
	UPROPERTY(EditDefaultsOnly)
	TArray<TScriptInterface<IActable>> Skills;
	bool bLookingMovement;

	UPROPERTY(EditDefaultsOnly)
	TArray<TObjectPtr<AFly>> Flies;

};
