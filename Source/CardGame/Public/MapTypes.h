#include "Components/StaticMeshComponent.h"
#include <string>

#pragma once

using namespace std;

enum TERRAIN_TYPES
{
	WATER,
	GRASS,
	TREE_GRASS,
	PINE_TREE,
	MOUNTAIN
};

struct MapTexture 
{
	TERRAIN_TYPES type;
	UTexture* texture;
};

struct TerrainType
{
	TERRAIN_TYPES type;	
	float minField;
	float maxField;
	TCHAR* texturePath;
};