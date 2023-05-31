#pragma once
#include "Ball.hpp"
#include "AIPaddle.hpp"
class GameLoop
{
private:
	void draw_scores(const std::vector<Paddle>players);

public:
	static void run();
	static void check_win(Ball & ball, Paddle& player, AIPaddle&AI);
};

