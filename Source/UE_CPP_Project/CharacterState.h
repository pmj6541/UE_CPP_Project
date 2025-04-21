// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterState.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class ECharacterState : uint8
{
	Idle,       // 기본 상태
	Dodging,    // 회피 중
	Acting,     // 액션 중 (공격, 스킬 등)
	Arming,     // 무기 사용 중 (조준, 발사 등)
	Damaged,    // 피격 상태
	Died        // 사망 상태
};

