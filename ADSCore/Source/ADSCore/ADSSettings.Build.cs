/*
* ADSCore Lite - Unreal Engine 5 Advertise Plugin for Yandex
*
* Copyright (C) 2023 VOORHU <voidrosegd@gmail.com> All Rights Reserved.
*/

using UnrealBuildTool;

public class ADSSettings : ModuleRules
{
	public ADSSettings(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        PrivatePCHHeaderFile = "Public/ADSSettings.h";

        //bUsePrecompiled = true;

        if (Target.Platform == UnrealTargetPlatform.Win64)
        {

            // Delay-load the DLL, so we can load it from the right place first
            //PublicDelayLoadDLLs.Add("UnrealEditor-ADSSettings.dll");
            // Ensure that the DLL is staged along with the executable
            //RuntimeDependencies.Add("$(PluginDir)/Binaries/Win64/UnrealEditor-ADSSettings.dll");
        }

        PublicIncludePaths.AddRange(
			new string[] {
				"ADSCore/Private",
				// ... add public include paths required here ...
            }
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
            }
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core"
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
                "ADSNode"
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
