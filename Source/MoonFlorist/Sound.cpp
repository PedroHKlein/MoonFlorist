// Fill out your copyright notice in the Description page of Project Settings.


#include "Sound.h"
#include "Kismet/GameplayStatics.h"
Sound::Sound()
{
}

Sound::~Sound()
{
}

UAudioComponent* Sound::PlaySoundOnce(USoundBase* Sound, USceneComponent* AttachToComp)
{
	if (Sound)
	{
		return UGameplayStatics::SpawnSoundAttached(Sound, AttachToComp, NAME_None, FVector::ZeroVector, EAttachLocation::SnapToTarget, true);
	}

	UE_LOG(LogTemp, Error, TEXT("PlaySoundOnce: No Sound"));
	return nullptr;
}

void Sound::PlaySoundLoop(UAudioComponent* AudioComp, USoundBase* Sound)
{
	if(AudioComp)
	{
		if (Sound)
		{
			AudioComp->SetSound(Sound);
			AudioComp->Play();
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("PlaySoundLoop: No Sound"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("PlaySoundLoop: No AudioComp"));
	}
}

void Sound::Stop(UAudioComponent* AudioComp)
{
	if (AudioComp)
	{
		AudioComp->Stop();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Stop: No AudioComp"));
	}
}
