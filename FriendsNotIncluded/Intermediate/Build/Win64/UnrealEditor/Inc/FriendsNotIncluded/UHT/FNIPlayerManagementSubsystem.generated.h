// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FNIPlayerManagementSubsystem.h"

#ifdef FRIENDSNOTINCLUDED_FNIPlayerManagementSubsystem_generated_h
#error "FNIPlayerManagementSubsystem.generated.h already included, missing '#pragma once' in FNIPlayerManagementSubsystem.h"
#endif
#define FRIENDSNOTINCLUDED_FNIPlayerManagementSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ULocalPlayer;
struct FNIPlayerSlotData;

// ********** Begin Class UFNIPlayerManagementSubsystem ********************************************
#define FID_Users_KiddL_Documents_GitHub_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIPlayerManagementSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateAndRegisterLocalPlayer); \
	DECLARE_FUNCTION(execHasFreePlayerSlot); \
	DECLARE_FUNCTION(execIsPlayerSlotConnected); \
	DECLARE_FUNCTION(execGetPlayerSlotData);


FRIENDSNOTINCLUDED_API UClass* Z_Construct_UClass_UFNIPlayerManagementSubsystem_NoRegister();

#define FID_Users_KiddL_Documents_GitHub_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIPlayerManagementSubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFNIPlayerManagementSubsystem(); \
	friend struct Z_Construct_UClass_UFNIPlayerManagementSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FRIENDSNOTINCLUDED_API UClass* Z_Construct_UClass_UFNIPlayerManagementSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UFNIPlayerManagementSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FriendsNotIncluded"), Z_Construct_UClass_UFNIPlayerManagementSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UFNIPlayerManagementSubsystem)


#define FID_Users_KiddL_Documents_GitHub_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIPlayerManagementSubsystem_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFNIPlayerManagementSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFNIPlayerManagementSubsystem(UFNIPlayerManagementSubsystem&&) = delete; \
	UFNIPlayerManagementSubsystem(const UFNIPlayerManagementSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFNIPlayerManagementSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFNIPlayerManagementSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFNIPlayerManagementSubsystem) \
	NO_API virtual ~UFNIPlayerManagementSubsystem();


#define FID_Users_KiddL_Documents_GitHub_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIPlayerManagementSubsystem_h_13_PROLOG
#define FID_Users_KiddL_Documents_GitHub_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIPlayerManagementSubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_KiddL_Documents_GitHub_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIPlayerManagementSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_KiddL_Documents_GitHub_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIPlayerManagementSubsystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_KiddL_Documents_GitHub_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIPlayerManagementSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFNIPlayerManagementSubsystem;

// ********** End Class UFNIPlayerManagementSubsystem **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_KiddL_Documents_GitHub_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIPlayerManagementSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
