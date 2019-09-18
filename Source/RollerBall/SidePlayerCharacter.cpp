// Fill out your copyright notice in the Description page of Project Settings.


#include "SidePlayerCharacter.h"

// Sets default values
ASidePlayerCharacter::ASidePlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASidePlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASidePlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASidePlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ASidePlayerCharacter::MoveHorizontal(float value)
{
}

void ASidePlayerCharacter::StartJump()
{
}

void ASidePlayerCharacter::StopJump()
{
}