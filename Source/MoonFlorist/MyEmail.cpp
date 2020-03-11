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
	int temp = 1;
	float scoretemp = 1;

	switch (Client->GetNature())
	{
	case NORMAL:
		//NO FAILURES
		if (GoalFailure.Num() == 0)
		{
			switch (GoalSuccess.Num())
			{
			case 1:
				sGood = "Well done, exactly what I wanted! When it came to the boquet feeling " + GoalSuccess[0]->GetGoal() + " you did really well!";
				break;
			case 2:
				sGood = "Well done, exactly what I wanted! When it came to the boquet feeling " + GoalSuccess[0]->GetGoal() + " and" + GoalSuccess[1]->GetGoal() + " you did really well!";
				break;
			case 3:
				sGood = "Well done, exactly what I wanted! When it came to the boquet feeling " + GoalSuccess[0]->GetGoal() + " ," + GoalSuccess[1]->GetGoal() + " and" + GoalSuccess[2]->GetGoal() + " you did really well!";
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
					sBad = "Very disappointing... When it came to the boquet feeling " + GoalFailure[0]->GetGoal() + " you REALLY missed the bar";
					break;
				case 2:
					sBad = "Very disappointing... When it came to the boquet feeling " + GoalFailure[0]->GetGoal() + " and" + GoalFailure[1]->GetGoal() + " you REALLY missed the bar";
					break;
				case 3:
					sBad = "Very disappointing... When it came to the boquet feeling " + GoalFailure[0]->GetGoal() + " ," + GoalFailure[1]->GetGoal() + " and" + GoalFailure[2]->GetGoal() + " you REALLY missed the bar";
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
					sBad = "Hmmm... When it came to the boquet feeling " + GoalFailure[0]->GetGoal() + " you missed the bar";
					break;
				case 2:
					sBad = "Hmmm... When it came to the boquet feeling " + GoalFailure[0]->GetGoal() + " and" + GoalFailure[1]->GetGoal() + " you missed the bar";
					break;
				default:
					break;
				}

				switch (GoalSuccess.Num())
				{
				case 1: 
					sGood = "Not bad. When it came to the boquet feeling " + GoalSuccess[0]->GetGoal() + " you hit the mark";
					break;
				case 2:
					sGood = "Not bad. When it came to the boquet feeling " + GoalSuccess[0]->GetGoal() + " and" + GoalSuccess[1]->GetGoal() + " you hit the mark";
					break;
				default:
					break;
				}
			}
		}

		temp = GoalFailure.Num() + GoalSuccess.Num();
		scoretemp = iScore / temp;

		if (scoretemp >= 1 && scoretemp < 2)
		{
			sOverall = "Overall you did a pretty good job";
		}
		else if (scoretemp >= 2 && scoretemp < 3)
		{
			sOverall = "Overall you did a really good job";
		}
		else if (scoretemp >= 3)
		{
			sOverall = "Overall you did an AMAZING job";
		}
		else
		{
			sOverall = "Overall this isn't a great boquet, but it will do I guess...";
		}
		break;
	case FLIRTY:
		if (GoalFailure.Num() == 0)
		{
			switch (GoalSuccess.Num())
			{
			case 1:
				sGood = "xXEHMAHGURDXx this is soooo good xx. Is this bouquet feeling " + GoalSuccess[0]->GetGoal() + "? VERY YES IT IS!";
				break;
			case 2:
				sGood = "xXEHMAHGURDXx this is soooo good xx. Is this bouquet feeling " + GoalSuccess[0]->GetGoal() + " and" + GoalSuccess[1]->GetGoal() + "? VERY YES IT IS!";
				break;
			case 3:
				sGood = "xXEHMAHGURDXx this is soooo good xx. Is this bouquet feeling " + GoalSuccess[0]->GetGoal() + " ," + GoalSuccess[1]->GetGoal() + " and" + GoalSuccess[2]->GetGoal() + "? VERY YES IT IS!";
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
					sBad = "ZOMGWTF?! Did you even look at my oworder?! Feeling " + GoalFailure[0]->GetGoal() + "? More like feeling pUwU!";
					break;
				case 2:
					sBad = "ZOMGWTF?! Did you even look at my oworder?! Feeling " + GoalFailure[0]->GetGoal() + " and" + GoalFailure[1]->GetGoal() + "? More like feeling pUwU!";
					break;
				case 3:
					sBad = "ZOMGWTF?! Did you even look at my oworder?! Feeling " + GoalFailure[0]->GetGoal() + " ," + GoalFailure[1]->GetGoal() + " and" + GoalFailure[2]->GetGoal() + "? More like feeling pUwU!";
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
					sBad = "OwO, bOwO feeling " + GoalFailure[0]->GetGoal() + "... nOwO";
					break;
				case 2:
					sBad = "OwO, bOwO feeling " + GoalFailure[0]->GetGoal() + " and" + GoalFailure[1]->GetGoal() + "... nOwO";
					break;
				default:
					break;
				}

				switch (GoalSuccess.Num())
				{
				case 1:
					sGood = "Buuuuuuuuut o.O it does feel " + GoalSuccess[0]->GetGoal() + ". YAY!";
					break;
				case 2:
					sGood = "Buuuuuuuuut o.O it does feel " + GoalSuccess[0]->GetGoal() + " and" + GoalSuccess[1]->GetGoal() + ". YAY!";
					break;
				default:
					break;
				}
			}
		}

		temp = GoalFailure.Num() + GoalSuccess.Num();
		scoretemp = iScore / temp;

		if (scoretemp >= 1 && scoretemp < 2)
		{
			sOverall = "OwOverall you did a pretty good job Xx";
		}
		else if (scoretemp >= 2 && scoretemp < 3)
		{
			sOverall = "OwOverall you did a really good job Xx";
		}
		else if (scoretemp >= 3)
		{
			sOverall = "OwOverall you did an AMAZING job Xx";
		}
		else
		{
			sOverall = "OwOverall this is a pwetty big NANI!";
		}
		break;
	case SHY:
		if (GoalFailure.Num() == 0)
		{
			switch (GoalSuccess.Num())
			{
			case 1:
				sGood = "Ummm I have nothing bad to say. The bouquet is feeling " + GoalSuccess[0]->GetGoal() + ". Ummm congratulations!";
				break;
			case 2:
				sGood = "Ummm I have nothing bad to say. The bouquet is feeling " + GoalSuccess[0]->GetGoal() + " and" + GoalSuccess[1]->GetGoal() + ". Ummm congratulations!";
				break;
			case 3:
				sGood = "Ummm I have nothing bad to say. The bouquet is feeling " + GoalSuccess[0]->GetGoal() + " ," + GoalSuccess[1]->GetGoal() + " and" + GoalSuccess[2]->GetGoal() + ". Ummm congratulations!";
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
					sBad = "Ahhhh I don't know how to say this nicely... but you have let me down. I wanted it to feel " + GoalFailure[0]->GetGoal() + " and um... it was far from it.";
					break;
				case 2:
					sBad = "Ahhhh I don't know how to say this nicely... but you have let me down. I wanted it to feel " + GoalFailure[0]->GetGoal() + " and" + GoalFailure[1]->GetGoal() + " and um... it was far from it.";
					break;
				case 3:
					sBad = "Ahhhh I don't know how to say this nicely... but you have let me down. I wanted it to feel " + GoalFailure[0]->GetGoal() + " ," + GoalFailure[1]->GetGoal() + " and" + GoalFailure[2]->GetGoal() + " and um... it was far from it.";
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
					sBad = "Uhhhhhh this didn't feel " + GoalFailure[0]->GetGoal();
					break;
				case 2:
					sBad = "Uhhhhhh this didn't feel " + GoalFailure[0]->GetGoal() + " and" + GoalFailure[1]->GetGoal();
					break;
				default:
					break;
				}

				switch (GoalSuccess.Num())
				{
				case 1:
					sGood = "But ummm it did feel " + GoalSuccess[0]->GetGoal();
					break;
				case 2:
					sGood = "But ummm it did feel  " + GoalSuccess[0]->GetGoal() + " and" + GoalSuccess[1]->GetGoal();
					break;
				default:
					break;
				}
			}
		}

		temp = GoalFailure.Num() + GoalSuccess.Num();
		scoretemp = iScore / temp;

		if (scoretemp >= 1 && scoretemp < 2)
		{
			sOverall = "Uhhhhhh pretty good job.";
		}
		else if (scoretemp >= 2 && scoretemp < 3)
		{
			sOverall = "Um overall really good.";
		}
		else if (scoretemp >= 3)
		{
			sOverall = "Hmmmm this was amazing";
		}
		else
		{
			sOverall = "Ahhhhh this wasn't a good bouquet";
		}
		break;
	case GRUMPY:
		if (GoalFailure.Num() == 0)
		{
			switch (GoalSuccess.Num())
			{
			case 1:
				sGood = "LIST OF CRITERIA MET: " + GoalSuccess[0]->GetGoal() + ". SIDENOTE: GOOD JOB";
				break;
			case 2:
				sGood = "LIST OF CRITERIA MET: " + GoalSuccess[0]->GetGoal() + " and" + GoalSuccess[1]->GetGoal() + ". SIDENOTE: GOOD JOB";
				break;
			case 3:
				sGood = "LIST OF CRITERIA MET: " + GoalSuccess[0]->GetGoal() + " ," + GoalSuccess[1]->GetGoal() + " and" + GoalSuccess[2]->GetGoal() + ". SIDENOTE: GOOD JOB";
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
					sBad = "LIST OF CRITERIA NOT MET: " + GoalFailure[0]->GetGoal() + ". Yeah, great job... you failed everything";
					break;
				case 2:
					sBad = "LIST OF CRITERIA NOT MET: " + GoalFailure[0]->GetGoal() + " and" + GoalFailure[1]->GetGoal() + ". Yeah, great job... you failed everything";
					break;
				case 3:
					sBad = "LIST OF CRITERIA NOT MET: " + GoalFailure[0]->GetGoal() + " ," + GoalFailure[1]->GetGoal() + " and" + GoalFailure[2]->GetGoal() + ". Yeah, great job... you failed everything";
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
					sBad = "LIST OF CRITERIA NOT MET: " + GoalFailure[0]->GetGoal();
					break;
				case 2:
					sBad = "LIST OF CRITERIA NOT MET: " + GoalFailure[0]->GetGoal() + " and" + GoalFailure[1]->GetGoal();
					break;
				default:
					break;
				}

				switch (GoalSuccess.Num())
				{
				case 1:
					sGood = "LIST OF CRITERIA MET: " + GoalSuccess[0]->GetGoal();
					break;
				case 2:
					sGood = "LIST OF CRITERIA MET: " + GoalSuccess[0]->GetGoal() + " and" + GoalSuccess[1]->GetGoal();
					break;
				default:
					break;
				}
			}
		}

		temp = GoalFailure.Num() + GoalSuccess.Num();
		scoretemp = iScore / temp;

		if (scoretemp >= 1 && scoretemp < 2)
		{
			sOverall = "OVERALL: Pretty good.";
		}
		else if (scoretemp >= 2 && scoretemp < 3)
		{
			sOverall = "OVERALL: Satisfactory.";
		}
		else if (scoretemp >= 3)
		{
			sOverall = "OVERALL: OUTSTANDING!";
		}
		else
		{
			sOverall = "OVERALL: It is what it is... I guess.";
		}
		break;
	case HIP:
		if (GoalFailure.Num() == 0)
		{
			switch (GoalSuccess.Num())
			{
			case 1:
				sGood = "BRUH! This bouquet is the bees knees! it feels " + GoalSuccess[0]->GetGoal() + ". BRUH!";
				break;
			case 2:
				sGood = "BRUH! This bouquet is the bees knees! it feels " + GoalSuccess[0]->GetGoal() + " and" + GoalSuccess[1]->GetGoal() + ". BRUH!";
				break;
			case 3:
				sGood = "BRUH! This bouquet is the bees knees! it feels " + GoalSuccess[0]->GetGoal() + " ," + GoalSuccess[1]->GetGoal() + " and" + GoalSuccess[2]->GetGoal() + ". BRUH!";
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
					sBad = "Broseidon... what happened brah? This does not feel " + GoalFailure[0]->GetGoal();
					break;
				case 2:
					sBad = "Broseidon... what happened brah? This does not feel " + GoalFailure[0]->GetGoal() + " and" + GoalFailure[1]->GetGoal();
					break;
				case 3:
					sBad = "Broseidon... what happened brah? This does not feel " + GoalFailure[0]->GetGoal() + " ," + GoalFailure[1]->GetGoal() + " and" + GoalFailure[2]->GetGoal();
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
					sBad = "I asked for the vibes brah, but it didn't feel " + GoalFailure[0]->GetGoal() + ". No shakas here";
					break;
				case 2:
					sBad = "I asked for the vibes brah, but it didn't feel " + GoalFailure[0]->GetGoal() + " and" + GoalFailure[1]->GetGoal() + ". No shakas here";
					break;
				default:
					break;
				}

				switch (GoalSuccess.Num())
				{
				case 1:
					sGood = "BRUH! But shakas here. It feels " + GoalSuccess[0]->GetGoal() + ", BRUHVNER";
					break;
				case 2:
					sGood = "BRUH! But shakas here. It feels " + GoalSuccess[0]->GetGoal() + " and" + GoalSuccess[1]->GetGoal() + ", BRUHVNER";
					break;
				default:
					break;
				}
			}
		}

		temp = GoalFailure.Num() + GoalSuccess.Num();
		scoretemp = iScore / temp;

		if (scoretemp >= 1 && scoretemp < 2)
		{
			sOverall = "Bro... pretty good";
		}
		else if (scoretemp >= 2 && scoretemp < 3)
		{
			sOverall = "BRUH, really good";
		}
		else if (scoretemp >= 3)
		{
			sOverall = "BRUH, THIS IS THE BRUHEST";
		}
		else
		{
			sOverall = "Bruh... this bouquet sucks.";
		}
		break;
	default:
		break;
	}

	GenerateFeedbackEmail();
}

void AMyEmail::Orderinit(AMyClient* _client)
{
	Client = _client;

	SetFullEmail(Client->GetFullDescription());
}

void AMyEmail::Spaminit(FString _spam)
{
	SetFullEmail(_spam);
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

