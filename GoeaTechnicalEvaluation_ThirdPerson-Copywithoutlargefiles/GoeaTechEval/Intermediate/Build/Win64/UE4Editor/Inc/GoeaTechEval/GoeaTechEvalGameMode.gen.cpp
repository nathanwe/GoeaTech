// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoeaTechEval/GoeaTechEvalGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoeaTechEvalGameMode() {}
// Cross Module References
	GOEATECHEVAL_API UClass* Z_Construct_UClass_AGoeaTechEvalGameMode_NoRegister();
	GOEATECHEVAL_API UClass* Z_Construct_UClass_AGoeaTechEvalGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GoeaTechEval();
// End Cross Module References
	void AGoeaTechEvalGameMode::StaticRegisterNativesAGoeaTechEvalGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGoeaTechEvalGameMode_NoRegister()
	{
		return AGoeaTechEvalGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGoeaTechEvalGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGoeaTechEvalGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GoeaTechEval,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoeaTechEvalGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GoeaTechEvalGameMode.h" },
		{ "ModuleRelativePath", "GoeaTechEvalGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGoeaTechEvalGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoeaTechEvalGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGoeaTechEvalGameMode_Statics::ClassParams = {
		&AGoeaTechEvalGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGoeaTechEvalGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGoeaTechEvalGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGoeaTechEvalGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGoeaTechEvalGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGoeaTechEvalGameMode, 3083440601);
	template<> GOEATECHEVAL_API UClass* StaticClass<AGoeaTechEvalGameMode>()
	{
		return AGoeaTechEvalGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGoeaTechEvalGameMode(Z_Construct_UClass_AGoeaTechEvalGameMode, &AGoeaTechEvalGameMode::StaticClass, TEXT("/Script/GoeaTechEval"), TEXT("AGoeaTechEvalGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGoeaTechEvalGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
