// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Block.generated.h"

UCLASS()
class TEST3_API ABlock : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
		class USceneComponent* DummyRoot;

	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* BlockMesh;

	UPROPERTY(EditAnywhere)
		class UTextRenderComponent* ValueText;

	UPROPERTY()
		class UMaterial* BaseMaterial;

	UPROPERTY()
		class UMaterial* OrangeMaterial;

	UPROPERTY()
		class UMaterial* GreenMaterial;

	UFUNCTION()
		void BlockClicked(UPrimitiveComponent* ClickedComp, FKey ButtonClicked);
	
	void HandleClicked();

	int index;

	FString charValue;

	bool isRotate = false;
	bool isActive;
	
public:		
	// Sets default values for this actor's properties
	ABlock();

	enum EcharVals {
		N,
		O,
		X
	};

	EcharVals charVal;

	void setIndex(const int value);
	const int getIndex();

	void setRotate(const bool value);
	const bool getRotate();

	void setBlockValue(const EcharVals value);
	int getBlockValue();

	UPROPERTY()
		class ADesk* OwningGrid;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
