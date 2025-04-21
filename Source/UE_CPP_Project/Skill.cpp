#include "Skill.h"
#include "UE_CPP_Project.h"

ASkill::ASkill()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ASkill::BeginPlay()
{
    Super::BeginPlay();
}

void ASkill::Tick(float DeltaTime)
{
}

bool ASkill::IsActivated() const
{
    return false;
}

FPlayMontageParameters ASkill::GetMontageData() const
{
    return FPlayMontageParameters();
}

void ASkill::ActivateActionA()
{
}

void ASkill::DeactivateActionA()
{
}

void ASkill::ActivateActionB()
{
}

void ASkill::DeactivateActionB()
{
}