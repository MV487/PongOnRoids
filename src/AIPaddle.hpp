#pragma once
#include "Paddle.hpp"


class AIPaddle :public Paddle
{
public:
	AIPaddle(const vec2d& position, int width, int height, int speed);
public:
	void update() override;
};

