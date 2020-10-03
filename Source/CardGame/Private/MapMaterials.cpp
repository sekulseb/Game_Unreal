#pragma once

#include "MapMaterials.h"
#include "MapTypes.h"

// MAP METHODS

//void MapMaterial::CreateStaticMeshes(USceneComponent* Root) {
	/*for (int row = 0; row < ROWS_AMOUNT; row++)
	{
		for (int col = 0; col < COLUMNS_AMOUNT; col++)
		{
			FName meshName = MakeUniqueObjectName(this, AMapGenerator::StaticClass(), TEXT("Point"));
			UStaticMeshComponent* meshComponent = CreateDefaultSubobject<UStaticMeshComponent>(meshName);
			HexTiles[row][col] = meshComponent;
			meshComponent->AttachToComponent(Root, FAttachmentTransformRules::KeepWorldTransform);
			meshComponent->SetStaticMesh(StaticMesh);
			meshComponent->SetMaterial(0, Material);
			meshComponent->SetRelativeLocation(MapCords[row][col]);
			meshComponent->SetWorldScale3D(FVector(1.f));
		}
	}*/
//}

//void MapMaterial::SetDynamicMaterial(UStaticMeshComponent* meshComponent, UTexture* materialTexture) {
	/*DynamicMaterial = meshComponent->CreateAndSetMaterialInstanceDynamic(0);
	meshComponent->SetMaterial(0, DynamicMaterial);
	DynamicMaterial->SetTextureParameterValue("MapTexture", materialTexture);*/
//}