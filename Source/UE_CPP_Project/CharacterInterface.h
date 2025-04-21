// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CharacterState.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "CharacterInterface.generated.h"

class AWeapon;
class UCharacterMovementComponent;


// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UCharacterInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class UE_CPP_PROJECT_API ICharacterInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void Dodge() PURE_VIRTUAL(Dodge)
	virtual bool IsState(ECharacterState State) PURE_VIRTUAL(IsState, return false;)
	virtual bool IsArmed() PURE_VIRTUAL(IsArmed, return false;)
	virtual void WeaponA() PURE_VIRTUAL(WeaponA)
	virtual void WeaponB() PURE_VIRTUAL(WeaponB)
	virtual void BeginActionA() PURE_VIRTUAL(BeginActionA)
	virtual void EndActionA() PURE_VIRTUAL(EndActionA)
	virtual void BeginActionB() PURE_VIRTUAL(BeginActionB)
	virtual void EndActionB() PURE_VIRTUAL(EndActionB)
	virtual void EnableAttack() PURE_VIRTUAL(EnableAttack)
	virtual void DisableAttack() PURE_VIRTUAL(DisableAttack)
	virtual bool IsSkillActivated() PURE_VIRTUAL(IsSkillActivated, return false;)
	virtual void ZoomIn() PURE_VIRTUAL(ZoomIn)
	virtual void ZoomOut() PURE_VIRTUAL(ZoomOut)
	virtual void SkillA() PURE_VIRTUAL(SkillA)
	virtual void SkillB() PURE_VIRTUAL(SkillB)
	virtual void TopZoomIn() PURE_VIRTUAL(TopZoomIn)
	virtual void TopZoomOut() PURE_VIRTUAL(TopZoomOut)
	virtual AWeapon* GetWeaponNow() PURE_VIRTUAL(GetWeaponNow, return nullptr;)
	virtual UCharacterMovementComponent* GetCharacterMovement() const PURE_VIRTUAL(GetCharacterMovement, return nullptr;)

};
