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
	TERRAIN_TYPES Type;
	UTexture* Texture;
};

struct MapStaticMesh {
	UStaticMesh* StaticMesh;
};

struct MapMaterial {
	UMaterial* Material;
};

struct TerrainType
{
	TERRAIN_TYPES Type;	
	float minField;
	float maxField;	
};