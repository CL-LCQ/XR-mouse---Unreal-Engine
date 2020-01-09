// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XRmouse/Public/XRmouseBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXRmouseBPLibrary() {}
// Cross Module References
	XRMOUSE_API UClass* Z_Construct_UClass_UXRmouseBPLibrary_NoRegister();
	XRMOUSE_API UClass* Z_Construct_UClass_UXRmouseBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_XRmouse();
	XRMOUSE_API UFunction* Z_Construct_UFunction_UXRmouseBPLibrary_XRmouseSampleFunction();
// End Cross Module References
	void UXRmouseBPLibrary::StaticRegisterNativesUXRmouseBPLibrary()
	{
		UClass* Class = UXRmouseBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "XRmouseSampleFunction", &UXRmouseBPLibrary::execXRmouseSampleFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXRmouseBPLibrary_XRmouseSampleFunction_Statics
	{
		struct XRmouseBPLibrary_eventXRmouseSampleFunction_Parms
		{
			float Param;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXRmouseBPLibrary_XRmouseSampleFunction_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(XRmouseBPLibrary_eventXRmouseSampleFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXRmouseBPLibrary_XRmouseSampleFunction_Statics::NewProp_Param = { UE4CodeGen_Private::EPropertyClass::Float, "Param", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(XRmouseBPLibrary_eventXRmouseSampleFunction_Parms, Param), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRmouseBPLibrary_XRmouseSampleFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRmouseBPLibrary_XRmouseSampleFunction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRmouseBPLibrary_XRmouseSampleFunction_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRmouseBPLibrary_XRmouseSampleFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "XRmouseTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "XRmouse sample test testing" },
		{ "ModuleRelativePath", "Public/XRmouseBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRmouseBPLibrary_XRmouseSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRmouseBPLibrary, "XRmouseSampleFunction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(XRmouseBPLibrary_eventXRmouseSampleFunction_Parms), Z_Construct_UFunction_UXRmouseBPLibrary_XRmouseSampleFunction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UXRmouseBPLibrary_XRmouseSampleFunction_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRmouseBPLibrary_XRmouseSampleFunction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UXRmouseBPLibrary_XRmouseSampleFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRmouseBPLibrary_XRmouseSampleFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXRmouseBPLibrary_XRmouseSampleFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXRmouseBPLibrary_NoRegister()
	{
		return UXRmouseBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UXRmouseBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXRmouseBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_XRmouse,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXRmouseBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXRmouseBPLibrary_XRmouseSampleFunction, "XRmouseSampleFunction" }, // 2784911287
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRmouseBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "XRmouseBPLibrary.h" },
		{ "ModuleRelativePath", "Public/XRmouseBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXRmouseBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXRmouseBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXRmouseBPLibrary_Statics::ClassParams = {
		&UXRmouseBPLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UXRmouseBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UXRmouseBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXRmouseBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXRmouseBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXRmouseBPLibrary, 3587860831);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXRmouseBPLibrary(Z_Construct_UClass_UXRmouseBPLibrary, &UXRmouseBPLibrary::StaticClass, TEXT("/Script/XRmouse"), TEXT("UXRmouseBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXRmouseBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
