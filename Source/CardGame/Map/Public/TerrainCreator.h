#include "CoreMinimal.h"
#include "MapConsts.h"
#include "MapTypes.h"

#pragma once

class TerrainCreator
{
public:
	TerrainCreator();
    MapHex MapHex[ROWS_AMOUNT][COLUMNS_AMOUNT];
	FVector MapCords[ROWS_AMOUNT][COLUMNS_AMOUNT];
private:
    //FVector MapCords[ROWS_AMOUNT][COLUMNS_AMOUNT];
    float terrainNoiseCords[ROWS_AMOUNT][COLUMNS_AMOUNT];
	void GenerateMapElevationNoise();
	void GenerateMapHexCords();
	void CalculateTerrainTypes();
};
