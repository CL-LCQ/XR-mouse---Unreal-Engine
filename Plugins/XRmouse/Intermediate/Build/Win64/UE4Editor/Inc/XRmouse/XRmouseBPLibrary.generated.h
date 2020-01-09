// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef XRMOUSE_XRmouseBPLibrary_generated_h
#error "XRmouseBPLibrary.generated.h already included, missing '#pragma once' in XRmouseBPLibrary.h"
#endif
#define XRMOUSE_XRmouseBPLibrary_generated_h

#define XRM_plugin_Plugins_XRmouse_Source_XRmouse_Public_XRmouseBPLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execXRmouseSampleFunction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UXRmouseBPLibrary::XRmouseSampleFunction(Z_Param_Param); \
		P_NATIVE_END; \
	}


#define XRM_plugin_Plugins_XRmouse_Source_XRmouse_Public_XRmouseBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execXRmouseSampleFunction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UXRmouseBPLibrary::XRmouseSampleFunction(Z_Param_Param); \
		P_NATIVE_END; \
	}


#define XRM_plugin_Plugins_XRmouse_Source_XRmouse_Public_XRmouseBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXRmouseBPLibrary(); \
	friend struct Z_Construct_UClass_UXRmouseBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UXRmouseBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XRmouse"), NO_API) \
	DECLARE_SERIALIZER(UXRmouseBPLibrary)


#define XRM_plugin_Plugins_XRmouse_Source_XRmouse_Public_XRmouseBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUXRmouseBPLibrary(); \
	friend struct Z_Construct_UClass_UXRmouseBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UXRmouseBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XRmouse"), NO_API) \
	DECLARE_SERIALIZER(UXRmouseBPLibrary)


#define XRM_plugin_Plugins_XRmouse_Source_XRmouse_Public_XRmouseBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXRmouseBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXRmouseBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXRmouseBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXRmouseBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXRmouseBPLibrary(UXRmouseBPLibrary&&); \
	NO_API UXRmouseBPLibrary(const UXRmouseBPLibrary&); \
public:


#define XRM_plugin_Plugins_XRmouse_Source_XRmouse_Public_XRmouseBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXRmouseBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXRmouseBPLibrary(UXRmouseBPLibrary&&); \
	NO_API UXRmouseBPLibrary(const UXRmouseBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXRmouseBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXRmouseBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXRmouseBPLibrary)


#define XRM_plugin_Plugins_XRmouse_Source_XRmouse_Public_XRmouseBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET
#define XRM_plugin_Plugins_XRmouse_Source_XRmouse_Public_XRmouseBPLibrary_h_25_PROLOG
#define XRM_plugin_Plugins_XRmouse_Source_XRmouse_Public_XRmouseBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XRM_plugin_Plugins_XRmouse_Source_XRmouse_Public_XRmouseBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	XRM_plugin_Plugins_XRmouse_Source_XRmouse_Public_XRmouseBPLibrary_h_28_RPC_WRAPPERS \
	XRM_plugin_Plugins_XRmouse_Source_XRmouse_Public_XRmouseBPLibrary_h_28_INCLASS \
	XRM_plugin_Plugins_XRmouse_Source_XRmouse_Public_XRmouseBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define XRM_plugin_Plugins_XRmouse_Source_XRmouse_Public_XRmouseBPLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XRM_plugin_Plugins_XRmouse_Source_XRmouse_Public_XRmouseBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	XRM_plugin_Plugins_XRmouse_Source_XRmouse_Public_XRmouseBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	XRM_plugin_Plugins_XRmouse_Source_XRmouse_Public_XRmouseBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
	XRM_plugin_Plugins_XRmouse_Source_XRmouse_Public_XRmouseBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class XRmouseBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID XRM_plugin_Plugins_XRmouse_Source_XRmouse_Public_XRmouseBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
