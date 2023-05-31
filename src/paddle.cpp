#include "Paddle.hpp"
#include "raylib.h"
#include "Utility.hpp"
Paddle::Paddle(const vec2d& position, int width, int height, int speed) 
	: m_location{ position }, m_width{ width },
	  m_height { height }, m_speedx{ speed }, 
	  m_speedy{ speed },m_score{0}
{
	handle_input = input::key_bindingT1;
}

void Paddle::draw(const vec2d& pos)
{
	DrawRectangle(static_cast<int>(pos.x),static_cast<int>(pos.y),m_width, m_height, ORANGE);
}
void Paddle::update()
{
	draw(m_location);
	handle_input(m_location, m_width, m_height, m_speedx, m_speedy);
	
}

int Paddle::get_width()
{
	return m_width;
}

int Paddle::get_height()
{
	return m_height;
}

int Paddle::get_posY()
{
	return m_location.y;
}
void Paddle::reset()
{
	m_location.x = 0;
		m_location.y = utility::get_window_height() / 2 - 60;
}
const int Paddle::get_score() const
{
	return m_score;
}
void Paddle::add_score()
{
	m_score +=1;
}
int Paddle::get_posX()
{
	return m_location.x;
}



