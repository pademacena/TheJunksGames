// Fill out your copyright notice in the Description page of Project Settings.

#include "AumDimObj.h"
#include "Engine/World.h"

// Sets default values for this component's properties
UAumDimObj::UAumDimObj()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAumDimObj::BeginPlay()
{
	Super::BeginPlay();
	Objeto = GetOwner();
	MaxScale = 4.f;
	MinScale = 1.f;
}


// Called every frame
void UAumDimObj::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

