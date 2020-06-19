// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/FPSAIGuard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSAIGuard() {}
// Cross Module References
	FPSGAME_API UEnum* Z_Construct_UEnum_FPSGame_EAIState();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSAIGuard_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSAIGuard();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
// End Cross Module References
	static UEnum* EAIState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FPSGame_EAIState, Z_Construct_UPackage__Script_FPSGame(), TEXT("EAIState"));
		}
		return Singleton;
	}
	template<> FPSGAME_API UEnum* StaticEnum<EAIState>()
	{
		return EAIState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAIState(EAIState_StaticEnum, TEXT("/Script/FPSGame"), TEXT("EAIState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FPSGame_EAIState_Hash() { return 2365268927U; }
	UEnum* Z_Construct_UEnum_FPSGame_EAIState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FPSGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAIState"), 0, Get_Z_Construct_UEnum_FPSGame_EAIState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAIState::idle", (int64)EAIState::idle },
				{ "EAIState::suspicious", (int64)EAIState::suspicious },
				{ "EAIState::alerted", (int64)EAIState::alerted },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "alerted.Name", "EAIState::alerted" },
				{ "BlueprintType", "true" },
				{ "idle.Name", "EAIState::idle" },
				{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
				{ "suspicious.Name", "EAIState::suspicious" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FPSGame,
				nullptr,
				"EAIState",
				"EAIState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(AFPSAIGuard::execOnRep_GuardState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_GuardState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAIGuard::execResetOrientation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetOrientation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAIGuard::execonNoiseHeard)
	{
		P_GET_OBJECT(APawn,Z_Param_NoiseInstigator);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->onNoiseHeard(Z_Param_NoiseInstigator,Z_Param_Out_Location,Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAIGuard::execOnPawnScene)
	{
		P_GET_OBJECT(APawn,Z_Param_ScenePawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnScene(Z_Param_ScenePawn);
		P_NATIVE_END;
	}
	static FName NAME_AFPSAIGuard_OnStateChanged = FName(TEXT("OnStateChanged"));
	void AFPSAIGuard::OnStateChanged(EAIState NewState)
	{
		FPSAIGuard_eventOnStateChanged_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_AFPSAIGuard_OnStateChanged),&Parms);
	}
	void AFPSAIGuard::StaticRegisterNativesAFPSAIGuard()
	{
		UClass* Class = AFPSAIGuard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "onNoiseHeard", &AFPSAIGuard::execonNoiseHeard },
			{ "OnPawnScene", &AFPSAIGuard::execOnPawnScene },
			{ "OnRep_GuardState", &AFPSAIGuard::execOnRep_GuardState },
			{ "ResetOrientation", &AFPSAIGuard::execResetOrientation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSAIGuard_onNoiseHeard_Statics
	{
		struct FPSAIGuard_eventonNoiseHeard_Parms
		{
			APawn* NoiseInstigator;
			FVector Location;
			float Volume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoiseInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSAIGuard_onNoiseHeard_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAIGuard_eventonNoiseHeard_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAIGuard_onNoiseHeard_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSAIGuard_onNoiseHeard_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAIGuard_eventonNoiseHeard_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFPSAIGuard_onNoiseHeard_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_onNoiseHeard_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSAIGuard_onNoiseHeard_Statics::NewProp_NoiseInstigator = { "NoiseInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAIGuard_eventonNoiseHeard_Parms, NoiseInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAIGuard_onNoiseHeard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAIGuard_onNoiseHeard_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAIGuard_onNoiseHeard_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAIGuard_onNoiseHeard_Statics::NewProp_NoiseInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAIGuard_onNoiseHeard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAIGuard_onNoiseHeard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAIGuard, nullptr, "onNoiseHeard", nullptr, nullptr, sizeof(FPSAIGuard_eventonNoiseHeard_Parms), Z_Construct_UFunction_AFPSAIGuard_onNoiseHeard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_onNoiseHeard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAIGuard_onNoiseHeard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_onNoiseHeard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAIGuard_onNoiseHeard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAIGuard_onNoiseHeard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAIGuard_OnPawnScene_Statics
	{
		struct FPSAIGuard_eventOnPawnScene_Parms
		{
			APawn* ScenePawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScenePawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSAIGuard_OnPawnScene_Statics::NewProp_ScenePawn = { "ScenePawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAIGuard_eventOnPawnScene_Parms, ScenePawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAIGuard_OnPawnScene_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAIGuard_OnPawnScene_Statics::NewProp_ScenePawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAIGuard_OnPawnScene_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAIGuard_OnPawnScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAIGuard, nullptr, "OnPawnScene", nullptr, nullptr, sizeof(FPSAIGuard_eventOnPawnScene_Parms), Z_Construct_UFunction_AFPSAIGuard_OnPawnScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_OnPawnScene_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAIGuard_OnPawnScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_OnPawnScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAIGuard_OnPawnScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAIGuard_OnPawnScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAIGuard_OnRep_GuardState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAIGuard_OnRep_GuardState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAIGuard_OnRep_GuardState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAIGuard, nullptr, "OnRep_GuardState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAIGuard_OnRep_GuardState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_OnRep_GuardState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAIGuard_OnRep_GuardState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAIGuard_OnRep_GuardState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAIGuard_OnStateChanged_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFPSAIGuard_OnStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAIGuard_eventOnStateChanged_Parms, NewState), Z_Construct_UEnum_FPSGame_EAIState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSAIGuard_OnStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAIGuard_OnStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAIGuard_OnStateChanged_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAIGuard_OnStateChanged_Statics::NewProp_NewState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAIGuard_OnStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAIGuard_OnStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAIGuard, nullptr, "OnStateChanged", nullptr, nullptr, sizeof(FPSAIGuard_eventOnStateChanged_Parms), Z_Construct_UFunction_AFPSAIGuard_OnStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_OnStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAIGuard_OnStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_OnStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAIGuard_OnStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAIGuard_OnStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAIGuard_ResetOrientation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAIGuard_ResetOrientation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAIGuard_ResetOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAIGuard, nullptr, "ResetOrientation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAIGuard_ResetOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAIGuard_ResetOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAIGuard_ResetOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAIGuard_ResetOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSAIGuard_NoRegister()
	{
		return AFPSAIGuard::StaticClass();
	}
	struct Z_Construct_UClass_AFPSAIGuard_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuardState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GuardState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GuardState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSAIGuard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSAIGuard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSAIGuard_onNoiseHeard, "onNoiseHeard" }, // 2166162654
		{ &Z_Construct_UFunction_AFPSAIGuard_OnPawnScene, "OnPawnScene" }, // 3252025301
		{ &Z_Construct_UFunction_AFPSAIGuard_OnRep_GuardState, "OnRep_GuardState" }, // 1673124584
		{ &Z_Construct_UFunction_AFPSAIGuard_OnStateChanged, "OnStateChanged" }, // 2857289971
		{ &Z_Construct_UFunction_AFPSAIGuard_ResetOrientation, "ResetOrientation" }, // 2555896188
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAIGuard_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FPSAIGuard.h" },
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_GuardState_MetaData[] = {
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_GuardState = { "GuardState", "OnRep_GuardState", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSAIGuard, GuardState), Z_Construct_UEnum_FPSGame_EAIState, METADATA_PARAMS(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_GuardState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_GuardState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_GuardState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_PawnSensingComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSAIGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_PawnSensingComp = { "PawnSensingComp", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSAIGuard, PawnSensingComp), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_PawnSensingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_PawnSensingComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSAIGuard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_GuardState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_GuardState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAIGuard_Statics::NewProp_PawnSensingComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSAIGuard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSAIGuard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSAIGuard_Statics::ClassParams = {
		&AFPSAIGuard::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSAIGuard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAIGuard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSAIGuard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAIGuard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSAIGuard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSAIGuard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSAIGuard, 3554471799);
	template<> FPSGAME_API UClass* StaticClass<AFPSAIGuard>()
	{
		return AFPSAIGuard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSAIGuard(Z_Construct_UClass_AFPSAIGuard, &AFPSAIGuard::StaticClass, TEXT("/Script/FPSGame"), TEXT("AFPSAIGuard"), false, nullptr, nullptr, nullptr);

	void AFPSAIGuard::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_GuardState(TEXT("GuardState"));

		const bool bIsValid = true
			&& Name_GuardState == ClassReps[(int32)ENetFields_Private::GuardState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AFPSAIGuard"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSAIGuard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
