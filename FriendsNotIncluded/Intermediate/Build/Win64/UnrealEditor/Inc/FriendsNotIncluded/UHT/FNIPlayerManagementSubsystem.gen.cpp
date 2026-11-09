// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FriendsNotIncluded/FNIPlayerManagementSubsystem.h"
#include "Engine/GameInstance.h"
#include "FriendsNotIncluded/FNIPlayerSlotData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFNIPlayerManagementSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
FRIENDSNOTINCLUDED_API UClass* Z_Construct_UClass_UFNIPlayerManagementSubsystem();
FRIENDSNOTINCLUDED_API UClass* Z_Construct_UClass_UFNIPlayerManagementSubsystem_NoRegister();
FRIENDSNOTINCLUDED_API UScriptStruct* Z_Construct_UScriptStruct_FNIPlayerSlotData();
UPackage* Z_Construct_UPackage__Script_FriendsNotIncluded();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFNIPlayerManagementSubsystem Function CreateAndRegisterLocalPlayer ******
struct Z_Construct_UFunction_UFNIPlayerManagementSubsystem_CreateAndRegisterLocalPlayer_Statics
{
	struct FNIPlayerManagementSubsystem_eventCreateAndRegisterLocalPlayer_Parms
	{
		int32 ControllerID;
		ULocalPlayer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Management" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Creates Unreal Local Player and registers to available slot\n" },
#endif
		{ "ModuleRelativePath", "FNIPlayerManagementSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates Unreal Local Player and registers to available slot" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFNIPlayerManagementSubsystem_CreateAndRegisterLocalPlayer_Statics::NewProp_ControllerID = { "ControllerID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNIPlayerManagementSubsystem_eventCreateAndRegisterLocalPlayer_Parms, ControllerID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFNIPlayerManagementSubsystem_CreateAndRegisterLocalPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNIPlayerManagementSubsystem_eventCreateAndRegisterLocalPlayer_Parms, ReturnValue), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFNIPlayerManagementSubsystem_CreateAndRegisterLocalPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIPlayerManagementSubsystem_CreateAndRegisterLocalPlayer_Statics::NewProp_ControllerID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIPlayerManagementSubsystem_CreateAndRegisterLocalPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIPlayerManagementSubsystem_CreateAndRegisterLocalPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFNIPlayerManagementSubsystem_CreateAndRegisterLocalPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFNIPlayerManagementSubsystem, nullptr, "CreateAndRegisterLocalPlayer", Z_Construct_UFunction_UFNIPlayerManagementSubsystem_CreateAndRegisterLocalPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIPlayerManagementSubsystem_CreateAndRegisterLocalPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFNIPlayerManagementSubsystem_CreateAndRegisterLocalPlayer_Statics::FNIPlayerManagementSubsystem_eventCreateAndRegisterLocalPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIPlayerManagementSubsystem_CreateAndRegisterLocalPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFNIPlayerManagementSubsystem_CreateAndRegisterLocalPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFNIPlayerManagementSubsystem_CreateAndRegisterLocalPlayer_Statics::FNIPlayerManagementSubsystem_eventCreateAndRegisterLocalPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFNIPlayerManagementSubsystem_CreateAndRegisterLocalPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFNIPlayerManagementSubsystem_CreateAndRegisterLocalPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFNIPlayerManagementSubsystem::execCreateAndRegisterLocalPlayer)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULocalPlayer**)Z_Param__Result=P_THIS->CreateAndRegisterLocalPlayer(Z_Param_ControllerID);
	P_NATIVE_END;
}
// ********** End Class UFNIPlayerManagementSubsystem Function CreateAndRegisterLocalPlayer ********

// ********** Begin Class UFNIPlayerManagementSubsystem Function GetPlayerSlotData *****************
struct Z_Construct_UFunction_UFNIPlayerManagementSubsystem_GetPlayerSlotData_Statics
{
	struct FNIPlayerManagementSubsystem_eventGetPlayerSlotData_Parms
	{
		int32 PlayerSlot;
		FNIPlayerSlotData OutData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Management" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns info about specific player slot\n" },
#endif
		{ "ModuleRelativePath", "FNIPlayerManagementSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns info about specific player slot" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerSlot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFNIPlayerManagementSubsystem_GetPlayerSlotData_Statics::NewProp_PlayerSlot = { "PlayerSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNIPlayerManagementSubsystem_eventGetPlayerSlotData_Parms, PlayerSlot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFNIPlayerManagementSubsystem_GetPlayerSlotData_Statics::NewProp_OutData = { "OutData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNIPlayerManagementSubsystem_eventGetPlayerSlotData_Parms, OutData), Z_Construct_UScriptStruct_FNIPlayerSlotData, METADATA_PARAMS(0, nullptr) }; // 1248252276
void Z_Construct_UFunction_UFNIPlayerManagementSubsystem_GetPlayerSlotData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FNIPlayerManagementSubsystem_eventGetPlayerSlotData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFNIPlayerManagementSubsystem_GetPlayerSlotData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNIPlayerManagementSubsystem_eventGetPlayerSlotData_Parms), &Z_Construct_UFunction_UFNIPlayerManagementSubsystem_GetPlayerSlotData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFNIPlayerManagementSubsystem_GetPlayerSlotData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIPlayerManagementSubsystem_GetPlayerSlotData_Statics::NewProp_PlayerSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIPlayerManagementSubsystem_GetPlayerSlotData_Statics::NewProp_OutData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIPlayerManagementSubsystem_GetPlayerSlotData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIPlayerManagementSubsystem_GetPlayerSlotData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFNIPlayerManagementSubsystem_GetPlayerSlotData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFNIPlayerManagementSubsystem, nullptr, "GetPlayerSlotData", Z_Construct_UFunction_UFNIPlayerManagementSubsystem_GetPlayerSlotData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIPlayerManagementSubsystem_GetPlayerSlotData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFNIPlayerManagementSubsystem_GetPlayerSlotData_Statics::FNIPlayerManagementSubsystem_eventGetPlayerSlotData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIPlayerManagementSubsystem_GetPlayerSlotData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFNIPlayerManagementSubsystem_GetPlayerSlotData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFNIPlayerManagementSubsystem_GetPlayerSlotData_Statics::FNIPlayerManagementSubsystem_eventGetPlayerSlotData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFNIPlayerManagementSubsystem_GetPlayerSlotData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFNIPlayerManagementSubsystem_GetPlayerSlotData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFNIPlayerManagementSubsystem::execGetPlayerSlotData)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerSlot);
	P_GET_STRUCT_REF(FNIPlayerSlotData,Z_Param_Out_OutData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetPlayerSlotData(Z_Param_PlayerSlot,Z_Param_Out_OutData);
	P_NATIVE_END;
}
// ********** End Class UFNIPlayerManagementSubsystem Function GetPlayerSlotData *******************

