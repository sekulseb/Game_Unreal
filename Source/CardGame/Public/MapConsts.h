#include "MapTypes.h"

#pragma once

// TERRAIN

const int TERRAIN_TYPES_AMOUNT = 5;

const TerrainType WATER_TERRAIN = {
	TERRAIN_TYPES::WATER,
	-1.0,
	0.0,
	TEXT("Texture2D'/Game/map/sea_1.sea_1'")
};

const TerrainType GRASS_TERRAIN = {
	TERRAIN_TYPES::GRASS,
	0.0001,
	0.1,
	TEXT("Texture2D'/Game/map/grass_1.grass_1'")
};

const TerrainType TREE_WITH_GRASS_TERRAIN = {
	TERRAIN_TYPES::TREE_GRASS,
	0.10001,
	0.2,
	TEXT("Texture2D'/Game/map/trees_grass_1.trees_grass_1'")
};

const TerrainType PINE_TREE_TERRAIN = {
	TERRAIN_TYPES::PINE_TREE,
	0.20001,
	0.3,
	TEXT("Texture2D'/Game/map/pine_trees_1.pine_trees_1'")
};

const TerrainType MOUNTAIN_TERRAIN = {
	TERRAIN_TYPES::MOUNTAIN,
	0.3,
	1.0,
	TEXT("Texture2D'/Game/map/mountains_1.mountains_1'")
};

// NOISE

const float PERLIN_NOISE_INC = 0.01;

// MAP

const int ROWS_AMOUNT = 14;
const int COLUMNS_AMOUNT = 20;

const int HEX_TILE_SIDE_LENGTH = 1;
const float HEX_TILE_GAP = 2;

const float HEX_SIDE_SIZE = 100;