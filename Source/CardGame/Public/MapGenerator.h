#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Math.h"

#include "MapConsts.h"
#include "MapTypes.h"
#include "MapAssets.h"
#include "TerrainCreator.h"

#include "MapGenerator.generated.h"

#pragma once

using namespace std;

// map generator

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
		UStaticMesh* StaticMesh;

	//UPROPERTY(EditAnywhere)
	UStaticMeshComponent* HexTiles[ROWS_AMOUNT][COLUMNS_AMOUNT];

	MapTexture MapTextures[TERRAIN_TYPES_AMOUNT];

	FVector MapCords[ROWS_AMOUNT][COLUMNS_AMOUNT];

	// TESTING PROPS
	UPROPERTY(EditAnywhere)
	float noiseOneDimmensionalArray[ROWS_AMOUNT * COLUMNS_AMOUNT];

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

	virtual void LoadTextures();

	virtual void SetDynamicMaterial(UStaticMeshComponent* meshComponent, UTexture* materialTexture);

	// TESTING METHOD 

	//virtual void ConvertNoiseCords();
};