// ********** Begin Class UFNIPlayerManagementSubsystem Function HasFreePlayerSlot *****************
struct Z_Construct_UFunction_UFNIPlayerManagementSubsystem_HasFreePlayerSlot_Statics
{
	struct FNIPlayerManagementSubsystem_eventHasFreePlayerSlot_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Management" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Checks for any available player slots\n" },
#endif
		{ "ModuleRelativePath", "FNIPlayerManagementSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks for any available player slots" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFNIPlayerManagementSubsystem_HasFreePlayerSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FNIPlayerManagementSubsystem_eventHasFreePlayerSlot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFNIPlayerManagementSubsystem_HasFreePlayerSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNIPlayerManagementSubsystem_eventHasFreePlayerSlot_Parms), &Z_Construct_UFunction_UFNIPlayerManagementSubsystem_HasFreePlayerSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFNIPlayerManagementSubsystem_HasFreePlayerSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIPlayerManagementSubsystem_HasFreePlayerSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIPlayerManagementSubsystem_HasFreePlayerSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFNIPlayerManagementSubsystem_HasFreePlayerSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFNIPlayerManagementSubsystem, nullptr, "HasFreePlayerSlot", Z_Construct_UFunction_UFNIPlayerManagementSubsystem_HasFreePlayerSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIPlayerManagementSubsystem_HasFreePlayerSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFNIPlayerManagementSubsystem_HasFreePlayerSlot_Statics::FNIPlayerManagementSubsystem_eventHasFreePlayerSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIPlayerManagementSubsystem_HasFreePlayerSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFNIPlayerManagementSubsystem_HasFreePlayerSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFNIPlayerManagementSubsystem_HasFreePlayerSlot_Statics::FNIPlayerManagementSubsystem_eventHasFreePlayerSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFNIPlayerManagementSubsystem_HasFreePlayerSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFNIPlayerManagementSubsystem_HasFreePlayerSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFNIPlayerManagementSubsystem::execHasFreePlayerSlot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasFreePlayerSlot();
	P_NATIVE_END;
}
// ********** End Class UFNIPlayerManagementSubsystem Function HasFreePlayerSlot *******************

