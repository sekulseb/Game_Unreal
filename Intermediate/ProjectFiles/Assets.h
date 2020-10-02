#pragma once

#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

class Assets
{
public:
	virtual UTexture* GetTexture(TCHAR* path);
};

