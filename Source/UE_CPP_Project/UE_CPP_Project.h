// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"

#define AssignDefaultSubobject(Pointer)\
(Pointer = CreateDefaultSubobject<std::remove_reference<decltype(*Pointer)>::type>(#Pointer))
