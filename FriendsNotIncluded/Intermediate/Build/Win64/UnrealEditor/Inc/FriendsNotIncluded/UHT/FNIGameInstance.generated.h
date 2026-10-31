// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FNIGameInstance.h"

#ifdef FRIENDSNOTINCLUDED_FNIGameInstance_generated_h
#error "FNIGameInstance.generated.h already included, missing '#pragma once' in FNIGameInstance.h"
#endif
#define FRIENDSNOTINCLUDED_FNIGameInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnPhilosophersStoneCompleted *****************************************
#define FID_Group_Project_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIGameInstance_h_11_DELEGATE \
FRIENDSNOTINCLUDED_API void FOnPhilosophersStoneCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPhilosophersStoneCompleted, int32 WinnerSlot);


// ********** End Delegate FOnPhilosophersStoneCompleted *******************************************

// ********** Begin Class UFNIGameInstance *********************************************************
#define FID_Group_Project_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIGameInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAwardFragment);


FRIENDSNOTINCLUDED_API UClass* Z_Construct_UClass_UFNIGameInstance_NoRegister();

#define FID_Group_Project_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIGameInstance_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFNIGameInstance(); \
	friend struct Z_Construct_UClass_UFNIGameInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FRIENDSNOTINCLUDED_API UClass* Z_Construct_UClass_UFNIGameInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UFNIGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FriendsNotIncluded"), Z_Construct_UClass_UFNIGameInstance_NoRegister) \
	DECLARE_SERIALIZER(UFNIGameInstance)


#define FID_Group_Project_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIGameInstance_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFNIGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFNIGameInstance(UFNIGameInstance&&) = delete; \
	UFNIGameInstance(const UFNIGameInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFNIGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFNIGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFNIGameInstance) \
	NO_API virtual ~UFNIGameInstance();


#define FID_Group_Project_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIGameInstance_h_17_PROLOG
#define FID_Group_Project_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIGameInstance_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Group_Project_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIGameInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Group_Project_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIGameInstance_h_20_INCLASS_NO_PURE_DECLS \
	FID_Group_Project_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIGameInstance_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFNIGameInstance;

// ********** End Class UFNIGameInstance ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Group_Project_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIGameInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
