// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/FPSPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSPlayerController() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AFPSPlayerController_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	static FName NAME_AFPSPlayerController_OnMissionComplete = FName(TEXT("OnMissionComplete"));
	void AFPSPlayerController::OnMissionComplete(APawn* InstigatorPawn, bool bCarryingObjective)
	{
		FPSPlayerController_eventOnMissionComplete_Parms Parms;
		Parms.InstigatorPawn=InstigatorPawn;
		Parms.bCarryingObjective=bCarryingObjective ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSPlayerController_OnMissionComplete),&Parms);
	}
	void AFPSPlayerController::StaticRegisterNativesAFPSPlayerController()
	{
	}
	struct Z_Construct_UFunction_AFPSPlayerController_OnMissionComplete_Statics
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
	void Z_Construct_UFunction_AFPSPlayerController_OnMissionComplete_Statics::NewProp_bCarryingObjective_SetBit(void* Obj)
	{
		((FPSPlayerController_eventOnMissionComplete_Parms*)Obj)->bCarryingObjective = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSPlayerController_OnMissionComplete_Statics::NewProp_bCarryingObjective = { "bCarryingObjective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSPlayerController_eventOnMissionComplete_Parms), &Z_Construct_UFunction_AFPSPlayerController_OnMissionComplete_Statics::NewProp_bCarryingObjective_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSPlayerController_OnMissionComplete_Statics::NewProp_InstigatorPawn = { "InstigatorPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSPlayerController_eventOnMissionComplete_Parms, InstigatorPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerController_OnMissionComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerController_OnMissionComplete_Statics::NewProp_bCarryingObjective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerController_OnMissionComplete_Statics::NewProp_InstigatorPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerController_OnMissionComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerController" },
		{ "ModuleRelativePath", "Public/FPSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerController_OnMissionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerController, nullptr, "OnMissionComplete", nullptr, nullptr, sizeof(FPSPlayerController_eventOnMissionComplete_Parms), Z_Construct_UFunction_AFPSPlayerController_OnMissionComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_OnMissionComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerController_OnMissionComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_OnMissionComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerController_OnMissionComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerController_OnMissionComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSPlayerController_NoRegister()
	{
		return AFPSPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AFPSPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSPlayerController_OnMissionComplete, "OnMissionComplete" }, // 2152249620
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FPSPlayerController.h" },
		{ "ModuleRelativePath", "Public/FPSPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSPlayerController_Statics::ClassParams = {
		&AFPSPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSPlayerController, 2730276036);
	template<> FPSGAME_API UClass* StaticClass<AFPSPlayerController>()
	{
		return AFPSPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSPlayerController(Z_Construct_UClass_AFPSPlayerController, &AFPSPlayerController::StaticClass, TEXT("/Script/FPSGame"), TEXT("AFPSPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
