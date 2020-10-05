#pragma once

#include <CardGame/Shared/Public/Assets.h>

template <typename T>
T* Assets::GetAsset(TCHAR* path) {
	ConstructorHelpers::FObjectFinder<T> Asset(path);
	return Asset.Object;
}

UTexture* Assets::GetTexture(TCHAR* path) {
	Assets Assets;
	return Assets.GetAsset<UTexture>(path);
}

UStaticMesh* Assets::GetStaticMesh(TCHAR* path) {
	Assets Assets;
	return Assets.GetAsset<UStaticMesh>(path);
}

UMaterial* Assets::GetMaterial(TCHAR* path) {
	Assets Assets;
	return Assets.GetAsset<UMaterial>(path);
}