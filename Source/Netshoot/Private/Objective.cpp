// Fill out your copyright notice in the Description page of Project Settings.


#include "Objective.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"

// Sets default values
AObjective::AObjective()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	//MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RootComponent = MeshComp;

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	//SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	//SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	//SphereComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	SphereComp->SetupAttachment(MeshComp);
}

// Called when the game starts or when spawned
void AObjective::BeginPlay()
{
	Super::BeginPlay();

	//elapsedTime = 0;
	//center = this->GetActorLocation();
}

// Called every frame
void AObjective::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//elapsedTime += DeltaTime;

	//int x = sin(elapsedTime * timeScale) * radius;
	//int z = cos(elapsedTime * timeScale) * radius;
	//FVector offset = FVector(x, 0.0, z);
	//this->SetActorLocation(center + offset);
}