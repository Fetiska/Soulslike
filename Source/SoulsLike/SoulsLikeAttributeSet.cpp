// Fill out your copyright notice in the Description page of Project Settings.


#include "SoulsLikeAttributeSet.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "Net/UnrealNetwork.h"


USoulsLikeAttributeSet::USoulsLikeAttributeSet()
{

}

void USoulsLikeAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(USoulsLikeAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USoulsLikeAttributeSet, Stamina, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USoulsLikeAttributeSet, Mana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USoulsLikeAttributeSet, Strength, COND_None, REPNOTIFY_Always);
}

void USoulsLikeAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USoulsLikeAttributeSet, Health, OldHealth);
}

void USoulsLikeAttributeSet::OnRep_Stamina(const FGameplayAttributeData& OldStamina)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USoulsLikeAttributeSet, Stamina, OldStamina);
}

void USoulsLikeAttributeSet::OnRep_Mana(const FGameplayAttributeData& OldMana)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USoulsLikeAttributeSet, Mana, OldMana);
}

void USoulsLikeAttributeSet::OnRep_Strength(const FGameplayAttributeData& OldStrength)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USoulsLikeAttributeSet, Strength, OldStrength);
}
