// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGraphicsActor.h"
#include "Components/MeshComponent.h"
#include "NiagaraComponent.h"





// Sets default values
AMyGraphicsActor::AMyGraphicsActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyGraphicsActor::BeginPlay()
{
	Super::BeginPlay();

	UStaticMeshComponent* MySM = FindComponentByClass<UStaticMeshComponent>();
	MySM->SetMaterial(0, MyMat);

	

	MyDynamicMat = MySM->CreateAndSetMaterialInstanceDynamic(0);

	MyDynamicMat->SetVectorParameterValue(FName(TEXT("Colour")), FLinearColor(0, 0, 1, 1));


	UNiagaraComponent* MyNiagaraComp = FindComponentByClass<UNiagaraComponent>();
	MyNiagaraComp->SetColorParameter("MyCol", FLinearColor(0, 1, 0, 1));
}

// Called every frame
void AMyGraphicsActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	//MyDynamicMat->SetVectorParameterValue(FName(TEXT("Colour")), FLinearColor(FMath::RandRange, FMath::RandRange, FMath::RandRange, FMath::RandRange));
}

