/*
* ADSCore Lite - Unreal Engine 5 Advertise Plugin for Yandex
*
* Copyright (C) 2023 VOORHU <voorhu@gmail.com> All Rights Reserved.
*/

#pragma once

#include "Engine.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AdvertisingProvider.h"

#include "LoadNode.generated.h"

#define voidrose void 

#if PLATFORM_ANDROID
#include "Runtime/Launch/Public/Android/AndroidJNI.h"
#include "Runtime/ApplicationCore/Public/Android/AndroidApplication.h"
#endif 
//Название Делегата начинается с "F"
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FADdownloadStatus, int32, Status, FString, errorMessage);

UCLASS()
class ULoadNode : public UBlueprintAsyncActionBase //UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()
	
	ULoadNode();

	static FAdvertisingProvider fAdvertisingProvider;
	voidrose getInitCallback();

public:
	void LoadSuc();
	void LoadFail(FString error);
	UPROPERTY(BlueprintAssignable)
		FADdownloadStatus LoadSuccess;
	UPROPERTY(BlueprintAssignable)
		FADdownloadStatus LoadFailure;
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "ADS Core")
		static ULoadNode* loadInterstitial();

	virtual void Activate() override; //UBlueprintAsyncActionBase interface

	static void log(FString str) {
		FString string = str;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("%s"), *string));
		UE_LOG(LogTemp, Warning, TEXT("%s"), *string);
	}

private:

	//FShowInterstitialOutputPin OnShowDelegate;
	//FDelegateHandle OnShowDelegateHandle;

	UFUNCTION()
	void OnAdDownloadSuccess(int32 status);
	UFUNCTION()
	void OnAdDownloadFailure(int32 status);
};