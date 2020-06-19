// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSGameState.h"
#include "EngineUtils.h"
#include "FPSPlayerController.h"


void AFPSGameState::MulticastOnMissionComplete_Implementation(APawn* InstigatorPawn, bool bCarryingObjective)
{
  /*
   for (TActorIterator<APawn> It(GetWorld()); It; ++It)
 {
    APawn* Pawn = *It;
          
         UE_LOG(LogTemp, Warning, TEXT("Your message 1"));
       if (Pawn && Pawn->IsLocallyControlled())
       {
           UE_LOG(LogTemp, Warning, TEXT("Your message 2"));
         Pawn->DisableInput(nullptr);
        

       }
    }
   */

    for(FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; It++)
    {
        AFPSPlayerController* PC = Cast<AFPSPlayerController>(It->Get());

        if (PC && PC->IsLocalController())
        {
            PC->OnMissionComplete(InstigatorPawn, bCarryingObjective);

            APawn* MyPawn = PC->GetPawn();
            
            if (MyPawn)
            {
                MyPawn->DisableInput(nullptr);
            }
        }
    }
}