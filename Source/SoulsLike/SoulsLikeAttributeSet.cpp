// Fill out your copyright notice in the Description page of Project Settings.


#include "SoulsLikeAttributeSet.h"
#include "Net/UnrealNetwork.h"

// Fill out your copyright notice in the Description page of Project Settings.


#include "SoulsLikeAttributeSet.h"
#include "Net/UnrealNetwork.h"


void USoulsLikeAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	DOREPLIFETIME_CONDITION_NOTIFY(USoulsLikeAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USoulsLikeAttributeSet, Mana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USoulsLikeAttributeSet, Stamina, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USoulsLikeAttributeSet, Vigor, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USoulsLikeAttributeSet, Mind, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USoulsLikeAttributeSet, Endurance, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USoulsLikeAttributeSet, Strength, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USoulsLikeAttributeSet, Dexterity, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USoulsLikeAttributeSet, Intelligence, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USoulsLikeAttributeSet, Faith, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USoulsLikeAttributeSet, Luck, COND_None, REPNOTIFY_Always);
}


void USoulsLikeAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USoulsLikeAttributeSet, Health, OldHealth);
}

void USoulsLikeAttributeSet::OnRep_Mana(const FGameplayAttributeData& OldMana)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USoulsLikeAttributeSet, Mana, OldMana);
}

void USoulsLikeAttributeSet::OnRep_Stamina(const FGameplayAttributeData& OldStamina)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USoulsLikeAttributeSet, Stamina, OldStamina);
}

void USoulsLikeAttributeSet::OnRep_Vigor(const FGameplayAttributeData& OldVigor)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USoulsLikeAttributeSet, Vigor, OldVigor);
}

void USoulsLikeAttributeSet::OnRep_Mind(const FGameplayAttributeData& OldMind)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USoulsLikeAttributeSet, Mind, OldMind);
}

void USoulsLikeAttributeSet::OnRep_Endurance(const FGameplayAttributeData& OldEndurance)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USoulsLikeAttributeSet, Endurance, OldEndurance);
}

void USoulsLikeAttributeSet::OnRep_Strength(const FGameplayAttributeData& OldStrength)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USoulsLikeAttributeSet, Strength, OldStrength);
}

void USoulsLikeAttributeSet::OnRep_Dexterity(const FGameplayAttributeData& OldDexterity)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USoulsLikeAttributeSet, Dexterity, OldDexterity);
}

void USoulsLikeAttributeSet::OnRep_Intelligence(const FGameplayAttributeData& OldIntelligence)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USoulsLikeAttributeSet, Intelligence, OldIntelligence);
}

void USoulsLikeAttributeSet::OnRep_Faith(const FGameplayAttributeData& OldFaith)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USoulsLikeAttributeSet, Faith, OldFaith);
}

void USoulsLikeAttributeSet::OnRep_Luck(const FGameplayAttributeData& OldLuck)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USoulsLikeAttributeSet, Luck, OldLuck);
}
