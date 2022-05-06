// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FKey;
#ifdef TEST3_Block_generated_h
#error "Block.generated.h already included, missing '#pragma once' in Block.h"
#endif
#define TEST3_Block_generated_h

#define Test3_Source_Test3_Block_h_12_SPARSE_DATA
#define Test3_Source_Test3_Block_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBlockClicked);


#define Test3_Source_Test3_Block_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBlockClicked);


#define Test3_Source_Test3_Block_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlock(); \
	friend struct Z_Construct_UClass_ABlock_Statics; \
public: \
	DECLARE_CLASS(ABlock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test3"), NO_API) \
	DECLARE_SERIALIZER(ABlock)


#define Test3_Source_Test3_Block_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABlock(); \
	friend struct Z_Construct_UClass_ABlock_Statics; \
public: \
	DECLARE_CLASS(ABlock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test3"), NO_API) \
	DECLARE_SERIALIZER(ABlock)


#define Test3_Source_Test3_Block_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlock(ABlock&&); \
	NO_API ABlock(const ABlock&); \
public:


#define Test3_Source_Test3_Block_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlock(ABlock&&); \
	NO_API ABlock(const ABlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlock)


#define Test3_Source_Test3_Block_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DummyRoot() { return STRUCT_OFFSET(ABlock, DummyRoot); } \
	FORCEINLINE static uint32 __PPO__BlockMesh() { return STRUCT_OFFSET(ABlock, BlockMesh); } \
	FORCEINLINE static uint32 __PPO__ValueText() { return STRUCT_OFFSET(ABlock, ValueText); } \
	FORCEINLINE static uint32 __PPO__BaseMaterial() { return STRUCT_OFFSET(ABlock, BaseMaterial); } \
	FORCEINLINE static uint32 __PPO__OrangeMaterial() { return STRUCT_OFFSET(ABlock, OrangeMaterial); } \
	FORCEINLINE static uint32 __PPO__GreenMaterial() { return STRUCT_OFFSET(ABlock, GreenMaterial); }


#define Test3_Source_Test3_Block_h_9_PROLOG
#define Test3_Source_Test3_Block_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test3_Source_Test3_Block_h_12_PRIVATE_PROPERTY_OFFSET \
	Test3_Source_Test3_Block_h_12_SPARSE_DATA \
	Test3_Source_Test3_Block_h_12_RPC_WRAPPERS \
	Test3_Source_Test3_Block_h_12_INCLASS \
	Test3_Source_Test3_Block_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test3_Source_Test3_Block_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test3_Source_Test3_Block_h_12_PRIVATE_PROPERTY_OFFSET \
	Test3_Source_Test3_Block_h_12_SPARSE_DATA \
	Test3_Source_Test3_Block_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Test3_Source_Test3_Block_h_12_INCLASS_NO_PURE_DECLS \
	Test3_Source_Test3_Block_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST3_API UClass* StaticClass<class ABlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test3_Source_Test3_Block_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
