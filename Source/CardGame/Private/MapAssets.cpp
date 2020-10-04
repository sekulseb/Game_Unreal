#pragma once

#include "MapAssets.h"
#include "Assets.h"

MapAssets::MapAssets() {
	LoadMapTextures();
	LoadMapMaterials();
	GetMapStaticMeshes();
}

void MapAssets::LoadMapTextures() {
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

void MapAssets::LoadMapMaterials() {
	Materials[0] = {
		Assets::GetMaterial(MATERIAL_PATH_HEX_TILE)
	};
}

void MapAssets::GetMapStaticMeshes() {
	StaticMeshes[0] = {
		Assets::GetStaticMesh(STATIC_MESH_PATH_HEX_TILE)
	};
}