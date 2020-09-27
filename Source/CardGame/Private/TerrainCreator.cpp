#include "TerrainCreator.h"
#include "MapConsts.h"

TerrainCreator::TerrainCreator()
{
	terrainTypes[0] = WATER_TERRAIN;
	terrainTypes[1] = GRASS_TERRAIN;
	terrainTypes[2] = TREE_WITH_GRASS_TERRAIN;
	terrainTypes[3] = PINE_TREE_TERRAIN;
	terrainTypes[4] = MOUNTAIN_TERRAIN;
}

void TerrainCreator::GenerateTerrainNoise() {
	float yoff = 0;
	for (int row = 0; row < ROWS_AMOUNT; row++) {
		float xoff = 0;
		for (int column = 0; column < COLUMNS_AMOUNT; column++) {
			terrainNoiseCords[row][column] = FMath::PerlinNoise2D(FVector2D(xoff, yoff));
			xoff += PERLIN_NOISE_INC;
		}
		yoff += PERLIN_NOISE_INC;
	}
}