// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class RaceCarFrame : ModuleRules
{
	public RaceCarFrame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { 
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"ChaosVehicles",
			"HeadMountedDisplay",
			"PhysicsCore",
			"DataDriven"
		});

		PublicDefinitions.Add("HMD_MODULE_INCLUDED=1");
	}
}
