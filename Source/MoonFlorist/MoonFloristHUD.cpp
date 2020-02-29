// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MoonFloristHUD.h"
#include "Engine/Canvas.h"
#include "Engine/Texture2D.h"
#include "TextureResource.h"
#include "CanvasItem.h"
#include <EngineGlobals.h>
#include "Engine.h"
#include "UObject/ConstructorHelpers.h"



AMoonFloristHUD::AMoonFloristHUD()
{
	
	// Set the idle crosshair texture
	static ConstructorHelpers::FObjectFinder<UTexture2D> IdleCH_Obj(TEXT("/Game/User_Interface/Crosshair/crosshair_white"));
	Idle_CH = IdleCH_Obj.Object;

	// Set the look at crosshair texture
	static ConstructorHelpers::FObjectFinder<UTexture2D> LookAtCH_Obj(TEXT("/Game/User_Interface/Crosshair/crosshair_blue"));
	LookAt_CH = LookAtCH_Obj.Object;

	// Set the in range crosshair texture
	static ConstructorHelpers::FObjectFinder<UTexture2D> InRangeCH_Obj(TEXT("/Game/User_Interface/Crosshair/crosshair_blueflower"));
	InRange_CH = InRangeCH_Obj.Object;

	// Set the crosshair to none
	static ConstructorHelpers::FObjectFinder<UTexture2D> NoneCH_Obj(TEXT("/Game/User_Interface/Crosshair/crosshair_none"));
	None_CH = NoneCH_Obj.Object;
	Interacting = false;
	
	Current_CH = Idle_CH;
	
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

	
	Canvas->DrawItem( TileItem );
}

void AMoonFloristHUD::ToggleAlpha(bool _changeState)
{
	if (_changeState)
	{
		Interacting = true;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("Crosshair OFF"));
		Current_CH = None_CH;
		
	}
	else
	{
		Interacting = false;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("Crosshair ON"));
		Current_CH = Idle_CH;
	}
}

void AMoonFloristHUD::ChangeState(int _state)
{
	//Changes the current crosshair of the player to the respective crosshair states
	if (!Interacting)
	{
		switch (_state)
		{
			//IdleState
		case 1:
		{
			Current_CH = Idle_CH;
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("Idle State Activate!"));
			break;
		}
		//LookAt
		case 2:
		{
			Current_CH = LookAt_CH;
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("LookAt State Activate!!"));
			break;
		}
		//InRange
		case 3:
		{
			Current_CH = InRange_CH;
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("InRange State Activate!!"));
			break;
		}
		case 4:
		{
			Current_CH = None_CH;
			break;
		}
		default:
		{
			Current_CH = None_CH;
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Crosshair Change Is Broken!"));
			break;
		}
		}
	}
}


