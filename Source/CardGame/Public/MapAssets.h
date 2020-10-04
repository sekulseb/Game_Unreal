#pragma once

#include "MapTypes.h"
#include "Assets.h"
#include "MapConsts.h"

class MapAssets
{
	void LoadMapTextures();
	void LoadMapMaterials();
	void GetMapStaticMeshes();
public:
	MapAssets();
	MapTexture TerrainTextures[TERRAIN_TYPES_AMOUNT];
	MapMaterial Materials[MATERIALS_AMOUNT];
	MapStaticMesh StaticMeshes[STATIC_MESHES_AMOUNT];
}; 