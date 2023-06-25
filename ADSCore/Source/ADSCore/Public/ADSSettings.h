/*
* ADSCore Lite - Unreal Engine 5 Advertise Plugin for Yandex
*
* Copyright (C) 2023 VOORHU <voidrosegd@gmail.com> All Rights Reserved.
*/

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "ADSSettings.generated.h"

class FToolBarBuilder;
class FMenuBuilder;

UCLASS(transient, config = Engine)
class UADSSettingsEditor : public UObject
{
	GENERATED_BODY()

	UPROPERTY(Config, EditAnywhere, Category = Android, Meta = (DisplayName = "Yandex InterstitialAd ID")) //InterstitialAdID
		FString InterstitialAdID;

	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;

};

class FADSSettingsModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

