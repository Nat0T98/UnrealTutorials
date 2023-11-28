// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GSP_Wk10/GSP_Wk10GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSP_Wk10GameMode() {}
// Cross Module References
	GSP_WK10_API UClass* Z_Construct_UClass_AGSP_Wk10GameMode_NoRegister();
	GSP_WK10_API UClass* Z_Construct_UClass_AGSP_Wk10GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GSP_Wk10();
// End Cross Module References
	void AGSP_Wk10GameMode::StaticRegisterNativesAGSP_Wk10GameMode()
	{
	}
	UClass* Z_Construct_UClass_AGSP_Wk10GameMode_NoRegister()
	{
		return AGSP_Wk10GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGSP_Wk10GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGSP_Wk10GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GSP_Wk10,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGSP_Wk10GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GSP_Wk10GameMode.h" },
		{ "ModuleRelativePath", "GSP_Wk10GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGSP_Wk10GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGSP_Wk10GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGSP_Wk10GameMode_Statics::ClassParams = {
		&AGSP_Wk10GameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGSP_Wk10GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGSP_Wk10GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGSP_Wk10GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGSP_Wk10GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGSP_Wk10GameMode, 470355876);
	template<> GSP_WK10_API UClass* StaticClass<AGSP_Wk10GameMode>()
	{
		return AGSP_Wk10GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGSP_Wk10GameMode(Z_Construct_UClass_AGSP_Wk10GameMode, &AGSP_Wk10GameMode::StaticClass, TEXT("/Script/GSP_Wk10"), TEXT("AGSP_Wk10GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGSP_Wk10GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
