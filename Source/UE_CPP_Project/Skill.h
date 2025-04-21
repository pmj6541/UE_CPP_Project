#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Actable.h"
#include "PlayMontageParameters.h"
#include "Skill.generated.h"

UCLASS(Abstract)
class UE_CPP_PROJECT_API ASkill 
    : public AActor
    , public IActable
{
    GENERATED_BODY()

public:
    ASkill();

protected:
    virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    UFUNCTION(BlueprintCallable, Category = "Skill")
    bool IsActivated() const;

    UFUNCTION(BlueprintCallable, Category = "Skill")
    FPlayMontageParameters GetMontageData() const;

#pragma region IActable
    virtual void ActivateActionA() override;
    virtual void DeactivateActionA() override;
    virtual void ActivateActionB() override;
    virtual void DeactivateActionB() override;
#pragma endregion


protected:
    /** 실행 상태 */
    UPROPERTY()
    bool bIsActivated;

}; 