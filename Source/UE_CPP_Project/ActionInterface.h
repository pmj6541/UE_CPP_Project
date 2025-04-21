// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ActionInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UActionInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class UE_CPP_PROJECT_API IActionInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void BeginActionA() PURE_VIRTUAL(BeginActionA)
	virtual void BeginActionB() PURE_VIRTUAL(BeginActionB)
	virtual void EndActionA() PURE_VIRTUAL(EndActionA)
	virtual void EndActionB() PURE_VIRTUAL(EndActionB)
	

};
