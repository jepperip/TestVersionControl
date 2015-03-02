// Fill out your copyright notice in the Description page of Project Settings.

#include "TestVersionControl.h"
#include "ThorstenFlinck.h"


// Sets default values
AThorstenFlinck::AThorstenFlinck()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AThorstenFlinck::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AThorstenFlinck::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
    FRotator rot = this->GetActorRotation();
    rot.Yaw += 0.2;
    this->SetActorRotation(rot);
}

// Called to bind functionality to input
void AThorstenFlinck::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

