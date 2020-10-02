#pragma once

#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

class Assets
{
	template <typename T>
	T* GetAasset(TCHAR* path);
public:
	static UTexture* GetTexture(TCHAR* path);
	static UStaticMesh* GetMesh(TCHAR* path);
	static UMaterial* GetMaterial(TCHAR* path);
};

