#include "Assets.h"

template <typename T>
T Assets::GetAasset(TCHAR* path) {
	ConstructorHelpers::FObjectFinder<T> asset(path);
	return asset.Object;
}

UTexture* Assets::GetTexture(TCHAR* path) {
	Assets Assets;
	return Assets.GetAasset<UTexture*>(path);
}

UStaticMesh* Assets::GetMesh(TCHAR* path) {
	Assets Assets;
	return Assets.GetAasset<UStaticMesh*>(path);
}

UMaterial* Assets::GetMaterial(TCHAR* path) {
	Assets Assets;
	return Assets.GetAasset<UMaterial*>(path);
}