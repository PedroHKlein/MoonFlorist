// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Sound/SoundBase.h"
#include "Components/AudioComponent.h"
#include "Components/SceneComponent.h"
/**
 * 
 */
class MOONFLORIST_API Sound
{
public:
	Sound();
	~Sound();

     UAudioComponent* PlaySoundOnce(USoundBase* Sound, USceneComponent* AttachToComp);

     void PlaySoundLoop(UAudioComponent* AudioComp, USoundBase* Sound);
     void Stop(UAudioComponent* AudioComp);
};
