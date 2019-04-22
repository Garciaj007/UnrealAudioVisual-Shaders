// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioVisualShaders/AudioVisualShadersGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioVisualShadersGameModeBase() {}
// Cross Module References
	AUDIOVISUALSHADERS_API UClass* Z_Construct_UClass_AAudioVisualShadersGameModeBase_NoRegister();
	AUDIOVISUALSHADERS_API UClass* Z_Construct_UClass_AAudioVisualShadersGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AudioVisualShaders();
// End Cross Module References
	void AAudioVisualShadersGameModeBase::StaticRegisterNativesAAudioVisualShadersGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AAudioVisualShadersGameModeBase_NoRegister()
	{
		return AAudioVisualShadersGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AAudioVisualShadersGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAudioVisualShadersGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioVisualShaders,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioVisualShadersGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AudioVisualShadersGameModeBase.h" },
		{ "ModuleRelativePath", "AudioVisualShadersGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAudioVisualShadersGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAudioVisualShadersGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAudioVisualShadersGameModeBase_Statics::ClassParams = {
		&AAudioVisualShadersGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AAudioVisualShadersGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAudioVisualShadersGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAudioVisualShadersGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAudioVisualShadersGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAudioVisualShadersGameModeBase, 1588493435);
	template<> AUDIOVISUALSHADERS_API UClass* StaticClass<AAudioVisualShadersGameModeBase>()
	{
		return AAudioVisualShadersGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAudioVisualShadersGameModeBase(Z_Construct_UClass_AAudioVisualShadersGameModeBase, &AAudioVisualShadersGameModeBase::StaticClass, TEXT("/Script/AudioVisualShaders"), TEXT("AAudioVisualShadersGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAudioVisualShadersGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
