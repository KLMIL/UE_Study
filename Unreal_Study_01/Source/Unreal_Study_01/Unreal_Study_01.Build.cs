// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Unreal_Study_01 : ModuleRules
{
	public Unreal_Study_01(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
