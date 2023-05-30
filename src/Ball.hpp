#pragma once
#include "Math.hpp"
#include "Paddle.hpp"
class Ball {
	

public:
	explicit Ball(const vec2d& postion, float radius, int speed);
	Ball(const Ball& rhs) = delete;
	Ball(const Ball&&) = delete;
public:
	void draw(const vec2d&pos);
	void update();
	void collide_screen();
	vec2d& get_location();
	float get_radius();
	void check_collision(Paddle&obj);
private:
	vec2d m_location;
	float m_radius;
	int m_speedx;
	int m_speedy;
};