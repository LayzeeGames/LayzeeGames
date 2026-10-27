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
UPackage* Z_Construct_UPackage__Script_FriendsNotIncluded();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFNIGameInstance *********************************************************
void UFNIGameInstance::StaticRegisterNativesUFNIGameInstance()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFNIGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_UFNIGameInstance, UFNIGameInstance::StaticClass, TEXT("UFNIGameInstance"), &Z_Registration_Info_UClass_UFNIGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFNIGameInstance), 673049098U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Group_Project_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIGameInstance_h__Script_FriendsNotIncluded_200052207(TEXT("/Script/FriendsNotIncluded"),
	Z_CompiledInDeferFile_FID_Group_Project_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIGameInstance_h__Script_FriendsNotIncluded_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Group_Project_LayzeeGames_FriendsNotIncluded_Source_FriendsNotIncluded_FNIGameInstance_h__Script_FriendsNotIncluded_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
