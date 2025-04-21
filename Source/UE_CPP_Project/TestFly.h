#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestFly.generated.h"

UCLASS()
class UE_CPP_PROJECT_API ATestFly : public AActor
{
    GENERATED_BODY()

public:
    ATestFly();

protected:
    virtual void BeginPlay() override;
    
public:
    virtual void Tick(float DeltaTime) override;

public:
    void DestroyEffect(float Damage);
};