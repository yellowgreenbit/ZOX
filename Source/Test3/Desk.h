// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Block.h"
#include "Desk.generated.h"

UCLASS()
class TEST3_API ADesk : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	class USceneComponent* DummyRoot;

	TArray<ABlock*> ArrayBlocks;

	int openedBlocks;

public:
	// Sets default values for this actor's properties
	ADesk();

	UPROPERTY(EditAnywhere)
		int Size;

	UPROPERTY(EditAnywhere)
		class AAmbientSound* soundClick;

	UPROPERTY(EditAnywhere)

	float BlockSpacing;

	void playClick();

	int getOpenedBlocks();

	void incrementOpenedBlocks();

	int checkWinner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
