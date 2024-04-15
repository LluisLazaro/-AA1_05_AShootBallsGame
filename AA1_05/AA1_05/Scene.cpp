#include "Scene.h"
#include "ball.h"


int RandomBall(std::string BallColor) {
	

	int randomNumber = rand() % (4 - 1 + 1) + 1;

	if (randomNumber == 0)
	{
		BallColor = GREEN_COLOR;
	}
	else if (randomNumber == 1)
	{
		BallColor = YELLOW_COLOR;
	}
	else if (randomNumber == 2)
	{
		BallColor = RED_COLOR;
	}
	else if (randomNumber == 3)
	{
		BallColor = ORANGE_COLOR;
	}
	else if (randomNumber == 4)
	{
		BallColor = BLUE_COLOR;
	}

}


void InitializeBalls() {
	
	std::string BallScene[BALL_SCENE];

	for (int i = 0; i < BALL_SCENE; i++)
	{
		BallScene[i] = RandomBall(BallScene[i]);
		do
		{
			if (i > 0 && BallScene[i] == BallScene[i - 1])
			{
				BallScene[i] = RandomBall(BallScene[i]);
			}

		} while (BallScene[i] == BallScene[i - 1]);
		
	}

}



void init(std::string name, int position) {


}