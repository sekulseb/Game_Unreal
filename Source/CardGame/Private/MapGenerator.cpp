#include "MapGenerator.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInstanceDynamic.h"


// Sets default values
AMapGenerator::AMapGenerator()
{
 	// Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("root"));
	RootComponent = Root;


	MapAssets mapAssets;
	

	LoadTextures();

	GetStaticAssets();

	GenerateMapCords();
	CreateStaticMeshes();
}

void AMapGenerator::PostInitializeComponents() {
	Super::PostInitializeComponents();
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

// MAP METHODS

void AMapGenerator::GenerateMapCords() 
{	
	const float UHEX_SIZE = HEX_TILE_SIDE_LENGTH * HEX_SIDE_SIZE;
	const float UHEX_HEIGHT = UHEX_SIZE * sqrt(3);

	const float HEX_X = UHEX_SIZE * 1.5;
	const float HEX_Y = UHEX_HEIGHT;  // (a * sqrt(3)) / 2

	for (int row = 0; row < ROWS_AMOUNT; row++) {
		for (int column = 0; column < COLUMNS_AMOUNT; column++) {
			MapCords[row][column].Y = (float)row * (HEX_Y + HEX_TILE_GAP);
			MapCords[row][column].X = (float)column * (HEX_X + HEX_TILE_GAP);
			MapCords[row][column].Z = 0;
			if (column % 2) {
				MapCords[row][column].Y += UHEX_HEIGHT / 2;		
				MapCords[row][column].Y += HEX_TILE_GAP / 2;				
			}
		}
	}
}

void AMapGenerator::GetStaticAssets() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> GetAssetHexTileMesh(TEXT("StaticMesh'/Game/map/hex-tile.hex-tile'"));	
	static ConstructorHelpers::FObjectFinder<UMaterial> GetAssetHexTileMaterial(TEXT("Material'/Game/map/hex-material.hex-material'"));
	if (GetAssetHexTileMesh.Succeeded()) {
		StaticMesh = GetAssetHexTileMesh.Object;
	}
	if (GetAssetHexTileMaterial.Succeeded()) {
		Material = GetAssetHexTileMaterial.Object;
	}
}

void AMapGenerator::CreateStaticMeshes() {
	for (int row = 0; row < ROWS_AMOUNT; row++)
	{
		for (int col = 0; col < COLUMNS_AMOUNT; col++)
		{
			FName meshName = MakeUniqueObjectName(this, AMapGenerator::StaticClass(), TEXT("Point"));
			UStaticMeshComponent* meshComponent = CreateDefaultSubobject<UStaticMeshComponent>(meshName);
			HexTiles[row][col] = meshComponent;
			meshComponent->AttachToComponent(Root, FAttachmentTransformRules::KeepWorldTransform);			
			meshComponent->SetStaticMesh(StaticMesh);
			meshComponent->SetMaterial(0, Material);
			meshComponent->SetRelativeLocation(MapCords[row][col]);
			meshComponent->SetWorldScale3D(FVector(1.f));			
		}
	}
}

void AMapGenerator::SetDynamicMaterial(UStaticMeshComponent* meshComponent, UTexture* materialTexture) {
	DynamicMaterial = meshComponent->CreateAndSetMaterialInstanceDynamic(0);
	meshComponent->SetMaterial(0, DynamicMaterial);
	DynamicMaterial->SetTextureParameterValue("MapTexture", materialTexture);
}

void AMapGenerator::LoadTextures() {

	

	/*static ConstructorHelpers::FObjectFinder<UTexture> TextureGrass_1(TEXT("Texture2D'/Game/map/grass_1.grass_1'"));
	static ConstructorHelpers::FObjectFinder<UTexture> TextureMountains_1(TEXT("Texture2D'/Game/map/mountains_1.mountains_1'"));
	static ConstructorHelpers::FObjectFinder<UTexture> TexturePainTrees_1(TEXT("Texture2D'/Game/map/pine_trees_1.pine_trees_1'"));
	static ConstructorHelpers::FObjectFinder<UTexture> TextureTreesGrass_1(TEXT("Texture2D'/Game/map/trees_grass_1.trees_grass_1'"));
	static ConstructorHelpers::FObjectFinder<UTexture> TextureSea_1(TEXT("Texture2D'/Game/map/sea_1.sea_1'"));

	MapTextures[0].name = FName("TextureGrass_1");
	MapTextures[0].texture = TextureGrass_1.Object;

	MapTextures[1].name = FName("TextureMountains_1");
	MapTextures[1].texture = TextureMountains_1.Object;

	MapTextures[2].name = FName("TexturePainTrees_1");
	MapTextures[2].texture = TexturePainTrees_1.Object;

	MapTextures[3].name = FName("TextureTreesGrass_1");
	MapTextures[3].texture = TextureTreesGrass_1.Object;

	MapTextures[4].name = FName("TextureSea_1");
	MapTextures[4].texture = TextureSea_1.Object;*/
	
}