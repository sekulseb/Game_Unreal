#pragma once

#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

class Assets
{
	template <typename T>
	T GetAasset(TCHAR* path);
public:
	virtual UTexture* GetTexture(TCHAR* path);
	virtual UStaticMesh* GetMesh(TCHAR* path);
	virtual UMaterial* GetMaterial(TCHAR* path);
};

