// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
class AActor;
class USerial;
#ifdef XRMOUSE_Serial_generated_h
#error "Serial.generated.h already included, missing '#pragma once' in Serial.h"
#endif
#define XRMOUSE_Serial_generated_h

#define XRM_plugin_Plugins_XRmouse_Source_XRmouse_Private_Serial_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execconnectXRmouse) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutOrientation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->connectXRmouse(Z_Param_Out_bSuccess,Z_Param_Out_OutPosition,Z_Param_Out_OutOrientation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Close(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenComPort) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bOpened); \
		P_GET_OBJECT(AActor,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USerial**)Z_Param__Result=P_THIS->OpenComPort(Z_Param_Out_bOpened,Z_Param_target); \
		P_NATIVE_END; \
	}


#define XRM_plugin_Plugins_XRmouse_Source_XRmouse_Private_Serial_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execconnectXRmouse) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutOrientation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->connectXRmouse(Z_Param_Out_bSuccess,Z_Param_Out_OutPosition,Z_Param_Out_OutOrientation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Close(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenComPort) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bOpened); \
		P_GET_OBJECT(AActor,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USerial**)Z_Param__Result=P_THIS->OpenComPort(Z_Param_Out_bOpened,Z_Param_target); \
		P_NATIVE_END; \
	}


#define XRM_plugin_Plugins_XRmouse_Source_XRmouse_Private_Serial_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSerial(); \
	friend struct Z_Construct_UClass_USerial_Statics; \
public: \
	DECLARE_CLASS(USerial, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XRmouse"), NO_API) \
	DECLARE_SERIALIZER(USerial)


#define XRM_plugin_Plugins_XRmouse_Source_XRmouse_Private_Serial_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUSerial(); \
	friend struct Z_Construct_UClass_USerial_Statics; \
public: \
	DECLARE_CLASS(USerial, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XRmouse"), NO_API) \
	DECLARE_SERIALIZER(USerial)


#define XRM_plugin_Plugins_XRmouse_Source_XRmouse_Private_Serial_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USerial(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USerial) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USerial); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USerial); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USerial(USerial&&); \
	NO_API USerial(const USerial&); \
public:


#define XRM_plugin_Plugins_XRmouse_Source_XRmouse_Private_Serial_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USerial(USerial&&); \
	NO_API USerial(const USerial&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USerial); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USerial); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USerial)


#define XRM_plugin_Plugins_XRmouse_Source_XRmouse_Private_Serial_h_44_PRIVATE_PROPERTY_OFFSET
#define XRM_plugin_Plugins_XRmouse_Source_XRmouse_Private_Serial_h_41_PROLOG
#define XRM_plugin_Plugins_XRmouse_Source_XRmouse_Private_Serial_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XRM_plugin_Plugins_XRmouse_Source_XRmouse_Private_Serial_h_44_PRIVATE_PROPERTY_OFFSET \
	XRM_plugin_Plugins_XRmouse_Source_XRmouse_Private_Serial_h_44_RPC_WRAPPERS \
	XRM_plugin_Plugins_XRmouse_Source_XRmouse_Private_Serial_h_44_INCLASS \
	XRM_plugin_Plugins_XRmouse_Source_XRmouse_Private_Serial_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define XRM_plugin_Plugins_XRmouse_Source_XRmouse_Private_Serial_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XRM_plugin_Plugins_XRmouse_Source_XRmouse_Private_Serial_h_44_PRIVATE_PROPERTY_OFFSET \
	XRM_plugin_Plugins_XRmouse_Source_XRmouse_Private_Serial_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	XRM_plugin_Plugins_XRmouse_Source_XRmouse_Private_Serial_h_44_INCLASS_NO_PURE_DECLS \
	XRM_plugin_Plugins_XRmouse_Source_XRmouse_Private_Serial_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID XRM_plugin_Plugins_XRmouse_Source_XRmouse_Private_Serial_h


#define FOREACH_ENUM_ELINEEND(op) \
	op(ELineEnd::rn) \
	op(ELineEnd::n) \
	op(ELineEnd::r) \
	op(ELineEnd::nr) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
