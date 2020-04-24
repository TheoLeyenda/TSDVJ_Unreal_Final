// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LeyendaTheoProject/LeyendaTheoProjectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeyendaTheoProjectGameMode() {}
// Cross Module References
	LEYENDATHEOPROJECT_API UClass* Z_Construct_UClass_ALeyendaTheoProjectGameMode_NoRegister();
	LEYENDATHEOPROJECT_API UClass* Z_Construct_UClass_ALeyendaTheoProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_LeyendaTheoProject();
// End Cross Module References
	void ALeyendaTheoProjectGameMode::StaticRegisterNativesALeyendaTheoProjectGameMode()
	{
	}
	UClass* Z_Construct_UClass_ALeyendaTheoProjectGameMode_NoRegister()
	{
		return ALeyendaTheoProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALeyendaTheoProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALeyendaTheoProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LeyendaTheoProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeyendaTheoProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LeyendaTheoProjectGameMode.h" },
		{ "ModuleRelativePath", "LeyendaTheoProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALeyendaTheoProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALeyendaTheoProjectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALeyendaTheoProjectGameMode_Statics::ClassParams = {
		&ALeyendaTheoProjectGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ALeyendaTheoProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALeyendaTheoProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALeyendaTheoProjectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALeyendaTheoProjectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALeyendaTheoProjectGameMode, 3910698487);
	template<> LEYENDATHEOPROJECT_API UClass* StaticClass<ALeyendaTheoProjectGameMode>()
	{
		return ALeyendaTheoProjectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALeyendaTheoProjectGameMode(Z_Construct_UClass_ALeyendaTheoProjectGameMode, &ALeyendaTheoProjectGameMode::StaticClass, TEXT("/Script/LeyendaTheoProject"), TEXT("ALeyendaTheoProjectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALeyendaTheoProjectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
