#include "MapAssets.h"
#include "Assets.h"
//#pragma once

MapAssets::MapAssets() {
	GetMapTextures();
}

void MapAssets::GetMapTextures() {
	TerrainTextures[0] = {
		TERRAIN_TYPES::GRASS,
		Assets::GetTexture(GRASS_TERRAIN.texturePath)
	};
	TerrainTextures[1] = {
		TERRAIN_TYPES::WATER,
		Assets::GetTexture(WATER_TERRAIN.texturePath)
	};
	TerrainTextures[2] = {
		TERRAIN_TYPES::TREE_GRASS,
		Assets::GetTexture(TREE_WITH_GRASS_TERRAIN.texturePath)
	};
	TerrainTextures[3] = {
		TERRAIN_TYPES::PINE_TREE,
		Assets::GetTexture(PINE_TREE_TERRAIN.texturePath)
	};
	TerrainTextures[4] = {
		TERRAIN_TYPES::MOUNTAIN,
		Assets::GetTexture(MOUNTAIN_TERRAIN.texturePath)
	};
}

