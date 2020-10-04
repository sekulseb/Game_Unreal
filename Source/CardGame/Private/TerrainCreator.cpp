#include "TerrainCreator.h"

TerrainCreator::TerrainCreator()
{
	SetTerrainTypes();
	GenerateMapCords();
	GenerateTerrainNoise();
}

void TerrainCreator::GenerateTerrainNoise() {
	float yOff = 0;
	for (auto & row : terrainNoiseCords) {
		float xOff = 0;
		for (float & column : row) {
			column = FMath::PerlinNoise2D(FVector2D(xOff, yOff));
            xOff += PERLIN_NOISE_INC;
		}
        yOff += PERLIN_NOISE_INC;
	}
}

void TerrainCreator::GenerateMapCords()
{
	const double U_HEX_SIZE = HEX_TILE_SIDE_LENGTH * HEX_SIDE_SIZE;
	const double U_HEX_HEIGHT = U_HEX_SIZE * sqrt(3);

	const double HEX_X = U_HEX_SIZE * 1.5;
	const double HEX_Y = U_HEX_HEIGHT;  // (a * sqrt(3)) / 2

	for (int row = 0; row < ROWS_AMOUNT; row++) {
		for (int column = 0; column < COLUMNS_AMOUNT; column++) {
			MapCords[row][column].Y = (float)row * (float)(HEX_Y + HEX_TILE_GAP);
			MapCords[row][column].X = (float)column * (float)(HEX_X + HEX_TILE_GAP);
			MapCords[row][column].Z = 0;
			if (column % 2) {
				MapCords[row][column].Y += (float)U_HEX_HEIGHT / 2;
				MapCords[row][column].Y += HEX_TILE_GAP / 2;
			}
		}
	}
}

void TerrainCreator::SetTerrainTypes() {
    TerrainTypes[0] = WATER_TERRAIN;
    TerrainTypes[1] = GRASS_TERRAIN;
    TerrainTypes[2] = TREE_WITH_GRASS_TERRAIN;
    TerrainTypes[3] = PINE_TREE_TERRAIN;
    TerrainTypes[4] = MOUNTAIN_TERRAIN;
}
