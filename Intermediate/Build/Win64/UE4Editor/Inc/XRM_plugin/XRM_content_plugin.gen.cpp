// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XRM_plugin/Public/XRM_content_plugin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXRM_content_plugin() {}
// Cross Module References
	XRM_PLUGIN_API UClass* Z_Construct_UClass_AXRM_content_plugin_NoRegister();
	XRM_PLUGIN_API UClass* Z_Construct_UClass_AXRM_content_plugin();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_XRM_plugin();
// End Cross Module References
	void AXRM_content_plugin::StaticRegisterNativesAXRM_content_plugin()
	{
	}
	UClass* Z_Construct_UClass_AXRM_content_plugin_NoRegister()
	{
		return AXRM_content_plugin::StaticClass();
	}
	struct Z_Construct_UClass_AXRM_content_plugin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AXRM_content_plugin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_XRM_plugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRM_content_plugin_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "XRM_content_plugin.h" },
		{ "ModuleRelativePath", "Public/XRM_content_plugin.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AXRM_content_plugin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXRM_content_plugin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AXRM_content_plugin_Statics::ClassParams = {
		&AXRM_content_plugin::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AXRM_content_plugin_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AXRM_content_plugin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AXRM_content_plugin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AXRM_content_plugin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AXRM_content_plugin, 2426985623);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AXRM_content_plugin(Z_Construct_UClass_AXRM_content_plugin, &AXRM_content_plugin::StaticClass, TEXT("/Script/XRM_plugin"), TEXT("AXRM_content_plugin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AXRM_content_plugin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
