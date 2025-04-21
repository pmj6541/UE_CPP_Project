#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Fly.generated.h"

UCLASS()
class UE_CPP_PROJECT_API AFly : public AActor
{
    GENERATED_BODY()

public:
    AFly();

protected:
    virtual void BeginPlay() override;
    
public:
    virtual void Tick(float DeltaTime) override;

public:
    void DestroyEffect(float Damage);
};