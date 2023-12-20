// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TechDemo4_Shooter : ModuleRules
{
	public TechDemo4_Shooter(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
