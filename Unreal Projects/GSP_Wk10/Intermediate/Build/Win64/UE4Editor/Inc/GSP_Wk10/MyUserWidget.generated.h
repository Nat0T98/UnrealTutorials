// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GSP_WK10_MyUserWidget_generated_h
#error "MyUserWidget.generated.h already included, missing '#pragma once' in MyUserWidget.h"
#endif
#define GSP_WK10_MyUserWidget_generated_h

#define GSP_Wk10_Source_GSP_Wk10_MyUserWidget_h_9_DELEGATE \
static inline void FMyBindableEvent_DelegateWrapper(const FMulticastScriptDelegate& MyBindableEvent) \
{ \
	MyBindableEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define GSP_Wk10_Source_GSP_Wk10_MyUserWidget_h_17_SPARSE_DATA
#define GSP_Wk10_Source_GSP_Wk10_MyUserWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTestButtonClick);


#define GSP_Wk10_Source_GSP_Wk10_MyUserWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTestButtonClick);


#define GSP_Wk10_Source_GSP_Wk10_MyUserWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyUserWidget(); \
	friend struct Z_Construct_UClass_UMyUserWidget_Statics; \
public: \
	DECLARE_CLASS(UMyUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GSP_Wk10"), NO_API) \
	DECLARE_SERIALIZER(UMyUserWidget)


#define GSP_Wk10_Source_GSP_Wk10_MyUserWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMyUserWidget(); \
	friend struct Z_Construct_UClass_UMyUserWidget_Statics; \
public: \
	DECLARE_CLASS(UMyUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GSP_Wk10"), NO_API) \
	DECLARE_SERIALIZER(UMyUserWidget)


#define GSP_Wk10_Source_GSP_Wk10_MyUserWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyUserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyUserWidget(UMyUserWidget&&); \
	NO_API UMyUserWidget(const UMyUserWidget&); \
public:


#define GSP_Wk10_Source_GSP_Wk10_MyUserWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyUserWidget(UMyUserWidget&&); \
	NO_API UMyUserWidget(const UMyUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyUserWidget)


#define GSP_Wk10_Source_GSP_Wk10_MyUserWidget_h_17_PRIVATE_PROPERTY_OFFSET
#define GSP_Wk10_Source_GSP_Wk10_MyUserWidget_h_14_PROLOG
#define GSP_Wk10_Source_GSP_Wk10_MyUserWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GSP_Wk10_Source_GSP_Wk10_MyUserWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	GSP_Wk10_Source_GSP_Wk10_MyUserWidget_h_17_SPARSE_DATA \
	GSP_Wk10_Source_GSP_Wk10_MyUserWidget_h_17_RPC_WRAPPERS \
	GSP_Wk10_Source_GSP_Wk10_MyUserWidget_h_17_INCLASS \
	GSP_Wk10_Source_GSP_Wk10_MyUserWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GSP_Wk10_Source_GSP_Wk10_MyUserWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GSP_Wk10_Source_GSP_Wk10_MyUserWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	GSP_Wk10_Source_GSP_Wk10_MyUserWidget_h_17_SPARSE_DATA \
	GSP_Wk10_Source_GSP_Wk10_MyUserWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	GSP_Wk10_Source_GSP_Wk10_MyUserWidget_h_17_INCLASS_NO_PURE_DECLS \
	GSP_Wk10_Source_GSP_Wk10_MyUserWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GSP_WK10_API UClass* StaticClass<class UMyUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GSP_Wk10_Source_GSP_Wk10_MyUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
