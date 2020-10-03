#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

#pragma once

class Assets
{
	template <typename T>
	T* GetAasset(TCHAR* path);
public:
	static UTexture* GetTexture(TCHAR* path);
	static UStaticMesh* GetStaticMesh(TCHAR* path);
	static UMaterial* GetMaterial(TCHAR* path);
};

