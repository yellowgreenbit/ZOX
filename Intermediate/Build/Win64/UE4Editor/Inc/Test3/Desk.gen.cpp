// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test3/Desk.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDesk() {}
// Cross Module References
	TEST3_API UClass* Z_Construct_UClass_ADesk_NoRegister();
	TEST3_API UClass* Z_Construct_UClass_ADesk();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Test3();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AAmbientSound_NoRegister();
// End Cross Module References
	void ADesk::StaticRegisterNativesADesk()
	{
	}
	UClass* Z_Construct_UClass_ADesk_NoRegister()
	{
		return ADesk::StaticClass();
	}
	struct Z_Construct_UClass_ADesk_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DummyRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DummyRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_soundClick_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_soundClick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockSpacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlockSpacing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADesk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Test3,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesk_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Desk.h" },
		{ "ModuleRelativePath", "Desk.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesk_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "Category", "Desk" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Desk.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADesk_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADesk, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADesk_Statics::NewProp_DummyRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADesk_Statics::NewProp_DummyRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesk_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Desk" },
		{ "ModuleRelativePath", "Desk.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADesk_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADesk, Size), METADATA_PARAMS(Z_Construct_UClass_ADesk_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADesk_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesk_Statics::NewProp_soundClick_MetaData[] = {
		{ "Category", "Desk" },
		{ "ModuleRelativePath", "Desk.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADesk_Statics::NewProp_soundClick = { "soundClick", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADesk, soundClick), Z_Construct_UClass_AAmbientSound_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADesk_Statics::NewProp_soundClick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADesk_Statics::NewProp_soundClick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesk_Statics::NewProp_BlockSpacing_MetaData[] = {
		{ "Category", "Desk" },
		{ "ModuleRelativePath", "Desk.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADesk_Statics::NewProp_BlockSpacing = { "BlockSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADesk, BlockSpacing), METADATA_PARAMS(Z_Construct_UClass_ADesk_Statics::NewProp_BlockSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADesk_Statics::NewProp_BlockSpacing_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADesk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesk_Statics::NewProp_DummyRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesk_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesk_Statics::NewProp_soundClick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesk_Statics::NewProp_BlockSpacing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADesk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADesk>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADesk_Statics::ClassParams = {
		&ADesk::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADesk_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADesk_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADesk_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADesk_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADesk()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADesk_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADesk, 3403461325);
	template<> TEST3_API UClass* StaticClass<ADesk>()
	{
		return ADesk::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADesk(Z_Construct_UClass_ADesk, &ADesk::StaticClass, TEXT("/Script/Test3"), TEXT("ADesk"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADesk);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
