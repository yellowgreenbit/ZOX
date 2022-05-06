// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Desk.h"
#include "Block.h"
#include "Sound/AmbientSound.h"

// Sets default values
ADesk::ADesk()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	RootComponent = DummyRoot;

	Size = 3;
	BlockSpacing = 300.f;
}

// Called when the game starts or when spawned
void ADesk::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogActor, Warning, TEXT("BeginPlay"));

	const int CountBlock = Size * Size;

	openedBlocks = 0;

	//TArray<ABlock*> ArrayBlocks;

	for (size_t blockIndex = 0; blockIndex < CountBlock; blockIndex++)
	{
		const float xPos = (blockIndex % Size) * -BlockSpacing;
		const float yPos = (blockIndex / Size) * -BlockSpacing;		

		const FVector location = FVector(xPos, yPos, 0) + GetActorLocation();

		ABlock* newBlock = GetWorld()->SpawnActor<ABlock>(location, FRotator(0, 0, 0));

		newBlock->setIndex(blockIndex);

		if (newBlock != nullptr)
		{
			newBlock->OwningGrid = this;
			this->ArrayBlocks.Add(newBlock);
		}
	}

	//newBlock->OwningGrid = this;
}

int ADesk::getOpenedBlocks () {
	return this->openedBlocks;
}

void ADesk::incrementOpenedBlocks() {
	this->openedBlocks++;
}

void ADesk::playClick() {
	if (soundClick != nullptr) {
		soundClick->Play();
	}
};

int ADesk::checkWinner() {

	TArray<int> winBlocks;

	int equals = 0;
	int firstBlockVal = 0;

	for (size_t i = 0; i < Size; i++) {

		// Horizontal check
		equals = 0;
		firstBlockVal = ArrayBlocks[i * Size]->getBlockValue();
		
		if (firstBlockVal != ABlock::EcharVals::N) {
			
			for (size_t j = 1; j < Size; j++) {
				if (firstBlockVal == ArrayBlocks[i * Size + j]->getBlockValue()) {
					equals++;
				}
			}
			if (Size - 1 == equals) {
				UE_LOG(LogActor, Warning, TEXT("WINNER ROW!!! - %d "), i);
				break;
			}
		}		

		// Vertical check
		equals = 0;
		firstBlockVal = ArrayBlocks[i]->getBlockValue();
		
		if (firstBlockVal != ABlock::EcharVals::N) {

			for (size_t j = 1; j < Size; j++) {
				UE_LOG(LogActor, Warning, TEXT("compare - %d %d"), i, j * Size + i);
				if (firstBlockVal == ArrayBlocks[j * Size + i]->getBlockValue()) {
					equals++;
				}
			}

			if (Size - 1 == equals) {
				UE_LOG(LogActor, Warning, TEXT("WINNER COL!!! - %d "), i);
				break;
			}
		}
	}

	// LDiagonal check
	equals = 0;
	firstBlockVal = ArrayBlocks[0]->getBlockValue();

	if (firstBlockVal != ABlock::EcharVals::N) {

		for (size_t j = 1; j < Size; j++) {
			if (firstBlockVal == ArrayBlocks[j * (Size + 1)]->getBlockValue()) {
				equals++;
			}

			if (Size - 1 == equals) {
				UE_LOG(LogActor, Warning, TEXT("WINNER LDIAGONAL!!! - %d "), j);
			}
		}
	}

	// RDiagonal check
	equals = 0;
	firstBlockVal = ArrayBlocks[Size * Size - Size]->getBlockValue();

	if (firstBlockVal != ABlock::EcharVals::N) {

		for (size_t j = 1; j < Size; j++) {
			if (firstBlockVal == ArrayBlocks[j * (Size - 1)]->getBlockValue()) {
				equals++;
			}

			if (Size - 1 == equals) {
				UE_LOG(LogActor, Warning, TEXT("WINNER RDIAGONAL!!! - %d "), j);
			}
		}
	}


	return 0;
}

// Called every frame
void ADesk::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

