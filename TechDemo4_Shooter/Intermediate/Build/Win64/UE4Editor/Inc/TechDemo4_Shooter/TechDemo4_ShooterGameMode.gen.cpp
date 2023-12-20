// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TechDemo4_Shooter/TechDemo4_ShooterGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTechDemo4_ShooterGameMode() {}
// Cross Module References
	TECHDEMO4_SHOOTER_API UClass* Z_Construct_UClass_ATechDemo4_ShooterGameMode_NoRegister();
	TECHDEMO4_SHOOTER_API UClass* Z_Construct_UClass_ATechDemo4_ShooterGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TechDemo4_Shooter();
// End Cross Module References
	void ATechDemo4_ShooterGameMode::StaticRegisterNativesATechDemo4_ShooterGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATechDemo4_ShooterGameMode_NoRegister()
	{
		return ATechDemo4_ShooterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATechDemo4_ShooterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATechDemo4_ShooterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TechDemo4_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATechDemo4_ShooterGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TechDemo4_ShooterGameMode.h" },
		{ "ModuleRelativePath", "TechDemo4_ShooterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATechDemo4_ShooterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATechDemo4_ShooterGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATechDemo4_ShooterGameMode_Statics::ClassParams = {
		&ATechDemo4_ShooterGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATechDemo4_ShooterGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATechDemo4_ShooterGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATechDemo4_ShooterGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATechDemo4_ShooterGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATechDemo4_ShooterGameMode, 3477261383);
	template<> TECHDEMO4_SHOOTER_API UClass* StaticClass<ATechDemo4_ShooterGameMode>()
	{
		return ATechDemo4_ShooterGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATechDemo4_ShooterGameMode(Z_Construct_UClass_ATechDemo4_ShooterGameMode, &ATechDemo4_ShooterGameMode::StaticClass, TEXT("/Script/TechDemo4_Shooter"), TEXT("ATechDemo4_ShooterGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATechDemo4_ShooterGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
