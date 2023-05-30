#pragma once
#include "Paddle.hpp"
#include "Math.hpp"

enum class DiffcultyType
{
	Easy,
	Medium,
	Hard
};

class AIPaddle :public Paddle
{

public:
	explicit AIPaddle(const vec2d& position, int width, int height, int speed, DiffcultyType diffculty_level);
public:
	void update(const vec2d&ball_location);
private:
	void(AIPaddle::*ai_movement)(const vec2d&ball_location);
	void ai_movement_easy(const vec2d&ball_location);
	void ai_movement_medium();
	void ai_movement_hard();
public:
	void move(const vec2d&ball_location);
	void reset();

private:
	DiffcultyType m_level;
public:
};

