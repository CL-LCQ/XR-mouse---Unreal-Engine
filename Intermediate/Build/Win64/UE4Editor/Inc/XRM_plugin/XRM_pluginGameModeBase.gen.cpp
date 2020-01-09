// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XRM_plugin/XRM_pluginGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXRM_pluginGameModeBase() {}
// Cross Module References
	XRM_PLUGIN_API UClass* Z_Construct_UClass_AXRM_pluginGameModeBase_NoRegister();
	XRM_PLUGIN_API UClass* Z_Construct_UClass_AXRM_pluginGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_XRM_plugin();
// End Cross Module References
	void AXRM_pluginGameModeBase::StaticRegisterNativesAXRM_pluginGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AXRM_pluginGameModeBase_NoRegister()
	{
		return AXRM_pluginGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AXRM_pluginGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AXRM_pluginGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_XRM_plugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRM_pluginGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "XRM_pluginGameModeBase.h" },
		{ "ModuleRelativePath", "XRM_pluginGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AXRM_pluginGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXRM_pluginGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AXRM_pluginGameModeBase_Statics::ClassParams = {
		&AXRM_pluginGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AXRM_pluginGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AXRM_pluginGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AXRM_pluginGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AXRM_pluginGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AXRM_pluginGameModeBase, 991098085);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AXRM_pluginGameModeBase(Z_Construct_UClass_AXRM_pluginGameModeBase, &AXRM_pluginGameModeBase::StaticClass, TEXT("/Script/XRM_plugin"), TEXT("AXRM_pluginGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AXRM_pluginGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
