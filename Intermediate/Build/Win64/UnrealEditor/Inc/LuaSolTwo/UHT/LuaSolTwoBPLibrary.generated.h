// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LuaSolTwoBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LUASOLTWO_LuaSolTwoBPLibrary_generated_h
#error "LuaSolTwoBPLibrary.generated.h already included, missing '#pragma once' in LuaSolTwoBPLibrary.h"
#endif
#define LUASOLTWO_LuaSolTwoBPLibrary_generated_h

#define FID_LuaPlugin_Plugins_LuaSolTwo_Source_LuaSolTwo_Public_LuaSolTwoBPLibrary_h_10_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetRandomErrorMessage); \
	DECLARE_FUNCTION(execExecuteLuaScript);


#define FID_LuaPlugin_Plugins_LuaSolTwo_Source_LuaSolTwo_Public_LuaSolTwoBPLibrary_h_10_INCLASS \
private: \
	static void StaticRegisterNativesULuaSolTwoBPLibrary(); \
	friend struct Z_Construct_UClass_ULuaSolTwoBPLibrary_Statics; \
public: \
	DECLARE_CLASS(ULuaSolTwoBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LuaSolTwo"), NO_API) \
	DECLARE_SERIALIZER(ULuaSolTwoBPLibrary)


#define FID_LuaPlugin_Plugins_LuaSolTwo_Source_LuaSolTwo_Public_LuaSolTwoBPLibrary_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuaSolTwoBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuaSolTwoBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuaSolTwoBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuaSolTwoBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULuaSolTwoBPLibrary(ULuaSolTwoBPLibrary&&); \
	ULuaSolTwoBPLibrary(const ULuaSolTwoBPLibrary&); \
public: \
	NO_API virtual ~ULuaSolTwoBPLibrary();


#define FID_LuaPlugin_Plugins_LuaSolTwo_Source_LuaSolTwo_Public_LuaSolTwoBPLibrary_h_7_PROLOG
#define FID_LuaPlugin_Plugins_LuaSolTwo_Source_LuaSolTwo_Public_LuaSolTwoBPLibrary_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LuaPlugin_Plugins_LuaSolTwo_Source_LuaSolTwo_Public_LuaSolTwoBPLibrary_h_10_RPC_WRAPPERS \
	FID_LuaPlugin_Plugins_LuaSolTwo_Source_LuaSolTwo_Public_LuaSolTwoBPLibrary_h_10_INCLASS \
	FID_LuaPlugin_Plugins_LuaSolTwo_Source_LuaSolTwo_Public_LuaSolTwoBPLibrary_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LUASOLTWO_API UClass* StaticClass<class ULuaSolTwoBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LuaPlugin_Plugins_LuaSolTwo_Source_LuaSolTwo_Public_LuaSolTwoBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
