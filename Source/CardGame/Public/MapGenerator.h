// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include <string>
#include "Math.h"
#include "MapGenerator.generated.h"

using namespace std;

const int COLUMNS_AMOUNT = 10;
const int ROWS_AMOUNT = 10;

const int HEX_TILE_SIDE_LENGTH = 1;
const float HEX_TILE_GAP = 1; // todo - fix this - gaps are not equal

const float HEX_Y = HEX_TILE_SIDE_LENGTH * 100;
const float HEX_DIMENSION_Y = HEX_Y * 2;

const float HEX_X = ((HEX_TILE_SIDE_LENGTH * sqrt(3)) / 2) * 100;  // (a * sqrt(3)) / 2
const float HEX_DIMENSION_X = HEX_X * 2;

const float Y_OFFSET = HEX_Y * 1.5;
const float X_OFFSET = HEX_X;

UCLASS()
class CARDGAME_API AMapGenerator : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AMapGenerator();

	UPROPERTY()
	USceneComponent* Root;
	UPROPERTY(EditAnywhere)
	UMaterial* Material;
	UPROPERTY(EditAnywhere)
	UMaterialInstanceDynamic* DynamicMaterial;
	UPROPERTY(EditAnywhere)
	UTexture* Texture;
	UPROPERTY(EditAnywhere)
	UStaticMesh* StaticMesh;
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* HexTiles[ROWS_AMOUNT * COLUMNS_AMOUNT];

	FVector MapCords[ROWS_AMOUNT][COLUMNS_AMOUNT];

private:

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void PostInitializeComponents() override;

	virtual void PostLoad() override;

	virtual void GenerateMapCords();

	virtual void CreateStaticMeshes();

	virtual void GetStaticAssets();

	virtual void SetDynamicMaterial(UTexture* materialTexture);

};
