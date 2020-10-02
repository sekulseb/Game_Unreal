#include "CoreMinimal.h"
#include "MapConsts.h"
#include "MapTypes.h"
#include "UObject/ConstructorHelpers.h"
#include "Assets.h"

#pragma once

class MapAssets
{
	void GetMapTextures();
public:
	MapAssets();
	MapTexture TerrainTextures[5];
}; 