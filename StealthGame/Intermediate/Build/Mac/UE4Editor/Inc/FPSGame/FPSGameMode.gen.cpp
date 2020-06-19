// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/FPSGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSGameMode() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AFPSGameMode_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static FName NAME_AFPSGameMode_onMissionCompleted = FName(TEXT("onMissionCompleted"));
	void AFPSGameMode::onMissionCompleted(APawn* InstigatorPawn, bool bCarryingObjective)
	{
		FPSGameMode_eventonMissionCompleted_Parms Parms;
		Parms.InstigatorPawn=InstigatorPawn;
		Parms.bCarryingObjective=bCarryingObjective ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSGameMode_onMissionCompleted),&Parms);
	}
	void AFPSGameMode::StaticRegisterNativesAFPSGameMode()
	{
	}
	struct Z_Construct_UFunction_AFPSGameMode_onMissionCompleted_Statics
	{
		static void NewProp_bCarryingObjective_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCarryingObjective;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatorPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSGameMode_onMissionCompleted_Statics::NewProp_bCarryingObjective_SetBit(void* Obj)
	{
		((FPSGameMode_eventonMissionCompleted_Parms*)Obj)->bCarryingObjective = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSGameMode_onMissionCompleted_Statics::NewProp_bCarryingObjective = { "bCarryingObjective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSGameMode_eventonMissionCompleted_Parms), &Z_Construct_UFunction_AFPSGameMode_onMissionCompleted_Statics::NewProp_bCarryingObjective_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSGameMode_onMissionCompleted_Statics::NewProp_InstigatorPawn = { "InstigatorPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSGameMode_eventonMissionCompleted_Parms, InstigatorPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSGameMode_onMissionCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameMode_onMissionCompleted_Statics::NewProp_bCarryingObjective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameMode_onMissionCompleted_Statics::NewProp_InstigatorPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameMode_onMissionCompleted_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Public/FPSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameMode_onMissionCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameMode, nullptr, "onMissionCompleted", nullptr, nullptr, sizeof(FPSGameMode_eventonMissionCompleted_Parms), Z_Construct_UFunction_AFPSGameMode_onMissionCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameMode_onMissionCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameMode_onMissionCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameMode_onMissionCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameMode_onMissionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameMode_onMissionCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSGameMode_NoRegister()
	{
		return AFPSGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFPSGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectatingViewPointClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpectatingViewPointClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSGameMode_onMissionCompleted, "onMissionCompleted" }, // 815284597
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FPSGameMode.h" },
		{ "ModuleRelativePath", "Public/FPSGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameMode_Statics::NewProp_SpectatingViewPointClass_MetaData[] = {
		{ "Category", "Spectating" },
		{ "ModuleRelativePath", "Public/FPSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSGameMode_Statics::NewProp_SpectatingViewPointClass = { "SpectatingViewPointClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameMode, SpectatingViewPointClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFPSGameMode_Statics::NewProp_SpectatingViewPointClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameMode_Statics::NewProp_SpectatingViewPointClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameMode_Statics::NewProp_SpectatingViewPointClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSGameMode_Statics::ClassParams = {
		&AFPSGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameMode_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFPSGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSGameMode, 1327073280);
	template<> FPSGAME_API UClass* StaticClass<AFPSGameMode>()
	{
		return AFPSGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSGameMode(Z_Construct_UClass_AFPSGameMode, &AFPSGameMode::StaticClass, TEXT("/Script/FPSGame"), TEXT("AFPSGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
