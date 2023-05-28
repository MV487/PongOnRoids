#pragma once
#include "Object.hpp"
#include "Input.hpp"

class Paddle : public Object{
	

public:
	explicit Paddle(const vec2d& postion, int width, int height, int speed);
	Paddle(const Paddle& rhs) = delete;
	Paddle(const Paddle&&) = delete;
public:
	void draw(const vec2d&pos) override;
	void update() override;
	//void handle_input();

	void (*handle_input)(vec2d& location, int width, int height, int speedx, int speedy);

private:
	vec2d m_location;
	int m_width;
	int m_height;
	int m_speedx;
	int m_speedy;
};
