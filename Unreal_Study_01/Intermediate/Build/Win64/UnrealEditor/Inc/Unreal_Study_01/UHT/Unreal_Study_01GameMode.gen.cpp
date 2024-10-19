// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal_Study_01/Unreal_Study_01GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnreal_Study_01GameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UNREAL_STUDY_01_API UClass* Z_Construct_UClass_AUnreal_Study_01GameMode();
	UNREAL_STUDY_01_API UClass* Z_Construct_UClass_AUnreal_Study_01GameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Unreal_Study_01();
// End Cross Module References
	void AUnreal_Study_01GameMode::StaticRegisterNativesAUnreal_Study_01GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnreal_Study_01GameMode);
	UClass* Z_Construct_UClass_AUnreal_Study_01GameMode_NoRegister()
	{
		return AUnreal_Study_01GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUnreal_Study_01GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnreal_Study_01GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal_Study_01,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal_Study_01GameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnreal_Study_01GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Unreal_Study_01GameMode.h" },
		{ "ModuleRelativePath", "Unreal_Study_01GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnreal_Study_01GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnreal_Study_01GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnreal_Study_01GameMode_Statics::ClassParams = {
		&AUnreal_Study_01GameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal_Study_01GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUnreal_Study_01GameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AUnreal_Study_01GameMode()
	{
		if (!Z_Registration_Info_UClass_AUnreal_Study_01GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnreal_Study_01GameMode.OuterSingleton, Z_Construct_UClass_AUnreal_Study_01GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUnreal_Study_01GameMode.OuterSingleton;
	}
	template<> UNREAL_STUDY_01_API UClass* StaticClass<AUnreal_Study_01GameMode>()
	{
		return AUnreal_Study_01GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnreal_Study_01GameMode);
	AUnreal_Study_01GameMode::~AUnreal_Study_01GameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_USER_Desktop_Programming_Repository_09_Unreal_Engine_v5_3_Unreal_Study_01_Source_Unreal_Study_01_Unreal_Study_01GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_USER_Desktop_Programming_Repository_09_Unreal_Engine_v5_3_Unreal_Study_01_Source_Unreal_Study_01_Unreal_Study_01GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUnreal_Study_01GameMode, AUnreal_Study_01GameMode::StaticClass, TEXT("AUnreal_Study_01GameMode"), &Z_Registration_Info_UClass_AUnreal_Study_01GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnreal_Study_01GameMode), 1096217421U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_USER_Desktop_Programming_Repository_09_Unreal_Engine_v5_3_Unreal_Study_01_Source_Unreal_Study_01_Unreal_Study_01GameMode_h_679882127(TEXT("/Script/Unreal_Study_01"),
		Z_CompiledInDeferFile_FID_Users_USER_Desktop_Programming_Repository_09_Unreal_Engine_v5_3_Unreal_Study_01_Source_Unreal_Study_01_Unreal_Study_01GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_USER_Desktop_Programming_Repository_09_Unreal_Engine_v5_3_Unreal_Study_01_Source_Unreal_Study_01_Unreal_Study_01GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
