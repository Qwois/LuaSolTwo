// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LuaSolTwo/Public/LuaSolTwoBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuaSolTwoBPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
LUASOLTWO_API UClass* Z_Construct_UClass_ULuaSolTwoBPLibrary();
LUASOLTWO_API UClass* Z_Construct_UClass_ULuaSolTwoBPLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_LuaSolTwo();
// End Cross Module References

// Begin Class ULuaSolTwoBPLibrary Function ExecuteLuaScript
struct Z_Construct_UFunction_ULuaSolTwoBPLibrary_ExecuteLuaScript_Statics
{
	struct LuaSolTwoBPLibrary_eventExecuteLuaScript_Parms
	{
		FString LuaCode;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lua" },
		{ "ModuleRelativePath", "Public/LuaSolTwoBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LuaCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LuaCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULuaSolTwoBPLibrary_ExecuteLuaScript_Statics::NewProp_LuaCode = { "LuaCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaSolTwoBPLibrary_eventExecuteLuaScript_Parms, LuaCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LuaCode_MetaData), NewProp_LuaCode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULuaSolTwoBPLibrary_ExecuteLuaScript_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaSolTwoBPLibrary_eventExecuteLuaScript_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaSolTwoBPLibrary_ExecuteLuaScript_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaSolTwoBPLibrary_ExecuteLuaScript_Statics::NewProp_LuaCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaSolTwoBPLibrary_ExecuteLuaScript_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaSolTwoBPLibrary_ExecuteLuaScript_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaSolTwoBPLibrary_ExecuteLuaScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaSolTwoBPLibrary, nullptr, "ExecuteLuaScript", nullptr, nullptr, Z_Construct_UFunction_ULuaSolTwoBPLibrary_ExecuteLuaScript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaSolTwoBPLibrary_ExecuteLuaScript_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULuaSolTwoBPLibrary_ExecuteLuaScript_Statics::LuaSolTwoBPLibrary_eventExecuteLuaScript_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaSolTwoBPLibrary_ExecuteLuaScript_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULuaSolTwoBPLibrary_ExecuteLuaScript_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULuaSolTwoBPLibrary_ExecuteLuaScript_Statics::LuaSolTwoBPLibrary_eventExecuteLuaScript_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULuaSolTwoBPLibrary_ExecuteLuaScript()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULuaSolTwoBPLibrary_ExecuteLuaScript_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULuaSolTwoBPLibrary::execExecuteLuaScript)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LuaCode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=ULuaSolTwoBPLibrary::ExecuteLuaScript(Z_Param_LuaCode);
	P_NATIVE_END;
}
// End Class ULuaSolTwoBPLibrary Function ExecuteLuaScript

// Begin Class ULuaSolTwoBPLibrary Function GetRandomErrorMessage
struct Z_Construct_UFunction_ULuaSolTwoBPLibrary_GetRandomErrorMessage_Statics
{
	struct LuaSolTwoBPLibrary_eventGetRandomErrorMessage_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lua" },
		{ "ModuleRelativePath", "Public/LuaSolTwoBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULuaSolTwoBPLibrary_GetRandomErrorMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaSolTwoBPLibrary_eventGetRandomErrorMessage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaSolTwoBPLibrary_GetRandomErrorMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaSolTwoBPLibrary_GetRandomErrorMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaSolTwoBPLibrary_GetRandomErrorMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaSolTwoBPLibrary_GetRandomErrorMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaSolTwoBPLibrary, nullptr, "GetRandomErrorMessage", nullptr, nullptr, Z_Construct_UFunction_ULuaSolTwoBPLibrary_GetRandomErrorMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaSolTwoBPLibrary_GetRandomErrorMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULuaSolTwoBPLibrary_GetRandomErrorMessage_Statics::LuaSolTwoBPLibrary_eventGetRandomErrorMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaSolTwoBPLibrary_GetRandomErrorMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULuaSolTwoBPLibrary_GetRandomErrorMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULuaSolTwoBPLibrary_GetRandomErrorMessage_Statics::LuaSolTwoBPLibrary_eventGetRandomErrorMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULuaSolTwoBPLibrary_GetRandomErrorMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULuaSolTwoBPLibrary_GetRandomErrorMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULuaSolTwoBPLibrary::execGetRandomErrorMessage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=ULuaSolTwoBPLibrary::GetRandomErrorMessage();
	P_NATIVE_END;
}
// End Class ULuaSolTwoBPLibrary Function GetRandomErrorMessage

// Begin Class ULuaSolTwoBPLibrary
void ULuaSolTwoBPLibrary::StaticRegisterNativesULuaSolTwoBPLibrary()
{
	UClass* Class = ULuaSolTwoBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExecuteLuaScript", &ULuaSolTwoBPLibrary::execExecuteLuaScript },
		{ "GetRandomErrorMessage", &ULuaSolTwoBPLibrary::execGetRandomErrorMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULuaSolTwoBPLibrary);
UClass* Z_Construct_UClass_ULuaSolTwoBPLibrary_NoRegister()
{
	return ULuaSolTwoBPLibrary::StaticClass();
}
struct Z_Construct_UClass_ULuaSolTwoBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LuaSolTwoBPLibrary.h" },
		{ "ModuleRelativePath", "Public/LuaSolTwoBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULuaSolTwoBPLibrary_ExecuteLuaScript, "ExecuteLuaScript" }, // 3993185081
		{ &Z_Construct_UFunction_ULuaSolTwoBPLibrary_GetRandomErrorMessage, "GetRandomErrorMessage" }, // 653971596
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuaSolTwoBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULuaSolTwoBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_LuaSolTwo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaSolTwoBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULuaSolTwoBPLibrary_Statics::ClassParams = {
	&ULuaSolTwoBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaSolTwoBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_ULuaSolTwoBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULuaSolTwoBPLibrary()
{
	if (!Z_Registration_Info_UClass_ULuaSolTwoBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULuaSolTwoBPLibrary.OuterSingleton, Z_Construct_UClass_ULuaSolTwoBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULuaSolTwoBPLibrary.OuterSingleton;
}
template<> LUASOLTWO_API UClass* StaticClass<ULuaSolTwoBPLibrary>()
{
	return ULuaSolTwoBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULuaSolTwoBPLibrary);
ULuaSolTwoBPLibrary::~ULuaSolTwoBPLibrary() {}
// End Class ULuaSolTwoBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_LuaPlugin_Plugins_LuaSolTwo_Source_LuaSolTwo_Public_LuaSolTwoBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULuaSolTwoBPLibrary, ULuaSolTwoBPLibrary::StaticClass, TEXT("ULuaSolTwoBPLibrary"), &Z_Registration_Info_UClass_ULuaSolTwoBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULuaSolTwoBPLibrary), 2064325828U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LuaPlugin_Plugins_LuaSolTwo_Source_LuaSolTwo_Public_LuaSolTwoBPLibrary_h_4047557019(TEXT("/Script/LuaSolTwo"),
	Z_CompiledInDeferFile_FID_LuaPlugin_Plugins_LuaSolTwo_Source_LuaSolTwo_Public_LuaSolTwoBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LuaPlugin_Plugins_LuaSolTwo_Source_LuaSolTwo_Public_LuaSolTwoBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
