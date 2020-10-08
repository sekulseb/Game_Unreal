#pragma once

#include <CardGame/Map/Public/MapGenerator.h>
#include <CardGame/Map/Public/MapAssets.h>
#include <CardGame/Map/Public/TerrainCreator.h>

// Sets default values
AMapGenerator::AMapGenerator()
{
 	// Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

    SetMapScene();
    SetAssets();
    SetMapMeshComponents();
}

void AMapGenerator::PostInitializeComponents() {
	Super::PostInitializeComponents();

	/*MapAssets MapAssets;
	TerrainCreator TerrainCreator;*/
	
	for (auto & Row : HexTiles) {
		for (auto & Column : Row) {
			SetDynamicMaterial(Column, HexTilesTextures[0]);
		}
	}

}

// Called when the game starts or when spawned
void AMapGenerator::BeginPlay() {
	Super::BeginPlay();
}

void AMapGenerator::PostLoad() {
	Super::PostLoad();	
}

// Called every frame
void AMapGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// API

UStaticMeshComponent* AMapGenerator::CreateStaticMeshComponent(FVector Cords)
{
	FName MeshName = MakeUniqueObjectName(this, AMapGenerator::StaticClass(), TEXT("Point"));
	auto* meshComponent = CreateDefaultSubobject<UStaticMeshComponent>(MeshName);
	meshComponent->AttachToComponent(Root, FAttachmentTransformRules::KeepWorldTransform);
	meshComponent->SetStaticMesh(HexTileStaticMesh);
	meshComponent->SetMaterial(0, HexTileMaterial);
	meshComponent->SetRelativeLocation(Cords);
	meshComponent->SetWorldScale3D(FVector(1.f));
	return meshComponent;
}

void AMapGenerator::SetDynamicMaterial(UStaticMeshComponent* meshComponent, UTexture* materialTexture)
{
	HexTileDynamicMaterial = meshComponent->CreateAndSetMaterialInstanceDynamic(0);
	meshComponent->SetMaterial(0, HexTileDynamicMaterial);
	HexTileDynamicMaterial->SetTextureParameterValue("MapTexture", materialTexture);
}

void AMapGenerator::SetMapScene() {
    Root = CreateDefaultSubobject<USceneComponent>(TEXT("root"));
    RootComponent = Root;
}

void AMapGenerator::SetAssets()
{
    MapAssets MapAssets{};
    MapAssets.LoadMapAssets();
    HexTileStaticMesh = MapAssets.StaticMeshes[0].StaticMesh;
    HexTileMaterial = MapAssets.Materials[0].Material;
    for (int i = 0; i < TERRAIN_TYPES_AMOUNT; i++) {
        HexTilesTextures[i] = MapAssets.TerrainTextures[i].Texture;
    }
}

void AMapGenerator::SetMapMeshComponents() {
    TerrainCreator TerrainCreator;
    for (int i = 0; i < ROWS_AMOUNT; i++) {
        for (int j = 0; j < COLUMNS_AMOUNT; j++) {
            HexTiles[i][j] = CreateStaticMeshComponent(TerrainCreator.MapCords[i][j]);
        }
    }
}