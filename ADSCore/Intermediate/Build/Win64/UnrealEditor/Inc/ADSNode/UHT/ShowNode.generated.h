// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShowNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UShowNode;
#ifdef ADSNODE_ShowNode_generated_h
#error "ShowNode.generated.h already included, missing '#pragma once' in ShowNode.h"
#endif
#define ADSNODE_ShowNode_generated_h

#define FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_23_DELEGATE \
ADSNODE_API void FADdisplayStatus_DelegateWrapper(const FMulticastScriptDelegate& ADdisplayStatus);


#define FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_28_SPARSE_DATA
#define FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execshowInterstitial);


#define FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execshowInterstitial);


#define FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_28_ACCESSORS
#define FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShowNode(); \
	friend struct Z_Construct_UClass_UShowNode_Statics; \
public: \
	DECLARE_CLASS(UShowNode, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ADSNode"), NO_API) \
	DECLARE_SERIALIZER(UShowNode)


#define FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUShowNode(); \
	friend struct Z_Construct_UClass_UShowNode_Statics; \
public: \
	DECLARE_CLASS(UShowNode, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ADSNode"), NO_API) \
	DECLARE_SERIALIZER(UShowNode)


#define FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShowNode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShowNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShowNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShowNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShowNode(UShowNode&&); \
	NO_API UShowNode(const UShowNode&); \
public: \
	NO_API virtual ~UShowNode();


#define FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShowNode(UShowNode&&); \
	NO_API UShowNode(const UShowNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShowNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShowNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UShowNode) \
	NO_API virtual ~UShowNode();


#define FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_25_PROLOG
#define FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_28_SPARSE_DATA \
	FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_28_RPC_WRAPPERS \
	FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_28_ACCESSORS \
	FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_28_INCLASS \
	FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_28_SPARSE_DATA \
	FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_28_ACCESSORS \
	FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_28_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ShowNode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADSNODE_API UClass* StaticClass<class UShowNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
