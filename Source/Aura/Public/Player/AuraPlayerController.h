// Copyright noahvolson

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AuraPlayerController.generated.h"

// forward declarations
class UInputMappingContext;
class UInputAction;
class ITargetableInterface;
struct FInputActionValue;

/**
 * 
 */
UCLASS()
class AURA_API AAuraPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
    AAuraPlayerController();
	virtual void PlayerTick(float DeltaTime) override;
protected:
    virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
private:
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputMappingContext> AuraContext;

	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> MoveAction;

	TScriptInterface<ITargetableInterface> LastTarget;
	TScriptInterface<ITargetableInterface> CurrentTarget;

	void Move(const FInputActionValue& InputActionValue);
	
	void CursorTrace();
};
