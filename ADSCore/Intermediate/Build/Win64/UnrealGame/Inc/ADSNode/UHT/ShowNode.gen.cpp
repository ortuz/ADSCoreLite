// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "D:/Unreal Projects/ADSTest/ADSCore/HostProject/Plugins/ADSCore/Source/ADSNode/Public/ShowNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShowNode() {}
// Cross Module References
	ADSNODE_API UClass* Z_Construct_UClass_UShowNode();
	ADSNODE_API UClass* Z_Construct_UClass_UShowNode_NoRegister();
	ADSNODE_API UFunction* Z_Construct_UDelegateFunction_ADSNode_ADdisplayStatus__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_ADSNode();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ADSNode_ADdisplayStatus__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ADSNode_ADdisplayStatus__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd \"F\"\n" },
		{ "ModuleRelativePath", "Public/ShowNode.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd \"F\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ADSNode_ADdisplayStatus__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ADSNode, nullptr, "ADdisplayStatus__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ADSNode_ADdisplayStatus__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ADSNode_ADdisplayStatus__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ADSNode_ADdisplayStatus__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ADSNode_ADdisplayStatus__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FADdisplayStatus_DelegateWrapper(const FMulticastScriptDelegate& ADdisplayStatus)
{
	ADdisplayStatus.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UShowNode::execshowInterstitial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UShowNode**)Z_Param__Result=UShowNode::showInterstitial();
		P_NATIVE_END;
	}
	void UShowNode::StaticRegisterNativesUShowNode()
	{
		UClass* Class = UShowNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "showInterstitial", &UShowNode::execshowInterstitial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UShowNode_showInterstitial_Statics
	{
		struct ShowNode_eventshowInterstitial_Parms
		{
			UShowNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShowNode_showInterstitial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ShowNode_eventshowInterstitial_Parms, ReturnValue), Z_Construct_UClass_UShowNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShowNode_showInterstitial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShowNode_showInterstitial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShowNode_showInterstitial_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "ADS Core" },
		{ "ModuleRelativePath", "Public/ShowNode.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShowNode_showInterstitial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShowNode, nullptr, "showInterstitial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UShowNode_showInterstitial_Statics::ShowNode_eventshowInterstitial_Parms), Z_Construct_UFunction_UShowNode_showInterstitial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShowNode_showInterstitial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShowNode_showInterstitial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShowNode_showInterstitial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShowNode_showInterstitial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShowNode_showInterstitial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShowNode);
	UClass* Z_Construct_UClass_UShowNode_NoRegister()
	{
		return UShowNode::StaticClass();
	}
	struct Z_Construct_UClass_UShowNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onAdShown_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onAdShown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onAdDismissed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onAdDismissed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onAdClicked_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onAdClicked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onLeftApplication_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onLeftApplication;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onReturnedToApplication_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onReturnedToApplication;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShowNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ADSNode,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UShowNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UShowNode_showInterstitial, "showInterstitial" }, // 463470607
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShowNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ShowNode.h" },
		{ "ModuleRelativePath", "Public/ShowNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShowNode_Statics::NewProp_onAdShown_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShowNode.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShowNode_Statics::NewProp_onAdShown = { "onAdShown", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShowNode, onAdShown), Z_Construct_UDelegateFunction_ADSNode_ADdisplayStatus__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UShowNode_Statics::NewProp_onAdShown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShowNode_Statics::NewProp_onAdShown_MetaData)) }; // 3746890877
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShowNode_Statics::NewProp_onAdDismissed_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShowNode.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShowNode_Statics::NewProp_onAdDismissed = { "onAdDismissed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShowNode, onAdDismissed), Z_Construct_UDelegateFunction_ADSNode_ADdisplayStatus__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UShowNode_Statics::NewProp_onAdDismissed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShowNode_Statics::NewProp_onAdDismissed_MetaData)) }; // 3746890877
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShowNode_Statics::NewProp_onAdClicked_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShowNode.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShowNode_Statics::NewProp_onAdClicked = { "onAdClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShowNode, onAdClicked), Z_Construct_UDelegateFunction_ADSNode_ADdisplayStatus__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UShowNode_Statics::NewProp_onAdClicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShowNode_Statics::NewProp_onAdClicked_MetaData)) }; // 3746890877
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShowNode_Statics::NewProp_onLeftApplication_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShowNode.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShowNode_Statics::NewProp_onLeftApplication = { "onLeftApplication", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShowNode, onLeftApplication), Z_Construct_UDelegateFunction_ADSNode_ADdisplayStatus__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UShowNode_Statics::NewProp_onLeftApplication_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShowNode_Statics::NewProp_onLeftApplication_MetaData)) }; // 3746890877
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShowNode_Statics::NewProp_onReturnedToApplication_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShowNode.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShowNode_Statics::NewProp_onReturnedToApplication = { "onReturnedToApplication", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShowNode, onReturnedToApplication), Z_Construct_UDelegateFunction_ADSNode_ADdisplayStatus__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UShowNode_Statics::NewProp_onReturnedToApplication_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShowNode_Statics::NewProp_onReturnedToApplication_MetaData)) }; // 3746890877
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShowNode_Statics::NewProp_onAdShown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShowNode_Statics::NewProp_onAdDismissed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShowNode_Statics::NewProp_onAdClicked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShowNode_Statics::NewProp_onLeftApplication,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShowNode_Statics::NewProp_onReturnedToApplication,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShowNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShowNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UShowNode_Statics::ClassParams = {
		&UShowNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UShowNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UShowNode_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UShowNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShowNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShowNode()
	{
		if (!Z_Registration_Info_UClass_UShowNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShowNode.OuterSingleton, Z_Construct_UClass_UShowNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UShowNode.OuterSingleton;
	}
	template<> ADSNODE_API UClass* StaticClass<UShowNode>()
	{
		return UShowNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShowNode);
	UShowNode::~UShowNode() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UShowNode, UShowNode::StaticClass, TEXT("UShowNode"), &Z_Registration_Info_UClass_UShowNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShowNode), 1897805798U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_4002496665(TEXT("/Script/ADSNode"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
