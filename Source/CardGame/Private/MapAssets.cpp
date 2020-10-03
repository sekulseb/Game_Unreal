#include "MapAssets.h"
#include "Assets.h"
#include "MapConsts.h"
#pragma once

MapAssets::MapAssets() {
	GetMapTextures();
}

void MapAssets::GetMapTextures() {
	TerrainTextures[0] = {
		TERRAIN_TYPES::GRASS,
		Assets::GetTexture(TEXTURE_PATH_GRASS)
	};
	TerrainTextures[1] = {
		TERRAIN_TYPES::WATER,
		Assets::GetTexture(TEXTURE_PATH_WATER)
	};
	TerrainTextures[2] = {
		TERRAIN_TYPES::TREE_GRASS,
		Assets::GetTexture(TEXTURE_PATH_TREES_GRASS)
	};
	TerrainTextures[3] = {
		TERRAIN_TYPES::PINE_TREE,
		Assets::GetTexture(TEXTURE_PATH_PINE_TREES)
	};
	TerrainTextures[4] = {
		TERRAIN_TYPES::MOUNTAIN,
		Assets::GetTexture(TEXTURE_PATH_MOUNTAINS)
	};
}

