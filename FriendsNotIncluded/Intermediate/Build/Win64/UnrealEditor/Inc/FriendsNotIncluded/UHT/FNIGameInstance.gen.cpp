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

// ********** Begin Class UFNIGameInstance *********************************************************
void UFNIGameInstance::StaticRegisterNativesUFNIGameInstance()
{
	UClass* Class = UFNIGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AwardFragment", &UFNIGameInstance::execAwardFragment },
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerFragments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerFragments;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FragmentsRequiredToWin;
	static void NewProp_bGameOver_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGameOver;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WinningPlayerSlot;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPhilosophersStoneCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFNIGameInstance_AwardFragment, "AwardFragment" }, // 2467096573
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFNIGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFNIGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_PlayerFragments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_PlayerFragments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_FragmentsRequiredToWin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_bGameOver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_WinningPlayerSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFNIGameInstance_Statics::NewProp_OnPhilosophersStoneCompleted,
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
struct Z_CompiledInDeferFile_FID_Group_Project_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIGameInstance_h__Script_FriendsNotIncluded_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFNIGameInstance, UFNIGameInstance::StaticClass, TEXT("UFNIGameInstance"), &Z_Registration_Info_UClass_UFNIGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFNIGameInstance), 1929385222U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Group_Project_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIGameInstance_h__Script_FriendsNotIncluded_469071136(TEXT("/Script/FriendsNotIncluded"),
	Z_CompiledInDeferFile_FID_Group_Project_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIGameInstance_h__Script_FriendsNotIncluded_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Group_Project_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIGameInstance_h__Script_FriendsNotIncluded_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
