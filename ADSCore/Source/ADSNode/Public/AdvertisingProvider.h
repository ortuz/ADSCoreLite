/*
* ADSCore Lite - Unreal Engine 5 Advertise Plugin for Yandex
*
* Copyright (C) 2023 VOORHU <voorhu@gmail.com> All Rights Reserved.
*/

#pragma once

#include "Engine.h"
#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IAdvertisingProvider.h"

class FAdvertisingProvider : public IModuleInterface//IAdvertisingProvider
{
public:
	static bool LoadInterstitialAd() ;
	static int32 ShowInterstitialAd() ;

	static int32 GetAdIDCount() ;
private:
	
};