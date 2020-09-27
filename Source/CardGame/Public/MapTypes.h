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
	FName name; // for now its not needed
	UTexture* texture;
};

struct TerrainType
{
	TERRAIN_TYPES type;	
	float minField;
	float maxField;
	TCHAR* texturePath;
};