// Copyright noahvolson

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/TargetableInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public ITargetableInterface
{
	GENERATED_BODY()
public:
	AAuraEnemy();

	//~ Begin AAuraEnemy interface
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
	//~ End Enemy interface
	
	virtual void BeginPlay() override;
};
