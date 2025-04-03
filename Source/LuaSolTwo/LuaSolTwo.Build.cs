// Some copyright should be here...

using System.IO;
using UnrealBuildTool;

public class LuaSolTwo : ModuleRules
{
	public LuaSolTwo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

        string Sol2Path = Path.Combine(ModuleDirectory, "../../ThirdParty/Sol2");



        PublicIncludePaths.Add(Path.Combine(Sol2Path, "include"));

        PublicAdditionalLibraries.Add(Path.Combine(Sol2Path, "lib", "lua-5.4.4.lib"));

		RuntimeDependencies.Add(Path.Combine(Sol2Path, "bin", "lua-5.4.4.dll"));

        PublicDefinitions.Add("SOL_LUA_VERSION=504");


        PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
                "Projects"
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
