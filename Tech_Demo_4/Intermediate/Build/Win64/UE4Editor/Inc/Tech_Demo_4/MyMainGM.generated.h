// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TECH_DEMO_4_MyMainGM_generated_h
#error "MyMainGM.generated.h already included, missing '#pragma once' in MyMainGM.h"
#endif
#define TECH_DEMO_4_MyMainGM_generated_h

#define Tech_Demo_4_Source_Tech_Demo_4_MyMainGM_h_19_SPARSE_DATA
#define Tech_Demo_4_Source_Tech_Demo_4_MyMainGM_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSeconds); \
	DECLARE_FUNCTION(execGetMinutes);


#define Tech_Demo_4_Source_Tech_Demo_4_MyMainGM_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSeconds); \
	DECLARE_FUNCTION(execGetMinutes);


#define Tech_Demo_4_Source_Tech_Demo_4_MyMainGM_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyMainGM(); \
	friend struct Z_Construct_UClass_AMyMainGM_Statics; \
public: \
	DECLARE_CLASS(AMyMainGM, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tech_Demo_4"), NO_API) \
	DECLARE_SERIALIZER(AMyMainGM)


#define Tech_Demo_4_Source_Tech_Demo_4_MyMainGM_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAMyMainGM(); \
	friend struct Z_Construct_UClass_AMyMainGM_Statics; \
public: \
	DECLARE_CLASS(AMyMainGM, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tech_Demo_4"), NO_API) \
	DECLARE_SERIALIZER(AMyMainGM)


#define Tech_Demo_4_Source_Tech_Demo_4_MyMainGM_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyMainGM(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyMainGM) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyMainGM); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyMainGM); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyMainGM(AMyMainGM&&); \
	NO_API AMyMainGM(const AMyMainGM&); \
public:


#define Tech_Demo_4_Source_Tech_Demo_4_MyMainGM_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyMainGM(AMyMainGM&&); \
	NO_API AMyMainGM(const AMyMainGM&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyMainGM); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyMainGM); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyMainGM)


#define Tech_Demo_4_Source_Tech_Demo_4_MyMainGM_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Players() { return STRUCT_OFFSET(AMyMainGM, Players); } \
	FORCEINLINE static uint32 __PPO__PickupLocations() { return STRUCT_OFFSET(AMyMainGM, PickupLocations); } \
	FORCEINLINE static uint32 __PPO__Audio() { return STRUCT_OFFSET(AMyMainGM, Audio); }


#define Tech_Demo_4_Source_Tech_Demo_4_MyMainGM_h_16_PROLOG
#define Tech_Demo_4_Source_Tech_Demo_4_MyMainGM_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tech_Demo_4_Source_Tech_Demo_4_MyMainGM_h_19_PRIVATE_PROPERTY_OFFSET \
	Tech_Demo_4_Source_Tech_Demo_4_MyMainGM_h_19_SPARSE_DATA \
	Tech_Demo_4_Source_Tech_Demo_4_MyMainGM_h_19_RPC_WRAPPERS \
	Tech_Demo_4_Source_Tech_Demo_4_MyMainGM_h_19_INCLASS \
	Tech_Demo_4_Source_Tech_Demo_4_MyMainGM_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tech_Demo_4_Source_Tech_Demo_4_MyMainGM_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tech_Demo_4_Source_Tech_Demo_4_MyMainGM_h_19_PRIVATE_PROPERTY_OFFSET \
	Tech_Demo_4_Source_Tech_Demo_4_MyMainGM_h_19_SPARSE_DATA \
	Tech_Demo_4_Source_Tech_Demo_4_MyMainGM_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Tech_Demo_4_Source_Tech_Demo_4_MyMainGM_h_19_INCLASS_NO_PURE_DECLS \
	Tech_Demo_4_Source_Tech_Demo_4_MyMainGM_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TECH_DEMO_4_API UClass* StaticClass<class AMyMainGM>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tech_Demo_4_Source_Tech_Demo_4_MyMainGM_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
