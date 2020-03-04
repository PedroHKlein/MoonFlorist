// Fill out your copyright notice in the Description page of Project Settings.


#include "MyEmail.h"

// Sets default values
AMyEmail::AMyEmail()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyEmail::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyEmail::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyEmail::Feedbackinit(AMyClient* _client, TArray<UMyGoal*> _gSuccess, TArray<UMyGoal*> _gFailure, int _iScore)
{
	Client = _client;
	GoalSuccess = _gSuccess;
	GoalFailure = _gFailure;
	iScore = _iScore;
	int temp;
	float scoretemp;

	switch (Client->GetNature())
	{
	case NORMAL:
		if (GoalFailure.Num() == 0)
		{
			switch (GoalSuccess.Num())
			{
			case 1:
				sGood = "When it came to the boquet feeling " + GoalSuccess[0]->GetGoal() + ". You hit the mark";
				break;
			case 2:
				sGood = "When it came to the boquet feeling " + GoalSuccess[0]->GetGoal() + " and" + GoalSuccess[1]->GetGoal() + ". You hit the mark";
				break;
			case 3:
				sGood = "When it came to the boquet feeling " + GoalSuccess[0]->GetGoal() + " ," + GoalSuccess[1]->GetGoal() + " and" + GoalSuccess[2]->GetGoal() + ". You hit the mark";
				break;
			default:
				break;
			}
		}
		else
		{
			if (GoalSuccess.Num() == 0)
			{
				switch (GoalFailure.Num())
				{
				case 1:
					sBad = "When it came to the boquet feeling " + GoalFailure[0]->GetGoal() + ". You fucked up";
					break;
				case 2:
					sBad = "When it came to the boquet feeling " + GoalFailure[0]->GetGoal() + " and" + GoalFailure[1]->GetGoal() + ". You fucked up";
					break;
				case 3:
					sBad = "When it came to the boquet feeling " + GoalFailure[0]->GetGoal() + " ," + GoalFailure[1]->GetGoal() + " and" + GoalFailure[2]->GetGoal() + ". You fucked up";
					break;
				default:
					break;
				}
			}
			else
			{
				switch (GoalFailure.Num())
				{
				case 1:
					sBad = "When it came to the boquet feeling " + GoalFailure[0]->GetGoal() + ". You fucked up";
					break;
				case 2:
					sBad = "When it came to the boquet feeling " + GoalFailure[0]->GetGoal() + " and" + GoalFailure[1]->GetGoal() + ". You fucked up";
					break;
				default:
					break;
				}

				switch (GoalSuccess.Num())
				{
				case 1: 
					sGood = "When it came to the boquet feeling " + GoalSuccess[0]->GetGoal() + ". You hit the mark";
					break;
				case 2:
					sGood = "When it came to the boquet feeling " + GoalSuccess[0]->GetGoal() + " and" + GoalSuccess[1]->GetGoal() + ". You hit the mark";
					break;
				default:
					break;
				}
			}
		}

		temp = GoalFailure.Num() + GoalSuccess.Num();
		scoretemp = iScore / temp;

		if (scoretemp >= 1)
		{
			sOverall = "Overall you did a pretty good job";
		}
		else
		{
			sOverall = "Overall this isn't a great boquet, but it will do I guess";
		}
		break;
	case FLIRTY:
		if (GoalFailure.Num() == 0)
		{
			switch (GoalSuccess.Num())
			{
			case 1:
				sGood = "When it came to the boquet feeling " + GoalSuccess[0]->GetGoal() + ". You hit the mark";
				break;
			case 2:
				sGood = "When it came to the boquet feeling " + GoalSuccess[0]->GetGoal() + " and" + GoalSuccess[1]->GetGoal() + ". You hit the mark";
				break;
			case 3:
				sGood = "When it came to the boquet feeling " + GoalSuccess[0]->GetGoal() + " ," + GoalSuccess[1]->GetGoal() + " and" + GoalSuccess[2]->GetGoal() + ". You hit the mark";
				break;
			default:
				break;
			}
		}
		else
		{
			if (GoalSuccess.Num() == 0)
			{
				switch (GoalFailure.Num())
				{
				case 1:
					sBad = "When it came to the boquet feeling " + GoalFailure[0]->GetGoal() + ". You fucked up";
					break;
				case 2:
					sBad = "When it came to the boquet feeling " + GoalFailure[0]->GetGoal() + " and" + GoalFailure[1]->GetGoal() + ". You fucked up";
					break;
				case 3:
					sBad = "When it came to the boquet feeling " + GoalFailure[0]->GetGoal() + " ," + GoalFailure[1]->GetGoal() + " and" + GoalFailure[2]->GetGoal() + ". You fucked up";
					break;
				default:
					break;
				}
			}
			else
			{
				switch (GoalFailure.Num())
				{
				case 1:
					sBad = "When it came to the boquet feeling " + GoalFailure[0]->GetGoal() + ". You fucked up";
					break;
				case 2:
					sBad = "When it came to the boquet feeling " + GoalFailure[0]->GetGoal() + " and" + GoalFailure[1]->GetGoal() + ". You fucked up";
					break;
				default:
					break;
				}

				switch (GoalSuccess.Num())
				{
				case 1:
					sGood = "When it came to the boquet feeling " + GoalSuccess[0]->GetGoal() + ". You hit the mark";
					break;
				case 2:
					sGood = "When it came to the boquet feeling " + GoalSuccess[0]->GetGoal() + " and" + GoalSuccess[1]->GetGoal() + ". You hit the mark";
					break;
				default:
					break;
				}
			}
		}

		temp = GoalFailure.Num() + GoalSuccess.Num();
		scoretemp = iScore / temp;

		if (scoretemp >= 1)
		{
			sOverall = "Overall you did a pretty good job";
		}
		else
		{
			sOverall = "Overall this isn't a great boquet, but it will do I guess";
		}
		break;
	case SHY:
		if (GoalFailure.Num() == 0)
		{
			switch (GoalSuccess.Num())
			{
			case 1:
				sGood = "When it came to the boquet feeling " + GoalSuccess[0]->GetGoal() + ". You hit the mark";
				break;
			case 2:
				sGood = "When it came to the boquet feeling " + GoalSuccess[0]->GetGoal() + " and" + GoalSuccess[1]->GetGoal() + ". You hit the mark";
				break;
			case 3:
				sGood = "When it came to the boquet feeling " + GoalSuccess[0]->GetGoal() + " ," + GoalSuccess[1]->GetGoal() + " and" + GoalSuccess[2]->GetGoal() + ". You hit the mark";
				break;
			default:
				break;
			}
		}
		else
		{
			if (GoalSuccess.Num() == 0)
			{
				switch (GoalFailure.Num())
				{
				case 1:
					sBad = "When it came to the boquet feeling " + GoalFailure[0]->GetGoal() + ". You fucked up";
					break;
				case 2:
					sBad = "When it came to the boquet feeling " + GoalFailure[0]->GetGoal() + " and" + GoalFailure[1]->GetGoal() + ". You fucked up";
					break;
				case 3:
					sBad = "When it came to the boquet feeling " + GoalFailure[0]->GetGoal() + " ," + GoalFailure[1]->GetGoal() + " and" + GoalFailure[2]->GetGoal() + ". You fucked up";
					break;
				default:
					break;
				}
			}
			else
			{
				switch (GoalFailure.Num())
				{
				case 1:
					sBad = "When it came to the boquet feeling " + GoalFailure[0]->GetGoal() + ". You fucked up";
					break;
				case 2:
					sBad = "When it came to the boquet feeling " + GoalFailure[0]->GetGoal() + " and" + GoalFailure[1]->GetGoal() + ". You fucked up";
					break;
				default:
					break;
				}

				switch (GoalSuccess.Num())
				{
				case 1:
					sGood = "When it came to the boquet feeling " + GoalSuccess[0]->GetGoal() + ". You hit the mark";
					break;
				case 2:
					sGood = "When it came to the boquet feeling " + GoalSuccess[0]->GetGoal() + " and" + GoalSuccess[1]->GetGoal() + ". You hit the mark";
					break;
				default:
					break;
				}
			}
		}

		temp = GoalFailure.Num() + GoalSuccess.Num();
		scoretemp = iScore / temp;

		if (scoretemp >= 1)
		{
			sOverall = "Overall you did a pretty good job";
		}
		else
		{
			sOverall = "Overall this isn't a great boquet, but it will do I guess";
		}
		break;
	case GRUMPY:
		if (GoalFailure.Num() == 0)
		{
			switch (GoalSuccess.Num())
			{
			case 1:
				sGood = "When it came to the boquet feeling " + GoalSuccess[0]->GetGoal() + ". You hit the mark";
				break;
			case 2:
				sGood = "When it came to the boquet feeling " + GoalSuccess[0]->GetGoal() + " and" + GoalSuccess[1]->GetGoal() + ". You hit the mark";
				break;
			case 3:
				sGood = "When it came to the boquet feeling " + GoalSuccess[0]->GetGoal() + " ," + GoalSuccess[1]->GetGoal() + " and" + GoalSuccess[2]->GetGoal() + ". You hit the mark";
				break;
			default:
				break;
			}
		}
		else
		{
			if (GoalSuccess.Num() == 0)
			{
				switch (GoalFailure.Num())
				{
				case 1:
					sBad = "When it came to the boquet feeling " + GoalFailure[0]->GetGoal() + ". You fucked up";
					break;
				case 2:
					sBad = "When it came to the boquet feeling " + GoalFailure[0]->GetGoal() + " and" + GoalFailure[1]->GetGoal() + ". You fucked up";
					break;
				case 3:
					sBad = "When it came to the boquet feeling " + GoalFailure[0]->GetGoal() + " ," + GoalFailure[1]->GetGoal() + " and" + GoalFailure[2]->GetGoal() + ". You fucked up";
					break;
				default:
					break;
				}
			}
			else
			{
				switch (GoalFailure.Num())
				{
				case 1:
					sBad = "When it came to the boquet feeling " + GoalFailure[0]->GetGoal() + ". You fucked up";
					break;
				case 2:
					sBad = "When it came to the boquet feeling " + GoalFailure[0]->GetGoal() + " and" + GoalFailure[1]->GetGoal() + ". You fucked up";
					break;
				default:
					break;
				}

				switch (GoalSuccess.Num())
				{
				case 1:
					sGood = "When it came to the boquet feeling " + GoalSuccess[0]->GetGoal() + ". You hit the mark";
					break;
				case 2:
					sGood = "When it came to the boquet feeling " + GoalSuccess[0]->GetGoal() + " and" + GoalSuccess[1]->GetGoal() + ". You hit the mark";
					break;
				default:
					break;
				}
			}
		}

		temp = GoalFailure.Num() + GoalSuccess.Num();
		scoretemp = iScore / temp;

		if (scoretemp >= 1)
		{
			sOverall = "Overall you did a pretty good job";
		}
		else
		{
			sOverall = "Overall this isn't a great boquet, but it will do I guess";
		}
		break;
	case HIP:
		if (GoalFailure.Num() == 0)
		{
			switch (GoalSuccess.Num())
			{
			case 1:
				sGood = "When it came to the boquet feeling " + GoalSuccess[0]->GetGoal() + ". You hit the mark";
				break;
			case 2:
				sGood = "When it came to the boquet feeling " + GoalSuccess[0]->GetGoal() + " and" + GoalSuccess[1]->GetGoal() + ". You hit the mark";
				break;
			case 3:
				sGood = "When it came to the boquet feeling " + GoalSuccess[0]->GetGoal() + " ," + GoalSuccess[1]->GetGoal() + " and" + GoalSuccess[2]->GetGoal() + ". You hit the mark";
				break;
			default:
				break;
			}
		}
		else
		{
			if (GoalSuccess.Num() == 0)
			{
				switch (GoalFailure.Num())
				{
				case 1:
					sBad = "When it came to the boquet feeling " + GoalFailure[0]->GetGoal() + ". You fucked up";
					break;
				case 2:
					sBad = "When it came to the boquet feeling " + GoalFailure[0]->GetGoal() + " and" + GoalFailure[1]->GetGoal() + ". You fucked up";
					break;
				case 3:
					sBad = "When it came to the boquet feeling " + GoalFailure[0]->GetGoal() + " ," + GoalFailure[1]->GetGoal() + " and" + GoalFailure[2]->GetGoal() + ". You fucked up";
					break;
				default:
					break;
				}
			}
			else
			{
				switch (GoalFailure.Num())
				{
				case 1:
					sBad = "When it came to the boquet feeling " + GoalFailure[0]->GetGoal() + ". You fucked up";
					break;
				case 2:
					sBad = "When it came to the boquet feeling " + GoalFailure[0]->GetGoal() + " and" + GoalFailure[1]->GetGoal() + ". You fucked up";
					break;
				default:
					break;
				}

				switch (GoalSuccess.Num())
				{
				case 1:
					sGood = "When it came to the boquet feeling " + GoalSuccess[0]->GetGoal() + ". You hit the mark";
					break;
				case 2:
					sGood = "When it came to the boquet feeling " + GoalSuccess[0]->GetGoal() + " and" + GoalSuccess[1]->GetGoal() + ". You hit the mark";
					break;
				default:
					break;
				}
			}
		}

		temp = GoalFailure.Num() + GoalSuccess.Num();
		scoretemp = iScore / temp;

		if (scoretemp >= 1)
		{
			sOverall = "Overall you did a pretty good job";
		}
		else
		{
			sOverall = "Overall this isn't a great boquet, but it will do I guess";
		}
		break;
	default:
		break;
	}

	GenerateFeedbackEmail();
}

void AMyEmail::GenerateFeedbackEmail()
{
	if (GoalFailure.Num() == 0)
	{
		sFullEmail = sGood + LINE_TERMINATOR + LINE_TERMINATOR + sOverall + LINE_TERMINATOR + LINE_TERMINATOR + Client->GetName();
	}
	else
	{
		if (GoalSuccess.Num() == 0)
		{
			sFullEmail = sBad + LINE_TERMINATOR + LINE_TERMINATOR + sOverall + LINE_TERMINATOR + LINE_TERMINATOR + Client->GetName();
		}
		else
		{
			sFullEmail = sBad + LINE_TERMINATOR + LINE_TERMINATOR + sGood + LINE_TERMINATOR + LINE_TERMINATOR + sOverall + LINE_TERMINATOR + LINE_TERMINATOR + Client->GetName();
		}
	}
}

FString AMyEmail::GetFullEmail()
{
	return sFullEmail;
}

void AMyEmail::SetFullEmail(FString _FullEmail)
{
	sFullEmail = _FullEmail;
}

