#pragma once
#include "Math.hpp"
#include "Object.hpp"
class Ball : public Object{
	

public:
	explicit Ball(const vec2d& postion, float radius, int speed);
	Ball(const Ball& rhs) = delete;
	Ball(const Ball&&) = delete;
public:
	void draw(const vec2d&pos) override;
	void update() override;
	void collide_screen();

private:
	vec2d m_location;
	float m_radius;
	int m_speedx;
	int m_speedy;
};