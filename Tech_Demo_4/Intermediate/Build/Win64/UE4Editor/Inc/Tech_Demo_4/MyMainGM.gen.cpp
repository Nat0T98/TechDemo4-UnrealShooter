// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tech_Demo_4/MyMainGM.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMainGM() {}
// Cross Module References
	TECH_DEMO_4_API UClass* Z_Construct_UClass_AMyMainGM_NoRegister();
	TECH_DEMO_4_API UClass* Z_Construct_UClass_AMyMainGM();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Tech_Demo_4();
	TECH_DEMO_4_API UClass* Z_Construct_UClass_ACharacterController_NoRegister();
	TECH_DEMO_4_API UClass* Z_Construct_UClass_APickupLocationController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	TECH_DEMO_4_API UClass* Z_Construct_UClass_APickupController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyMainGM::execGetSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetSeconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyMainGM::execGetMinutes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetMinutes();
		P_NATIVE_END;
	}
	void AMyMainGM::StaticRegisterNativesAMyMainGM()
	{
		UClass* Class = AMyMainGM::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMinutes", &AMyMainGM::execGetMinutes },
			{ "GetSeconds", &AMyMainGM::execGetSeconds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyMainGM_GetMinutes_Statics
	{
		struct MyMainGM_eventGetMinutes_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AMyMainGM_GetMinutes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyMainGM_eventGetMinutes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyMainGM_GetMinutes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyMainGM_GetMinutes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyMainGM_GetMinutes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "MyMainGM.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyMainGM_GetMinutes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyMainGM, nullptr, "GetMinutes", nullptr, nullptr, sizeof(MyMainGM_eventGetMinutes_Parms), Z_Construct_UFunction_AMyMainGM_GetMinutes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMainGM_GetMinutes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyMainGM_GetMinutes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMainGM_GetMinutes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyMainGM_GetMinutes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyMainGM_GetMinutes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyMainGM_GetSeconds_Statics
	{
		struct MyMainGM_eventGetSeconds_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AMyMainGM_GetSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyMainGM_eventGetSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyMainGM_GetSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyMainGM_GetSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyMainGM_GetSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "MyMainGM.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyMainGM_GetSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyMainGM, nullptr, "GetSeconds", nullptr, nullptr, sizeof(MyMainGM_eventGetSeconds_Parms), Z_Construct_UFunction_AMyMainGM_GetSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMainGM_GetSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyMainGM_GetSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMainGM_GetSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyMainGM_GetSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyMainGM_GetSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyMainGM_NoRegister()
	{
		return AMyMainGM::StaticClass();
	}
	struct Z_Construct_UClass_AMyMainGM_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Players_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Players;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupLocations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PickupLocations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueTeam_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlueTeam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedTeam_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RedTeam;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHUD_Asset_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerHUD_Asset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHUD_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerHUD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountdownTimer_Asset_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CountdownTimer_Asset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountdownTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CountdownTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Minutes_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Minutes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Seconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxRounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Round_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Round;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinnerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WinnerName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WinnerVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinnerVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WinnerVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMusic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameMusic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoubleDamageMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoubleDamageMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AmmoMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthGainMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthGainMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PickupObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Audio_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Audio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyMainGM_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tech_Demo_4,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyMainGM_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyMainGM_GetMinutes, "GetMinutes" }, // 2170319094
		{ &Z_Construct_UFunction_AMyMainGM_GetSeconds, "GetSeconds" }, // 3622164713
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainGM_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyMainGM.h" },
		{ "ModuleRelativePath", "MyMainGM.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMainGM_Statics::NewProp_Players_Inner = { "Players", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacterController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainGM_Statics::NewProp_Players_MetaData[] = {
		{ "ModuleRelativePath", "MyMainGM.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyMainGM_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainGM, Players), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMyMainGM_Statics::NewProp_Players_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainGM_Statics::NewProp_Players_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMainGM_Statics::NewProp_PickupLocations_Inner = { "PickupLocations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APickupLocationController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainGM_Statics::NewProp_PickupLocations_MetaData[] = {
		{ "ModuleRelativePath", "MyMainGM.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyMainGM_Statics::NewProp_PickupLocations = { "PickupLocations", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainGM, PickupLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMyMainGM_Statics::NewProp_PickupLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainGM_Statics::NewProp_PickupLocations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainGM_Statics::NewProp_BlueTeam_MetaData[] = {
		{ "Category", "Team Colours" },
		{ "ModuleRelativePath", "MyMainGM.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMainGM_Statics::NewProp_BlueTeam = { "BlueTeam", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainGM, BlueTeam), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyMainGM_Statics::NewProp_BlueTeam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainGM_Statics::NewProp_BlueTeam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainGM_Statics::NewProp_RedTeam_MetaData[] = {
		{ "Category", "Team Colours" },
		{ "ModuleRelativePath", "MyMainGM.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMainGM_Statics::NewProp_RedTeam = { "RedTeam", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainGM, RedTeam), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyMainGM_Statics::NewProp_RedTeam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainGM_Statics::NewProp_RedTeam_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMainGM_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainGM_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "Team Colours" },
		{ "ModuleRelativePath", "MyMainGM.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyMainGM_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainGM, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMyMainGM_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainGM_Statics::NewProp_Materials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainGM_Statics::NewProp_PlayerHUD_Asset_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "MyMainGM.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyMainGM_Statics::NewProp_PlayerHUD_Asset = { "PlayerHUD_Asset", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainGM, PlayerHUD_Asset), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyMainGM_Statics::NewProp_PlayerHUD_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainGM_Statics::NewProp_PlayerHUD_Asset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainGM_Statics::NewProp_PlayerHUD_MetaData[] = {
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyMainGM.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMainGM_Statics::NewProp_PlayerHUD = { "PlayerHUD", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainGM, PlayerHUD), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyMainGM_Statics::NewProp_PlayerHUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainGM_Statics::NewProp_PlayerHUD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainGM_Statics::NewProp_CountdownTimer_Asset_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "MyMainGM.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyMainGM_Statics::NewProp_CountdownTimer_Asset = { "CountdownTimer_Asset", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainGM, CountdownTimer_Asset), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyMainGM_Statics::NewProp_CountdownTimer_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainGM_Statics::NewProp_CountdownTimer_Asset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainGM_Statics::NewProp_CountdownTimer_MetaData[] = {
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyMainGM.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMainGM_Statics::NewProp_CountdownTimer = { "CountdownTimer", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainGM, CountdownTimer), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyMainGM_Statics::NewProp_CountdownTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainGM_Statics::NewProp_CountdownTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainGM_Statics::NewProp_Minutes_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "MyMainGM.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMyMainGM_Statics::NewProp_Minutes = { "Minutes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainGM, Minutes), METADATA_PARAMS(Z_Construct_UClass_AMyMainGM_Statics::NewProp_Minutes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainGM_Statics::NewProp_Minutes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainGM_Statics::NewProp_Seconds_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "MyMainGM.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMyMainGM_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainGM, Seconds), METADATA_PARAMS(Z_Construct_UClass_AMyMainGM_Statics::NewProp_Seconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainGM_Statics::NewProp_Seconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainGM_Statics::NewProp_MaxRounds_MetaData[] = {
		{ "Category", "Rounds" },
		{ "ModuleRelativePath", "MyMainGM.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMyMainGM_Statics::NewProp_MaxRounds = { "MaxRounds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainGM, MaxRounds), METADATA_PARAMS(Z_Construct_UClass_AMyMainGM_Statics::NewProp_MaxRounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainGM_Statics::NewProp_MaxRounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainGM_Statics::NewProp_Round_MetaData[] = {
		{ "Category", "Rounds" },
		{ "ModuleRelativePath", "MyMainGM.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMyMainGM_Statics::NewProp_Round = { "Round", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainGM, Round), METADATA_PARAMS(Z_Construct_UClass_AMyMainGM_Statics::NewProp_Round_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainGM_Statics::NewProp_Round_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainGM_Statics::NewProp_WinnerName_MetaData[] = {
		{ "Category", "Winner" },
		{ "ModuleRelativePath", "MyMainGM.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMyMainGM_Statics::NewProp_WinnerName = { "WinnerName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainGM, WinnerName), METADATA_PARAMS(Z_Construct_UClass_AMyMainGM_Statics::NewProp_WinnerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainGM_Statics::NewProp_WinnerName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMyMainGM_Statics::NewProp_WinnerVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainGM_Statics::NewProp_WinnerVisibility_MetaData[] = {
		{ "Category", "Winner" },
		{ "ModuleRelativePath", "MyMainGM.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMyMainGM_Statics::NewProp_WinnerVisibility = { "WinnerVisibility", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainGM, WinnerVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_AMyMainGM_Statics::NewProp_WinnerVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainGM_Statics::NewProp_WinnerVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainGM_Statics::NewProp_GameMusic_MetaData[] = {
		{ "Category", "Music" },
		{ "ModuleRelativePath", "MyMainGM.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMainGM_Statics::NewProp_GameMusic = { "GameMusic", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainGM, GameMusic), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyMainGM_Statics::NewProp_GameMusic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainGM_Statics::NewProp_GameMusic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainGM_Statics::NewProp_DoubleDamageMaterial_MetaData[] = {
		{ "Category", "Pickups" },
		{ "ModuleRelativePath", "MyMainGM.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMainGM_Statics::NewProp_DoubleDamageMaterial = { "DoubleDamageMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainGM, DoubleDamageMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyMainGM_Statics::NewProp_DoubleDamageMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainGM_Statics::NewProp_DoubleDamageMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainGM_Statics::NewProp_AmmoMaterial_MetaData[] = {
		{ "Category", "Pickups" },
		{ "ModuleRelativePath", "MyMainGM.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMainGM_Statics::NewProp_AmmoMaterial = { "AmmoMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainGM, AmmoMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyMainGM_Statics::NewProp_AmmoMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainGM_Statics::NewProp_AmmoMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainGM_Statics::NewProp_HealthGainMaterial_MetaData[] = {
		{ "Category", "Pickups" },
		{ "ModuleRelativePath", "MyMainGM.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMainGM_Statics::NewProp_HealthGainMaterial = { "HealthGainMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainGM, HealthGainMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyMainGM_Statics::NewProp_HealthGainMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainGM_Statics::NewProp_HealthGainMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainGM_Statics::NewProp_PickupObject_MetaData[] = {
		{ "Category", "Pickups" },
		{ "ModuleRelativePath", "MyMainGM.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyMainGM_Statics::NewProp_PickupObject = { "PickupObject", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainGM, PickupObject), Z_Construct_UClass_APickupController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyMainGM_Statics::NewProp_PickupObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainGM_Statics::NewProp_PickupObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainGM_Statics::NewProp_Audio_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyMainGM.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMainGM_Statics::NewProp_Audio = { "Audio", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainGM, Audio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyMainGM_Statics::NewProp_Audio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainGM_Statics::NewProp_Audio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyMainGM_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainGM_Statics::NewProp_Players_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainGM_Statics::NewProp_Players,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainGM_Statics::NewProp_PickupLocations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainGM_Statics::NewProp_PickupLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainGM_Statics::NewProp_BlueTeam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainGM_Statics::NewProp_RedTeam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainGM_Statics::NewProp_Materials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainGM_Statics::NewProp_Materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainGM_Statics::NewProp_PlayerHUD_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainGM_Statics::NewProp_PlayerHUD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainGM_Statics::NewProp_CountdownTimer_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainGM_Statics::NewProp_CountdownTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainGM_Statics::NewProp_Minutes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainGM_Statics::NewProp_Seconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainGM_Statics::NewProp_MaxRounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainGM_Statics::NewProp_Round,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainGM_Statics::NewProp_WinnerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainGM_Statics::NewProp_WinnerVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainGM_Statics::NewProp_WinnerVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainGM_Statics::NewProp_GameMusic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainGM_Statics::NewProp_DoubleDamageMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainGM_Statics::NewProp_AmmoMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainGM_Statics::NewProp_HealthGainMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainGM_Statics::NewProp_PickupObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainGM_Statics::NewProp_Audio,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyMainGM_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyMainGM>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyMainGM_Statics::ClassParams = {
		&AMyMainGM::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyMainGM_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainGM_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyMainGM_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainGM_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyMainGM()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyMainGM_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyMainGM, 3549216492);
	template<> TECH_DEMO_4_API UClass* StaticClass<AMyMainGM>()
	{
		return AMyMainGM::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyMainGM(Z_Construct_UClass_AMyMainGM, &AMyMainGM::StaticClass, TEXT("/Script/Tech_Demo_4"), TEXT("AMyMainGM"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyMainGM);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
