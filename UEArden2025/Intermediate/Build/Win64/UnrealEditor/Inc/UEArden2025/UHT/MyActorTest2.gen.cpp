// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEArden2025/Public/MyActorTest2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActorTest2() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
UEARDEN2025_API UClass* Z_Construct_UClass_AMyActorTest2();
UEARDEN2025_API UClass* Z_Construct_UClass_AMyActorTest2_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEArden2025();
// End Cross Module References

// Begin Class AMyActorTest2
void AMyActorTest2::StaticRegisterNativesAMyActorTest2()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyActorTest2);
UClass* Z_Construct_UClass_AMyActorTest2_NoRegister()
{
	return AMyActorTest2::StaticClass();
}
struct Z_Construct_UClass_AMyActorTest2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyActorTest2.h" },
		{ "ModuleRelativePath", "Public/MyActorTest2.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActorTest2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyActorTest2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UEArden2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorTest2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActorTest2_Statics::ClassParams = {
	&AMyActorTest2::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorTest2_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActorTest2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyActorTest2()
{
	if (!Z_Registration_Info_UClass_AMyActorTest2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActorTest2.OuterSingleton, Z_Construct_UClass_AMyActorTest2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyActorTest2.OuterSingleton;
}
template<> UEARDEN2025_API UClass* StaticClass<AMyActorTest2>()
{
	return AMyActorTest2::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActorTest2);
AMyActorTest2::~AMyActorTest2() {}
// End Class AMyActorTest2

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_aseun_OneDrive_Documentos_Cursos_C___UEArden2025_UEArden2025_Source_UEArden2025_Public_MyActorTest2_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyActorTest2, AMyActorTest2::StaticClass, TEXT("AMyActorTest2"), &Z_Registration_Info_UClass_AMyActorTest2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActorTest2), 3075017580U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_aseun_OneDrive_Documentos_Cursos_C___UEArden2025_UEArden2025_Source_UEArden2025_Public_MyActorTest2_h_1390250325(TEXT("/Script/UEArden2025"),
	Z_CompiledInDeferFile_FID_Users_aseun_OneDrive_Documentos_Cursos_C___UEArden2025_UEArden2025_Source_UEArden2025_Public_MyActorTest2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_aseun_OneDrive_Documentos_Cursos_C___UEArden2025_UEArden2025_Source_UEArden2025_Public_MyActorTest2_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
