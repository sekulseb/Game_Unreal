#include "MapAssets.h"
#include "MapConsts.h"
#include "UObject/ConstructorHelpers.h"

#pragma once

MapAssets::MapAssets() {
	/*static ConstructorHelpers::FObjectFinder<UTexture> TextureMountains_1(TEXT("Texture2D'/Game/map/mountains_1.mountains_1'"));
	static ConstructorHelpers::FObjectFinder<UTexture> TexturePainTrees_1(TEXT("Texture2D'/Game/map/pine_trees_1.pine_trees_1'"));
	static ConstructorHelpers::FObjectFinder<UTexture> TextureTreesGrass_1(TEXT("Texture2D'/Game/map/trees_grass_1.trees_grass_1'"));
	static ConstructorHelpers::FObjectFinder<UTexture> TextureSea_1(TEXT("Texture2D'/Game/map/sea_1.sea_1'"));*/
}

UTexture* MapAssets::GetTexture(TCHAR* path) {
	ConstructorHelpers::FObjectFinder<UTexture> texture(path);
	return texture.Object;
}