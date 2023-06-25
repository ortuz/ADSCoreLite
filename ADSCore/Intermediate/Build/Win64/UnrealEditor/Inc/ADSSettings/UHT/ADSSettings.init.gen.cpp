// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeADSSettings_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ADSSettings;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ADSSettings()
	{
		if (!Z_Registration_Info_UPackage__Script_ADSSettings.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ADSSettings",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x94044374,
				0x04870770,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ADSSettings.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ADSSettings.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ADSSettings(Z_Construct_UPackage__Script_ADSSettings, TEXT("/Script/ADSSettings"), Z_Registration_Info_UPackage__Script_ADSSettings, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x94044374, 0x04870770));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
