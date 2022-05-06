// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test3/Block.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlock() {}
// Cross Module References
	TEST3_API UClass* Z_Construct_UClass_ABlock_NoRegister();
	TEST3_API UClass* Z_Construct_UClass_ABlock();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Test3();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	TEST3_API UClass* Z_Construct_UClass_ADesk_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABlock::execBlockClicked)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp);
		P_GET_STRUCT(FKey,Z_Param_ButtonClicked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlockClicked(Z_Param_ClickedComp,Z_Param_ButtonClicked);
		P_NATIVE_END;
	}
	void ABlock::StaticRegisterNativesABlock()
	{
		UClass* Class = ABlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BlockClicked", &ABlock::execBlockClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABlock_BlockClicked_Statics
	{
		struct Block_eventBlockClicked_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonClicked;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonClicked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlock_BlockClicked_Statics::NewProp_ClickedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlock_BlockClicked_Statics::NewProp_ClickedComp = { "ClickedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Block_eventBlockClicked_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABlock_BlockClicked_Statics::NewProp_ClickedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlock_BlockClicked_Statics::NewProp_ClickedComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABlock_BlockClicked_Statics::NewProp_ButtonClicked = { "ButtonClicked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Block_eventBlockClicked_Parms, ButtonClicked), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlock_BlockClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlock_BlockClicked_Statics::NewProp_ClickedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlock_BlockClicked_Statics::NewProp_ButtonClicked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlock_BlockClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Block.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlock_BlockClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlock, nullptr, "BlockClicked", nullptr, nullptr, sizeof(Block_eventBlockClicked_Parms), Z_Construct_UFunction_ABlock_BlockClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlock_BlockClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABlock_BlockClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlock_BlockClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABlock_BlockClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABlock_BlockClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABlock_NoRegister()
	{
		return ABlock::StaticClass();
	}
	struct Z_Construct_UClass_ABlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DummyRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DummyRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ValueText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrangeMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OrangeMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GreenMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GreenMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningGrid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Test3,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlock_BlockClicked, "BlockClicked" }, // 3069272362
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlock_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Block.h" },
		{ "ModuleRelativePath", "Block.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlock_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Block.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlock_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlock, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlock_Statics::NewProp_DummyRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_Statics::NewProp_DummyRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlock_Statics::NewProp_BlockMesh_MetaData[] = {
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Block.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlock_Statics::NewProp_BlockMesh = { "BlockMesh", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlock, BlockMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlock_Statics::NewProp_BlockMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_Statics::NewProp_BlockMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlock_Statics::NewProp_ValueText_MetaData[] = {
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Block.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlock_Statics::NewProp_ValueText = { "ValueText", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlock, ValueText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlock_Statics::NewProp_ValueText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_Statics::NewProp_ValueText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlock_Statics::NewProp_BaseMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Block.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlock_Statics::NewProp_BaseMaterial = { "BaseMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlock, BaseMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlock_Statics::NewProp_BaseMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_Statics::NewProp_BaseMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlock_Statics::NewProp_OrangeMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Block.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlock_Statics::NewProp_OrangeMaterial = { "OrangeMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlock, OrangeMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlock_Statics::NewProp_OrangeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_Statics::NewProp_OrangeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlock_Statics::NewProp_GreenMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Block.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlock_Statics::NewProp_GreenMaterial = { "GreenMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlock, GreenMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlock_Statics::NewProp_GreenMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_Statics::NewProp_GreenMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlock_Statics::NewProp_OwningGrid_MetaData[] = {
		{ "ModuleRelativePath", "Block.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlock_Statics::NewProp_OwningGrid = { "OwningGrid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlock, OwningGrid), Z_Construct_UClass_ADesk_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlock_Statics::NewProp_OwningGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_Statics::NewProp_OwningGrid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlock_Statics::NewProp_DummyRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlock_Statics::NewProp_BlockMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlock_Statics::NewProp_ValueText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlock_Statics::NewProp_BaseMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlock_Statics::NewProp_OrangeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlock_Statics::NewProp_GreenMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlock_Statics::NewProp_OwningGrid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlock_Statics::ClassParams = {
		&ABlock::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlock, 2832930440);
	template<> TEST3_API UClass* StaticClass<ABlock>()
	{
		return ABlock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlock(Z_Construct_UClass_ABlock, &ABlock::StaticClass, TEXT("/Script/Test3"), TEXT("ABlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
