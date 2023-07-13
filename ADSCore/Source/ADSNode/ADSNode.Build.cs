/*
* ADSCore Lite - Unreal Engine 5 Advertise Plugin for Yandex
*
* Copyright (C) 2023 VOORHU <voorhu@gmail.com> All Rights Reserved.
*/

using System.IO;
using UnrealBuildTool;

public class ADSNode : ModuleRules
{
	public ADSNode(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        PrivatePCHHeaderFile = "Public/ADSNode.h";

        //bUsePrecompiled = true;

        //Type = ModuleType.External;
        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            // Add the import library
            //PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "x64", "Release", "MyLibrary.lib"));
            // Delay-load the DLL, so we can load it from the right place first
            PublicDelayLoadDLLs.Add("UnrealEditor-ADSNode.dll");
            // Ensure that the DLL is staged along with the executable
            RuntimeDependencies.Add("$(PluginDir)/Binaries/Win64/UnrealEditor-ADSNode.dll");
		}

         //PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));
         //PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "Private"));
        
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
				"SlateCore"
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

		PublicIncludePaths.Add("Runtime/Advertising/Advertising/Public");

		if(Target.Platform == UnrealTargetPlatform.Android)
		{
            //PrivateDependencyModuleNames.AddRange(new string[] { "Launch" });
            PrivateDependencyModuleNames.Add("Launch");

            string PluginPath = Utils.MakePathRelativeTo(ModuleDirectory, Target.RelativeEnginePath);

            AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(PluginPath, "ADSNode_UPL.xml"));
        }
	}
}
