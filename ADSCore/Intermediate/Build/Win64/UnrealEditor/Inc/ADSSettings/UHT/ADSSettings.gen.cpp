// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ADSCore/Public/ADSSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeADSSettings() {}
// Cross Module References
	ADSSETTINGS_API UClass* Z_Construct_UClass_UADSSettingsEditor();
	ADSSETTINGS_API UClass* Z_Construct_UClass_UADSSettingsEditor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ADSSettings();
// End Cross Module References
	void UADSSettingsEditor::StaticRegisterNativesUADSSettingsEditor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UADSSettingsEditor);
	UClass* Z_Construct_UClass_UADSSettingsEditor_NoRegister()
	{
		return UADSSettingsEditor::StaticClass();
	}
	struct Z_Construct_UClass_UADSSettingsEditor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterstitialAdID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InterstitialAdID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UADSSettingsEditor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ADSSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UADSSettingsEditor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ADSSettings.h" },
		{ "ModuleRelativePath", "Public/ADSSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UADSSettingsEditor_Statics::NewProp_InterstitialAdID_MetaData[] = {
		{ "Category", "Android" },
		{ "Comment", "//InterstitialAdID\n" },
		{ "DisplayName", "Yandex InterstitialAd ID" },
		{ "ModuleRelativePath", "Public/ADSSettings.h" },
		{ "ToolTip", "InterstitialAdID" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UADSSettingsEditor_Statics::NewProp_InterstitialAdID = { "InterstitialAdID", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UADSSettingsEditor, InterstitialAdID), METADATA_PARAMS(Z_Construct_UClass_UADSSettingsEditor_Statics::NewProp_InterstitialAdID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UADSSettingsEditor_Statics::NewProp_InterstitialAdID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UADSSettingsEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UADSSettingsEditor_Statics::NewProp_InterstitialAdID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UADSSettingsEditor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UADSSettingsEditor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UADSSettingsEditor_Statics::ClassParams = {
		&UADSSettingsEditor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UADSSettingsEditor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UADSSettingsEditor_Statics::PropPointers),
		0,
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UADSSettingsEditor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UADSSettingsEditor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UADSSettingsEditor()
	{
		if (!Z_Registration_Info_UClass_UADSSettingsEditor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UADSSettingsEditor.OuterSingleton, Z_Construct_UClass_UADSSettingsEditor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UADSSettingsEditor.OuterSingleton;
	}
	template<> ADSSETTINGS_API UClass* StaticClass<UADSSettingsEditor>()
	{
		return UADSSettingsEditor::StaticClass();
	}
	UADSSettingsEditor::UADSSettingsEditor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UADSSettingsEditor);
	UADSSettingsEditor::~UADSSettingsEditor() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ADSCore_Source_ADSCore_Public_ADSSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ADSCore_Source_ADSCore_Public_ADSSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UADSSettingsEditor, UADSSettingsEditor::StaticClass, TEXT("UADSSettingsEditor"), &Z_Registration_Info_UClass_UADSSettingsEditor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UADSSettingsEditor), 743947068U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ADSCore_Source_ADSCore_Public_ADSSettings_h_1949663563(TEXT("/Script/ADSSettings"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ADSCore_Source_ADSCore_Public_ADSSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ADSCore_Source_ADSCore_Public_ADSSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
