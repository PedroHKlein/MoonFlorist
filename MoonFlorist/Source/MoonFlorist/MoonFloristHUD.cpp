// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MoonFloristHUD.h"
#include "Engine/Canvas.h"
#include "Engine/Texture2D.h"
#include "TextureResource.h"
#include "CanvasItem.h"
#include "UObject/ConstructorHelpers.h"

AMoonFloristHUD::AMoonFloristHUD()
{
	// Set the crosshair texture
	static ConstructorHelpers::FObjectFinder<UTexture2D> CrosshairTexObj(TEXT("/Game/FirstPerson/Textures/FirstPersonCrosshair"));
	CrosshairTex = CrosshairTexObj.Object;
	
	// Set the idle crosshair texture
	static ConstructorHelpers::FObjectFinder<UTexture2D> IdleCH_Obj(TEXT("/Game/User_Interface/Crosshair/crosshair_white"));
	Idle_CH = IdleCH_Obj.Object;

	// Set the look at crosshair texture
	static ConstructorHelpers::FObjectFinder<UTexture2D> LookAtCH_Obj(TEXT("/Game/User_Interface/Crosshair/crosshair_blue"));
	LookAt_CH = LookAtCH_Obj.Object;

	// Set the in range crosshair texture
	static ConstructorHelpers::FObjectFinder<UTexture2D> InRangeCH_Obj(TEXT("/Game/User_Interface/Crosshair/crosshair_blueflower"));
	InRange_CH = InRangeCH_Obj.Object;


	Current_CH = Idle_CH;
	//Decreasing Alpha of the Crosshair, making it semi transparent
	Current_CH->AdjustMaxAlpha = 0.3f;


	
}


void AMoonFloristHUD::DrawHUD()
{
	Super::DrawHUD();
	
	// Draw very simple crosshair
	const FVector2D ViewportSize = FVector2D(GetWorld()->GetGameViewport()->Viewport->GetSizeXY());
	// find center of the Canvas
	const FVector2D Center(Canvas->ClipX *0.5f, Canvas->ClipY * 0.5f);
	// offset by half the texture's dimensions so that the center of the texture aligns with the center of the Canvas
	const FVector2D CrosshairDrawPosition(Center.X - (Current_CH->GetSurfaceWidth() * 0.5f) ,
										  Center.Y - (Current_CH->GetSurfaceHeight() * 0.5f));

	// draw the crosshair
	FCanvasTileItem TileItem(CrosshairDrawPosition, Current_CH->Resource, FLinearColor::White);
	TileItem.BlendMode = SE_BLEND_Translucent;
	//TileItem.Size *= 0.5f;
	//TileItem.PivotPoint = FVector2D(Current_CH->GetSizeX() * .5f, Current_CH->GetSizeY() * .5f);
	Canvas->DrawItem( TileItem );
}

void AMoonFloristHUD::ToggleAlpha(bool _changeState)
{
}

void AMoonFloristHUD::ChangeState(FHitResult _target)
{
}


