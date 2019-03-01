// Fill out your copyright notice in the Description page of Project Settings.

#include "GirarObjeto.h"


// Sets default values for this component's properties
UGirarObjeto::UGirarObjeto()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	// ...
}


// Called when the game starts
void UGirarObjeto::BeginPlay()
{
	Super::BeginPlay();
	Objeto = GetOwner();
	UE_LOG(LogTemp, Warning, TEXT("To funfando"));
}


// Called every frame
void UGirarObjeto::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	Objeto->AddActorLocalRotation(FRotator(0.f, 2.f, 0.f));
}

