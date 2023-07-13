/*
* ADSCore Lite - Unreal Engine 5 Advertise Plugin for Yandex
*
* Copyright (C) 2023 VOORHU <voorhu@gmail.com> All Rights Reserved.
*/

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

#include "LoadNode.h"
#include "ShowNode.h"

class FADSNodeModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	void setLoadNode(ULoadNode* node);
	ULoadNode* getLoadNode();

	void setShowNode(UShowNode* node);
	UShowNode* getShowNode();

private:
	ULoadNode* loadNode;
	UShowNode* showNode;
};