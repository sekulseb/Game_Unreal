#include "MapAssets.h"
#include "Assets.h"

//#pragma once

MapAssets::MapAssets() {
	GetMapTextures();
}

void MapAssets::GetMapTextures() {
	terrainTextures[0] = {
		TERRAIN_TYPES::GRASS,
		GetTexture(GRASS_TERRAIN.texturePath)
	};
	terrainTextures[1] = {
		TERRAIN_TYPES::WATER,
		GetTexture(WATER_TERRAIN.texturePath)
	};
	terrainTextures[2] = {
		TERRAIN_TYPES::TREE_GRASS,
		GetTexture(TREE_WITH_GRASS_TERRAIN.texturePath)
	};
	terrainTextures[3] = {
		TERRAIN_TYPES::PINE_TREE,
		GetTexture(PINE_TREE_TERRAIN.texturePath)
	};
	terrainTextures[4] = {
		TERRAIN_TYPES::MOUNTAIN,
		GetTexture(MOUNTAIN_TERRAIN.texturePath)
	};
}

void MapAssets::GetMapMeshes() {
	
}

void MapAssets::GetMapMaterials() {
	
}

