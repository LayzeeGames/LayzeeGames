// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FriendsNotIncluded/FNIPlayerSlotData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFNIPlayerSlotData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
FRIENDSNOTINCLUDED_API UScriptStruct* Z_Construct_UScriptStruct_FNIPlayerSlotData();
UPackage* Z_Construct_UPackage__Script_FriendsNotIncluded();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FNIPlayerSlotData *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FNIPlayerSlotData;
class UScriptStruct* FNIPlayerSlotData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FNIPlayerSlotData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FNIPlayerSlotData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNIPlayerSlotData, (UObject*)Z_Construct_UPackage__Script_FriendsNotIncluded(), TEXT("NIPlayerSlotData"));
	}
	return Z_Registration_Info_UScriptStruct_FNIPlayerSlotData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FNIPlayerSlotData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FNIPlayerSlotData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerSlot_MetaData[] = {
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Player slot: 0 = Player 1, 3 = Player 4\n" },
#endif
		{ "ModuleRelativePath", "FNIPlayerSlotData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player slot: 0 = Player 1, 3 = Player 4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsConnected_MetaData[] = {
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check player is currently participating\n" },
#endif
		{ "ModuleRelativePath", "FNIPlayerSlotData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check player is currently participating" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsReady_MetaData[] = {
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check player has confirmed their selection\n" },
#endif
		{ "ModuleRelativePath", "FNIPlayerSlotData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check player has confirmed their selection" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedCharacterID_MetaData[] = {
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ID of the selected character\n" },
#endif
		{ "ModuleRelativePath", "FNIPlayerSlotData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ID of the selected character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalPlayer_MetaData[] = {
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unreal Local Player assigned to a slot\n" },
#endif
		{ "ModuleRelativePath", "FNIPlayerSlotData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unreal Local Player assigned to a slot" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerSlot;
	static void NewProp_bIsConnected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConnected;
	static void NewProp_bIsReady_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReady;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SelectedCharacterID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocalPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNIPlayerSlotData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNIPlayerSlotData_Statics::NewProp_PlayerSlot = { "PlayerSlot", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNIPlayerSlotData, PlayerSlot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerSlot_MetaData), NewProp_PlayerSlot_MetaData) };
void Z_Construct_UScriptStruct_FNIPlayerSlotData_Statics::NewProp_bIsConnected_SetBit(void* Obj)
{
	((FNIPlayerSlotData*)Obj)->bIsConnected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNIPlayerSlotData_Statics::NewProp_bIsConnected = { "bIsConnected", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNIPlayerSlotData), &Z_Construct_UScriptStruct_FNIPlayerSlotData_Statics::NewProp_bIsConnected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsConnected_MetaData), NewProp_bIsConnected_MetaData) };
void Z_Construct_UScriptStruct_FNIPlayerSlotData_Statics::NewProp_bIsReady_SetBit(void* Obj)
{
	((FNIPlayerSlotData*)Obj)->bIsReady = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNIPlayerSlotData_Statics::NewProp_bIsReady = { "bIsReady", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNIPlayerSlotData), &Z_Construct_UScriptStruct_FNIPlayerSlotData_Statics::NewProp_bIsReady_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsReady_MetaData), NewProp_bIsReady_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNIPlayerSlotData_Statics::NewProp_SelectedCharacterID = { "SelectedCharacterID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNIPlayerSlotData, SelectedCharacterID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedCharacterID_MetaData), NewProp_SelectedCharacterID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNIPlayerSlotData_Statics::NewProp_LocalPlayer = { "LocalPlayer", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNIPlayerSlotData, LocalPlayer), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalPlayer_MetaData), NewProp_LocalPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNIPlayerSlotData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNIPlayerSlotData_Statics::NewProp_PlayerSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNIPlayerSlotData_Statics::NewProp_bIsConnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNIPlayerSlotData_Statics::NewProp_bIsReady,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNIPlayerSlotData_Statics::NewProp_SelectedCharacterID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNIPlayerSlotData_Statics::NewProp_LocalPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNIPlayerSlotData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNIPlayerSlotData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FriendsNotIncluded,
	nullptr,
	&NewStructOps,
	"NIPlayerSlotData",
	Z_Construct_UScriptStruct_FNIPlayerSlotData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNIPlayerSlotData_Statics::PropPointers),
	sizeof(FNIPlayerSlotData),
	alignof(FNIPlayerSlotData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNIPlayerSlotData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNIPlayerSlotData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNIPlayerSlotData()
{
	if (!Z_Registration_Info_UScriptStruct_FNIPlayerSlotData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FNIPlayerSlotData.InnerSingleton, Z_Construct_UScriptStruct_FNIPlayerSlotData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FNIPlayerSlotData.InnerSingleton;
}
// ********** End ScriptStruct FNIPlayerSlotData ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_KiddL_Documents_GitHub_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIPlayerSlotData_h__Script_FriendsNotIncluded_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNIPlayerSlotData::StaticStruct, Z_Construct_UScriptStruct_FNIPlayerSlotData_Statics::NewStructOps, TEXT("NIPlayerSlotData"), &Z_Registration_Info_UScriptStruct_FNIPlayerSlotData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNIPlayerSlotData), 1248252276U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KiddL_Documents_GitHub_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIPlayerSlotData_h__Script_FriendsNotIncluded_4249854056(TEXT("/Script/FriendsNotIncluded"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_KiddL_Documents_GitHub_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIPlayerSlotData_h__Script_FriendsNotIncluded_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KiddL_Documents_GitHub_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIPlayerSlotData_h__Script_FriendsNotIncluded_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
