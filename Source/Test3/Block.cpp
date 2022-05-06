// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Block.h"
#include "Desk.h"
#include "UObject/ConstructorHelpers.h"
#include <Runtime/Engine/Classes/Components/TextRenderComponent.h>

// Sets default values
ABlock::ABlock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	charValue = "-";
	charVal = EcharVals::N;
	isActive = true;

	//static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	//UStaticMesh* Asset = MeshAsset.Object;

	struct FConstructorStatics
	{
		ConstructorHelpers::FObjectFinderOptional<UStaticMesh> PlaneMesh;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> BaseMaterial;
		FConstructorStatics()
			: PlaneMesh(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"))
			, BaseMaterial(TEXT("/Game/Materials/Base.Base"))
		{
		}
	};
	static FConstructorStatics ConstructorStatics;

	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	RootComponent = DummyRoot;

	BlockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockMesh0"));

	BlockMesh->SetStaticMesh(ConstructorStatics.PlaneMesh.Get());
	//BlockMesh->SetStaticMesh(Asset);
	BlockMesh->SetRelativeScale3D(FVector(2.f, 2.f, 0.25f));
	BlockMesh->SetRelativeLocation(FVector(0.f, 0.f, -10.f));

	BlockMesh->SetMobility(EComponentMobility::Movable);
	BlockMesh->SetMaterial(0, ConstructorStatics.BaseMaterial.Get());
	BlockMesh->SetupAttachment(DummyRoot);
	BlockMesh->OnClicked.AddDynamic(this, &ABlock::BlockClicked);

	ValueText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("VALUE"));
	ValueText->SetRelativeLocation(FVector(0.f, 110.f, -16.f));
	ValueText->SetRelativeRotation(FRotator(90.f, 0.f, 90.f));
	ValueText->SetWorldSize(200);
	ValueText->SetHorizontalAlignment(EHorizTextAligment::EHTA_Center);
	ValueText->SetRelativeScale3D(FVector(-1.f, 1.f, -1.f));
	//ValueText->SetText("X");

	ValueText->SetText(FText::FromString(FString::FromInt(charVal)));
	//ValueText->SetText(FText::FromString(charValue));
	ValueText->SetTextRenderColor(FColor(0, 0, 0));
	ValueText->SetupAttachment(DummyRoot);
}

void ABlock::BlockClicked(UPrimitiveComponent* ClickedComp, FKey ButtonClicked)
{
	HandleClicked();
}

// Called when the game starts or when spawned
void ABlock::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector newLocation = RootComponent->GetRelativeLocation();

	if (this->getRotate()) {

		FRotator rotateVector = RootComponent->GetRelativeRotation();

		//UE_LOG(LogActor, Warning, TEXT("BLOCK CLICKED! %f"), rotateVector.Roll);
		if (rotateVector.Roll < 0.0f) {
			rotateVector.Roll = 180.0f;
			this->setRotate(false);
		}
		else {
			rotateVector.Roll += 3.0f;
		}

		newLocation.Z += (rotateVector.Roll < 90.0f) ? 5.f : -5.f;
		
		RootComponent->SetRelativeLocation(newLocation);
		RootComponent->SetRelativeRotation(rotateVector);

		//UE_LOG(LogActor, Warning, TEXT("Value %s"), this->getValue());
	}
}

void ABlock::setIndex(const int value) {
	this->index = value;
};

const int ABlock::getIndex() {
	return this->index;
};

void ABlock::setRotate(const bool value) {
	this->isRotate = value;
};

const bool ABlock::getRotate() {
	return this->isRotate;
};

void ABlock::setBlockValue(const EcharVals value) {
	FString str = (value == 1) ? "O" : "X";

	this->ValueText->SetText(FText::FromString(str));
	//this->ValueText->SetText(FText::FromString(value));
	//this->charValue = value;
	
	this->charVal = value;
};

int ABlock::getBlockValue() {
	return this->charVal;
};

void ABlock::HandleClicked()
{
	//UE_LOG(LogActor, Warning, TEXT("CharVal! %d"), this->charVal);	
	UE_LOG(LogActor, Warning, TEXT("BLOCK CLICKED! %d"), this->index);	

	if (this->isActive) {

		this->setRotate(true);

		if (OwningGrid->getOpenedBlocks() % 2) {
			this->setBlockValue(EcharVals::O);
		}
		else {
			this->setBlockValue(EcharVals::X);
		}

		OwningGrid->playClick();
		OwningGrid->incrementOpenedBlocks();
		OwningGrid->checkWinner();

		this->isActive = false;
	}

	//UE_LOG(LogActor, Warning, TEXT("BLOCK CLICKED! %d"), (this->getBlockValue()));
}

