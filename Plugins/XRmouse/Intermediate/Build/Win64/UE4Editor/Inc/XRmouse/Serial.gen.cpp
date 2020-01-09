// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XRmouse/Private/Serial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSerial() {}
// Cross Module References
	XRMOUSE_API UEnum* Z_Construct_UEnum_XRmouse_ELineEnd();
	UPackage* Z_Construct_UPackage__Script_XRmouse();
	XRMOUSE_API UClass* Z_Construct_UClass_USerial_NoRegister();
	XRMOUSE_API UClass* Z_Construct_UClass_USerial();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	XRMOUSE_API UFunction* Z_Construct_UFunction_USerial_Close();
	XRMOUSE_API UFunction* Z_Construct_UFunction_USerial_connectXRmouse();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	XRMOUSE_API UFunction* Z_Construct_UFunction_USerial_OpenComPort();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static UEnum* ELineEnd_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_XRmouse_ELineEnd, Z_Construct_UPackage__Script_XRmouse(), TEXT("ELineEnd"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELineEnd(ELineEnd_StaticEnum, TEXT("/Script/XRmouse"), TEXT("ELineEnd"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_XRmouse_ELineEnd_CRC() { return 1589207917U; }
	UEnum* Z_Construct_UEnum_XRmouse_ELineEnd()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_XRmouse();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELineEnd"), 0, Get_Z_Construct_UEnum_XRmouse_ELineEnd_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELineEnd::rn", (int64)ELineEnd::rn },
				{ "ELineEnd::n", (int64)ELineEnd::n },
				{ "ELineEnd::r", (int64)ELineEnd::r },
				{ "ELineEnd::nr", (int64)ELineEnd::nr },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "XRmouse" },
				{ "ModuleRelativePath", "Private/Serial.h" },
				{ "n.DisplayName", "\\n" },
				{ "nr.DisplayName", "\\n\\r" },
				{ "r.DisplayName", "\\r" },
				{ "rn.DisplayName", "\\r\\n" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_XRmouse,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELineEnd",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ELineEnd",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void USerial::StaticRegisterNativesUSerial()
	{
		UClass* Class = USerial::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Close", &USerial::execClose },
			{ "connectXRmouse", &USerial::execconnectXRmouse },
			{ "OpenComPort", &USerial::execOpenComPort },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USerial_Close_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerial_Close_Statics::Function_MetaDataParams[] = {
		{ "Category", "XRmouse" },
		{ "DisplayName", "Close Port" },
		{ "Keywords", "com end finish release" },
		{ "ModuleRelativePath", "Private/Serial.h" },
		{ "ToolTip", "USerial* OpenComPort(bool &bOpened, USceneComponent* target);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerial_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerial, "Close", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerial_Close_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerial_Close_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerial_Close()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerial_Close_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerial_connectXRmouse_Statics
	{
		struct Serial_eventconnectXRmouse_Parms
		{
			bool bSuccess;
			FVector OutPosition;
			FRotator OutOrientation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutOrientation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPosition;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USerial_connectXRmouse_Statics::NewProp_OutOrientation = { UE4CodeGen_Private::EPropertyClass::Struct, "OutOrientation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(Serial_eventconnectXRmouse_Parms, OutOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USerial_connectXRmouse_Statics::NewProp_OutPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "OutPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(Serial_eventconnectXRmouse_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USerial_connectXRmouse_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((Serial_eventconnectXRmouse_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerial_connectXRmouse_Statics::NewProp_bSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "bSuccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Serial_eventconnectXRmouse_Parms), &Z_Construct_UFunction_USerial_connectXRmouse_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerial_connectXRmouse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_connectXRmouse_Statics::NewProp_OutOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_connectXRmouse_Statics::NewProp_OutPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_connectXRmouse_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerial_connectXRmouse_Statics::Function_MetaDataParams[] = {
		{ "Category", "XRmouse" },
		{ "DisplayName", "Connect XRmouse" },
		{ "keywords", "connects the XRmouse receive" },
		{ "ModuleRelativePath", "Private/Serial.h" },
		{ "ToolTip", "Open a serial port. Don't forget to close the port before exiting the game.\nIf this Serial instance has already an opened port,\nreturn false and doesn't change the opened port number.\n\n@param Port The serial port to open.\n@param BaudRate BaudRate to open the serial port with.\n@return If the serial port was successfully opened." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerial_connectXRmouse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerial, "connectXRmouse", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(Serial_eventconnectXRmouse_Parms), Z_Construct_UFunction_USerial_connectXRmouse_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerial_connectXRmouse_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerial_connectXRmouse_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerial_connectXRmouse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerial_connectXRmouse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerial_connectXRmouse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerial_OpenComPort_Statics
	{
		struct Serial_eventOpenComPort_Parms
		{
			bool bOpened;
			AActor* target;
			USerial* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static void NewProp_bOpened_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOpened;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USerial_OpenComPort_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Serial_eventOpenComPort_Parms, ReturnValue), Z_Construct_UClass_USerial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USerial_OpenComPort_Statics::NewProp_target = { UE4CodeGen_Private::EPropertyClass::Object, "target", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Serial_eventOpenComPort_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USerial_OpenComPort_Statics::NewProp_bOpened_SetBit(void* Obj)
	{
		((Serial_eventOpenComPort_Parms*)Obj)->bOpened = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerial_OpenComPort_Statics::NewProp_bOpened = { UE4CodeGen_Private::EPropertyClass::Bool, "bOpened", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Serial_eventOpenComPort_Parms), &Z_Construct_UFunction_USerial_OpenComPort_Statics::NewProp_bOpened_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerial_OpenComPort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_OpenComPort_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_OpenComPort_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerial_OpenComPort_Statics::NewProp_bOpened,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerial_OpenComPort_Statics::Function_MetaDataParams[] = {
		{ "Category", "XRmouse" },
		{ "DisplayName", "Start device" },
		{ "Keywords", "start device" },
		{ "ModuleRelativePath", "Private/Serial.h" },
		{ "ToolTip", "Open a serial port and return the created Serial instance.\nDon't forget to close the port before exiting the game.\n\n@param bOpened If the serial port was successfully opened.\n@param Port The serial port to open.\n@param BaudRate BaudRate to open the serial port with.\n@return A Serial instance to work with the opened port." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerial_OpenComPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerial, "OpenComPort", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(Serial_eventOpenComPort_Parms), Z_Construct_UFunction_USerial_OpenComPort_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerial_OpenComPort_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerial_OpenComPort_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerial_OpenComPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerial_OpenComPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerial_OpenComPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USerial_NoRegister()
	{
		return USerial::StaticClass();
	}
	struct Z_Construct_UClass_USerial_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WriteLineEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WriteLineEnd;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WriteLineEnd_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USerial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_XRmouse,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USerial_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USerial_Close, "Close" }, // 2824660797
		{ &Z_Construct_UFunction_USerial_connectXRmouse, "connectXRmouse" }, // 1049435314
		{ &Z_Construct_UFunction_USerial_OpenComPort, "OpenComPort" }, // 2443071938
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USerial_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "XRmouse" },
		{ "IncludePath", "Serial.h" },
		{ "Keywords", "XR mouse device" },
		{ "ModuleRelativePath", "Private/Serial.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USerial_Statics::NewProp_WriteLineEnd_MetaData[] = {
		{ "Category", "XRmouse | String" },
		{ "ModuleRelativePath", "Private/Serial.h" },
		{ "ToolTip", "Determines the line ending used when writing lines to serial port with PrintLine." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USerial_Statics::NewProp_WriteLineEnd = { UE4CodeGen_Private::EPropertyClass::Enum, "WriteLineEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(USerial, WriteLineEnd), Z_Construct_UEnum_XRmouse_ELineEnd, METADATA_PARAMS(Z_Construct_UClass_USerial_Statics::NewProp_WriteLineEnd_MetaData, ARRAY_COUNT(Z_Construct_UClass_USerial_Statics::NewProp_WriteLineEnd_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USerial_Statics::NewProp_WriteLineEnd_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USerial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerial_Statics::NewProp_WriteLineEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerial_Statics::NewProp_WriteLineEnd_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USerial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USerial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USerial_Statics::ClassParams = {
		&USerial::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_USerial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USerial_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USerial_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USerial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USerial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USerial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USerial, 1751792968);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USerial(Z_Construct_UClass_USerial, &USerial::StaticClass, TEXT("/Script/XRmouse"), TEXT("USerial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USerial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
