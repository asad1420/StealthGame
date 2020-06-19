// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSObjectiveActor.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "FPSCharacter.h"

// Sets default values
AFPSObjectiveActor::AFPSObjectiveActor()
{
 	
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
    RootComponent = MeshComp;

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	SphereComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
    SphereComp->SetupAttachment(MeshComp);

	SetReplicates(true);
}

// Called when the game starts or when spawned
void AFPSObjectiveActor::BeginPlay()
{
	Super::BeginPlay();
	playEffects();

	
}

void AFPSObjectiveActor::playEffects()
{
	UGameplayStatics::SpawnEmitterAtLocation(this, PickupFX, GetActorLocation());
	
}


void AFPSObjectiveActor::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	
	playEffects();

	UE_LOG(LogTemp, Warning, TEXT("Your message 0"));

   if (GetLocalRole() == ROLE_Authority)
   {
	   UE_LOG(LogTemp, Warning, TEXT("Your message 1"));
       
	AFPSCharacter* myCharacter = Cast<AFPSCharacter>(OtherActor);

  if (myCharacter)
  {

   UE_LOG(LogTemp, Warning, TEXT("Your message 2"));
	myCharacter->bCarryingObjective = true;
	
	Destroy();
  }
  else
  
  {
	  myCharacter->bCarryingObjective = false;


  } 

    }
}

 

