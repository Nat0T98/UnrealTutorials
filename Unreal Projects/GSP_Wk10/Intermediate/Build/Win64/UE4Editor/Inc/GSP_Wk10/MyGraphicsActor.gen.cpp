// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GSP_Wk10/MyGraphicsActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGraphicsActor() {}
// Cross Module References
	GSP_WK10_API UClass* Z_Construct_UClass_AMyGraphicsActor_NoRegister();
	GSP_WK10_API UClass* Z_Construct_UClass_AMyGraphicsActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GSP_Wk10();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	void AMyGraphicsActor::StaticRegisterNativesAMyGraphicsActor()
	{
	}
	UClass* Z_Construct_UClass_AMyGraphicsActor_NoRegister()
	{
		return AMyGraphicsActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyGraphicsActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyMat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyMat2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyMat2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyGraphicsActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GSP_Wk10,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGraphicsActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyGraphicsActor.h" },
		{ "ModuleRelativePath", "MyGraphicsActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGraphicsActor_Statics::NewProp_MyMat_MetaData[] = {
		{ "Category", "MyGraphicsActor" },
		{ "ModuleRelativePath", "MyGraphicsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGraphicsActor_Statics::NewProp_MyMat = { "MyMat", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGraphicsActor, MyMat), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyGraphicsActor_Statics::NewProp_MyMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGraphicsActor_Statics::NewProp_MyMat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGraphicsActor_Statics::NewProp_MyMat2_MetaData[] = {
		{ "Category", "MyGraphicsActor" },
		{ "ModuleRelativePath", "MyGraphicsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGraphicsActor_Statics::NewProp_MyMat2 = { "MyMat2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGraphicsActor, MyMat2), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyGraphicsActor_Statics::NewProp_MyMat2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGraphicsActor_Statics::NewProp_MyMat2_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyGraphicsActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGraphicsActor_Statics::NewProp_MyMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGraphicsActor_Statics::NewProp_MyMat2,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyGraphicsActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGraphicsActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyGraphicsActor_Statics::ClassParams = {
		&AMyGraphicsActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyGraphicsActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyGraphicsActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyGraphicsActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGraphicsActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyGraphicsActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyGraphicsActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyGraphicsActor, 2602679062);
	template<> GSP_WK10_API UClass* StaticClass<AMyGraphicsActor>()
	{
		return AMyGraphicsActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyGraphicsActor(Z_Construct_UClass_AMyGraphicsActor, &AMyGraphicsActor::StaticClass, TEXT("/Script/GSP_Wk10"), TEXT("AMyGraphicsActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGraphicsActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
