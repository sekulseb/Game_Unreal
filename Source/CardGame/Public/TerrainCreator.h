#include "CoreMinimal.h"
#include "MapConsts.h"
#include "MapTypes.h"

#pragma once

class CARDGAME_API TerrainCreator
{
public:
	TerrainType terrainTypes[TERRAIN_TYPES_AMOUNT];

	TerrainCreator();

private:
	float terrainNoiseCords[ROWS_AMOUNT][COLUMNS_AMOUNT];
	virtual void GenerateTerrainNoise();
};
