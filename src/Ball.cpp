#include "Ball.hpp"
#include "Window.hpp"
#include "Utility.hpp"
#include <cmath>
#include <iostream>
Ball::Ball(const vec2d& postion, float radius, int speed) : m_location{ postion }, m_radius{ radius }, m_speedx{ speed }, m_speedy{ speed }
{
}

void Ball::draw(const vec2d& pos)
{
	DrawCircle(pos.x, pos.y, m_radius, WHITE);
}

void Ball::update()
{
	draw(m_location);
	collide_screen();
	m_location.x += m_speedx;
	m_location.y += m_speedy;


}

void Ball::collide_screen()
{
	if (m_location.x + m_radius >= utility::get_window_width() || m_location.x - m_radius <= 0) {
		m_speedx *= -1;
	}

	if (m_location.y + m_radius >= utility::get_window_height() || m_location.y - m_radius <= 0) {
		m_speedy *= -1;
	}

}

vec2d& Ball::get_location()
{
	return m_location;
}

float Ball::get_radius()
{
	return m_radius;
}

void Ball::check_collision(Paddle& obj)
{


	auto result = CheckCollisionCircleRec(Vector2{ static_cast<float>(m_location.x),static_cast<float>(m_location.y) }, (m_radius*2), Rectangle{ static_cast<float>(obj.get_posX()),static_cast<float>(obj.get_posY()), static_cast<float>(obj.get_width()),static_cast<float>(obj.get_height()) });

	
	if (result)	{
		if (m_speedx < 0)
		{
			m_speedx *= -1.2f;
			m_speedy += (m_location.y - obj.get_posY()) / (obj.get_height()/ 2)*25;
		}
		
		
		else if (m_speedx > 0)
		{
			m_speedx *= -1.2f;
			m_speedy += (m_location.y - obj.get_posY()) / (obj.get_height()/ 2) * 25;

		}


	}
}





void Ball::reset_ball()
{
	m_location.x = utility::get_window_width() / 2;
	m_location.y = utility::get_window_height() / 2;
	
	m_speedx = 7;
	m_speedy = 7;
	int speed_choices[2] = { -1, 1 };
	m_speedx *= speed_choices[GetRandomValue(0, 1)];
	m_speedy *= speed_choices[GetRandomValue(0, 1)];
}




