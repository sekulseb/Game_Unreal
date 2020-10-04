#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "math.h"
#include "MapConsts.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "MapGenerator.generated.h"

#pragma once

using namespace std;

// map generator

UCLASS()
class CARDGAME_API AMapGenerator : public AActor
{
	GENERATED_BODY()

	UMaterialInstanceDynamic* HexTileDynamicMaterial;

	UStaticMeshComponent* HexTiles[ROWS_AMOUNT][COLUMNS_AMOUNT];

	UStaticMeshComponent* CreateStaticMeshComponent(FVector Cords);

	virtual void SetDynamicMaterial(UStaticMeshComponent* meshComponent, UTexture* materialTexture);

public:
	// Sets default values for this actor's properties
	AMapGenerator();

	UPROPERTY()
	USceneComponent* Root;
	UPROPERTY()
	UMaterial* HexTileMaterial;
	UPROPERTY()
	UStaticMesh* HexTileStaticMesh;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void PostInitializeComponents() override;

	virtual void PostLoad() override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
