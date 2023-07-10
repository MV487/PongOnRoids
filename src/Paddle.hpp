#pragma once
#include "Input.hpp"
#include "raylib.h"
class Paddle {
	

public:
	 Paddle(const vec2d& postion, int width, int height, float speed);
	//Paddle(const Paddle& rhs) = delete;
	//Paddle(const Paddle&&) = delete;
	void draw(const vec2d&pos);
public:
	void update();
	int get_width();
	int get_height();
	int get_posX();
	int get_posY();
	void reset();
	const int get_score() const;
	void add_score();
			

private:
	void (*handle_input)(vec2d& location, int width, int height, float speedx, float speedy) = nullptr;
	
protected:
	vec2d m_location;
	int m_width;
	int m_height;
	float m_speedx;
float	 m_speedy;

	int m_score;
}; 