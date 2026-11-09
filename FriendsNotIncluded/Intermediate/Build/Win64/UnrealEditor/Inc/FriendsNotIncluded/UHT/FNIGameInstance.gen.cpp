// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FriendsNotIncluded/FNIGameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFNIGameInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
FRIENDSNOTINCLUDED_API UClass* Z_Construct_UClass_UFNIGameInstance();
FRIENDSNOTINCLUDED_API UClass* Z_Construct_UClass_UFNIGameInstance_NoRegister();
FRIENDSNOTINCLUDED_API UFunction* Z_Construct_UDelegateFunction_FriendsNotIncluded_OnPhilosophersStoneCompleted__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_FriendsNotIncluded();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnPhilosophersStoneCompleted *****************************************
struct Z_Construct_UDelegateFunction_FriendsNotIncluded_OnPhilosophersStoneCompleted__DelegateSignature_Statics
{
	struct _Script_FriendsNotIncluded_eventOnPhilosophersStoneCompleted_Parms
	{
		int32 WinnerSlot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Event that that will tell the blueprints when sopmeone has completed their Philosopher's Stone, int32 is the player slot of the winning player\n" },
#endif
		{ "ModuleRelativePath", "FNIGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event that that will tell the blueprints when sopmeone has completed their Philosopher's Stone, int32 is the player slot of the winning player" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_WinnerSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_FriendsNotIncluded_OnPhilosophersStoneCompleted__DelegateSignature_Statics::NewProp_WinnerSlot = { "WinnerSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FriendsNotIncluded_eventOnPhilosophersStoneCompleted_Parms, WinnerSlot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FriendsNotIncluded_OnPhilosophersStoneCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FriendsNotIncluded_OnPhilosophersStoneCompleted__DelegateSignature_Statics::NewProp_WinnerSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FriendsNotIncluded_OnPhilosophersStoneCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_FriendsNotIncluded_OnPhilosophersStoneCompleted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_FriendsNotIncluded, nullptr, "OnPhilosophersStoneCompleted__DelegateSignature", Z_Construct_UDelegateFunction_FriendsNotIncluded_OnPhilosophersStoneCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FriendsNotIncluded_OnPhilosophersStoneCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_FriendsNotIncluded_OnPhilosophersStoneCompleted__DelegateSignature_Statics::_Script_FriendsNotIncluded_eventOnPhilosophersStoneCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FriendsNotIncluded_OnPhilosophersStoneCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FriendsNotIncluded_OnPhilosophersStoneCompleted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_FriendsNotIncluded_OnPhilosophersStoneCompleted__DelegateSignature_Statics::_Script_FriendsNotIncluded_eventOnPhilosophersStoneCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_FriendsNotIncluded_OnPhilosophersStoneCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FriendsNotIncluded_OnPhilosophersStoneCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPhilosophersStoneCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPhilosophersStoneCompleted, int32 WinnerSlot)
{
	struct _Script_FriendsNotIncluded_eventOnPhilosophersStoneCompleted_Parms
	{
		int32 WinnerSlot;
	};
	_Script_FriendsNotIncluded_eventOnPhilosophersStoneCompleted_Parms Parms;
	Parms.WinnerSlot=WinnerSlot;
	OnPhilosophersStoneCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPhilosophersStoneCompleted *******************************************

// ********** Begin Class UFNIGameInstance Function AddCoins ***************************************
struct Z_Construct_UFunction_UFNIGameInstance_AddCoins_Statics
{
	struct FNIGameInstance_eventAddCoins_Parms
	{
		int32 PlayerSlot;
		int32 Amount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Coins" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds coins to a player, returns false if the player or amount is invalid\n" },
#endif
		{ "ModuleRelativePath", "FNIGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds coins to a player, returns false if the player or amount is invalid" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerSlot;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFNIGameInstance_AddCoins_Statics::NewProp_PlayerSlot = { "PlayerSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNIGameInstance_eventAddCoins_Parms, PlayerSlot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFNIGameInstance_AddCoins_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNIGameInstance_eventAddCoins_Parms, Amount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFNIGameInstance_AddCoins_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FNIGameInstance_eventAddCoins_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFNIGameInstance_AddCoins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNIGameInstance_eventAddCoins_Parms), &Z_Construct_UFunction_UFNIGameInstance_AddCoins_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFNIGameInstance_AddCoins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIGameInstance_AddCoins_Statics::NewProp_PlayerSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIGameInstance_AddCoins_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIGameInstance_AddCoins_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIGameInstance_AddCoins_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFNIGameInstance_AddCoins_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFNIGameInstance, nullptr, "AddCoins", Z_Construct_UFunction_UFNIGameInstance_AddCoins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIGameInstance_AddCoins_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFNIGameInstance_AddCoins_Statics::FNIGameInstance_eventAddCoins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIGameInstance_AddCoins_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFNIGameInstance_AddCoins_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFNIGameInstance_AddCoins_Statics::FNIGameInstance_eventAddCoins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFNIGameInstance_AddCoins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFNIGameInstance_AddCoins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFNIGameInstance::execAddCoins)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerSlot);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddCoins(Z_Param_PlayerSlot,Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UFNIGameInstance Function AddCoins *****************************************

// ********** Begin Class UFNIGameInstance Function AwardFragment **********************************
struct Z_Construct_UFunction_UFNIGameInstance_AwardFragment_Statics
{
	struct FNIGameInstance_eventAwardFragment_Parms
	{
		int32 PlayerSlot;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Progress" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Awards one fragment to player in the given slot, returns false if player is invalid or has enough fragments\n" },
#endif
		{ "ModuleRelativePath", "FNIGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Awards one fragment to player in the given slot, returns false if player is invalid or has enough fragments" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerSlot;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFNIGameInstance_AwardFragment_Statics::NewProp_PlayerSlot = { "PlayerSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNIGameInstance_eventAwardFragment_Parms, PlayerSlot), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFNIGameInstance_AwardFragment_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FNIGameInstance_eventAwardFragment_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFNIGameInstance_AwardFragment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNIGameInstance_eventAwardFragment_Parms), &Z_Construct_UFunction_UFNIGameInstance_AwardFragment_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFNIGameInstance_AwardFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIGameInstance_AwardFragment_Statics::NewProp_PlayerSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIGameInstance_AwardFragment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIGameInstance_AwardFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFNIGameInstance_AwardFragment_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFNIGameInstance, nullptr, "AwardFragment", Z_Construct_UFunction_UFNIGameInstance_AwardFragment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIGameInstance_AwardFragment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFNIGameInstance_AwardFragment_Statics::FNIGameInstance_eventAwardFragment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIGameInstance_AwardFragment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFNIGameInstance_AwardFragment_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFNIGameInstance_AwardFragment_Statics::FNIGameInstance_eventAwardFragment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFNIGameInstance_AwardFragment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFNIGameInstance_AwardFragment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFNIGameInstance::execAwardFragment)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AwardFragment(Z_Param_PlayerSlot);
	P_NATIVE_END;
}
// ********** End Class UFNIGameInstance Function AwardFragment ************************************

// ********** Begin Class UFNIGameInstance Function ClearBoardFragmentSpace ************************
struct Z_Construct_UFunction_UFNIGameInstance_ClearBoardFragmentSpace_Statics
{
	struct FNIGameInstance_eventClearBoardFragmentSpace_Parms
	{
		int32 SpaceID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Board Fragment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clears the saved board fragment when it has been collected, will only return true if the correct fragment was found\n" },
#endif
		{ "ModuleRelativePath", "FNIGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears the saved board fragment when it has been collected, will only return true if the correct fragment was found" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpaceID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFNIGameInstance_ClearBoardFragmentSpace_Statics::NewProp_SpaceID = { "SpaceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNIGameInstance_eventClearBoardFragmentSpace_Parms, SpaceID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFNIGameInstance_ClearBoardFragmentSpace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FNIGameInstance_eventClearBoardFragmentSpace_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFNIGameInstance_ClearBoardFragmentSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNIGameInstance_eventClearBoardFragmentSpace_Parms), &Z_Construct_UFunction_UFNIGameInstance_ClearBoardFragmentSpace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFNIGameInstance_ClearBoardFragmentSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIGameInstance_ClearBoardFragmentSpace_Statics::NewProp_SpaceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIGameInstance_ClearBoardFragmentSpace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIGameInstance_ClearBoardFragmentSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFNIGameInstance_ClearBoardFragmentSpace_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFNIGameInstance, nullptr, "ClearBoardFragmentSpace", Z_Construct_UFunction_UFNIGameInstance_ClearBoardFragmentSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIGameInstance_ClearBoardFragmentSpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFNIGameInstance_ClearBoardFragmentSpace_Statics::FNIGameInstance_eventClearBoardFragmentSpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIGameInstance_ClearBoardFragmentSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFNIGameInstance_ClearBoardFragmentSpace_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFNIGameInstance_ClearBoardFragmentSpace_Statics::FNIGameInstance_eventClearBoardFragmentSpace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFNIGameInstance_ClearBoardFragmentSpace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFNIGameInstance_ClearBoardFragmentSpace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFNIGameInstance::execClearBoardFragmentSpace)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SpaceID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ClearBoardFragmentSpace(Z_Param_SpaceID);
	P_NATIVE_END;
}
// ********** End Class UFNIGameInstance Function ClearBoardFragmentSpace **************************

// ********** Begin Class UFNIGameInstance Function RemoveCoins ************************************
struct Z_Construct_UFunction_UFNIGameInstance_RemoveCoins_Statics
{
	struct FNIGameInstance_eventRemoveCoins_Parms
	{
		int32 PlayerSlot;
		int32 Amount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Coins" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Removes coins from a player, their balance cannot go below 0\n" },
#endif
		{ "ModuleRelativePath", "FNIGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes coins from a player, their balance cannot go below 0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerSlot;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFNIGameInstance_RemoveCoins_Statics::NewProp_PlayerSlot = { "PlayerSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNIGameInstance_eventRemoveCoins_Parms, PlayerSlot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFNIGameInstance_RemoveCoins_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNIGameInstance_eventRemoveCoins_Parms, Amount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFNIGameInstance_RemoveCoins_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FNIGameInstance_eventRemoveCoins_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFNIGameInstance_RemoveCoins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNIGameInstance_eventRemoveCoins_Parms), &Z_Construct_UFunction_UFNIGameInstance_RemoveCoins_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFNIGameInstance_RemoveCoins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIGameInstance_RemoveCoins_Statics::NewProp_PlayerSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIGameInstance_RemoveCoins_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIGameInstance_RemoveCoins_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIGameInstance_RemoveCoins_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFNIGameInstance_RemoveCoins_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFNIGameInstance, nullptr, "RemoveCoins", Z_Construct_UFunction_UFNIGameInstance_RemoveCoins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIGameInstance_RemoveCoins_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFNIGameInstance_RemoveCoins_Statics::FNIGameInstance_eventRemoveCoins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIGameInstance_RemoveCoins_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFNIGameInstance_RemoveCoins_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFNIGameInstance_RemoveCoins_Statics::FNIGameInstance_eventRemoveCoins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFNIGameInstance_RemoveCoins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFNIGameInstance_RemoveCoins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFNIGameInstance::execRemoveCoins)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerSlot);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveCoins(Z_Param_PlayerSlot,Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UFNIGameInstance Function RemoveCoins **************************************

// ********** Begin Class UFNIGameInstance Function SaveTurnState **********************************
struct Z_Construct_UFunction_UFNIGameInstance_SaveTurnState_Statics
{
	struct FNIGameInstance_eventSaveTurnState_Parms
	{
		TArray<int32> TurnOrder;
		int32 TurnIndex;
		int32 CurrentPlayerSlot;
		int32 RoundNumber;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn Progress" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Saves current turn information before changing level, this allows us to continue the same match after a minigame\n" },
#endif
		{ "ModuleRelativePath", "FNIGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Saves current turn information before changing level, this allows us to continue the same match after a minigame" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TurnOrder_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TurnOrder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TurnIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPlayerSlot;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoundNumber;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFNIGameInstance_SaveTurnState_Statics::NewProp_TurnOrder_Inner = { "TurnOrder", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFNIGameInstance_SaveTurnState_Statics::NewProp_TurnOrder = { "TurnOrder", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNIGameInstance_eventSaveTurnState_Parms, TurnOrder), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnOrder_MetaData), NewProp_TurnOrder_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFNIGameInstance_SaveTurnState_Statics::NewProp_TurnIndex = { "TurnIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNIGameInstance_eventSaveTurnState_Parms, TurnIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFNIGameInstance_SaveTurnState_Statics::NewProp_CurrentPlayerSlot = { "CurrentPlayerSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNIGameInstance_eventSaveTurnState_Parms, CurrentPlayerSlot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFNIGameInstance_SaveTurnState_Statics::NewProp_RoundNumber = { "RoundNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNIGameInstance_eventSaveTurnState_Parms, RoundNumber), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFNIGameInstance_SaveTurnState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FNIGameInstance_eventSaveTurnState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFNIGameInstance_SaveTurnState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNIGameInstance_eventSaveTurnState_Parms), &Z_Construct_UFunction_UFNIGameInstance_SaveTurnState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFNIGameInstance_SaveTurnState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIGameInstance_SaveTurnState_Statics::NewProp_TurnOrder_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIGameInstance_SaveTurnState_Statics::NewProp_TurnOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIGameInstance_SaveTurnState_Statics::NewProp_TurnIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIGameInstance_SaveTurnState_Statics::NewProp_CurrentPlayerSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIGameInstance_SaveTurnState_Statics::NewProp_RoundNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIGameInstance_SaveTurnState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIGameInstance_SaveTurnState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFNIGameInstance_SaveTurnState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFNIGameInstance, nullptr, "SaveTurnState", Z_Construct_UFunction_UFNIGameInstance_SaveTurnState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIGameInstance_SaveTurnState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFNIGameInstance_SaveTurnState_Statics::FNIGameInstance_eventSaveTurnState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIGameInstance_SaveTurnState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFNIGameInstance_SaveTurnState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFNIGameInstance_SaveTurnState_Statics::FNIGameInstance_eventSaveTurnState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFNIGameInstance_SaveTurnState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFNIGameInstance_SaveTurnState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFNIGameInstance::execSaveTurnState)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_TurnOrder);
	P_GET_PROPERTY(FIntProperty,Z_Param_TurnIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_CurrentPlayerSlot);
	P_GET_PROPERTY(FIntProperty,Z_Param_RoundNumber);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SaveTurnState(Z_Param_Out_TurnOrder,Z_Param_TurnIndex,Z_Param_CurrentPlayerSlot,Z_Param_RoundNumber);
	P_NATIVE_END;
}
// ********** End Class UFNIGameInstance Function SaveTurnState ************************************

// ********** Begin Class UFNIGameInstance Function SetBoardFragmentSpace **************************
struct Z_Construct_UFunction_UFNIGameInstance_SetBoardFragmentSpace_Statics
{
	struct FNIGameInstance_eventSetBoardFragmentSpace_Parms
	{
		int32 SpaceID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Board Fragment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Saves the board space that has the current fragment on it, returns false if board space ID is invalid or a fragment alreasy exists\n" },
#endif
		{ "ModuleRelativePath", "FNIGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Saves the board space that has the current fragment on it, returns false if board space ID is invalid or a fragment alreasy exists" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpaceID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFNIGameInstance_SetBoardFragmentSpace_Statics::NewProp_SpaceID = { "SpaceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNIGameInstance_eventSetBoardFragmentSpace_Parms, SpaceID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFNIGameInstance_SetBoardFragmentSpace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FNIGameInstance_eventSetBoardFragmentSpace_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFNIGameInstance_SetBoardFragmentSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNIGameInstance_eventSetBoardFragmentSpace_Parms), &Z_Construct_UFunction_UFNIGameInstance_SetBoardFragmentSpace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFNIGameInstance_SetBoardFragmentSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIGameInstance_SetBoardFragmentSpace_Statics::NewProp_SpaceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIGameInstance_SetBoardFragmentSpace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIGameInstance_SetBoardFragmentSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFNIGameInstance_SetBoardFragmentSpace_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFNIGameInstance, nullptr, "SetBoardFragmentSpace", Z_Construct_UFunction_UFNIGameInstance_SetBoardFragmentSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIGameInstance_SetBoardFragmentSpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFNIGameInstance_SetBoardFragmentSpace_Statics::FNIGameInstance_eventSetBoardFragmentSpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIGameInstance_SetBoardFragmentSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFNIGameInstance_SetBoardFragmentSpace_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFNIGameInstance_SetBoardFragmentSpace_Statics::FNIGameInstance_eventSetBoardFragmentSpace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFNIGameInstance_SetBoardFragmentSpace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFNIGameInstance_SetBoardFragmentSpace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFNIGameInstance::execSetBoardFragmentSpace)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SpaceID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetBoardFragmentSpace(Z_Param_SpaceID);
	P_NATIVE_END;
}
// ********** End Class UFNIGameInstance Function SetBoardFragmentSpace ****************************

// ********** Begin Class UFNIGameInstance Function SetPlayerBoardSpace ****************************
struct Z_Construct_UFunction_UFNIGameInstance_SetPlayerBoardSpace_Statics
{
	struct FNIGameInstance_eventSetPlayerBoardSpace_Parms
	{
		int32 PlayerSlot;
		int32 BoardSpaceID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Board Progress" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Saves the board space the player is currently standing on, returns false if player slot or board space ID is invalid\n" },
#endif
		{ "ModuleRelativePath", "FNIGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Saves the board space the player is currently standing on, returns false if player slot or board space ID is invalid" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerSlot;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoardSpaceID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFNIGameInstance_SetPlayerBoardSpace_Statics::NewProp_PlayerSlot = { "PlayerSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNIGameInstance_eventSetPlayerBoardSpace_Parms, PlayerSlot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFNIGameInstance_SetPlayerBoardSpace_Statics::NewProp_BoardSpaceID = { "BoardSpaceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNIGameInstance_eventSetPlayerBoardSpace_Parms, BoardSpaceID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFNIGameInstance_SetPlayerBoardSpace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FNIGameInstance_eventSetPlayerBoardSpace_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFNIGameInstance_SetPlayerBoardSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNIGameInstance_eventSetPlayerBoardSpace_Parms), &Z_Construct_UFunction_UFNIGameInstance_SetPlayerBoardSpace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFNIGameInstance_SetPlayerBoardSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIGameInstance_SetPlayerBoardSpace_Statics::NewProp_PlayerSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIGameInstance_SetPlayerBoardSpace_Statics::NewProp_BoardSpaceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIGameInstance_SetPlayerBoardSpace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIGameInstance_SetPlayerBoardSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFNIGameInstance_SetPlayerBoardSpace_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFNIGameInstance, nullptr, "SetPlayerBoardSpace", Z_Construct_UFunction_UFNIGameInstance_SetPlayerBoardSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIGameInstance_SetPlayerBoardSpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFNIGameInstance_SetPlayerBoardSpace_Statics::FNIGameInstance_eventSetPlayerBoardSpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIGameInstance_SetPlayerBoardSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFNIGameInstance_SetPlayerBoardSpace_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFNIGameInstance_SetPlayerBoardSpace_Statics::FNIGameInstance_eventSetPlayerBoardSpace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFNIGameInstance_SetPlayerBoardSpace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFNIGameInstance_SetPlayerBoardSpace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFNIGameInstance::execSetPlayerBoardSpace)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerSlot);
	P_GET_PROPERTY(FIntProperty,Z_Param_BoardSpaceID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetPlayerBoardSpace(Z_Param_PlayerSlot,Z_Param_BoardSpaceID);
	P_NATIVE_END;
}
// ********** End Class UFNIGameInstance Function SetPlayerBoardSpace ******************************

// ********** Begin Class UFNIGameInstance Function TrySpendCoins **********************************
struct Z_Construct_UFunction_UFNIGameInstance_TrySpendCoins_Statics
{
	struct FNIGameInstance_eventTrySpendCoins_Parms
	{
		int32 PlayerSlot;
		int32 Amount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Coins" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Attempts to spend a players coins, returns false if they can't afford it or the inputs are invalid\n" },
#endif
		{ "ModuleRelativePath", "FNIGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempts to spend a players coins, returns false if they can't afford it or the inputs are invalid" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerSlot;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFNIGameInstance_TrySpendCoins_Statics::NewProp_PlayerSlot = { "PlayerSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNIGameInstance_eventTrySpendCoins_Parms, PlayerSlot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFNIGameInstance_TrySpendCoins_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNIGameInstance_eventTrySpendCoins_Parms, Amount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFNIGameInstance_TrySpendCoins_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FNIGameInstance_eventTrySpendCoins_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFNIGameInstance_TrySpendCoins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNIGameInstance_eventTrySpendCoins_Parms), &Z_Construct_UFunction_UFNIGameInstance_TrySpendCoins_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFNIGameInstance_TrySpendCoins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIGameInstance_TrySpendCoins_Statics::NewProp_PlayerSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIGameInstance_TrySpendCoins_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIGameInstance_TrySpendCoins_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIGameInstance_TrySpendCoins_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFNIGameInstance_TrySpendCoins_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFNIGameInstance, nullptr, "TrySpendCoins", Z_Construct_UFunction_UFNIGameInstance_TrySpendCoins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIGameInstance_TrySpendCoins_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFNIGameInstance_TrySpendCoins_Statics::FNIGameInstance_eventTrySpendCoins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIGameInstance_TrySpendCoins_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFNIGameInstance_TrySpendCoins_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFNIGameInstance_TrySpendCoins_Statics::FNIGameInstance_eventTrySpendCoins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFNIGameInstance_TrySpendCoins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFNIGameInstance_TrySpendCoins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFNIGameInstance::execTrySpendCoins)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerSlot);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TrySpendCoins(Z_Param_PlayerSlot,Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UFNIGameInstance Function TrySpendCoins ************************************

// ********** Begin Class UFNIGameInstance *********************************************************
void UFNIGameInstance::StaticRegisterNativesUFNIGameInstance()
{
	UClass* Class = UFNIGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCoins", &UFNIGameInstance::execAddCoins },
		{ "AwardFragment", &UFNIGameInstance::execAwardFragment },
		{ "ClearBoardFragmentSpace", &UFNIGameInstance::execClearBoardFragmentSpace },
		{ "RemoveCoins", &UFNIGameInstance::execRemoveCoins },
		{ "SaveTurnState", &UFNIGameInstance::execSaveTurnState },
		{ "SetBoardFragmentSpace", &UFNIGameInstance::execSetBoardFragmentSpace },
		{ "SetPlayerBoardSpace", &UFNIGameInstance::execSetPlayerBoardSpace },
		{ "TrySpendCoins", &UFNIGameInstance::execTrySpendCoins },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFNIGameInstance;
UClass* UFNIGameInstance::GetPrivateStaticClass()
{
	using TClass = UFNIGameInstance;
	if (!Z_Registration_Info_UClass_UFNIGameInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FNIGameInstance"),
			Z_Registration_Info_UClass_UFNIGameInstance.InnerSingleton,
			StaticRegisterNativesUFNIGameInstance,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UFNIGameInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UFNIGameInstance_NoRegister()
{
	return UFNIGameInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFNIGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FNIGameInstance.h" },
		{ "ModuleRelativePath", "FNIGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCoins_MetaData[] = {
		{ "Category", "Player Coins" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stores how many coins each player has, each index represents a player slot\n" },
#endif
		{ "ModuleRelativePath", "FNIGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stores how many coins each player has, each index represents a player slot" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerFragments_MetaData[] = {
		{ "Category", "Player Progress" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stores how many Philosopher's Stone fragments each player owns, TArray<int32> works kinda like List<int>\n" },
#endif
		{ "ModuleRelativePath", "FNIGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stores how many Philosopher's Stone fragments each player owns, TArray<int32> works kinda like List<int>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FragmentsRequiredToWin_MetaData[] = {
		{ "Category", "Player Progress" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Number of fragments needed for player to win game( Win = full philosophers stome), 5 for testing will change later after game testing\n" },
#endif
		{ "ModuleRelativePath", "FNIGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of fragments needed for player to win game( Win = full philosophers stome), 5 for testing will change later after game testing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGameOver_MetaData[] = {
		{ "Category", "Player Progress" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Is true when player completes their philosopher's stone if not true game is still going, used to trigger end game \n" },
#endif
		{ "ModuleRelativePath", "FNIGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is true when player completes their philosopher's stone if not true game is still going, used to trigger end game" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WinningPlayerSlot_MetaData[] = {
		{ "Category", "Player Progress" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Stores the player slot of the winning player, -1 if no player has won yet\n" },
#endif
		{ "ModuleRelativePath", "FNIGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stores the player slot of the winning player, -1 if no player has won yet" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPhilosophersStoneCompleted_MetaData[] = {
		{ "Category", "Player Progress" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//bluepritns can listen to this event when a player wins\n" },
#endif
		{ "ModuleRelativePath", "FNIGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "bluepritns can listen to this event when a player wins" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerBoardSpaceIDs_MetaData[] = {
		{ "Category", "Board Progress" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Stores the board space IDs that each player is currently standing on. Index 0 = Player 1, Index 1 = Player 2, etc. -1 means players board position hasnt been set yet\n" },
#endif
		{ "ModuleRelativePath", "FNIGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stores the board space IDs that each player is currently standing on. Index 0 = Player 1, Index 1 = Player 2, etc. -1 means players board position hasnt been set yet" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoardFragmentSpaceID_MetaData[] = {
		{ "Category", "Board Fragment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Stores the board space that has the current fragment on it, -1 means no fragment on the board\n" },
#endif
		{ "ModuleRelativePath", "FNIGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stores the board space that has the current fragment on it, -1 means no fragment on the board" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedTurnOrder_MetaData[] = {
		{ "Category", "Turn Progress" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Stores the order of players turns, {1, 0} means player 2 goes first then player 1, {0, 1} means player 1 goes first then player 2, etc\n" },
#endif
		{ "ModuleRelativePath", "FNIGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stores the order of players turns, {1, 0} means player 2 goes first then player 1, {0, 1} means player 1 goes first then player 2, etc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedTurnIndex_MetaData[] = {
		{ "Category", "Turn Progress" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Stores which position in the turn order that is currently taking their turn, -1 means no turn position has been saved yet\n" },
#endif
		{ "ModuleRelativePath", "FNIGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stores which position in the turn order that is currently taking their turn, -1 means no turn position has been saved yet" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedCurrentPlayerSlot_MetaData[] = {
		{ "Category", "Turn Progress" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Stores the player slot of the current player taking their turn, -1 means no turn position has been saved yet\n" },
#endif
		{ "ModuleRelativePath", "FNIGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stores the player slot of the current player taking their turn, -1 means no turn position has been saved yet" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedRoundNumber_MetaData[] = {
		{ "Category", "Turn Progress" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Stores the current round during the game\n" },
#endif
		{ "ModuleRelativePath", "FNIGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stores the current round during the game" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasSavedTurnState_MetaData[] = {
		{ "Category", "Turn Progress" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//True when we have saved a valid turn state, also tells us that opening rolls have been completed\n" },
#endif
		{ "ModuleRelativePath", "FNIGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True when we have saved a valid turn state, also tells us that opening rolls have been completed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerCoins_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerCoins;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerFragments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerFragments;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FragmentsRequiredToWin;
	static void NewProp_bGameOver_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGameOver;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WinningPlayerSlot;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPhilosophersStoneCompleted;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerBoardSpaceIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerBoardSpaceIDs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoardFragmentSpaceID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SavedTurnOrder_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedTurnOrder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SavedTurnIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SavedCurrentPlayerSlot;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SavedRoundNumber;
	static void NewProp_bHasSavedTurnState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasSavedTurnState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFNIGameInstance_AddCoins, "AddCoins" }, // 1590471926
		{ &Z_Construct_UFunction_UFNIGameInstance_AwardFragment, "AwardFragment" }, // 2467096573
		{ &Z_Construct_UFunction_UFNIGameInstance_ClearBoardFragmentSpace, "ClearBoardFragmentSpace" }, // 1789333981
		{ &Z_Construct_UFunction_UFNIGameInstance_RemoveCoins, "RemoveCoins" }, // 1592689225
		{ &Z_Construct_UFunction_UFNIGameInstance_SaveTurnState, "SaveTurnState" }, // 3087460839
		{ &Z_Construct_UFunction_UFNIGameInstance_SetBoardFragmentSpace, "SetBoardFragmentSpace" }, // 1836908242
		{ &Z_Construct_UFunction_UFNIGameInstance_SetPlayerBoardSpace, "SetPlayerBoardSpace" }, // 537122788
		{ &Z_Construct_UFunction_UFNIGameInstance_TrySpendCoins, "TrySpendCoins" }, // 2391744562
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFNIGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_PlayerCoins_Inner = { "PlayerCoins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_PlayerCoins = { "PlayerCoins", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFNIGameInstance, PlayerCoins), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCoins_MetaData), NewProp_PlayerCoins_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_PlayerFragments_Inner = { "PlayerFragments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_PlayerFragments = { "PlayerFragments", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFNIGameInstance, PlayerFragments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerFragments_MetaData), NewProp_PlayerFragments_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_FragmentsRequiredToWin = { "FragmentsRequiredToWin", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFNIGameInstance, FragmentsRequiredToWin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FragmentsRequiredToWin_MetaData), NewProp_FragmentsRequiredToWin_MetaData) };
void Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_bGameOver_SetBit(void* Obj)
{
	((UFNIGameInstance*)Obj)->bGameOver = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_bGameOver = { "bGameOver", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFNIGameInstance), &Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_bGameOver_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGameOver_MetaData), NewProp_bGameOver_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_WinningPlayerSlot = { "WinningPlayerSlot", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFNIGameInstance, WinningPlayerSlot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WinningPlayerSlot_MetaData), NewProp_WinningPlayerSlot_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_OnPhilosophersStoneCompleted = { "OnPhilosophersStoneCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFNIGameInstance, OnPhilosophersStoneCompleted), Z_Construct_UDelegateFunction_FriendsNotIncluded_OnPhilosophersStoneCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPhilosophersStoneCompleted_MetaData), NewProp_OnPhilosophersStoneCompleted_MetaData) }; // 2519598863
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_PlayerBoardSpaceIDs_Inner = { "PlayerBoardSpaceIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_PlayerBoardSpaceIDs = { "PlayerBoardSpaceIDs", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFNIGameInstance, PlayerBoardSpaceIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerBoardSpaceIDs_MetaData), NewProp_PlayerBoardSpaceIDs_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_BoardFragmentSpaceID = { "BoardFragmentSpaceID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFNIGameInstance, BoardFragmentSpaceID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoardFragmentSpaceID_MetaData), NewProp_BoardFragmentSpaceID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_SavedTurnOrder_Inner = { "SavedTurnOrder", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_SavedTurnOrder = { "SavedTurnOrder", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFNIGameInstance, SavedTurnOrder), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedTurnOrder_MetaData), NewProp_SavedTurnOrder_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_SavedTurnIndex = { "SavedTurnIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFNIGameInstance, SavedTurnIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedTurnIndex_MetaData), NewProp_SavedTurnIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_SavedCurrentPlayerSlot = { "SavedCurrentPlayerSlot", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFNIGameInstance, SavedCurrentPlayerSlot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedCurrentPlayerSlot_MetaData), NewProp_SavedCurrentPlayerSlot_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_SavedRoundNumber = { "SavedRoundNumber", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFNIGameInstance, SavedRoundNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedRoundNumber_MetaData), NewProp_SavedRoundNumber_MetaData) };
void Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_bHasSavedTurnState_SetBit(void* Obj)
{
	((UFNIGameInstance*)Obj)->bHasSavedTurnState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_bHasSavedTurnState = { "bHasSavedTurnState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFNIGameInstance), &Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_bHasSavedTurnState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasSavedTurnState_MetaData), NewProp_bHasSavedTurnState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFNIGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_PlayerCoins_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_PlayerCoins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_PlayerFragments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_PlayerFragments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_FragmentsRequiredToWin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_bGameOver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_WinningPlayerSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_OnPhilosophersStoneCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_PlayerBoardSpaceIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_PlayerBoardSpaceIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_BoardFragmentSpaceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_SavedTurnOrder_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_SavedTurnOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_SavedTurnIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_SavedCurrentPlayerSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_SavedRoundNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_bHasSavedTurnState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFNIGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFNIGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_FriendsNotIncluded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFNIGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFNIGameInstance_Statics::ClassParams = {
	&UFNIGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFNIGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFNIGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFNIGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UFNIGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFNIGameInstance()
{
	if (!Z_Registration_Info_UClass_UFNIGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFNIGameInstance.OuterSingleton, Z_Construct_UClass_UFNIGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFNIGameInstance.OuterSingleton;
}
UFNIGameInstance::UFNIGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFNIGameInstance);
UFNIGameInstance::~UFNIGameInstance() {}
// ********** End Class UFNIGameInstance ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_KiddL_Documents_GitHub_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIGameInstance_h__Script_FriendsNotIncluded_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFNIGameInstance, UFNIGameInstance::StaticClass, TEXT("UFNIGameInstance"), &Z_Registration_Info_UClass_UFNIGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFNIGameInstance), 2636235796U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KiddL_Documents_GitHub_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIGameInstance_h__Script_FriendsNotIncluded_516340533(TEXT("/Script/FriendsNotIncluded"),
	Z_CompiledInDeferFile_FID_Users_KiddL_Documents_GitHub_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIGameInstance_h__Script_FriendsNotIncluded_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KiddL_Documents_GitHub_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIGameInstance_h__Script_FriendsNotIncluded_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
