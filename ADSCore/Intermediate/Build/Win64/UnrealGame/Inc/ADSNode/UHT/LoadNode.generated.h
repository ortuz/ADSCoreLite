// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LoadNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULoadNode;
#ifdef ADSNODE_LoadNode_generated_h
#error "LoadNode.generated.h already included, missing '#pragma once' in LoadNode.h"
#endif
#define ADSNODE_LoadNode_generated_h

#define FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_LoadNode_h_23_DELEGATE \
ADSNODE_API void FADdownloadStatus_DelegateWrapper(const FMulticastScriptDelegate& ADdownloadStatus, int32 Status, const FString& errorMessage);


#define FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_LoadNode_h_28_SPARSE_DATA
#define FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_LoadNode_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAdDownloadFailure); \
	DECLARE_FUNCTION(execOnAdDownloadSuccess); \
	DECLARE_FUNCTION(execloadInterstitial);


#define FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_LoadNode_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAdDownloadFailure); \
	DECLARE_FUNCTION(execOnAdDownloadSuccess); \
	DECLARE_FUNCTION(execloadInterstitial);


#define FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_LoadNode_h_28_ACCESSORS
#define FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_LoadNode_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoadNode(); \
	friend struct Z_Construct_UClass_ULoadNode_Statics; \
public: \
	DECLARE_CLASS(ULoadNode, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ADSNode"), NO_API) \
	DECLARE_SERIALIZER(ULoadNode)


#define FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_LoadNode_h_28_INCLASS \
private: \
	static void StaticRegisterNativesULoadNode(); \
	friend struct Z_Construct_UClass_ULoadNode_Statics; \
public: \
	DECLARE_CLASS(ULoadNode, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ADSNode"), NO_API) \
	DECLARE_SERIALIZER(ULoadNode)


#define FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_LoadNode_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadNode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadNode(ULoadNode&&); \
	NO_API ULoadNode(const ULoadNode&); \
public: \
	NO_API virtual ~ULoadNode();


#define FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_LoadNode_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadNode(ULoadNode&&); \
	NO_API ULoadNode(const ULoadNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULoadNode) \
	NO_API virtual ~ULoadNode();


#define FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_LoadNode_h_25_PROLOG
#define FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_LoadNode_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_LoadNode_h_28_SPARSE_DATA \
	FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_LoadNode_h_28_RPC_WRAPPERS \
	FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_LoadNode_h_28_ACCESSORS \
	FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_LoadNode_h_28_INCLASS \
	FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_LoadNode_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_LoadNode_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_LoadNode_h_28_SPARSE_DATA \
	FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_LoadNode_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_LoadNode_h_28_ACCESSORS \
	FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_LoadNode_h_28_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_LoadNode_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LoadNode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADSNODE_API UClass* StaticClass<class ULoadNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_LoadNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
