// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGoalManager.h"

// Sets default values
AMyGoalManager::AMyGoalManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyGoalManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyGoalManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyGoalManager::init()
{
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			switch (i + 1)
			{
				//RED GOALS HERE
			case GRED:
				RedGoals.Add(NewObject<UMyGoal>());
				RedGoals[j]->init(i+1, j+1);
				break;
				//BLUE GOALS HERE
			case GBLUE:
				BlueGoals.Add(NewObject<UMyGoal>());
				BlueGoals[j]->init(i + 1, j + 1);
				break;
				//YELLOW GOALS HERE
			case GYELLOW:
				YellowGoals.Add(NewObject<UMyGoal>());
				YellowGoals[j]->init(i + 1, j + 1);
				break;
				//PURPLE GOALS HERE
			case GPURPLE:
				PurpleGoals.Add(NewObject<UMyGoal>());
				PurpleGoals[j]->init(i + 1, j + 1);
				break;
				//GREEN GOALS HERE
			case GGREEN:
				GreenGoals.Add(NewObject<UMyGoal>());
				GreenGoals[j]->init(i + 1, j + 1);
				break;
				//ORANGE GOALS HERE
			case GORANGE:
				OrangeGoals.Add(NewObject<UMyGoal>());
				OrangeGoals[j]->init(i + 1, j + 1);
				break;
			default:
				break;
			}
		}
	}
}

UMyGoal* AMyGoalManager::GetGoal(int _icol, int _igoal)
{
	switch (_icol)
	{
		//RED GOALS HERE
	case GRED:
		return RedGoals[_igoal];
		break;
		//BLUE GOALS HERE
	case GBLUE:
		return BlueGoals[_igoal];
		break;
		//YELLOW GOALS HERE
	case GYELLOW:
		return YellowGoals[_igoal];
		break;
		//PURPLE GOALS HERE
	case GPURPLE:
		return PurpleGoals[_igoal];
		break;
		//GREEN GOALS HERE
	case GGREEN:
		return GreenGoals[_igoal];
		break;
		//ORANGE GOALS HERE
	case GORANGE:
		return OrangeGoals[_igoal];
		break;
	default:
		return RedGoals[1];
		break;
	}
}