// ********** Begin Class UFNIPlayerManagementSubsystem Function IsPlayerSlotConnected *************
struct Z_Construct_UFunction_UFNIPlayerManagementSubsystem_IsPlayerSlotConnected_Statics
{
	struct FNIPlayerManagementSubsystem_eventIsPlayerSlotConnected_Parms
	{
		int32 PlayerSlot;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Management" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if player slot is occupied\n" },
#endif
		{ "ModuleRelativePath", "FNIPlayerManagementSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if player slot is occupied" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerSlot;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFNIPlayerManagementSubsystem_IsPlayerSlotConnected_Statics::NewProp_PlayerSlot = { "PlayerSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNIPlayerManagementSubsystem_eventIsPlayerSlotConnected_Parms, PlayerSlot), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFNIPlayerManagementSubsystem_IsPlayerSlotConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FNIPlayerManagementSubsystem_eventIsPlayerSlotConnected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFNIPlayerManagementSubsystem_IsPlayerSlotConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNIPlayerManagementSubsystem_eventIsPlayerSlotConnected_Parms), &Z_Construct_UFunction_UFNIPlayerManagementSubsystem_IsPlayerSlotConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFNIPlayerManagementSubsystem_IsPlayerSlotConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIPlayerManagementSubsystem_IsPlayerSlotConnected_Statics::NewProp_PlayerSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFNIPlayerManagementSubsystem_IsPlayerSlotConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIPlayerManagementSubsystem_IsPlayerSlotConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFNIPlayerManagementSubsystem_IsPlayerSlotConnected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFNIPlayerManagementSubsystem, nullptr, "IsPlayerSlotConnected", Z_Construct_UFunction_UFNIPlayerManagementSubsystem_IsPlayerSlotConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIPlayerManagementSubsystem_IsPlayerSlotConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFNIPlayerManagementSubsystem_IsPlayerSlotConnected_Statics::FNIPlayerManagementSubsystem_eventIsPlayerSlotConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFNIPlayerManagementSubsystem_IsPlayerSlotConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFNIPlayerManagementSubsystem_IsPlayerSlotConnected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFNIPlayerManagementSubsystem_IsPlayerSlotConnected_Statics::FNIPlayerManagementSubsystem_eventIsPlayerSlotConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFNIPlayerManagementSubsystem_IsPlayerSlotConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFNIPlayerManagementSubsystem_IsPlayerSlotConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFNIPlayerManagementSubsystem::execIsPlayerSlotConnected)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlayerSlotConnected(Z_Param_PlayerSlot);
	P_NATIVE_END;
}
// ********** End Class UFNIPlayerManagementSubsystem Function IsPlayerSlotConnected ***************

// ********** Begin Class UFNIPlayerManagementSubsystem ********************************************
void UFNIPlayerManagementSubsystem::StaticRegisterNativesUFNIPlayerManagementSubsystem()
{
	UClass* Class = UFNIPlayerManagementSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateAndRegisterLocalPlayer", &UFNIPlayerManagementSubsystem::execCreateAndRegisterLocalPlayer },
		{ "GetPlayerSlotData", &UFNIPlayerManagementSubsystem::execGetPlayerSlotData },
		{ "HasFreePlayerSlot", &UFNIPlayerManagementSubsystem::execHasFreePlayerSlot },
		{ "IsPlayerSlotConnected", &UFNIPlayerManagementSubsystem::execIsPlayerSlotConnected },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFNIPlayerManagementSubsystem;
UClass* UFNIPlayerManagementSubsystem::GetPrivateStaticClass()
{
	using TClass = UFNIPlayerManagementSubsystem;
	if (!Z_Registration_Info_UClass_UFNIPlayerManagementSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FNIPlayerManagementSubsystem"),
			Z_Registration_Info_UClass_UFNIPlayerManagementSubsystem.InnerSingleton,
			StaticRegisterNativesUFNIPlayerManagementSubsystem,
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
	return Z_Registration_Info_UClass_UFNIPlayerManagementSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UFNIPlayerManagementSubsystem_NoRegister()
{
	return UFNIPlayerManagementSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFNIPlayerManagementSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FNIPlayerManagementSubsystem.h" },
		{ "ModuleRelativePath", "FNIPlayerManagementSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerSlots_MetaData[] = {
		{ "Category", "Player Management" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stores info for all player slots\n" },
#endif
		{ "ModuleRelativePath", "FNIPlayerManagementSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stores info for all player slots" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerSlots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerSlots;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFNIPlayerManagementSubsystem_CreateAndRegisterLocalPlayer, "CreateAndRegisterLocalPlayer" }, // 1760837498
		{ &Z_Construct_UFunction_UFNIPlayerManagementSubsystem_GetPlayerSlotData, "GetPlayerSlotData" }, // 794927090
		{ &Z_Construct_UFunction_UFNIPlayerManagementSubsystem_HasFreePlayerSlot, "HasFreePlayerSlot" }, // 3660021254
		{ &Z_Construct_UFunction_UFNIPlayerManagementSubsystem_IsPlayerSlotConnected, "IsPlayerSlotConnected" }, // 982679783
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFNIPlayerManagementSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFNIPlayerManagementSubsystem_Statics::NewProp_PlayerSlots_Inner = { "PlayerSlots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNIPlayerSlotData, METADATA_PARAMS(0, nullptr) }; // 1248252276
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFNIPlayerManagementSubsystem_Statics::NewProp_PlayerSlots = { "PlayerSlots", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFNIPlayerManagementSubsystem, PlayerSlots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerSlots_MetaData), NewProp_PlayerSlots_MetaData) }; // 1248252276
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFNIPlayerManagementSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFNIPlayerManagementSubsystem_Statics::NewProp_PlayerSlots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFNIPlayerManagementSubsystem_Statics::NewProp_PlayerSlots,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFNIPlayerManagementSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFNIPlayerManagementSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_FriendsNotIncluded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFNIPlayerManagementSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFNIPlayerManagementSubsystem_Statics::ClassParams = {
	&UFNIPlayerManagementSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFNIPlayerManagementSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFNIPlayerManagementSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFNIPlayerManagementSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UFNIPlayerManagementSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFNIPlayerManagementSubsystem()
{
	if (!Z_Registration_Info_UClass_UFNIPlayerManagementSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFNIPlayerManagementSubsystem.OuterSingleton, Z_Construct_UClass_UFNIPlayerManagementSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFNIPlayerManagementSubsystem.OuterSingleton;
}
UFNIPlayerManagementSubsystem::UFNIPlayerManagementSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFNIPlayerManagementSubsystem);
UFNIPlayerManagementSubsystem::~UFNIPlayerManagementSubsystem() {}
// ********** End Class UFNIPlayerManagementSubsystem **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_KiddL_Documents_GitHub_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIPlayerManagementSubsystem_h__Script_FriendsNotIncluded_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFNIPlayerManagementSubsystem, UFNIPlayerManagementSubsystem::StaticClass, TEXT("UFNIPlayerManagementSubsystem"), &Z_Registration_Info_UClass_UFNIPlayerManagementSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFNIPlayerManagementSubsystem), 1897418737U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KiddL_Documents_GitHub_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIPlayerManagementSubsystem_h__Script_FriendsNotIncluded_3400949664(TEXT("/Script/FriendsNotIncluded"),
	Z_CompiledInDeferFile_FID_Users_KiddL_Documents_GitHub_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIPlayerManagementSubsystem_h__Script_FriendsNotIncluded_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KiddL_Documents_GitHub_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIPlayerManagementSubsystem_h__Script_FriendsNotIncluded_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
