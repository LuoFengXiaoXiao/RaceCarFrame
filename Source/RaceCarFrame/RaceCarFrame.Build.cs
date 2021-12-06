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
			"UMG",
			"InputCore",
			"ChaosVehicles",
			"HeadMountedDisplay",
			"PhysicsCore",
			"DataDriven"
		});

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"Slate",
			"SlateCore",
        });

		PublicDefinitions.Add("HMD_MODULE_INCLUDED=1");
	}
}
