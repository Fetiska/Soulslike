// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "SoulsLikeAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)



/**
 *
 */
UCLASS()
class SOULSLIKE_API USoulsLikeAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	USoulsLikeAttributeSet();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(USoulsLikeAttributeSet, Health);

	UFUNCTION()
		virtual void OnRep_Health(const FGameplayAttributeData& OldHealth);


	UPROPERTY(BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData Mana;
	ATTRIBUTE_ACCESSORS(USoulsLikeAttributeSet, Mana);

	UFUNCTION()
		virtual void OnRep_Mana(const FGameplayAttributeData& OldMana);


	UPROPERTY(BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSORS(USoulsLikeAttributeSet, Stamina);

	UFUNCTION()
		virtual void OnRep_Stamina(const FGameplayAttributeData& OldStamina);


	UPROPERTY(BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData Vigor;
	ATTRIBUTE_ACCESSORS(USoulsLikeAttributeSet, Vigor);

	UFUNCTION()
		virtual void OnRep_Vigor(const FGameplayAttributeData& OldVigor);


	UPROPERTY(BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData Mind;
	ATTRIBUTE_ACCESSORS(USoulsLikeAttributeSet, Mind);

	UFUNCTION()
		virtual void OnRep_Mind(const FGameplayAttributeData& OldMind);


	UPROPERTY(BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData Endurance;
	ATTRIBUTE_ACCESSORS(USoulsLikeAttributeSet, Endurance);

	UFUNCTION()
		virtual void OnRep_Endurance(const FGameplayAttributeData& OldEndurance);


	UPROPERTY(BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData Strength;
	ATTRIBUTE_ACCESSORS(USoulsLikeAttributeSet, Strength);

	UFUNCTION()
		virtual void OnRep_Strength(const FGameplayAttributeData& OldStrength);


	UPROPERTY(BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData Dexterity;
	ATTRIBUTE_ACCESSORS(USoulsLikeAttributeSet, Dexterity);

	UFUNCTION()
		virtual void OnRep_Dexterity(const FGameplayAttributeData& OldDexterity);


	UPROPERTY(BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData Intelligence;
	ATTRIBUTE_ACCESSORS(USoulsLikeAttributeSet, Intelligence);

	UFUNCTION()
		virtual void OnRep_Intelligence(const FGameplayAttributeData& OldIntelligence);


	UPROPERTY(BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData Faith;
	ATTRIBUTE_ACCESSORS(USoulsLikeAttributeSet, Faith);

	UFUNCTION()
		virtual void OnRep_Faith(const FGameplayAttributeData& OldFaith);


	UPROPERTY(BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData Luck;
	ATTRIBUTE_ACCESSORS(USoulsLikeAttributeSet, Luck);

	UFUNCTION()
		virtual void OnRep_Luck(const FGameplayAttributeData& OldLuck);

};
