// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tech_Demo_4/PickupLocationController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupLocationController() {}
// Cross Module References
	TECH_DEMO_4_API UClass* Z_Construct_UClass_APickupLocationController_NoRegister();
	TECH_DEMO_4_API UClass* Z_Construct_UClass_APickupLocationController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Tech_Demo_4();
	TECH_DEMO_4_API UClass* Z_Construct_UClass_APickupController_NoRegister();
// End Cross Module References
	void APickupLocationController::StaticRegisterNativesAPickupLocationController()
	{
	}
	UClass* Z_Construct_UClass_APickupLocationController_NoRegister()
	{
		return APickupLocationController::StaticClass();
	}
	struct Z_Construct_UClass_APickupLocationController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsUsed_MetaData[];
#endif
		static void NewProp_IsUsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveLoc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveLoc;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickupLocationController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tech_Demo_4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupLocationController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickupLocationController.h" },
		{ "ModuleRelativePath", "PickupLocationController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupLocationController_Statics::NewProp_IsUsed_MetaData[] = {
		{ "Category", "Location Used" },
		{ "ModuleRelativePath", "PickupLocationController.h" },
	};
#endif
	void Z_Construct_UClass_APickupLocationController_Statics::NewProp_IsUsed_SetBit(void* Obj)
	{
		((APickupLocationController*)Obj)->IsUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APickupLocationController_Statics::NewProp_IsUsed = { "IsUsed", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APickupLocationController), &Z_Construct_UClass_APickupLocationController_Statics::NewProp_IsUsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_APickupLocationController_Statics::NewProp_IsUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupLocationController_Statics::NewProp_IsUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupLocationController_Statics::NewProp_ActiveLoc_MetaData[] = {
		{ "Category", "Active Pickup Location" },
		{ "ModuleRelativePath", "PickupLocationController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupLocationController_Statics::NewProp_ActiveLoc = { "ActiveLoc", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupLocationController, ActiveLoc), Z_Construct_UClass_APickupController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickupLocationController_Statics::NewProp_ActiveLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupLocationController_Statics::NewProp_ActiveLoc_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickupLocationController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupLocationController_Statics::NewProp_IsUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupLocationController_Statics::NewProp_ActiveLoc,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickupLocationController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupLocationController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickupLocationController_Statics::ClassParams = {
		&APickupLocationController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APickupLocationController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APickupLocationController_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APickupLocationController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickupLocationController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickupLocationController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickupLocationController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickupLocationController, 2168538930);
	template<> TECH_DEMO_4_API UClass* StaticClass<APickupLocationController>()
	{
		return APickupLocationController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickupLocationController(Z_Construct_UClass_APickupLocationController, &APickupLocationController::StaticClass, TEXT("/Script/Tech_Demo_4"), TEXT("APickupLocationController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickupLocationController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
