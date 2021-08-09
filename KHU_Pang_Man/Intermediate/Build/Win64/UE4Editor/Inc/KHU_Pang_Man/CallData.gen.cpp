// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KHU_Pang_Man/CallData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCallData() {}
// Cross Module References
	KHU_PANG_MAN_API UClass* Z_Construct_UClass_UCallData_NoRegister();
	KHU_PANG_MAN_API UClass* Z_Construct_UClass_UCallData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_KHU_Pang_Man();
// End Cross Module References
	void UCallData::StaticRegisterNativesUCallData()
	{
	}
	UClass* Z_Construct_UClass_UCallData_NoRegister()
	{
		return UCallData::StaticClass();
	}
	struct Z_Construct_UClass_UCallData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCallData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_KHU_Pang_Man,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCallData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CallData.h" },
		{ "ModuleRelativePath", "CallData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCallData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCallData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCallData_Statics::ClassParams = {
		&UCallData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCallData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCallData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCallData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCallData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCallData, 1630277300);
	template<> KHU_PANG_MAN_API UClass* StaticClass<UCallData>()
	{
		return UCallData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCallData(Z_Construct_UClass_UCallData, &UCallData::StaticClass, TEXT("/Script/KHU_Pang_Man"), TEXT("UCallData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCallData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
