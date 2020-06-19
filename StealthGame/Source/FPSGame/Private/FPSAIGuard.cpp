// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSAIGuard.h"
#include "Perception/PawnSensingComponent.h"
#include "DrawDebugHelpers.h"
#include "FPSGameMode.h"
#include "Net/UnrealNetwork.h"

// Sets default values
AFPSAIGuard::AFPSAIGuard()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComp"));
    
	GuardState = EAIState::idle;
}

// Called when the game starts or when spawned
void AFPSAIGuard::BeginPlay()
{
	Super::BeginPlay();
	
	PawnSensingComp->OnSeePawn.AddDynamic(this, &AFPSAIGuard::OnPawnScene);
	PawnSensingComp->OnHearNoise.AddDynamic(this, &AFPSAIGuard::onNoiseHeard);

	OriginalLocation = GetActorRotation();


}
void AFPSAIGuard::OnPawnScene(APawn* ScenePawn)
{
    if (ScenePawn == nullptr)
	{
		return;
	}

	DrawDebugSphere(GetWorld(), ScenePawn->GetActorLocation(), 32.0f, 12, FColor::Red, false, 10.0f);

	AFPSGameMode* GM = Cast<AFPSGameMode>(GetWorld()->GetAuthGameMode());
	if (GM)
	{
		GM->CompleteMission(ScenePawn, false);
	}

	SetGuardState(EAIState::alerted);

}

void AFPSAIGuard::onNoiseHeard(APawn* NoiseInstigator, const FVector& Location, float Volume)
{

if (GuardState == EAIState::alerted)
{
	return;
}

DrawDebugSphere(GetWorld(), Location, 32.0f, 12, FColor::Green, false, 10.0f);

FVector Direction = Location - GetActorLocation();
Direction.Normalize();

FRotator NewLookAt = FRotationMatrix::MakeFromX(Direction).Rotator();
NewLookAt.Pitch = 0.0f;
NewLookAt.Roll = 0.0f;

SetActorRotation(NewLookAt);

GetWorldTimerManager().ClearTimer(TimerHandle_ResetOrientation);
GetWorldTimerManager().SetTimer(TimerHandle_ResetOrientation, this, &AFPSAIGuard::ResetOrientation, 3.0f);

SetGuardState(EAIState::suspicious);

}

void AFPSAIGuard::ResetOrientation()
{

if (GuardState == EAIState::alerted)
{   
	return;
}

	SetActorRotation(OriginalLocation);


    SetGuardState(EAIState::idle);

}

 void AFPSAIGuard::OnRep_GuardState()
 {
	 OnStateChanged(GuardState);
 }

void AFPSAIGuard::SetGuardState(EAIState NewState)
{
	if (GuardState == NewState)
	{
		return;
	}
    
	GuardState = NewState;
	
	OnRep_GuardState();

}



// Called every frame
void AFPSAIGuard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFPSAIGuard::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AFPSAIGuard, GuardState);
}



