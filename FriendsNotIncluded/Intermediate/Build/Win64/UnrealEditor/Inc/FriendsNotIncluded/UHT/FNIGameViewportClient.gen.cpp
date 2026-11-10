// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FriendsNotIncluded/FNIGameViewportClient.h"
#include "Engine/Engine.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFNIGameViewportClient() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient();
FRIENDSNOTINCLUDED_API UClass* Z_Construct_UClass_UFNIGameViewportClient();
FRIENDSNOTINCLUDED_API UClass* Z_Construct_UClass_UFNIGameViewportClient_NoRegister();
UPackage* Z_Construct_UPackage__Script_FriendsNotIncluded();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFNIGameViewportClient ***************************************************
void UFNIGameViewportClient::StaticRegisterNativesUFNIGameViewportClient()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFNIGameViewportClient;
UClass* UFNIGameViewportClient::GetPrivateStaticClass()
{
	using TClass = UFNIGameViewportClient;
	if (!Z_Registration_Info_UClass_UFNIGameViewportClient.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FNIGameViewportClient"),
			Z_Registration_Info_UClass_UFNIGameViewportClient.InnerSingleton,
			StaticRegisterNativesUFNIGameViewportClient,
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
	return Z_Registration_Info_UClass_UFNIGameViewportClient.InnerSingleton;
}
UClass* Z_Construct_UClass_UFNIGameViewportClient_NoRegister()
{
	return UFNIGameViewportClient::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFNIGameViewportClient_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FNIGameViewportClient.h" },
		{ "ModuleRelativePath", "FNIGameViewportClient.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFNIGameViewportClient>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFNIGameViewportClient_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameViewportClient,
	(UObject* (*)())Z_Construct_UPackage__Script_FriendsNotIncluded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFNIGameViewportClient_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFNIGameViewportClient_Statics::ClassParams = {
	&UFNIGameViewportClient::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFNIGameViewportClient_Statics::Class_MetaDataParams), Z_Construct_UClass_UFNIGameViewportClient_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFNIGameViewportClient()
{
	if (!Z_Registration_Info_UClass_UFNIGameViewportClient.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFNIGameViewportClient.OuterSingleton, Z_Construct_UClass_UFNIGameViewportClient_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFNIGameViewportClient.OuterSingleton;
}
UFNIGameViewportClient::UFNIGameViewportClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFNIGameViewportClient);
UFNIGameViewportClient::~UFNIGameViewportClient() {}
// ********** End Class UFNIGameViewportClient *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_KiddL_Documents_GitHub_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIGameViewportClient_h__Script_FriendsNotIncluded_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFNIGameViewportClient, UFNIGameViewportClient::StaticClass, TEXT("UFNIGameViewportClient"), &Z_Registration_Info_UClass_UFNIGameViewportClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFNIGameViewportClient), 182320348U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KiddL_Documents_GitHub_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIGameViewportClient_h__Script_FriendsNotIncluded_1678928174(TEXT("/Script/FriendsNotIncluded"),
	Z_CompiledInDeferFile_FID_Users_KiddL_Documents_GitHub_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIGameViewportClient_h__Script_FriendsNotIncluded_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KiddL_Documents_GitHub_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIGameViewportClient_h__Script_FriendsNotIncluded_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
