// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharly_Character.h"

// Sets default values
AMyCharly_Character::AMyCharly_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCharly_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharly_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyCharly_Character::Dummy()
{
}


// Called to bind functionality to input
void AMyCharly_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

