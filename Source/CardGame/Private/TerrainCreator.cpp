#include "TerrainCreator.h"

TerrainCreator::TerrainCreator()
{
	TerrainTypes[0] = WATER_TERRAIN;
	TerrainTypes[1] = GRASS_TERRAIN;
	TerrainTypes[2] = TREE_WITH_GRASS_TERRAIN;
	TerrainTypes[3] = PINE_TREE_TERRAIN;
	TerrainTypes[4] = MOUNTAIN_TERRAIN;

	GenerateMapCords();
	GenerateTerrainNoise();
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

void TerrainCreator::GenerateMapCords()
{
	const float UHEX_SIZE = HEX_TILE_SIDE_LENGTH * HEX_SIDE_SIZE;
	const float UHEX_HEIGHT = UHEX_SIZE * sqrt(3);

	const float HEX_X = UHEX_SIZE * 1.5;
	const float HEX_Y = UHEX_HEIGHT;  // (a * sqrt(3)) / 2

	for (int row = 0; row < ROWS_AMOUNT; row++) {
		for (int column = 0; column < COLUMNS_AMOUNT; column++) {
			MapCords[row][column].Y = (float)row * (HEX_Y + HEX_TILE_GAP);
			MapCords[row][column].X = (float)column * (HEX_X + HEX_TILE_GAP);
			MapCords[row][column].Z = 0;
			if (column % 2) {
				MapCords[row][column].Y += UHEX_HEIGHT / 2;
				MapCords[row][column].Y += HEX_TILE_GAP / 2;
			}
		}
	}
}