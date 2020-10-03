#pragma once

#include "mapconsts.h"
#include "components/staticmeshcomponent.h"
#include "uobject/constructorhelpers.h"
#include "materials/materialinstancedynamic.h"

class MapMaterials
{
	 UMaterial* Material;
	 UMaterialInstanceDynamic* DynamicMaterial;
	 UStaticMesh* StaticMesh;

	 UStaticMeshComponent* HexTiles[ROWS_AMOUNT][COLUMNS_AMOUNT];
	 MapTexture MapTextures[TERRAIN_TYPES_AMOUNT];

	virtual void CreateStaticMeshes(USceneComponent* Root);
	virtual void SetDynamicMaterial(UStaticMeshComponent* meshComponent, UTexture* materialTexture);
};

