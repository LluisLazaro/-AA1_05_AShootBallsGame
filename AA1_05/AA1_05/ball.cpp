#include "ball.h"


void PrintBall(std::string Balls, Ball& color) {

	std::string BallColorValue;

	switch (color)
	{
	case Ball::GREEN:
		
		BallColorValue = GREEN_COLOR;
		break;
	case Ball::BLUE:

		BallColorValue = BLUE_COLOR;
		break;
	case Ball::ORANGE:

		BallColorValue = ORANGE_COLOR;
		break;
	case Ball::RED:

		BallColorValue = RED_COLOR;
		break;
	case Ball::YELLOW:

		BallColorValue = YELLOW_COLOR;
		break;
	default:
		BallColorValue = DEFAULT_COLOR;
		break;
}