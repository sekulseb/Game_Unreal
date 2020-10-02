#include "Assets.h"

template <typename T>
T Assets::GetAasset(TCHAR* path) {
	ConstructorHelpers::FObjectFinder<T> asset(path);
	return asset.Object;
}

UTexture* Assets::GetTexture(TCHAR* path) {
	return GetAasset<UTexture*>(path);
}

UStaticMesh* Assets::GetMesh(TCHAR* path) {
	return GetAasset<UStaticMesh*>(path);
}

UMaterial* Assets::GetMaterial(TCHAR* path) {
	return GetAasset<UMaterial*>(path);
}