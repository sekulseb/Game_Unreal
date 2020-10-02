#include "CoreMinimal.h"
#include "MapConsts.h"
#include "MapTypes.h"
#include "UObject/ConstructorHelpers.h"
#include "Assets.h"

#pragma once

class MapAssets
{
public:
	MapAssets();

	MapTexture terrainTextures[5];

private:
	//virtual UTexture* GetTexture(TCHAR* path);
	/*virtual void GetMapTextures();
	virtual void GetMapMeshes();
	virtual void GetMapMaterials();*/
}; 