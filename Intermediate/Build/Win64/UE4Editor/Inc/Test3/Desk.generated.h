// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST3_Desk_generated_h
#error "Desk.generated.h already included, missing '#pragma once' in Desk.h"
#endif
#define TEST3_Desk_generated_h

#define Test3_Source_Test3_Desk_h_13_SPARSE_DATA
#define Test3_Source_Test3_Desk_h_13_RPC_WRAPPERS
#define Test3_Source_Test3_Desk_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Test3_Source_Test3_Desk_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADesk(); \
	friend struct Z_Construct_UClass_ADesk_Statics; \
public: \
	DECLARE_CLASS(ADesk, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test3"), NO_API) \
	DECLARE_SERIALIZER(ADesk)


#define Test3_Source_Test3_Desk_h_13_INCLASS \
private: \
	static void StaticRegisterNativesADesk(); \
	friend struct Z_Construct_UClass_ADesk_Statics; \
public: \
	DECLARE_CLASS(ADesk, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test3"), NO_API) \
	DECLARE_SERIALIZER(ADesk)


#define Test3_Source_Test3_Desk_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADesk(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADesk) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADesk); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADesk); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADesk(ADesk&&); \
	NO_API ADesk(const ADesk&); \
public:


#define Test3_Source_Test3_Desk_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADesk(ADesk&&); \
	NO_API ADesk(const ADesk&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADesk); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADesk); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADesk)


#define Test3_Source_Test3_Desk_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DummyRoot() { return STRUCT_OFFSET(ADesk, DummyRoot); }


#define Test3_Source_Test3_Desk_h_10_PROLOG
#define Test3_Source_Test3_Desk_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test3_Source_Test3_Desk_h_13_PRIVATE_PROPERTY_OFFSET \
	Test3_Source_Test3_Desk_h_13_SPARSE_DATA \
	Test3_Source_Test3_Desk_h_13_RPC_WRAPPERS \
	Test3_Source_Test3_Desk_h_13_INCLASS \
	Test3_Source_Test3_Desk_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test3_Source_Test3_Desk_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test3_Source_Test3_Desk_h_13_PRIVATE_PROPERTY_OFFSET \
	Test3_Source_Test3_Desk_h_13_SPARSE_DATA \
	Test3_Source_Test3_Desk_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Test3_Source_Test3_Desk_h_13_INCLASS_NO_PURE_DECLS \
	Test3_Source_Test3_Desk_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST3_API UClass* StaticClass<class ADesk>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test3_Source_Test3_Desk_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
