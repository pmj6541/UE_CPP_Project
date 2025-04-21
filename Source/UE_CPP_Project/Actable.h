// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Actable.generated.h"

class AWeapon;


// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UActable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class UE_CPP_PROJECT_API IActable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void ActivateActionA() PURE_VIRTUAL(ActivateActionA)
	virtual void DeactivateActionA() PURE_VIRTUAL(DeactivateActionA)
	virtual void ActivateActionB() PURE_VIRTUAL(ActivateActionB)
	virtual void DeactivateActionB() PURE_VIRTUAL(DeactivateActionB)
};
