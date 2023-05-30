#pragma once
#include "Input.hpp"
class Paddle {
	

public:
	explicit Paddle(const vec2d& postion, int width, int height, int speed);
	Paddle(const Paddle& rhs) = delete;
	Paddle(const Paddle&&) = delete;
	void draw(const vec2d&pos);
public:
	void update();
private:
	void (*handle_input)(vec2d& location, int width, int height, int speedx, int speedy) = nullptr;

protected:
	vec2d m_location;
	int m_width;
	int m_height;
	int m_speedx;
	int m_speedy;
};
