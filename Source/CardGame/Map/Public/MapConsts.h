#include "MapTypes.h"

#pragma once

// ASSETS

TCHAR* const TEXTURE_PATH_GRASS = TEXT("Texture2D'/Game/map/grass_1.grass_1'");
TCHAR* const TEXTURE_PATH_WATER = TEXT("Texture2D'/Game/map/sea_1.sea_1'");
TCHAR* const TEXTURE_PATH_TREES_GRASS = TEXT("Texture2D'/Game/map/trees_grass_1.trees_grass_1'");
TCHAR* const TEXTURE_PATH_PINE_TREES = TEXT("Texture2D'/Game/map/pine_trees_1.pine_trees_1'");
TCHAR* const TEXTURE_PATH_MOUNTAINS = TEXT("Texture2D'/Game/map/mountains_1.mountains_1'");
TCHAR* const STATIC_MESH_PATH_HEX_TILE = TEXT("StaticMesh'/Game/map/hex-tile.hex-tile'");

TCHAR* const MATERIAL_PATH_HEX_TILE = TEXT("Material'/Game/map/hex-material.hex-material'");

// TERRAIN

const int TERRAIN_TYPES_AMOUNT = 5;
const int STATIC_MESHES_AMOUNT = 1;
const int MATERIALS_AMOUNT = 1;

const TerrainType WATER_TERRAIN = {
	TERRAIN_TYPES::WATER,
	-2.0,
	0.0
};

const TerrainType GRASS_TERRAIN = {
	TERRAIN_TYPES::GRASS,
	0.0,
	0.1
};

const TerrainType TREE_WITH_GRASS_TERRAIN = {
	TERRAIN_TYPES::TREE_GRASS,
	0.1,
	0.2
};

const TerrainType PINE_TREE_TERRAIN = {
	TERRAIN_TYPES::PINE_TREE,
	0.2,
	0.3
};

const TerrainType MOUNTAIN_TERRAIN = {
	TERRAIN_TYPES::MOUNTAIN,
	0.3,
	2.0
};

// NOISE

const float PERLIN_NOISE_INC = 0.1;

// MAP

const int ROWS_AMOUNT = 12;
const int COLUMNS_AMOUNT = 12;

const int HEX_TILE_SIDE_LENGTH = 1;
const float HEX_TILE_GAP = 2;

const float HEX_SIDE_SIZE = 100;