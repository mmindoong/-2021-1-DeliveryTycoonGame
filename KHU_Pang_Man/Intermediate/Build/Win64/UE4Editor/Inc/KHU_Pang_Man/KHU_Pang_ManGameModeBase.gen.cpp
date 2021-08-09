// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KHU_Pang_Man/KHU_Pang_ManGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKHU_Pang_ManGameModeBase() {}
// Cross Module References
	KHU_PANG_MAN_API UClass* Z_Construct_UClass_AKHU_Pang_ManGameModeBase_NoRegister();
	KHU_PANG_MAN_API UClass* Z_Construct_UClass_AKHU_Pang_ManGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_KHU_Pang_Man();
// End Cross Module References
	void AKHU_Pang_ManGameModeBase::StaticRegisterNativesAKHU_Pang_ManGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AKHU_Pang_ManGameModeBase_NoRegister()
	{
		return AKHU_Pang_ManGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AKHU_Pang_ManGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKHU_Pang_ManGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KHU_Pang_Man,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKHU_Pang_ManGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "KHU_Pang_ManGameModeBase.h" },
		{ "ModuleRelativePath", "KHU_Pang_ManGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKHU_Pang_ManGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKHU_Pang_ManGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKHU_Pang_ManGameModeBase_Statics::ClassParams = {
		&AKHU_Pang_ManGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AKHU_Pang_ManGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKHU_Pang_ManGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKHU_Pang_ManGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKHU_Pang_ManGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKHU_Pang_ManGameModeBase, 3940359225);
	template<> KHU_PANG_MAN_API UClass* StaticClass<AKHU_Pang_ManGameModeBase>()
	{
		return AKHU_Pang_ManGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKHU_Pang_ManGameModeBase(Z_Construct_UClass_AKHU_Pang_ManGameModeBase, &AKHU_Pang_ManGameModeBase::StaticClass, TEXT("/Script/KHU_Pang_Man"), TEXT("AKHU_Pang_ManGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKHU_Pang_ManGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
