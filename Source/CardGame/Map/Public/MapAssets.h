#pragma once

#include "MapTypes.h"
#include "MapConsts.h"

class MapAssets
{
	void LoadMapTextures();
	void LoadMapMaterials();
	void LoadMapStaticMeshes();
public:
	void LoadMapAssets();
	MapTexture TerrainTextures[TERRAIN_TYPES_AMOUNT];
	MapMaterial Materials[MATERIALS_AMOUNT];
	MapStaticMesh StaticMeshes[STATIC_MESHES_AMOUNT];
}; 