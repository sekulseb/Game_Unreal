#include "CoreMinimal.h"
#include "MapConsts.h"
#include "MapTypes.h"

#pragma once

class TerrainCreator
{
public:
	TerrainCreator();
	TerrainType TerrainTypes[TERRAIN_TYPES_AMOUNT];
	FVector MapCords[ROWS_AMOUNT][COLUMNS_AMOUNT];
private:
	float terrainNoiseCords[ROWS_AMOUNT][COLUMNS_AMOUNT];
	void GenerateTerrainNoise();
	void GenerateMapCords();
	void SetTerrainTypes();
};
