#pragma once

#include "CoreMinimal.h"
#include "PlayMontageParameters.generated.h"

USTRUCT(BlueprintType)
struct FPlayMontageParameters
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TObjectPtr<UAnimMontage> Montage;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float PlayRate;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName SectionName;

    FPlayMontageParameters() : Montage(nullptr), PlayRate(1.0f), SectionName(NAME_None) {}
    FPlayMontageParameters(UAnimMontage* InMontage, float InPlayRate, FName InSectionName) 
        : Montage(InMontage), PlayRate(InPlayRate), SectionName(InSectionName) {}
}; 