#pragma once
class MapMaterial
{
	UMaterial* Material;
	UMaterialInstanceDynamic* DynamicMaterial;
	UStaticMesh* StaticMesh;

	UStaticMeshComponent* HexTiles[ROWS_AMOUNT][COLUMNS_AMOUNT];
	MapTexture MapTextures[TERRAIN_TYPES_AMOUNT];

	virtual void CreateStaticMeshes(USceneComponent* Root);
	virtual void SetDynamicMaterial(UStaticMeshComponent* meshComponent, UTexture* materialTexture);
};

