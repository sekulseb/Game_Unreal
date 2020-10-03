#include "CoreMinimal.h"
#include "MapConsts.h"
#include "MapTypes.h"

#pragma once

class TerrainCreator
{
public:
	TerrainCreator();
private:

	TerrainType TerrainTypes[TERRAIN_TYPES_AMOUNT];
	FVector MapCords[ROWS_AMOUNT][COLUMNS_AMOUNT];

	float terrainNoiseCords[ROWS_AMOUNT][COLUMNS_AMOUNT];
	virtual void GenerateTerrainNoise();
	virtual void GenerateMapCords();
};
