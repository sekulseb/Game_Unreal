#include "MapGenerator.h"
#include "MapAssets.h"
#include "TerrainCreator.h"

// Sets default values
AMapGenerator::AMapGenerator()
{
 	// Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("root"));
	RootComponent = Root;

	// load assets textures
	// load assets material
	// load assets mesh
	MapAssets MapAssets;
	
	HexTileStaticMesh = MapAssets.StaticMeshes[0].StaticMesh;
	HexTileMaterial = MapAssets.Materials[0].Material;

	// generate cords
	// generate noise
	
	TerrainCreator TerrainCreator;
	for (int i = 0; i < ROWS_AMOUNT; i++) {
		for (int j = 0; j < COLUMNS_AMOUNT; j++) {
			HexTiles[i][j] = CreateStaticMeshComponent(TerrainCreator.MapCords[i][j]);
		}
	}

	// create and bind components to root scene

	// apply dynamic material base on noise
}

void AMapGenerator::PostInitializeComponents() {
	Super::PostInitializeComponents();

	/*MapAssets MapAssets;
	TerrainCreator TerrainCreator;*/
	
	for (int i = 0; i < ROWS_AMOUNT; i++) {
		for (int j = 0; j < COLUMNS_AMOUNT; j++) {
			//SetDynamicMaterial(HexTiles[i][j], MapAssets.TerrainTextures[0].Texture);
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

UStaticMeshComponent* AMapGenerator::CreateStaticMeshComponent(FVector Cords) {
	FName MeshName = MakeUniqueObjectName(this, AMapGenerator::StaticClass(), TEXT("Point"));
	UStaticMeshComponent* meshComponent = CreateDefaultSubobject<UStaticMeshComponent>(MeshName);
	meshComponent->AttachToComponent(Root, FAttachmentTransformRules::KeepWorldTransform);
	meshComponent->SetStaticMesh(HexTileStaticMesh);
	meshComponent->SetMaterial(0, HexTileMaterial);
	meshComponent->SetRelativeLocation(Cords);
	meshComponent->SetWorldScale3D(FVector(1.f));
	return meshComponent;
}

void AMapGenerator::SetDynamicMaterial(UStaticMeshComponent* meshComponent, UTexture* materialTexture) {
	HexTileDynamicMaterial = meshComponent->CreateAndSetMaterialInstanceDynamic(0);
	meshComponent->SetMaterial(0, HexTileDynamicMaterial);
	HexTileDynamicMaterial->SetTextureParameterValue("MapTexture", materialTexture);
}
