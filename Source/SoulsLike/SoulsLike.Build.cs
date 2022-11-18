// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SoulsLike : ModuleRules
{
	public SoulsLike(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "GameplayAbilities", "GameplayTags", "GameplayTasks", "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
		PrivateDependencyModuleNames.AddRange(new string[] {  });
	}
}
