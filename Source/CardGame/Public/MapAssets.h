#include "CoreMinimal.h"

#pragma once

class CARDGAME_API MapAssets
{
public:
	MapAssets();
	UTexture* Grass;
	UTexture* GetTexture(TCHAR* path);

private:
	virtual UTexture* GetTexture(TCHAR* path);
}; 