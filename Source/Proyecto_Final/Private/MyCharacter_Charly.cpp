// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter_Charly.h"

float life;
// Sets default values
AMyCharacter_Charly::AMyCharacter_Charly()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCharacter_Charly::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacter_Charly::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter_Charly::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMyCharacter_Charly:: Prueba ()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Puto el que lo lea"));
}
