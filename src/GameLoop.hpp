#pragma once
#include "Ball.hpp"
#include "AIPaddle.hpp"
class GameLoop
{
private:

public:
	static void run();
	static void check_win(Ball & ball, Paddle& player, AIPaddle&AI);
};

